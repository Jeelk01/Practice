// to check that the given character is numeric , lowercase , upprcase

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character : ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Charcter is in Uppercase";
    }
    else if (ch > 'a' && ch < 'z')
    {
        cout << "Character is in lowercase";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Character is in numeric";
    }

    return 0;
}