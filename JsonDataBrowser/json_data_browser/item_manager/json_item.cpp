#include "json_item.hpp"

JsonItem::JsonItem()
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
}

void JsonItem::setMin(string min)
{
    m_min = min;
}

string JsonItem::getId()
{
    return m_id;
}
