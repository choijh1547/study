#include "json_data_browser.hpp"
#include "json_parser/json_parser.hpp"
#include "data_manager/data_manager.hpp"


JsonDataBrowser::JsonDataBrowser()
    :m_jsonParser(NULL), m_dataManager(NULL)
{
    cout << "JsonDataBrowser Start!!" << endl;
}

JsonDataBrowser::~JsonDataBrowser()
{

}

void JsonDataBrowser::init()
{
    m_jsonParser = new JsonParser();
    m_dataManager = new DataManager();
}
