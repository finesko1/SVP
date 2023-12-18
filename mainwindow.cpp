#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    addPatient = new class addPatient;
    delPatient = new class delPatient;
    list = new class patientLinkedList;
    menu = new class managment;

    endSettingUpObj = new class patientLinkedList;
    //Вызов окна управления списком и возвращение к главному окну
    connect(this, &MainWindow::admissionSignal, menu, &managment::admissionSlot);
    connect(menu, &managment::admissionSignal_back, this, &MainWindow::admissionSlot_back);
    //Сохранение списка в exc
    connect(this, &MainWindow::endSettingUpSignal, list, &patientLinkedList::endSettingUpSlot);//Загрузка списка в файл
    //menu
    //Вызов метода отображения списка пациентов
    connect(menu, &managment::showTableSignal, list, &patientLinkedList::showTableSlot);
    connect(list, &patientLinkedList::showTableSignal_back, menu, &managment::showTableSlot_back);
    //Переход к окну добавления пациента и возможность возвращения к меню
    connect(menu, &managment::addPatientSignal, addPatient, &addPatient::addPatientSlot);
    connect(addPatient, &addPatient::addPatientSignal_back, menu, &managment::addPatientSlot_back);
    //Переход к окну выписки пациента и возможность возвращения к меню
    connect(menu, &managment::delPatientSignal, delPatient, &delPatient::delPatientSlot);
    connect(delPatient, &delPatient::delPatientSignal_back, menu, &managment::delPatientSlot_back);
    //Загружаем измененный список в Excel при закрытии главного окна
    connect(menu, &managment::endSettingUpSignal, list, &patientLinkedList::endSettingUpSlot);

    closeAll();
    //Отображение кириллицы
    QTextCodec* codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

    //Располагаем главное окно по центру
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);

    startSettingUp();

    //Ломаем программу!
    //qDebug() << QString(QCoreApplication::applicationDirPath() + "/patientList.xlsx");
    //Для scale window?
}

MainWindow::~MainWindow()
{
    delete ui;
    delete list;
}

//Закрытие главного окна
void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Выход", "Вы уверены, что хотите выйти?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        emit endSettingUpSignal();
        event->accept();
    }
    else
    {
        event->ignore();
    }
}

void MainWindow::eventFilter(QObject *, QEvent *)
{

}


void MainWindow::startSettingUp()
{
    //Считывание файла Excel, создание таблицы с заголовками. 1 строка excel - заголовки таблицы
    //Excel-file
    //QString file("a:\\QT_Creator\\course_VP\\reshenie\\patientList.xlsx");
    QString file(QCoreApplication::applicationDirPath() + "/patientList.xlsx");
       //Указатель на Exel (COM-объект)
    QAxObject* excel = new QAxObject("Excel.Application", this);//Элемент управления Excel
    QAxObject* workbooks = excel->querySubObject("Workbooks");//рабочая книга
    QAxObject* workbook = workbooks->querySubObject("Open(const QString&)", file);
    excel->setProperty ("Visible", true); // Показать форму, чтобы увидеть эффект
    excel->setProperty ("DisplayAlerts", true); // Отображаем предупреждения, чтобы увидеть эффект
    QAxObject* worksheet = workbook->querySubObject("WorkSheets(int)", 1);//Лист в ворде
    //Получаем количество строк и столбцов
    QAxObject* usedrange = worksheet->querySubObject("UsedRange");//Рабочий диапазон таблицы
    QAxObject* rows = usedrange->querySubObject("Rows");
    QAxObject* columns = usedrange->querySubObject("Columns");
    int intCols = columns->property("Count").toInt();//Количество столбцов
    int intRows = rows->property("Count").toInt();//Количество строк (с данными)
    //qDebug() << intCols << intRows;

    //Записываем значения в ячейки
    QAxObject* cell;
    QVariant value;
    QDate date;
    QString strSurName, strName, strSecondName, strDate;
    int intHeight;
    float floatWeight;
    for (int row = 1; row < intRows; row++)
    {
        for (int col = 0; col < intCols; col++)
        {
            cell = worksheet->querySubObject("Cells(int,int)", row+1, col+1);
            value = cell->dynamicCall("Value()");
            if (worksheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Фамилия")//Заносим фамилию
                strSurName = value.toString();
            else if (worksheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Имя")//Заносим имя
                strName =  value.toString();
            else if (worksheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Отчество")//Заносим отчество
                strSecondName =  value.toString();
            else if (worksheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Дата рождения")//Заносим дату рождения в список
            {
                date = value.toDate();
                strDate = QString::number(date.day()) + "." + QString::number(date.month()) + "." + QString::number(date.year());
                //qDebug() << strDate;
            }
            else if (worksheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Рост")//Заносим рост рождения в список
                intHeight = value.toInt();
            else if (worksheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Вес")//Заносим рост рождения в список
                floatWeight = value.toFloat();
        }
        list->push_back(strSurName, strName, strSecondName, strDate, intHeight, floatWeight);
    }
    //Закрытие документа и выход
    workbook->dynamicCall("Close(Boolean)", false);
    excel->dynamicCall("Quit(void)");
    delete cell;//!
    delete excel;
}


void MainWindow::admissionSlot_back()
{
    this->show();
}

void MainWindow::on_admission_triggered()
{
    closeAll();
    ui->login->show();
    ui->foneTwo->show();
    ui->password->show();
    ui->loginButton->show();
    ui->autorization->show();
}


void MainWindow::on_patientList_triggered()
{
    //Работа с файлом
    qDebug() << "Загружаем данные Excel...";
    emit endSettingUpSignal();
    //Excel-file
    //QString file("a:\\QT_Creator\\course_VP\\reshenie\\patientList.xlsx");
    QString file(QCoreApplication::applicationDirPath() + "/patientList.xlsx");
    QAxObject excel("Excel.Application");
    excel.setProperty("Visible", true); // Показать форму, чтобы увидеть эффект
    excel.setProperty("DisplayAlerts", true); // Отображаем предупреждения, чтобы увидеть эффект
    QAxObject *work_books = excel.querySubObject("WorkBooks");
    work_books->dynamicCall("Open(const QString &)", file);
    //Закрытие файла
    //excel.dynamicCall("Quit()");
    //delete excel;
    qDebug() << "Загрузка данных Excel завершена.";
}


void MainWindow::on_userInfo_triggered()
{
    closeAll();
    //QFile fileClient("a:\\QT_Creator\\course_VP\\reshenie\\infoClient.txt");
    QFile fileClient(QString(QCoreApplication::applicationDirPath()) + "/infoClient.txt");//относительный путь
    if(fileClient.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&fileClient);
        QString str = stream.readAll();
        ui->infoTxt->setText(str);
        fileClient.close();
    }
    ui->infoTxt->show();
}


void MainWindow::on_createrInfo_triggered()
{
    closeAll();
    //QFile fileCreator("a:\\QT_Creator\\course_VP\\reshenie\\infoCreator.txt");
    QFile fileCreator(QString(QCoreApplication::applicationDirPath()) + "/infoCreator.txt");
    if(fileCreator.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&fileCreator);
        QString str = stream.readAll();
        ui->infoTxt->setText(str);
        fileCreator.close();
    }
    ui->infoTxt->show();
}


void MainWindow::on_exit_triggered()
{
    closeAll();
    emit endSettingUpSignal();
    qDebug() << "Завершение работы...";
    QApplication::quit();
}


void MainWindow::on_loginButton_clicked()
{
    if (ui->login->text() == "Student" && ui->password->text() == "S123456s")
    {
        this->hide();
        emit admissionSignal(*list);
    }
    else
    {
        ui->statusbar->showMessage("Ошибка авторизации!!!");
    }
}


void MainWindow::closeAll()
{
    ui->infoTxt->hide();
    ui->foneTwo->hide();
    ui->login->hide();
    ui->password->hide();
    ui->loginButton->hide();
    ui->autorization->hide();
}

