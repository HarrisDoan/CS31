#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

using namespace std;

int quantities_value(string result);
int pass_value(string result);
int defect_value(string result);
int total(string result);
int passQC(string result);
int defectQC(string result);
int totalQC(string result);
int batches(string result);
bool isValidQC(string result);

// Iterates through the string at the position +1 of Q. Scans for the alll the values in front of Q and returns it as the sum of all possible values.
// This function gives me the total quality checks in the entire string sequence
int quantities_value(string result)
{
    int quant_value = 0;

    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'Q')
        {
            string value = "";

            for (int j = i + 1; isdigit(result[j]); j++)
                value += result[j];
            quant_value += stoi(value);
        }
    }
    return quant_value;
}

// Iterates through the string at the position p. Scans for all the values in front of p and returns it as the sum of all possible values.
// This function gives me the total passes in the entire string sequence
int pass_value(string result)
{
    int pass_value = 0;

    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'p')
        {
            string value = "";

            for (int j = i + 1; isdigit(result[j]); j++)
                value += result[j];
            pass_value += stoi(value);
        }
    }
    return pass_value;
}

// Iterates through the string at the position d. Scans for the value in front of d and returns it.
// This function gives me the total defects in the entire string sequence

int defect_value(string result)
{
    int defects_value = 0;

    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'd')
        {
            string value = "";

            for (int j = i + 1; isdigit(result[j]); j++)
                value += result[j];
            defects_value += stoi(value);
        }
    }
    return defects_value;
}

// Returns the total of the pass_value and defect_value (allows for me to check if the totalQC != or ==)
int total(string result)
{
    return pass_value(result) + defect_value(result);
}

// Rigorous check for valid string using test cases from the Project 3 specs.
bool isValidQC(string result)
{
    // Checks if the first element in the string are valid
    for (int i = 0; i < result.size(); i++)
    {
        if (result[0] != 'Q')
        {
            return false;
        }
    }

    // Checks for spaces
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == ' ')
        {
            return false;
        }
    }

    // Checks to see if subsequent Q strings are valid, doesn't test for leading 0's for P and D
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'Q')
        {
            if (result[i + 1] == '0')
            {
                return false;
            }
        }
    }

    // If p is followed by a letter instead of a number its false ie. Q1pd1
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'p')
        {
            if (result[i + 1] == 'd')
            {
                return false;
            }
        }
    }

    // If d is followed by a letter instead of a number its false ie. Q1dp1
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'd')
        {
            if (result[i + 1] == 'p')
            {
                return false;
            }
        }
    }

    // If d is towards the end of a string and it is followed by a null character it is false
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'd')
        {
            if (result[i + 1] == '\0')
            {
                return false;
            }
        }
    }

    // If p is towards the end of a string and it is followed by a null character it is false
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'p')
        {
            if (result[i + 1] == '\0')
            {
                return false;
            }
        }
    }

    // Doesn't allow for leading 0's on P or a digit after a 0. Q7p07d7 = false;
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'p')
        {
            if (result[i + 1] == '0')
            {
                if (result[i + 2] == '1' || result[i + 2] == '2' || result[i + 2] == '3' || result[i + 2] == '4' || result[i + 2] == '5' || result[i + 2] == '6' || result[i + 2] == '7' || result[i + 2] == '8' || result[i + 2] == '9' || result[i + 2] == '0')
                {
                    return false;
                }
            }
        }
    }

    // Does not allow for excessive leading 0's on D
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'd')
        {
            if (result[i + 1] == '0')
            {
                if (result[i + 2] == '0')
                {
                    return false;
                }
            }
        }
    }

    // Doesn't allow for 0's unless the Q_ sums up to the P and D's
    if (total(result) != quantities_value(result))
    {
        return false;
    }

    // Quantities from test should equal all the pass_values and all the defect_values
    if (quantities_value(result) != pass_value(result) + defect_value(result))
    {
        return false;
    }

    return true;
}

int passQC(string result)
{

    // If the string wasn't valid, this will return the value: -1 immediately
    if (!isValidQC(result))
        return -1;

    // If the isValidQC passes all test cases: pass_value is returned in the end
    return pass_value(result);
}

int defectQC(string result)
{

    // If the string wasn't valid, this will return the value: -1 immediately
    if (!isValidQC(result))
        return -1;

    // If the isValidQC passes all test cases: defect_value is returned in the end
    return defect_value(result);
}

int totalQC(string result)
{
    // If the string wasn't valid, this will return the value: -1 immediately
    if (!isValidQC(result))
        return -1;

    // If the isValidQC passes all test cases: quantities_value is returned in the end
    return quantities_value(result);
}

int batches(string result)
{

    // If the string wasn't valid, this will return the value: -1 immediately
    if (!isValidQC(result))
        return -1;

    int batches = 0;

    // Each time a Q is read in the string = another batch added. Batches simply increments up when a Q is detected
    for (int i = 0; i < result.size(); i++)
        if (result[i] == 'Q')
            batches++;
    return batches;
}

int main()
{
    string result;
    getline(cin, result);
    cout.setf(ios::boolalpha);
    cout << "isValidQC returns: " << isValidQC(result) << endl;
    cout << "passQC returns: " << passQC(result) << endl;
    cout << "defectQC returns: " << defectQC(result) << endl;
    cout << "batches returns: " << batches(result) << endl;
    cout << "totalQC returns: : " << totalQC(result) << endl;
}