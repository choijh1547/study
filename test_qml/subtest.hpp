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
    void removeData();
    QList <QString> returnList();
    QString returnData();


private:
    int m_button1;
    int m_button2;

    QList <QString> m_subDataList;

};

#endif // SUBTEST_H
