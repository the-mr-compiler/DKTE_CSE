#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    fstream in;
    in.open("abc.txt");
    char ch;
    int chars = 0, words = 0, lines = 0;
    while (!in.eof())
    {
        in.get(ch);
        if (in.eof())
            break;
        if (ch == ' ')
            words++;
        else if (ch == '\n')
        {
            lines++;
            words++;
        }
        else if (ch != 0)
        {
            chars++;
        }
    }
    if (chars != 0)
        words++;
    cout << "Chars : " << chars << "\tWords :" << words << "\tLines :" << lines;
    in.close();
}