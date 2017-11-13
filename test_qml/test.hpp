#ifndef TEST_H
#define TEST_H

#include <QStringList>
#include <QAbstractListModel>
#include <QObject>
#include <QString>
#include <QMap>
#include <QList>

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


private:
    int m_button1;
    int m_button2;

    QMap <QString, int> m_clickedCount;
    QVector <QString> m_itemList;

};

#endif // TEST_H
