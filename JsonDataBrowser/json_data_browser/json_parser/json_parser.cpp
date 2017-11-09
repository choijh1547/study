#include "json_parser.hpp"
#include "json_data_browser/json_data_browser.hpp"
#include "json_data_browser/item_manager/json_item.hpp"
#include "json_data_browser/item_manager/item_manager.hpp"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <vector>

#include <QDebug>

JsonParser::JsonParser(ItemManager *itemManager)
        :m_itemManager(itemManager)
{

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

        BOOST_FOREACH( boost::property_tree::ptree::value_type &vt1, children )
        {
            JsonItem * jsonItem = new JsonItem();

            BOOST_FOREACH( boost::property_tree::ptree::value_type &vt2, vt1.second )
            {
                if( vt2.first == "id" )     jsonItem->setId(vt2.second.data());
                if( vt2.first == "name" )   jsonItem->setName(vt2.second.data());
                if( vt2.first == "type" )   jsonItem->setType(vt2.second.data());
                if( vt2.first == "max" )    jsonItem->setMax(vt2.second.data());
                if( vt2.first == "min" )    jsonItem->setMin(vt2.second.data());
            }
            m_itemManager->setItem(jsonItem);
        }
    }
}
