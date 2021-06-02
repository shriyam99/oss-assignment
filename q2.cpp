#include <bits/stdc++.h>
#include <conio.h>
#include <fstream>
using namespace std;
#define deb(x) cout << #x << " -> " << x << endl

int main()
{
    fstream newfile;
    newfile.open("sample.txt", std::ios_base::app);
    if (newfile.is_open())
    {
        newfile << "New line inserted \n";
        newfile.close();
    }
    newfile.open("sample.txt", ios::in);
    if (newfile.is_open())
    {
        string tp;
        while (getline(newfile, tp))
        {
            cout << tp << "\n";
        }
        newfile.close();
    }
    getch();
    return 0;
}