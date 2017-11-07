#include <QCoreApplication>

#include "json_data_browser/json_data_browser.hpp"

int main(int argc, char *argv[])
{
    string value;
    int i=1;

    QCoreApplication a(argc, argv);

    JsonDataBrowser * json_data_browser = new JsonDataBrowser();
    json_data_browser->init();

    while(i != 0)
    {
        json_data_browser->printMenu();

        cout << "enter the number: ";
        cin >> i;

        if( i == 0 )
        {
            break;
        }

        value = json_data_browser->getValue(i);
        cout << "value: "<< value<< endl;
    }

    delete json_data_browser;

    return 0;
}
