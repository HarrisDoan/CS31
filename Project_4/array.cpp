#include <iostream>
#include <string>
#include <cstring>
#include <array>

using namespace std;

void sort_string(string array[], int n);
string returnMax(string array[], int n);
int locateMaxium(const string array[], int n);
int countFloatingPointValues(const string array[], int n);
bool hasNoCapitals(const string array[], int n);
int shiftLeft(string array[], int n, int amount, string placeholder);

// Void function to sort array
void sort_string(string array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                string temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Returns the maximum string
string returnMax(string array[], int n)
{
    sort_string(array, n);
    string search = array[n - 1];
    return search;
}

// Create a copy of the array to sort using the created sort function and then search for the maximum, returns the index of the maximum
int locateMaximum(const string array[], int n)
{

    if (n <= 0)
    {
        return -1;
    }

    string copy_array[n];
    for (int i = 0; i < n; i++)
    {
        copy_array[i] = array[i];
    }

    string search = returnMax(copy_array, n);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == search)
        {
            return i;
        }
    }
}

bool isFloat(const string array[], int n)
{
    // To be a valid float: must only contain 1 decimal, must be comprised of digits, cannot have a leading + or -
}

// Same idea as searching for capitals but instead searches for a decimal.
int countFloatingPointValues(const string array[], int n)
{

    if (n <= 0)
    {
        return -1;
    }

    int count = 0;

    string plus = "+";    // Check to see if a + sign is in the string
    string minus = "-";   // Checks to see if a - sign is in the string
    string decimal = "."; // Checks to see if a optional decimal point

    for (int i = 0; i < n; i++)
    {
        string check = array[i];
        if (strstr(check.c_str(), decimal.c_str()) && !strstr(check.c_str(), plus.c_str()) && !strstr(check.c_str(), minus.c_str()))
        {
            count++;
        }
    }

    string copy_array[n];
    for (int i = 0; i < n; i++)
    {
        copy_array[i] = array[i];
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

// data[5] = {"mamaBbcca", "mamaBbcca", "tyrion,", "98.76", "12"};
//                0            1            2         3       4
// data[5] = shiftLeft( data, 5, 2, "foo" )
// 2 = movement to the left
// foo = placeholder
//
// shiftLeft( data, 5, 2, "foo" ) = { "12", "98.76", "tyrion", "foo", "foo" }
//                                      0       1       2        3      4
// 12:      4 -> 0
// 98.76:   3 -> 1
// tyrion:  2 -> 2
// shiftLeft( data, 5, 10, "bar" ) = {"bar", "bar", "bar", "bar", "bar"}
int shiftLeft(string array[], int n, int amount, string placeholder)
{
    if (n <= 0 || amount < 0)
    {
        return -1;
    }

    // Case in which n is less than amount, the entirety of the array is filled with the placeholder
    if (n < amount)
    {
        for (int i = 0; i < n; i++)
        {
            array[i] = placeholder;
            cout << array[i] << endl;
        }
    }

    string new_array[n];

    return amount;
}

int main()
{
    string data[5] = {"mamaBbcca", "mamaBbcca", "tyrion,", "98.7.6", "120"};
    string test[3] = {"aaa", "bbb", "cCc"};
    string folks[8] = {"samwell", "jon", "margaery", "daenerys", "tyrion", "sansa", "magdalena", "jon"};
    string a[6] = {"123", "456", "789", "gamma", "beta", "delta"};
    string c[0] = {};
    /*
    cout << returnMax(test, 3) << endl;
    cout << locateMaximum(test, 3) << endl;
    cout.setf(ios::boolalpha);
    cout << hasNoCapitals(test, 3) << endl;
    cout << hasNoCapitals(folks, 8) << endl;
    cout << countFloatingPointValues(data, 5) << endl;

    cout << locateMaximum(a, 3) << endl;
    cout << locateMaximum(c, 0) << endl;
    */
    cout << countFloatingPointValues(data, 5) << endl;
    // cout << shiftLeft(data, 5, 10, "foo") << endl;
}

/*
for (int i = 0; i < n; i++)
{
    const int length = array[i].length();
    char *char_array = new char[length + 1];
    strcpy(char_array, array[i].c_str());
    for (int i = 0; i < length; i++)
    {
        if (char_array[i] == '.')
        {
            count++;
        }
    }
}
*/