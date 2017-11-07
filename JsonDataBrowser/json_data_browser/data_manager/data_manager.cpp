#include "data_manager.hpp"

#include <QDebug>

using namespace std;

DataManager::DataManager()
{
    cout << "DataManager Start!!" << endl;
}

DataManager::~DataManager()
{

}

void DataManager::setData(string key, string value)
{
    m_dataSet.insert(pair<string, string>(key,value));
//    m_dataSet[key] = value ;

//    qDebug() << "aaaaaaaa";
//    qDebug() << m_dataSet.count("childkeyA");

}

string DataManager::searchData(string key)
{
    if( m_dataSet.find(key) == m_dataSet.end())
    {
        return "error";
    }
    else
    {
        return m_dataSet.find(key)->second;
    }

}

vector<string> DataManager::keyCollector()
{
    dataSet::iterator it;
    for( it = m_dataSet.begin(); it != m_dataSet.end(); it++)
    {
        m_keySet.push_back(it->first);
    }

    return m_keySet;
}
