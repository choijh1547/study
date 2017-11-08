#ifndef JSON_PARSER_H
#define JSON_PARSER_H

#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include <vector>

class DataManager;
class JsonItem;
class ItemManager;

using namespace std;

class JsonParser
{
public:
    JsonParser(DataManager * dataManager, ItemManager * itemManager);
    virtual ~JsonParser();

public:
    void parsing();
    DataManager * getInstance();
    vector<string> getKeySet();

private:
    DataManager * m_dataManager;
    ItemManager * m_itemManager;

};

#endif // JSON_PARSER_H

