#ifndef JSON_PARSER_H
#define JSON_PARSER_H

#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include <vector>

class JsonItem;
class ItemManager;

using namespace std;

class JsonParser
{
public:
    JsonParser(ItemManager * itemManager);
    virtual ~JsonParser();

public:
    void parsing();

private:
    ItemManager * m_itemManager;

};

#endif // JSON_PARSER_H

