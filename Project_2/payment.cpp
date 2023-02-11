#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{

    string stateName, month;
    double purchaseAmount;
    int day;
    int year;
    double total;

    cout << "State Name: ";
    getline(cin, stateName);
    cout << "Purchase amount: ";
    cin >> purchaseAmount;
    cout << "Provide the month: ";
    cin.ignore();
    getline(cin, month);
    cout << "Provide the day: ";
    cin >> day;
    cout << "Provide the year: ";
    cin >> year;

    // Check for valid state input out of 50 states

    // Note: Normally I would use a != for the comparison but each time I ran it, it didn't work so I just left it as an empty if statement if it == and else has the code
    // I know this is probably bad practice but if its not broken don't fix it?

    if (stateName == "Alabama" || stateName == "Alaska" || stateName == "Arizona" || stateName == "Arkansas" || stateName == "California" ||
        stateName == "Colorado" || stateName == "Connecticut" || stateName == "Delaware" || stateName == "Florida" || stateName == "Georgia" ||
        stateName == "Hawaii" || stateName == "Idaho" || stateName == "Illinois" || stateName == "Indiana" || stateName == "Iowa" || stateName == "Kansas" ||
        stateName == "Kentucky" || stateName == "Louisiana" || stateName == "Maine" || stateName == "Maryland" || stateName == "Massachusetts" || stateName == "Michigan" ||
        stateName == "Minnesota" || stateName == "Mississippi" || stateName == "Missouri" || stateName == "Montana" || stateName == "Nebraska" || stateName == "Nevada" ||
        stateName == "New Hampshire" || stateName == "New Jersey" || stateName == "New Mexico" || stateName == "New York" || stateName == "North Carolina" ||
        stateName == "North Dakota" || stateName == "Ohio" || stateName == "Oklahoma" || stateName == "Oregon" || stateName == "Pennsylvania" || stateName == "Rhode Island" ||
        stateName == "South Carolina" || stateName == "South Dakota" || stateName == "Tennessee" || stateName == "Texas" || stateName == "Utah" || stateName == "Vermont" ||
        stateName == "Virginia" || stateName == "Washington" || stateName == "West Virginia" || stateName == "Wisconsin" || stateName == "Wyoming" || cin.fail())
    {
    }

    else
    {
        cout << "Invalid state!" << endl;
        return 0;
    }

    // Check for valid purchase amount
    if (purchaseAmount <= 0 || cin.fail())
    {
        cout << "Invalid amount!" << endl;
        return 0;
    }

    else
    {
    }

    // Check for valid month
    if (month == "January" || month == "February" || month == "March" || month == "April" || month == "May" || month == "June" || month == "July" || month == "August" ||
        month == "September" || month == "October" || month == "November" || month == "December" || cin.fail())
    {
    }
    else
    {
        cout << "Invalid month!" << endl;
        return 0;
    }

    // Check for valid day
    if (day < 1 || day > 31 || cin.fail())
    {
        cout << "Invalid day!" << endl;
        return 0;
    }
    else
    {
    }

    // Check for valid year
    if (year < 1 || year > 2025 || cin.fail())
    {
        cout << "Invalid year!" << endl;
        return 0;
    }
    else
    {
    }

    // List of stateTaxRate and avgLocalTaxRate and Levy if applicable

    double stateTaxRate_Alabama = (4.00 / 100);
    double avgLocalTaxRate_Alabama = (5.14 / 100);
    double avgLocalTaxRate_Alaska = (1.43 / 100);
    double stateTaxRate_Arizona = (5.60 / 100);
    double avgLocalTaxRate_Arizona = (2.77 / 100);
    double stateTaxRate_Arkansas = (6.50 / 100);
    double avgLocalTaxRate_Arkansas = (2.93 / 100);
    double stateTaxRate_California = (7.25 / 100);
    double avgLocalTaxRate_California = (1.31 / 100);
    double levy_California = (1.00 / 100);
    double stateTaxRate_Colorado = (2.90 / 100);
    double avgLocalTaxRate_Colorado = (4.73 / 100);
    double stateTaxRate_Connecticut = (6.35 / 100);
    double stateTaxRate_Florida = (6.00 / 100);
    double avgLocalTaxRate_Florida = (1.05 / 100);
    double stateTaxRate_Georgia = (4.00 / 100);
    double avgLocalTaxRate_Georgia = (3.29 / 100);
    double stateTaxRate_Hawaii = (4.00 / 100);
    double avgLocalTaxRate_Hawaii = (0.41 / 100);
    double stateTaxRate_Idaho = (6.00 / 100);
    double avgLocalTaxRate_Idaho = (0.03 / 100);
    double stateTaxRate_Illinois = (6.25 / 100);
    double avgLocalTaxRate_Illinois = (2.49 / 100);
    double stateTaxRate_Indiana = (7.00 / 100);
    double stateTaxRate_Iowa = (6.00 / 100);
    double avgLocalTaxRate_Iowa = (0.82 / 100);
    double stateTaxRate_Kansas = (6.50 / 100);
    double avgLocalTaxRate_Kansas = (2.17 / 100);
    double stateTaxRate_Kentucky = (6.00 / 100);
    double stateTaxRate_Louisiana = (4.45 / 100);
    double avgLocalTaxRate_Louisiana = (5.00 / 100);
    double stateTaxRate_Maine = (5.50 / 100);
    double stateTaxRate_Maryland = (6.00 / 100);
    double stateTaxRate_Massachusetts = (6.25 / 100);
    double stateTaxRate_Michigan = (6.00 / 100);
    double stateTaxRate_Minnesota = (6.88 / 100);
    double avgLocalTaxRate_Minnesota = (0.55 / 100);
    double stateTaxRate_Mississippi = (7.00 / 100);
    double avgLocalTaxRate_Mississippi = (0.07 / 100);
    double stateTaxRate_Missouri = (4.23 / 100);
    double avgLocalTaxRate_Missouri = (3.90 / 100);
    double stateTaxRate_Nebraska = (5.50 / 100);
    double avgLocalTaxRate_Nebraska = (1.35);
    double stateTaxRate_Nevada = (6.85 / 100);
    double avgLocalTaxRate_Nevada = (1.29 / 100);
    double stateTaxRate_New_Jersey = (6.63 / 100);
    double avgLocalTaxRate_New_Jersery = (-0.03 / 100);
    double stateTaxRate_New_Mexico = (5.13 / 100);
    double avgLocalTaxRate_New_Mexico = (2.69 / 100);
    double stateTaxRate_New_York = (4.00 / 100);
    double avgLocalTaxRate_New_York = (4.49 / 100);
    double stateTaxRate_North_Carolina = (4.75 / 100);
    double avgLocalTaxRate_North_Carolina = (2.22 / 100);
    double stateTaxRate_North_Dakota = (5.00 / 100);
    double avgLocalTaxRate_North_Dakota = (1.85 / 100);
    double stateTaxRate_Ohio = (5.75 / 100);
    double avgLocalTaxRate_Ohio = (1.42 / 100);
    double stateTaxRate_Oklahoma = (4.50 / 100);
    double avgLocalTaxRate_Oklahoma = (4.42 / 100);
    double stateTaxRate_Pennsylvania = (6.00 / 100);
    double avgLocalTaxRate_Pennsylvania = (0.34 / 100);
    double stateTaxRate_Rhode_Island = (7.00 / 100);
    double stateTaxRate_South_Carolina = (6.00 / 100);
    double avgLocalTaxRate_South_Carolina = (1.43 / 100);
    double stateTaxRate_South_Dakota = (4.50 / 100);
    double avgLocalTaxRate_South_Dakota = (1.90 / 100);
    double stateTaxRate_Tennessee = (7.00 / 100);
    double avgLocalTaxRate_Tennessee = (2.47 / 100);
    double stateTaxRate_Texas = (6.25 / 100);
    double avgLocalTaxRate_Texas = (1.94 / 100);
    double stateTaxRate_Utah = (5.95 / 100);
    double avgLocalTaxRate_Utah = (0.99 / 100);
    double levy_Utah = (1.25 / 100);
    double stateTaxRate_Vermont = (6.00 / 100);
    double avgLocalTaxRate_Vermont = (0.18 / 100);
    double stateTaxRate_Virginia = (5.30 / 100);
    double avgLocalTaxRate_Virginia = (0.35 / 100);
    double levy_Virginia = (1.00 / 100);
    double stateTaxRate_Washington = (6.50 / 100);
    double avgLocalTaxRate_Washington = (2.67 / 100);
    double stateTaxRate_West_Virginia = (6.00 / 100);
    double avgLocalTaxRate_West_Virginia = (0.39 / 100);
    double stateTaxRate_Wisconsin = (5.00 / 100);
    double avgLocalTaxRate_Wisconsin = (0.44 / 100);
    double stateTaxRate_Wyoming = (4.00 / 100);
    double avgLocalTaxRate_Wyoming = (1.36 / 100);

    // Alogorithm for Cost
    if ((stateName == "Alabama") && (month == "July") && (day == 15 || day == 16 || day == 17))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Alabama")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Alabama) + (purchaseAmount * avgLocalTaxRate_Alabama);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Alaska")
    {
        total = purchaseAmount + (purchaseAmount * avgLocalTaxRate_Alaska);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Arizona")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Arizona) + (purchaseAmount * avgLocalTaxRate_Arizona);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if ((stateName == "Arkansas") && (month == "August") && (day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Arkansas")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Arkansas) + (purchaseAmount * avgLocalTaxRate_Arkansas);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "California")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_California) + (purchaseAmount * avgLocalTaxRate_California) + (purchaseAmount * levy_California);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Colorado")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Colorado) + (purchaseAmount * avgLocalTaxRate_Colorado);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if ((stateName == "Connecticut") && (month == "August") && (day == 21 || day == 22 || day == 23 || day == 24 || day == 25 || day == 26 || day == 27))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Connecticut")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Connecticut);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Delware")
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Florida")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Florida) + (purchaseAmount * avgLocalTaxRate_Florida);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Georgia")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Georgia) + (purchaseAmount * avgLocalTaxRate_Georgia);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Hawaii")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Hawaii) + (purchaseAmount * avgLocalTaxRate_Hawaii);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Idaho")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Idaho) + (purchaseAmount * avgLocalTaxRate_Idaho);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Illinois")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Illinois) + (purchaseAmount * avgLocalTaxRate_Illinois);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Indiana")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Indiana);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Iowa" && month == "August" && (day == 5 || day == 6))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Iowa")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Iowa) + (purchaseAmount * avgLocalTaxRate_Iowa);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Kansas")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Kansas) + (purchaseAmount * avgLocalTaxRate_Kansas);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Kentucky")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Kentucky);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Louisiana")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Louisiana) + (purchaseAmount * avgLocalTaxRate_Louisiana);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Maine")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Maine);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Maryland" && month == "August" && (day == 14 || day == 15 || day == 16 || day == 17 || day == 18 || day == 19 || day == 20))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Maryland")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Maryland);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Massachusetts" && month == "August" && (day == 14 || day == 15))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Massachusetts")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Massachusetts);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Michigan")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Michigan);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Minnesota")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Minnesota) + (purchaseAmount * avgLocalTaxRate_Minnesota);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Mississippi" && month == "July" && (day == 29 || day == 30))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Mississippi")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Mississippi) + (purchaseAmount * avgLocalTaxRate_Mississippi);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Missouri" && month == "April" && (day == 19 || day == 20 || day == 21 || day == 22 || day == 23 || day == 24 || day == 25))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Missouri")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Missouri) + (purchaseAmount * avgLocalTaxRate_Missouri);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }

    if (stateName == "Montana")
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Nebraska")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Nebraska) + (purchaseAmount * avgLocalTaxRate_Nebraska);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Nevada" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Nevada")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Nevada) + (purchaseAmount * avgLocalTaxRate_Nevada);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "New Hampshire")
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "New Jersey")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_New_Jersey) + (purchaseAmount * avgLocalTaxRate_New_Jersery);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "New Mexico")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_New_Mexico) + (purchaseAmount * avgLocalTaxRate_New_Mexico);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "New York")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_New_York) + (purchaseAmount * avgLocalTaxRate_New_York);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "North Carolina")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_North_Carolina) + (purchaseAmount * avgLocalTaxRate_North_Carolina);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "North Dakota")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_North_Dakota) + (purchaseAmount * avgLocalTaxRate_North_Dakota);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }

    if (stateName == "Ohio" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Ohio")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Ohio) + (purchaseAmount * avgLocalTaxRate_Ohio);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Oklahoma" && month == "August" && (day == 6 || day == 7 || day == 8))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Oklahoma")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Oklahoma) + (purchaseAmount * avgLocalTaxRate_Oklahoma);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Oregon")
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Pennsylvania")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Pennsylvania) + (purchaseAmount * avgLocalTaxRate_Pennsylvania);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Rhode Island")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Rhode_Island);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "South Carolina" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "South Carolina")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_South_Carolina) + (purchaseAmount * avgLocalTaxRate_South_Carolina);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "South Dakota")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_South_Dakota) + (purchaseAmount * avgLocalTaxRate_South_Dakota);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Tennessee" && month == "July" && (day == 29 || day == 30 || day == 31))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Tennessee")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Tennessee) + (purchaseAmount * avgLocalTaxRate_Tennessee);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }

    if (stateName == "Texas" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Texas")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Texas) + (purchaseAmount * avgLocalTaxRate_Texas);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }

    if (stateName == "Utah")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Utah) + (purchaseAmount * avgLocalTaxRate_Utah) + (purchaseAmount * levy_Utah);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Vermont")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Vermont) + (purchaseAmount * avgLocalTaxRate_Vermont);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Virginia")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Virginia) + (purchaseAmount * avgLocalTaxRate_Virginia) + (purchaseAmount * levy_Virginia);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Washington")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Washington) + (purchaseAmount * avgLocalTaxRate_Washington);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "West Virginia" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "West Virginia")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_West_Virginia) + (purchaseAmount * avgLocalTaxRate_West_Virginia);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Wisconsin")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Wisconsin) + (purchaseAmount * avgLocalTaxRate_Wisconsin);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }

    if (stateName == "Wyoming")
    {
        total = purchaseAmount + (purchaseAmount * stateTaxRate_Wyoming) + (purchaseAmount * avgLocalTaxRate_Wyoming);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else
    {
    }
}
