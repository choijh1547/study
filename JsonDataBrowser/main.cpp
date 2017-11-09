#include <QCoreApplication>

#include "json_data_browser/json_data_browser.hpp"

int main(int argc, char *argv[])
{
    int id = 1;

    QCoreApplication a(argc, argv);

    JsonDataBrowser * json_data_browser = new JsonDataBrowser();
    json_data_browser->init();

    while( id != 0 )
    {
        json_data_browser->printMenu();
        cout << " >> enter the id: ";
        cin >> id;

        if( id == 0 )
        {
            break;
        }

        json_data_browser->browseData(id);
    }

    delete json_data_browser;

    return 0;
}
