#include "item_manager.hpp"
#include "json_item.hpp"

ItemManager::ItemManager()
{

}

ItemManager::~ItemManager()
{

}

void ItemManager::setItem(JsonItem *jsonItem)
{
    string id = jsonItem->getId();
    m_jsonItemList.insert(pair<string,JsonItem*>(id, jsonItem));
}

vector<string> ItemManager::setId()
{
    vector<string> idList;
    map<string,JsonItem*>::iterator it;
    for( it = m_jsonItemList.begin(); it != m_jsonItemList.end(); it++ )
    {
        idList.push_back(it->first);
    }

    return idList;
}

void ItemManager::searchData(string id)
{
    map<string,JsonItem *>::iterator iter = m_jsonItemList.find(id);

    if(iter == m_jsonItemList.end())
    {
        cout << "\n============================" << endl;
        cout << "< Error > id doesn't exist" << endl;
        cout << "============================" << endl;
        return;
    }

    printData(iter->second);
}

void ItemManager::printData(JsonItem *jsonItem)
{
    cout << "\n====================" << endl;
    cout << "1. id   : " << jsonItem->getId() << endl;
    cout << "2. name : " << jsonItem->getName() << endl;
    cout << "3. type : " << jsonItem->getType() << endl;

    if( jsonItem->getHasMaxValue() )
    {
        cout << "4. max  : " << jsonItem->getMax() << endl;
    }
    if( jsonItem->getHasMinValue() )
    {
        cout << "5. min  : " << jsonItem->getMin() << endl;
    }

    cout << "====================" << endl;

}

