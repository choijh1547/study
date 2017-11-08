#include "json_parser.hpp"
#include "json_data_browser/json_data_browser.hpp"
#include "json_data_browser/data_manager/data_manager.hpp"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <vector>

#include <QDebug>

JsonParser::JsonParser(DataManager* dataManager)
        :m_dataManager(dataManager)
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

    BOOST_FOREACH( boost::property_tree::ptree::value_type &vt, data )
    {

        boost::property_tree::ptree &children = data.get_child(vt.first);

        m_dataManager->setData(vt.first, vt.second.data());

        BOOST_FOREACH( boost::property_tree::ptree::value_type &vt1, children )
        {
            if( vt1.second.empty() )
            {
                cout << vt1.second.data() << endl;
                m_dataManager->setData(vt1.first, vt1.second.data());
            }

            BOOST_FOREACH( boost::property_tree::ptree::value_type &vt2, vt1.second )
            {
                m_dataManager->setData(vt2.first, vt2.second.data());
            }
        }
    }
}

DataManager* JsonParser::getInstance()
{
    return m_dataManager;
}

vector<string> JsonParser::getKeySet()
{
    return m_dataManager->setKeyList();
}
