#include <iostream>
#include <string>
#include <cstring>
#include <array>

using namespace std;

int locateMaxium(const string array[], int n);
int countFloatingPointValues(const string array[], int n);
bool hasNoCapitals(const string array[], int n);
int shiftLeft(string array[], int n, int amount, string placeholder);
bool validInteger(string array);
bool validFloat(string array);
// int countDecimal(string array); (see important notice)

// Start of Code:

// Similar to Project 3 with validQC, I can repeat the same logic with a validInteger
bool validInteger(string array)
{
    if (array.empty())
    {
        return false;
    }

    // for our case, a valid input cannot have a leading - or +
    if (((!isdigit(array[0])) && (array[0] == '-') && (array[0] == '+')))
    {
        return false;
    }

    // Initialize a pointer and use strtol to convert string to long int.
    char *p;
    strtol(array.c_str(), &p, 10);

    // if my pointer points to the end of the string, that means the entire string was converted properly converted to a integer,
    // this means the entire string must be a valid integer. Therefore, if *p == 0, then I can return true;
    if (*p == 0)
    {
        return true;
    }

    return false;
}

// Same idea as validInteger
bool validFloat(string array)
{
    if (array.empty())
    {
        return false;
    }

    // Initialize a pointer and use strtod to convert string to a double (similar enought to a float).
    char *p;
    strtod(array.c_str(), &p);

    // if my pointer points to the end of the string which means the entire string was converted to a double, then the entire string must
    // be a valid float. Therefore, if *p is 0, then I can return true;
    if (*p == 0)
    {
        return true;
    }

    return false;
}

//                                          ***************** IMPORTANT PLEASE READ *********************
// If the use of pointers for the counting float is not allowed. I have also written an alternative code that uses a search technique to
// determine whether or not is a integer/float. This also produces the exact same result as my code utilizing pointers
/*

bool validInteger(string array)
{
    if (array.empty())
    {
        return false;
    }

    // for our case, a valid input cannot have a leading - or +
    if (((!isdigit(array[0])) && (array[0] == '-') && (array[0] == '+')))
    {
        return false;
    }

    string check = "";
    for (int i = 0; i < array.size(); i++)
    {
        if (isdigit(array[i]))
        {
            check += array[i];
        }
    }

    if (check.size() == array.size())
    {
        return true;
    }
}

int countDecimal(string array)
{
    int count = 0;
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == '.')
        {
            count++;
        }
    }
    return count;
}

bool validFloat(string array)
{
    if (array.empty())
    {
        return false;
    }

    string check = "";

    for (int i = 0; i < array.size(); i++)
    {
        if (isdigit(array[i]))
        {
            check += array[i];
        }
    }

    if (check.size() == array.size() - 1)
    {
        return true;
    }

    return false;
}

*/

// Create a copy of the array to sort using the created sort function and then search for the maximum, returns the index of the maximum
int locateMaximum(const string array[], int n)
{

    if (n <= 0)
    {
        return -1;
    }

    int index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] < array[i + 1])
            index = i + 1;
        else
            index = i;
    }

    return index;
}

// Same idea as searching for capitals but instead searches for a decimal.
int countFloatingPointValues(const string array[], int n)
{

    if (n <= 0)
    {
        return -1;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        string check = array[i];
        string plus = "+";
        string minus = "-";

        // use strstr to check if the string contains a + or -
        if (validInteger(array[i]) && !strstr(check.c_str(), plus.c_str()) && !strstr(check.c_str(), minus.c_str()))
        {
            count++;
        }
        else if (validFloat(array[i]) && !strstr(check.c_str(), plus.c_str()) && !strstr(check.c_str(), minus.c_str()))
        {
            count++;
        }
    }

    return count;
}

// Converts each string in an array to a character array and then determines whether or not a capital letter is present.
bool hasNoCapitals(const string array[], int n)
{

    if (n <= 0)
    {
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        const int length = array[i].length();
        char *char_array = new char[length + 1];
        strcpy(char_array, array[i].c_str());
        for (int i = 0; i < length; i++)
        {
            if (isupper(char_array[i]))
            {
                return false;
            }
        }
    }
    return true;
}

// data[5] = { "mamaBbcca", "mamaBbcca", "12,", "98.76", "tyrion" };
//                0            1            2         3       4
// data[5] = shiftLeft( data, 5, 2, "foo" )
// 2 = movement to the left
// foo = placeholder
//
// shiftLeft( data, 5, 2, "foo" ) = { "12", "98.76", "tyrion", "foo", "foo" }
//                                      0       1       2        3      4
// 12:      2 -> 0
// 98.76:   3 -> 1
// tyrion:  4 -> 2
// shiftLeft( data, 5, 10, "bar" ) = {"bar", "bar", "bar", "bar", "bar"}
int shiftLeft(string array[], int n, int amount, string placeholder)
{

    if (n <= 0)
    {
        return -1;
    }

    if (amount <= 0)
    {
        return -1;
    }

    for (int i = 0; i < amount; i++)
    {
        string temp = array[0];
        for (int j = 0; j < n - 1; j++)
        {
            array[j] = array[j + 1];
        }
        array[n - 1] = temp;
    }

    int count = 0;
    for (int i = n - amount; i < n; i++)
    {
        array[i] = placeholder;
        count++;
    }

    // If I want to print the shifted array use this: Can remove if not necessary
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return count;
}

int main()
{
    string data[5] = {"mamaBbcca", "mamaBbcca", "12", "98.76", "tyrion"};
    string test[3] = {"aaa", "bbb", "cCc"};
    string folks[8] = {"samwell", "jon", "margaery", "daenerys", "tyrion", "sansa", "magdalena", "jon"};
    string a[6] = {"123", "456", "789", "gamma", "beta", "delta"};
    string c[0] = {};
    cout.setf(ios::boolalpha);

    // Add Code Here:

    // Test Cases:
    /*
    cout << locateMaximum(test, 3) << endl;
    cout << hasNoCapitals(test, 3) << endl;
    cout << hasNoCapitals(folks, 8) << endl;
    cout << countFloatingPointValues(data, 5) << endl;
    cout << locateMaximum(a, 3) << endl;
    cout << locateMaximum(c, 0) << endl;
    cout << countFloatingPointValues(data, 5) << endl;
    cout << shiftLeft(data, 5, 3, "foo") << endl;
    cout << shiftLeft(data, 5, 10, "foo");
    cout << shiftLeft(data, 5, 0, "foo") << endl;
    cout << shiftLeft(data, 5, 1, "PERFECT") << endl;
    cout << countFloatingPointValues(a, 6) << endl;
    cout << validFloat("12.12") << endl;
    cout << validInteger("18") << endl;
    */
}
