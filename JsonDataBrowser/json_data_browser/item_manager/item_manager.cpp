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
    cout << "id: " << id << endl;
    cout << "name: " << m_jsonItemList.at(id)->getName() << endl;
    cout << "type: " << m_jsonItemList.at(id)->getType() << endl;
    cout << "max: " << m_jsonItemList.at(id)->getMax() << endl;
    cout << "min: " << m_jsonItemList.at(id)->getMin() << endl;
}
