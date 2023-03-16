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
