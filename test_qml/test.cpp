#include "test.hpp"
#include <QDebug>

#include <iostream>

using namespace std;


Test::Test()
    : m_button1(0), m_button2(0), m_button3(0), m_clickedCount()
{

}

void Test::init()
{
    m_clickedCount["button1"] = m_button1;
    m_clickedCount["button2"] = m_button2;
    m_clickedCount["button3"] = m_button3;

}

void Test::clickCount(QString str)
{
    if(str == "button1")
    {
        m_clickedCount[str] = ++m_button1;
    }
    else if(str == "button2")
    {
        m_clickedCount[str] = ++m_button2;
    }
    else
    {
        m_clickedCount[str] = ++m_button3;
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


