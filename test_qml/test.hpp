#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QString>
#include <QMap>

class Test :public QObject
{
    Q_OBJECT
public:
    Test();

    Q_INVOKABLE void init();
    Q_INVOKABLE void clickCount(QString str);
    Q_INVOKABLE void printAll();

private:
    int m_button1;
    int m_button2;
    int m_button3;

    QMap <QString, int> m_clickedCount;
};

#endif // TEST_H
