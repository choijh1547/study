#ifndef JSON_PARSER_H
#define JSON_PARSER_H

#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include <vector>

class DataManager;

using namespace std;

class JsonParser
{
public:
    JsonParser();
    virtual ~JsonParser();

public:
    void parsing();
    string getInstance(string key);
    vector<string> getKeySet();


private:
    string read();

private:
    DataManager * m_dataManager;

};

#endif // JSON_PARSER_H

