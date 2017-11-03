#ifndef JSON_DATA_BROWSER_H
#define JSON_DATA_BROWSER_H

#include <iostream>

using namespace std;

class JsonParser;
class DataManager;

class JsonDataBrowser
{
public:
    JsonDataBrowser();
    virtual ~JsonDataBrowser();

public:
    void init();

private:
    JsonParser * m_jsonParser;
    DataManager * m_dataManager;

};

#endif // JSON_DATA_BROWSER_H
