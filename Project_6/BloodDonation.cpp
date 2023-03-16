#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#include "BloodDonation.h"

BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight)
{
    setID(EmployeeID);
    setAge(EmployeeAge);
    setWeight(EmployeeWeight);
}

int BloodDonation::getID()
{
    return (mID);
}

void BloodDonation::setID(int ID)
{
    string identification = to_string(ID);

    int count = 0;

    for (int i = 0; i < identification.length(); i++)
    {
        if (isdigit(identification[i]))
        {
            count++;
        }
    }

    if (count != identification.length() || identification.length() > 6 || identification.length() < 6)
    {
        mID = -1;
    }
    else
    {
        mID = ID;
    }
}

int BloodDonation::getAge()
{
    return (mAge);
}

void BloodDonation::setAge(int age)
{
    if (age < 21 || age > 65)
    {
        mAge = -1;
    }
    else
    {
        mAge = age;
    }
}

double BloodDonation::getWeight()
{
    return mWeight;
}

void BloodDonation::setWeight(double weight)
{
    if (weight < 101.00 || weight > 280.00)
    {
        mWeight = -1.00;
    }
    else
    {
        mWeight = weight;
    }
}
