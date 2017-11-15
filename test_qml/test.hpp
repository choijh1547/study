#ifndef TEST_H
#define TEST_H

#include <QStringList>
#include <QAbstractListModel>
#include <QObject>
#include <QString>
#include <QMap>
#include <QList>

class SubTest;

class Test : public QAbstractListModel
{
    Q_OBJECT

public:
    Test(QObject *parent=0);

    Q_INVOKABLE void init();
    Q_INVOKABLE void clickCount(QString str);
    Q_INVOKABLE void printAll();
    Q_INVOKABLE void addItem(QString btnNum);
    Q_INVOKABLE int rowCount(const QModelIndex & parent = QModelIndex()) const;
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
    Q_INVOKABLE QString getData();
    Q_INVOKABLE void removeItem();
    Q_INVOKABLE void removeCount();
    Q_INVOKABLE int btn1Count();
    Q_INVOKABLE int btn2Count();
    Q_INVOKABLE bool currentStatus();
    Q_INVOKABLE void changedStatus(bool status);
    Q_INVOKABLE void setCurrentIndex(int index);
    Q_INVOKABLE int getCurrentIndex();
    Q_INVOKABLE void setSubData(QString str);
    Q_INVOKABLE int subBtn1Count();
    Q_INVOKABLE int subBtn2Count();
    Q_INVOKABLE void removeSubData();
    Q_INVOKABLE QList <QString> returnSub();
    Q_INVOKABLE QString returnSubData();

private:
    int m_button1;
    int m_button2;
    int m_currentIndex;

    QMap <QString, int> m_clickedCount;
    QVector <QString> m_itemList;
    QVector<SubTest *> m_subTestList;
    QList <QString> aaa;

    bool m_status;
};

#endif // TEST_H
