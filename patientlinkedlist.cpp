#include "patientlinkedlist.h"
#include "ui_patientlinkedlist.h"
#include <iostream>
#include <QString>
#include <QTableWidgetItem>
using namespace std;

patientLinkedList::patientLinkedList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patientLinkedList), head(nullptr), tail(nullptr)
{
    tmpTbl = new class QTableWidgetItem;
    ui->setupUi(this);
}

patientLinkedList::~patientLinkedList()
{
    delete ui;
    delete tmpTbl;
    while (head != nullptr)
        pop_back();
}

//Методы получения значений о пациенте (гетеры)
QString patientLinkedList::patientNode::getDateOfBirth()
{
    return dateOfBirth;
}

float patientLinkedList::patientNode::getWeight()
{
    return weight;
}

int patientLinkedList::patientNode::getHeight()
{
    return height;
}

QString patientLinkedList::patientNode::getName()
{
    return name;
}

QString patientLinkedList::patientNode::getSurName()
{
    return surName;
}

QString patientLinkedList::patientNode::getSecondName()
{
    return secondName;
}


patientLinkedList::patientNode::patientNode(QString surNameX, QString nameX, QString secondNameX, QString dateOfBirthX, int heightX, float weightX)
{
    this->surName = surNameX;
    this->name = nameX;
    this->secondName = secondNameX;
    this->dateOfBirth = dateOfBirthX;
    this->height = heightX;
    this->weight = weightX;
    this->next = nullptr;
    this->prev = nullptr;
}



//Добавление элемента в конец списка
void  patientLinkedList::push_back(QString newSurName, QString newName, QString newSecondName, QString newDateOfBirth, int newHeight, float newWeight)
{
    patientNode* tmp = new patientNode(newSurName, newName, newSecondName, newDateOfBirth, newHeight, newWeight);
    tmp->prev = tail;
    if (head == nullptr)
    {
        head = tmp;
    }

    if (tail != nullptr)
    {
        tail->next = tmp;
    }

    tail = tmp;
}

//Добавление элемента в начало списка
void  patientLinkedList::push_front(QString newSurName, QString newName, QString newSecondName, QString newDateOfBirth, int newHeight, float newWeight)
{
    if (head != nullptr)
    {
        patientNode* tmp = new patientNode(newSurName, newName, newSecondName, newDateOfBirth, newHeight, newWeight);
        patientNode* current = head;
        head = tmp;
        head->next = current;
        head->next->prev = head;//!!!!!!!
    }
    else
        return;
}

//Удаление первого элемента
void  patientLinkedList::pop_front()
{
    patientNode* tmp = head;
    if (head == nullptr)
        return;

    if (head != tail)
    {
        head->next->prev = nullptr;
        head = head->next;
        delete tmp;
    }
    else
    {
        head = nullptr;
        delete tail;
    }
}

//Удаление последнего элемента
void patientLinkedList::pop_back()
{
    if (tail == nullptr)
        return;
    else
    {
        patientNode* tmp = tail->prev;

        if (tmp != nullptr)
            tmp->next = nullptr;
        else
            head = nullptr;

        delete tail;
        tail = tmp;
    }
}

//Вывод всех элементов списка
void patientLinkedList::printList()
{
    patientNode* visibleElement = head;
    if (head == nullptr)
    {
        return;
    }
    //Настройка таблицы
    ui->patientsTable->setColumnCount(6);
    //ui->patientsTable->setRowCount(2);
    ui->patientsTable->setFixedSize(920, 600);
    //ui->patientsTable->resizeColumnsToContents();
    for (int i = 0; i < 6; i++)
        ui->patientsTable->setColumnWidth(i, 150);
    ui->patientsTable->clear();
    ui->patientsTable->setRowCount(0);
    QStringList horzHeaders;
    horzHeaders << "Фамилия" << "Имя" << "Отчество" << "Дата рождения" << "Рост" << "Вес";
    ui->patientsTable->setHorizontalHeaderLabels(horzHeaders);
    while (visibleElement)
    {
        //ui->patientsTable->setRowCount(ui->patientsTable->rowCount()+1);
        ui->patientsTable->insertRow(ui->patientsTable->rowCount());
        tmpTbl = new QTableWidgetItem(visibleElement->getSurName());
        ui->patientsTable->setItem(ui->patientsTable->rowCount()-1, 0, tmpTbl);
        tmpTbl = new QTableWidgetItem(visibleElement->getName());
        ui->patientsTable->setItem(ui->patientsTable->rowCount()-1, 1, tmpTbl);
        tmpTbl = new QTableWidgetItem(visibleElement->getSecondName());
        ui->patientsTable->setItem(ui->patientsTable->rowCount()-1, 2, tmpTbl);
        tmpTbl = new QTableWidgetItem(visibleElement->getDateOfBirth());
        ui->patientsTable->setItem(ui->patientsTable->rowCount()-1, 3, tmpTbl);
        tmpTbl = new QTableWidgetItem(QString::number(visibleElement->getHeight()));
        ui->patientsTable->setItem(ui->patientsTable->rowCount()-1, 4, tmpTbl);
        tmpTbl = new QTableWidgetItem(QString::number(visibleElement->getWeight(), 'f', 1));
        ui->patientsTable->setItem(ui->patientsTable->rowCount()-1, 5, tmpTbl);
        visibleElement = visibleElement->next;
    }
}

//Методы удаления по параметру
void patientLinkedList::delByFio(QString surNameX, QString nameX, QString secondNameX)
{
    patientNode* tmp = head;
    patientNode* currentNode;
    while (tmp)
    {
        if (tmp->getSurName() == surNameX && tmp->getName() == nameX && tmp->getSecondName() == secondNameX)
        {
            if (tmp == head)
            {
                currentNode = tmp->next;
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                pop_front();
                tmp = currentNode;
            }
            else if (tmp == tail)
            {
                currentNode = tmp->next;
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                pop_back();
                tmp = currentNode;
            }
            else
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp;
                tmp->prev->next = tmp->next;
                tmp->next->prev = tmp->prev;
                tmp = tmp->next;
                delete currentNode;
            }
        }
        else
        {
            tmp = tmp->next;
        }
    }
}


void patientLinkedList::delByHeight(int heightX)
{
    patientNode* tmp = head;
    patientNode* currentNode;
    while (tmp)
    {
        if (tmp->getHeight() == heightX)
        {
            if (tmp == head)
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp->next;
                pop_front();
                tmp = currentNode;
            }
            else if (tmp == tail)
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp->next;
                pop_back();
                tmp = currentNode;
            }
            else
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp;
                tmp->prev->next = tmp->next;
                tmp->next->prev = tmp->prev;
                tmp = tmp->next;
                delete currentNode;
            }
        }
        else
        {
            tmp = tmp->next;
        }
    }
}


void patientLinkedList::delByWeight(float weightX)
{
    patientNode* tmp = head;
    patientNode* currentNode;
    while (tmp)
    {
        if (tmp->getWeight() == weightX)
        {
            if (tmp == head)
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp->next;
                pop_front();
                tmp = currentNode;
            }
            else if (tmp == tail)
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp->next;
                pop_back();
                tmp = currentNode;
            }
            else
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp;
                tmp->prev->next = tmp->next;
                tmp->next->prev = tmp->prev;
                tmp = tmp->next;
                delete currentNode;
            }
        }
        else
        {
            tmp = tmp->next;
        }
    }
}


void patientLinkedList::delByDateOfBirth(QString dateOfBitrhX)
{
    patientNode* tmp = head;
    patientNode* currentNode;
    while (tmp)
    {
        if (tmp->getDateOfBirth() == dateOfBitrhX)
        {
            if (tmp == head)
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp->next;
                pop_front();
                tmp = currentNode;
            }
            else if (tmp == tail)
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp->next;
                pop_back();
                tmp = currentNode;
            }
            else
            {
                QMessageBox::information(this, "Удаление пациента", tmp->getSurName() + " " + tmp->getName() + " успешно выписан");
                currentNode = tmp;
                tmp->prev->next = tmp->next;
                tmp->next->prev = tmp->prev;
                tmp = tmp->next;
                delete currentNode;
            }
        }
        else
        {
            tmp = tmp->next;
        }
    }
}

void patientLinkedList::showList()
{
    //Работа с файлом
    qDebug() << "Загружаем данные Excel...";
    this->endSettingUpSlot();//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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

int patientLinkedList::cntPatient()
{
    int tmpCnt = 1;
    patientNode* tmpNode = head;
    while (tmpNode)
    {
        tmpCnt++;
        tmpNode = tmpNode->next;
    }
    return tmpCnt;
}


void patientLinkedList::showTableSlot(patientLinkedList& listX)
{
    listX.printList();
    show();
}

void patientLinkedList::endSettingUpSlot()
{
    qDebug() << "Загрузка данных в Excel...";
    //Excel-file
    //QString file("a:\\QT_Creator\\course_VP\\reshenie\\patientList.xlsx");
    QString file(QCoreApplication::applicationDirPath() + "/patientList.xlsx");
    QAxObject excel("Excel.Application");
    excel.setProperty("Visible", false); // Показать форму, чтобы увидеть эффект
    excel.setProperty("DisplayAlerts", false); // Отображаем предупреждения, чтобы увидеть эффект
    QAxObject *work_books = excel.querySubObject("WorkBooks");
    work_books->dynamicCall("Open(const QString &)", file);
    excel.setProperty("Caption","Qt Excel");//Изменение текущего файла а не создание нового
    QAxObject *work_book = excel.querySubObject("ActiveWorkBook");
    //QAxObject *work_sheets = work_book->querySubObject ("Sheets");
    QAxObject* work_sheet = work_book->querySubObject("WorkSheets(int)", 1);

    //Количество пациентов - строки, столбцы - оглавление. Для работы со списком
    patientNode* visibleElement = head;//this->head
    int intCols = 6;
    int intRows = 1;
    while (visibleElement)
    {
        intRows++;
        visibleElement = visibleElement->next;
    }
    //qDebug() << "Количество строк " << intRows;//!!!!!!!!!
    visibleElement = head;
    //Для работы с  данными таблицы
    QAxObject* cell;
    QVariant value;
    QString strDate, strHeight, strWeight;
    QAxObject* row;
    for (int rowX = 2; rowX < intRows + 50; rowX++)
    {
        row = work_sheet->querySubObject("Rows(int)", rowX); //Selects 10th row from rows
        row->dynamicCall("Delete()"); //Deletes row
    }

    //Заносим значения из списка в Excel
    for (int row = 1; row < intRows && visibleElement; row++)
    {
        for (int col = 0; col < intCols; col++)
        {
            cell = work_sheet->querySubObject("Cells(int,int)", row+1, col+1);
            cell->setProperty("RowHeight", 25); // Устанавливаем высоту строки ячейки
            cell->setProperty("ColumnWidth", 20); // Устанавливаем ширину строки ячейки
            cell->setProperty("WrapText", true); // Устанавливаем перенос строки
            cell->setProperty ("HorizontalAlignment", -4108);
            cell->setProperty ("VetricallAlignment", -4108);
            if (work_sheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Фамилия")//Заносим фамилию
                cell->setProperty("Value", visibleElement->getSurName());
            else if (work_sheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Имя")//Заносим имя
                cell->setProperty("Value", visibleElement->getName());
            else if (work_sheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Отчество")//Заносим отчество
                cell->setProperty("Value", visibleElement->getSecondName());
            else if (work_sheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Дата рождения")//Заносим дату рождения в список
                cell->setProperty("Value", qvariant_cast<QVariant>(visibleElement->getDateOfBirth()));//convert qstring to qvariant
            else if (work_sheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Рост")//Заносим рост рождения в список
                cell->setProperty("Value", QString::number(visibleElement->getHeight()));
            else if (work_sheet->querySubObject("Cells(int,int)", 1, col+1)->dynamicCall("Value()") == "Вес")//Заносим рост рождения в список
                cell->setProperty("Value", QString::number(visibleElement->getWeight(), 'f', 1));
        }
        visibleElement = visibleElement->next;
    }
    visibleElement = head;
    //Настройка документа+
    QAxObject* usedrange = work_sheet->querySubObject("UsedRange");
    QAxObject* font = usedrange->querySubObject("Font");
    font->setProperty("Color", QColor(0, 0, 0));
    font->setProperty ("Size", 12); //Устанавливаем размер шрифта ячейки
    work_sheet->setProperty("Name", "Test list"); // Устанавливаем имя рабочего листа
    //Красный текст для оглавления
    QAxObject* headerRow = usedrange->querySubObject("Rows(int)", 1);
    font = headerRow->querySubObject("Font");
    font->setProperty("Size", 14); //Устанавливаем размер шрифта ячейки
    font->setProperty("Color", QColor(255, 0, 0)); //Устанавливаем размер шрифта ячейки
    //Выравнивание шапки по центру
    for (int col = 0; col < intCols; col++)
    {
        cell = work_sheet->querySubObject("Cells(int,int)", 1, col+1);
        cell->setProperty ("HorizontalAlignment", -4108);
        cell->setProperty ("VetricallAlignment", -4108);
    }
    //Закрытие файла
    work_book->dynamicCall("Save()");
    work_book->dynamicCall("Close()");
    excel.dynamicCall("Quit()");
    //delete excel;
    delete cell;//!
    delete font;
    delete row;
    delete headerRow;
    qDebug() << "Загрузка данных в Excel завершена.";
}

void patientLinkedList::on_pushButton_clicked()
{
    this->hide();
    emit showTableSignal_back();
}

void patientLinkedList::testList()
{
    qDebug() <<"Start debug";
    patientNode* tmp = head;
    while (tmp)
    {
        qDebug() << tmp->getSurName();
        tmp = tmp->next;
    }
}
