#include "json_item.hpp"

JsonItem::JsonItem()
    :m_id(),m_name(),m_type(),m_max(),m_min(),
     m_hasMaxValue(false), m_hasMinValue(false)
{

}

JsonItem::~JsonItem()
{

}

void JsonItem::setId(string id)
{
    m_id = id;
}

void JsonItem::setName(string name)
{
    m_name = name;
}

void JsonItem::setType(string type)
{
    m_type = type;
}

void JsonItem::setMax(string max)
{
    m_max = max;
    m_hasMaxValue = true;
}

void JsonItem::setMin(string min)
{
    m_min = min;
    m_hasMinValue = true;
}

string JsonItem::getId()
{
    return m_id;
}

string JsonItem::getName()
{
    return m_name;
}

string JsonItem::getType()
{
    return m_type;
}

string JsonItem::getMax()
{
    return m_max;
}

string JsonItem::getMin()
{
    return m_min;
}

bool JsonItem::getHasMaxValue()
{
    return m_hasMaxValue;
}

bool JsonItem::getHasMinValue()
{
    return m_hasMinValue;
}
