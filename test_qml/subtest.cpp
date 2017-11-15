#include "subtest.hpp"

#include <QDebug>

SubTest::SubTest()
    :m_subDataList(), m_button1(0), m_button2(0)
{

}

void SubTest::addSubData(QString str)
{
        m_subDataList.append(str); ;
        qDebug() << "subDataListSize: " << m_subDataList.size();
        qDebug() << "subDataLast: " << m_subDataList.last();
}

int SubTest::button1Count()
{
    ++m_button1;
    return m_button1;
}

int SubTest::button2Count()
{
    ++m_button2;
    return m_button2;
}

void SubTest::removeData()
{
    if( m_subDataList.last().startsWith("button1"))
    {
        --m_button1;
    }
    else
    {
        --m_button2;
    }

    m_subDataList.pop_back();
    qDebug() << "subDataListSize: " << m_subDataList.size();
    qDebug() << "subDataLast: " << m_subDataList.last();
}

QList<QString> SubTest::returnList()
{
    return m_subDataList;
}

QString SubTest::returnData()
{
    return m_subDataList.at(0);
}
