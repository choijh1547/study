#include "json_data_browser.hpp"
#include "json_parser/json_parser.hpp"
#include "item_manager/item_manager.hpp"
#include "item_manager/json_item.hpp"
#include <QDebug>

JsonDataBrowser::JsonDataBrowser()
    :m_jsonParser(NULL), m_itemManager(NULL)
{

}

JsonDataBrowser::~JsonDataBrowser()
{
    delete m_jsonParser;
}

void JsonDataBrowser::init()
{
    m_itemManager = new ItemManager();
    m_jsonParser = new JsonParser(m_itemManager);

    m_jsonParser->parsing();
}

void JsonDataBrowser::printMenu()
{
    vector<string> idList = m_itemManager->setId();
    cout << "\n-------------" << endl;
    cout << "| No." << " | " << "id" << "  | " <<endl;
    cout << "-------------" << endl;

    for( unsigned int i = 0; i < idList.size(); i++ )
    {
        if( stoi(idList.at(i)) >= 100 )
        {
            cout << "|  " << i+1 << "  | " << idList.at(i) << " | " << endl;
        }
        else
        {
            cout << "|  " << i+1 << "  | " << idList.at(i) << "  | " << endl;
        }
    }
}

void JsonDataBrowser::browseData(int id)
{
    m_itemManager->searchData(to_string(id));
}

