//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream source;
    ofstream dest("C:\\Users\\lab314-16\\Desktop\\Lab9\\lab9-2562-2-dechathorn2148\\cheerbook_copy.txt");
    source.open("C:\\Users\\lab314-16\\Desktop\\Lab9\\lab9-2562-2-dechathorn2148\\cheerbook.txt");
    string textline;
    dest << "-------------------- SOTUS ---------------------" << "\n";
    bool havetext;
    havetext = getline(source, textline);
    while(havetext)
    {
        dest << textline << "\n";
        havetext = getline(source, textline);
    }
    dest << "-------------------- SOTUS ---------------------";
    source.close();
    dest.close();
    return 0;

}
