#include "test.hpp"
#include <QDebug>

#include <iostream>

using namespace std;


Test::Test(QObject *parent)
    : QAbstractListModel(parent), m_button1(0), m_button2(0), m_clickedCount(), m_itemList()
{

}

void Test::init()
{
    m_clickedCount["button1"] = m_button1;
    m_clickedCount["button2"] = m_button2;
}

void Test::clickCount(QString str)
{
    if(str == "button1")
    {
        qDebug() <<rowCount();
        if(rowCount() < 10)
        {
            m_button1++;
            m_clickedCount[str] = m_button1;
        }
        else
        {
        }
    }
    else if(str == "button2")
    {
        if(rowCount() < 10)
        {
            m_button2++;
            m_clickedCount[str] = m_button2;
        }
        else
        {
        }
    }

    printAll();
}

void Test::printAll()
{
    QMap<QString, int>::iterator iter;

    qDebug() << "<button clicked>" ;
    for(iter = m_clickedCount.begin(); iter != m_clickedCount.end(); iter++)
    {
        qDebug() << iter.key() << ": " << iter.value() ;
    }
}

void Test::addItem(QString btnNum)
{
    if(rowCount() < 10)
    {
        beginInsertRows(QModelIndex(), rowCount(), rowCount());
        m_itemList << btnNum;
        endInsertRows();
    }
    else
    {
        qDebug() << "out of range" ;
    }
    qDebug() << "addItem: " <<rowCount();

}

int Test::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_itemList.size();
}

QVariant Test::data(const QModelIndex &index, int role) const
{

}

QString Test::getData()
{
    return m_itemList.at(rowCount()-1);
}

void Test::removeItem()
{
    if(m_itemList.count() > 0)
    {
        QString removeData = m_itemList.at(rowCount()-1);
        beginRemoveRows(QModelIndex(),rowCount()-1,rowCount()-1);
        m_itemList.removeLast();
        endRemoveRows();
        qDebug() << "removeData:" << removeData;
        qDebug() << rowCount();
    }
}

void Test::removeCount(QString str)
{
    if(str == "button1")
    {
        if(m_itemList.count() >0)
        {
            m_clickedCount[str] = --m_button1;
        }
    }
    else if(str == "button2")
    {
        if(m_itemList.count() >0)
        {
            m_clickedCount[str] = --m_button2;
        }
    }

    printAll();
}



