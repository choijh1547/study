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
}

string DataManager::searchData(string key)
{
    string returnValue;
    dataSet::iterator searchDataIter = m_dataSet.find(key);

    if( searchDataIter == m_dataSet.end())
    {
        returnValue = "error";
    }

    else
    {
        returnValue = searchDataIter->second;
    }

    return returnValue;

}

vector<string> DataManager::setKeyList()
{
    dataSet::iterator it;
    for( it = m_dataSet.begin(); it != m_dataSet.end(); it++ )
    {
        m_keySet.push_back(it->first);
    }

    return m_keySet;
}
