#include <iostream>
#include <string>
using namespace std;

#include "DonationData.h"
#include "BloodDonation.h"

DonationData::DonationData(int ID, int month, int day, int year)
{
    setID(ID);
    setMonth(month);
    setDay(day);
    setYear(year);
}

int DonationData::getID()
{
    return mID;
}

void DonationData::setID(int ID)
{
    string identification = to_string(ID);

    if (identification.length() != 6)
    {
        mID = -1;
    }

    for (int i = 0; i < identification.length(); i++)
    {
        if (!isdigit(identification[i]))
        {
            mID = -1;
        }
    }

    mID = ID;
}

int DonationData::getMonth()
{
    return mMonth;
}

void DonationData::setMonth(int month)
{
    if (month >= 1 && month <= 12)
    {
        mMonth = month;
    }
    else
    {
        mMonth = -1;
    }
}

int DonationData::getDay()
{
    return mDay;
}

void DonationData::setDay(int day)
{

    if (day >= 1 && day <= 31)
    {
        mDay = day;
    }
    else
    {
        mDay = -1;
    }
}

int DonationData::getYear()
{
    return mYear;
}

void DonationData::setYear(int year)
{
    if (year >= 1920 && year != 0)
    {
        mYear = year;
    }
    else
    {
        mYear = -1;
    }
}

bool DonationData::validDate(DonationData data)
{
    // Special case February
    if (data.getMonth() == 2)
    {
        if (data.getYear() % 4 == 0 && data.getDay() >= 1 && data.getDay() <= 29)
        {
            return true;
        }
        else if (data.getYear() % 4 != 0 && data.getDay() >= 1 && data.getDay() <= 28)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // 31 days
    if (data.getMonth() == 1 || data.getMonth() == 3 || data.getMonth() == 5 || data.getMonth() == 7 || data.getMonth() == 8 || data.getMonth() == 10 || data.getMonth() == 12)
    {
        if (data.getDay() >= 1 && data.getDay() <= 31)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // 30 days
    if (data.getMonth() == 4 || data.getMonth() == 6 || data.getMonth() == 9 || data.getMonth() == 11)
    {
        if (data.getDay() >= 1 && data.getDay() <= 30)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}
