#include "json_data_browser.hpp"
#include "json_parser/json_parser.hpp"
#include "data_manager/data_manager.hpp"
#include "item_manager/item_manager.hpp"
#include "item_manager/json_item.hpp"
#include <QDebug>

JsonDataBrowser::JsonDataBrowser()
    :m_jsonParser(NULL), m_dataManager(NULL), m_itemManager(NULL)
{
    cout << "JsonDataBrowser Start!!" << endl;
}

JsonDataBrowser::~JsonDataBrowser()
{
    delete m_dataManager;
    delete m_jsonParser;
}

void JsonDataBrowser::init()
{
    m_itemManager = new ItemManager();
    m_dataManager = new DataManager();
    m_jsonParser = new JsonParser(m_dataManager,m_itemManager);

    m_jsonParser->parsing();
//    m_keySet = m_jsonParser->getKeySet();
}

void JsonDataBrowser::printMenu()
{
    vector<string> idList = m_itemManager->setId();
    for( unsigned int i = 0; i < idList.size(); i++ )
    {
        cout << i+1 << ": " << idList.at(i) << endl;
    }
}

string JsonDataBrowser::getValue(int num)
{
    string value = m_jsonParser->getInstance()->searchData((m_keySet.at(num-1)));

    return value;
}

int JsonDataBrowser::getKeyCountSize()
{
    return m_keySet.size();
}

void JsonDataBrowser::browseData(int id)
{

    m_itemManager->searchData(to_string(id));
}
