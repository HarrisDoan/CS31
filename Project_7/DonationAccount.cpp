#include <iostream>
#include <string>
using namespace std;

#include "VacationAccount.h"
#include "BloodDonation.h"
#include "DonationData.h"
#include "DonationAccount.h"

DonationAccount::DonationAccount(int EmployeeID, int timesDonated)
{
    setID(EmployeeID);
    setTimesDonated(timesDonated);
}

int DonationAccount::getID()
{
    return mID;
}

void DonationAccount::setID(int EmployeeID)
{
    string identification = to_string(EmployeeID);

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

    mID = EmployeeID;
}

int DonationAccount::getTimesDonated()
{
    return mtimesDonated;
}

void DonationAccount::setTimesDonated(int timesDonated)
{
    if (timesDonated < 0)
    {
        mtimesDonated = -1;
    }

    mtimesDonated = timesDonated;
}

bool DonationAccount::validDonation(BloodDonation donation, DonationData data, DonationAccount &Account) // makes sure they all having matching ID's
{
    if (Account.getTimesDonated() == -1)
    {
        return false;
    }

    if (donation.getID() != Account.getID() || donation.getID() != Account.getID() || data.getID() != Account.getID())
    {
        return false;
    }

    return true;
}
