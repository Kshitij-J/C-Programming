#include <iostream>
using namespace std;
int main()
{
    cout << "Printing all lowercase and uppercase characters: \n";
    for (int i = 65; i <= 122; i++)
    {
        if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122)) // lowercase range=97-122 uppercase range=65-90
            cout << char(i) << endl;
        else
            continue; // if the character at that ascii value isnt an alphabet
    }
}
