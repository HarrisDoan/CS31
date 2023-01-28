//Palindrome with 2 inputs
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

void reverseStr(string& str)
{
    int len;
    len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        swap(str[i], str[len - i -1]);
    }
}

int main()
{
    string num1, num2, revStr;

    cout << "Enter an integer" << endl;
    cin >> num1;
    cout << "Enter a second integer" << endl;
    cin >> num2;

   reverseStr(num2);

    if (num1 == num2)
    {
        cout << "true" << endl;
        return 0;
    }
    else
    {
        cout << "false" << endl;
        return 0;
    }

    

}


