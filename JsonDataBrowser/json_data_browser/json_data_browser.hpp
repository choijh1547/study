#ifndef JSON_DATA_BROWSER_H
#define JSON_DATA_BROWSER_H

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class JsonParser;
class DataManager;
class ItemManager;
class JsonItem;

typedef vector <string> JsonDataList;

class JsonDataBrowser
{
public:
    JsonDataBrowser();
    virtual ~JsonDataBrowser();

public:
    void init();
    void printMenu();
    string getValue(int num);
    int getKeyCountSize();
    void browseData(int id);

private:
    JsonParser * m_jsonParser;
    DataManager * m_dataManager;
    ItemManager * m_itemManager;
    JsonDataList m_keySet;
    JsonDataList m_idList;
    JsonItem * m_jsonItem;
};

#endif // JSON_DATA_BROWSER_H
