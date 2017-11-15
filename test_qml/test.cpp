#include "test.hpp"
#include "subtest.hpp"

#include <QDebug>
#include <iostream>

using namespace std;


Test::Test(QObject *parent)
    : QAbstractListModel(parent), m_button1(0), m_button2(0), m_currentIndex(), m_status(false), m_clickedCount(), m_itemList()
{

}

void Test::init()
{
    m_clickedCount["button1"] = m_button1;
    m_clickedCount["button2"] = m_button2;
}

void Test::clickCount(QString str)
{
    if( str == "button1" )
    {
        qDebug() <<rowCount();
        if( rowCount() < 10 )
        {
            m_clickedCount[str] = ++m_button1;
        }
        else
        {
        }
    }
    else if( str == "button2" )
    {
        if( rowCount() < 10 )
        {
            m_clickedCount[str] = ++m_button2;
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
    for( iter = m_clickedCount.begin(); iter != m_clickedCount.end(); iter++ )
    {
        qDebug() << iter.key() << ": " << iter.value();
    }
}

void Test::addItem(QString btnNum)
{
    SubTest * subTest = new SubTest;
    m_subTestList.append(subTest);
    if( rowCount() < 10 )
    {
        beginInsertRows(QModelIndex(), rowCount(), rowCount());
        m_itemList << btnNum;
        endInsertRows();
        qDebug() << "addData: " << m_itemList.at(rowCount()-1);
        qDebug() << "addItem: " << rowCount();
        qDebug() << "subTestListSize: " << m_subTestList.size();
    }
    else
    {
        qDebug() << "out of range" ;
    }
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
    if( m_itemList.empty() )
    {
        return;
    }

    QString removeData = m_itemList.at(rowCount()-1);
    beginRemoveRows(QModelIndex(),rowCount()-1,rowCount()-1);
    m_itemList.removeLast();
    endRemoveRows();
    m_subTestList.pop_back();
    qDebug() << "removeData:" << removeData;
    qDebug() << "totalItemCount: " << rowCount();

}

void Test::removeCount()
{
    if( m_itemList.empty() )
    {
        qDebug() << "Data Empty!!";
        return;
    }

    QString str = (m_itemList.last().split(" "))[0];

    if( str == "button1" )
    {
        if( m_itemList.count() > 0 )
        {
            m_clickedCount[str] = --m_button1;
        }
    }
    else if( str == "button2" )
    {
        if( m_itemList.count() > 0 )
        {
            m_clickedCount[str] = --m_button2;
        }
    }

    printAll();
}

int Test::btn1Count()
{
    return m_button1;
}

int Test::btn2Count()
{
    return m_button2;
}

bool Test::currentStatus()
{
    return m_status;
}

void Test::changedStatus(bool status)
{
    m_status = status;
}

void Test::setCurrentIndex(int index)
{
    m_currentIndex = index;
    qDebug() << "currentIndex: " << m_currentIndex;
}

int Test::getCurrentIndex()
{
    return m_currentIndex;
}

void Test::setSubData(QString str)
{
    m_subTestList.at(m_currentIndex)->addSubData(str);
}

int Test::subBtn1Count()
{
    return m_subTestList.at(m_currentIndex)->button1Count();
}

int Test::subBtn2Count()
{
    return m_subTestList.at(m_currentIndex)->button2Count();
}

void Test::removeSubData()
{
    m_subTestList.at(m_currentIndex)->removeData();
}

QList <QString> Test::returnSub()
{
    int i =0;
    if(i==0)
    {
        i++;
        return aaa;
    }
    return m_subTestList.at(m_currentIndex)->returnList();
}

QString Test::returnSubData()
{
    return m_subTestList.at(m_currentIndex)->returnData();
}
