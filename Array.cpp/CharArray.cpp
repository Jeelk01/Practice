#include <iostream>
#include <string>
using namespace std;

// User-defined function to find the length of a string.
int stringLength(char *ch, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (ch[i] == '\0') {
            break;
        }
        count++;
    }
    return count;
}

// Function to check if a string is a palindrome.
bool checkPalindrome(char *ch, int size) {
    int start = 0;
    int end = stringLength(ch, size) - 1;

    while (start < end) {
        if (ch[start] != ch[end]) {
            cout << "The string is not a palindrome." << endl;
            return false;
        }
        start++;
        end--;
    }

    cout << "The string is a palindrome." << endl;
    return true;
}

// Function to reverse a string.
void reverseString(char *ch, int size) {
    int start = 0;
    int end = stringLength(ch, size) - 1;

    while (start < end) {
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[10];
    cout << "Enter a string: ";
    cin >> str;
    cout << "Size of character array: " << sizeof(str) << "." << endl;
    cout << "Length of input string: " << stringLength(str, 10) << "." << endl;
    cout << "String: " << str << "." << endl;
    cout << checkPalindrome(str, 10) << endl;
    reverseString(str, 10);
    cout << "Reversed String: " << str << "." << endl;

    // Corrected char array initialization.
    char str1[5] = { 'J', 'E', '\0', 'E', '\0' };

    // Corrected string initialization.
    string s = "";
    s += 'J';
    s += 'E';
    s += '\0';  // Null terminator added as a regular character
    s += 'E';
    s += '\0';  // Another null terminator as a regular character

    // Print outputs
    cout << "char array: " << str1 << endl;  // Will print up to the first '\0'
    cout << "String: " << s << endl;        // Will print the entire string, including characters after '\0'

    return 0;
}
