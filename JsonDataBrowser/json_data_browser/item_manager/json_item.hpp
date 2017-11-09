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
    string getName();
    string getType();
    string getMax();
    string getMin();
    bool getHasMaxValue();
    bool getHasMinValue();

private:
    string m_id;
    string m_name;
    string m_type;
    string m_max;
    string m_min;
    bool m_hasMaxValue;
    bool m_hasMinValue;
};


#endif // JSONITEM_H
