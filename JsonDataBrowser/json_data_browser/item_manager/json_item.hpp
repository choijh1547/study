#ifndef JSONITEM_H
#define JSONITEM_H

#include <iostream>

using namespace std;

class JsonItem
{
public:
    JsonItem();
    virtual ~JsonItem();

public:
    void setId(string id);
    void setName(string name);
    void setType(string type);
    void setMax(string max);
    void setMin(string min);
    string getId();

private:
    string m_id;
    string m_name;
    string m_type;
    string m_min;
    string m_max;
};


#endif // JSONITEM_H
