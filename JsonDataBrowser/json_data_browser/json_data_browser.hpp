#ifndef JSON_DATA_BROWSER_H
#define JSON_DATA_BROWSER_H

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class JsonParser;
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
    void browseData(int id);

private:
    JsonParser * m_jsonParser;
    ItemManager * m_itemManager;
    JsonDataList m_idList;
    JsonItem * m_jsonItem;
};

#endif // JSON_DATA_BROWSER_H
