#include "json_data_browser.hpp"
#include "json_parser/json_parser.hpp"
#include "data_manager/data_manager.hpp"
#include <QDebug>

JsonDataBrowser::JsonDataBrowser()
    :m_jsonParser(NULL)
{
    cout << "JsonDataBrowser Start!!" << endl;
}

JsonDataBrowser::~JsonDataBrowser()
{
    delete m_jsonParser;
}

void JsonDataBrowser::init()
{
    m_jsonParser = new JsonParser();
    m_jsonParser->parsing();
    m_keySet = m_jsonParser->getKeySet();
}

void JsonDataBrowser::printMenu()
{
    for( unsigned int i = 0; i < m_keySet.size(); i++ )
    {
        cout << i+1 << ": " << m_keySet.at(i) << endl;
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
