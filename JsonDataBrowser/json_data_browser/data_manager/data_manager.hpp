#ifndef DATA_MANAGER_H
#define DATA_MANAGER_H

#include <iostream>
#include <map>
#include <vector>

#include "json_data_browser/json_data_browser.hpp"

using namespace std;

typedef map <string, string> dataSet;

class DataManager
{
public:
    DataManager();
    virtual ~DataManager();

public:
    void setData(string key, string value);
    string searchData(string key);
    vector<string> keyCollector();

private:
    dataSet m_dataSet;
    keySet m_keySet;

};

#endif // DATA_MANAGER_H
