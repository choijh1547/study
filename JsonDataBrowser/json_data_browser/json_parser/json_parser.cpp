#include "json_parser.hpp"
#include "json_data_browser/json_data_browser.hpp"
#include "json_data_browser/data_manager/data_manager.hpp"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <vector>

#include <QDebug>

JsonParser::JsonParser()
        :m_dataManager(new DataManager)
{
    cout << "JsonParser Start!!" << endl;
}

JsonParser::~JsonParser()
{

}

void JsonParser::parsing()
{
    boost::property_tree::ptree data;
    boost::property_tree::read_json("sample.json", data);

    BOOST_FOREACH(boost::property_tree::ptree::value_type &vt, data)
    {
        boost::property_tree::ptree &children = data.get_child(vt.first);

        BOOST_FOREACH(boost::property_tree::ptree::value_type &vt1, children)
        {
            BOOST_FOREACH(boost::property_tree::ptree::value_type &vt2, vt1.second)
            {
                m_dataManager->setData(vt2.first, vt2.second.data());
            }
        }
    }
}

string JsonParser::getInstance(string key)
{
    return m_dataManager->searchData(key);
}

vector<string> JsonParser::getKeySet()
{
    return m_dataManager->keyCollector();
}


//string JsonParser::read()
//{
//    string fileName;
//    cout << "Enter the fileName: ";
//    cin >> fileName;

//    return fileName;
//}
