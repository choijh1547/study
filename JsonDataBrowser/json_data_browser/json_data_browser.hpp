#ifndef JSON_DATA_BROWSER_H
#define JSON_DATA_BROWSER_H

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class JsonParser;
class DataManager;

typedef vector <string> keySet;

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

private:
    JsonParser * m_jsonParser;
    DataManager * m_dataManager;
    keySet m_keySet;
};

#endif // JSON_DATA_BROWSER_H
