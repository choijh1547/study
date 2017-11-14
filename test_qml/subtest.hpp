#ifndef SUBTEST_H
#define SUBTEST_H

#include <QString>
#include <QVector>

class SubTest
{

public:
    SubTest();
    void addSubData(QString str);
    int button1Count();
    int button2Count();


private:
    int m_button1;
    int m_button2;

    QVector <QString> m_subDataList;

};

#endif // SUBTEST_H
