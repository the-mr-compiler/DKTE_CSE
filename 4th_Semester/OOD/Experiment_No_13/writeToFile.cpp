#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    string input;
    getline(cin, input);
    ofstream f;
    f.open("abc.txt", ios::out);
    f << input;
    f.close();
}