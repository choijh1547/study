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
