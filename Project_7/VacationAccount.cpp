#include <iostream>
#include <string>
using namespace std;

#include "VacationAccount.h"
#include "BloodDonation.h"

VacationAccount::VacationAccount(int EmployeeID)
{
    mBalance = 0;
    setID(EmployeeID);
}

double VacationAccount::getBalance()
{
    return (mBalance);
}

int VacationAccount::getID()
{
    return (mID);
}

void VacationAccount::setID(int ID)
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

bool VacationAccount::addVacationToAccount(BloodDonation donation)
{
    if (donation.getID() == -1 || donation.getAge() == -1 || donation.getWeight() == -1)
        return false;
    if (donation.getID() != mID)
        return false;
    mBalance += 4;
    return true;
}

bool VacationAccount::addVacationToAccount(BloodDonation donation1, DonationData data1, BloodDonation donation2, DonationData data2)
{
    if (donation1.getID() == -1 || donation1.getAge() == -1 || donation1.getWeight() == -1)
        return false;
    if (donation1.getID() != mID)
        return false;
    if (donation2.getID() == -1 || donation2.getAge() == -1 || donation2.getWeight() == -1)
        return false;
    if (donation2.getID() != mID)
        return false;

    if (sixMonthPassed(data1, data2) != true)
    {
        return false;
    }

    mBalance += 4;
    return true;
}
