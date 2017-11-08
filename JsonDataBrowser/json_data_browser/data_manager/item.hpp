#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class Item
{
public:
    Item();
    ~Item();

public:
    void setData(int id, string name, int type, int min, int max);

private:
    int m_id;
    string m_name;
    int m_type;
    int m_min;
    int m_max;
};

#endif // ITEM_H
