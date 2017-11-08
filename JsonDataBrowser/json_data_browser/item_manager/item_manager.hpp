#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class JsonItem;

class ItemManager
{
public:
    ItemManager();
    virtual ~ItemManager();

public:
    void setItem(JsonItem * jsonItem);
    vector<string> setId();

private:
    map <string,JsonItem*> m_jsonItemList;

};

#endif // ITEMMANAGER_H
