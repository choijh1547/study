#ifndef JSONITEM_H
#define JSONITEM_H

#include <iostream>

using namespace std;

class JsonItem
{
public:
    JsonItem();
    virtual ~JsonItem();

private:
    string m_id;
    string m_name;
    string m_type;
    string m_max;
    string m_min;
};

#endif // JSONITEM_H
