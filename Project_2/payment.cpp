#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <string.h>

using namespace std;

int main(){

    string stateName, month;
    double purchaseAmount;
    int day;
    int year; 
    double total;
    

    cout << "State Name: " << endl;
    getline(cin, stateName);
    cout << "Purchase amount: " << endl;
    cin >> purchaseAmount;
    cout << "Provide the month: " << endl;
    cin.ignore();
    getline(cin, month);
    cout << "Provide the day: " << endl;
    cin >> day;
    cout << "Provide the year: " << endl;
    cin >> year;





    //Check for valid state input out of 50 states

    //Note: Normally I would use a != for the comparison but each time I ran it, it didn't work so I just left it as an empty if statement if it == and else has the code
    //I know this is probably bad practice but if its not broken don't fix it?

   if ( stateName == "Alabama" || stateName == "Alaska" || stateName == "Arizona" || stateName == "Arkansas" || stateName == "California" ||
        stateName == "Colorado" || stateName == "Connecticut" || stateName == "Delaware" || stateName == "Florida" || stateName == "Georgia" || 
        stateName == "Hawaii" || stateName == "Idaho" || stateName == "Illinois" || stateName == "Indiana" || stateName == "Iowa" || stateName == "Kansas" ||
        stateName == "Kentucky" || stateName == "Louisiana" || stateName == "Maine" || stateName == "Maryland" || stateName == "Massachusetts" || stateName == "Michigan" ||
        stateName == "Minnesota" || stateName == "Mississippi" || stateName == "Missouri" || stateName == "Montana" || stateName == "Nebraska" || stateName == "Nevada" ||
        stateName == "New Hampshire" || stateName == "New Jersey" || stateName == "New Mexico" || stateName == "New York" || stateName == "North Carolina" || 
        stateName == "North Dakota" || stateName == "Ohio" || stateName == "Oklahoma" || stateName == "Oregon" || stateName == "Pennsylvania" || stateName == "Rhode Island" ||
        stateName == "South Carolina" || stateName == "South Dakota" || stateName == "Tennessee" || stateName == "Texas" || stateName == "Utah" || stateName == "Vermont" ||
        stateName == "Virginia" || stateName == "Washington" || stateName == "West Virginia" || stateName == "Wisconsin" || stateName == "Wyoming" || cin.fail() )
   {

   }

   else
   {
    cout << "Invalid state!" << endl;
    return 0;
   }

   
    
    //Check for valid purchase amount
    if(purchaseAmount <= 0 || cin.fail() )
    {
        cout << "Invalid amount!" << endl;
        return 0;
    }

    else{
        
    }
 

   //Check for valid month
   if (month == "January" || month == "February" || month == "March" || month == "April" || month == "May" || month == "June" || month == "July" || month == "August" ||
        month == "September" || month == "October" || month == "November" || month == "December" || cin.fail() )
        {
           
        }
    else
    {
        cout << "Invalid month!" << endl;
        return 0;
    }


    // Check for valid day
    if ( day < 1 || day > 31 || cin.fail() )
    {
        cout << "Invalid day!" << endl;
        return 0;
    }
    else{
       
    }

    // Check for valid year
    if( year < 1 || year > 2025 || cin.fail() )
    {
        cout << "Invalid year!" << endl;
        return 0;
    }
    else{
        
    }


    //Alogorithm for Cost
  if( (stateName == "Alabama") && (month == "July") && (day == 15 || day == 16 || day == 17)) 
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if(stateName == "Alabama")
    {
        total = purchaseAmount + (purchaseAmount * 0.04) + (purchaseAmount * 0.0514);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    } //Works
    else{}

    if( stateName == "Alaska" )
    {
        total = purchaseAmount + (purchaseAmount * 0.0143);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{} //Works

    if(stateName == "Arizona")
    {
        total = purchaseAmount + (purchaseAmount * 0.056) + (purchaseAmount * 0.0277);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{} //Works

    if((stateName == "Arkansas") && (month == "August") && (day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Arkansas")
    {
        total = purchaseAmount + (purchaseAmount * 0.065) + (purchaseAmount * 0.0293);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    } //Works
    else{}

    
    if(stateName == "California")
    {
        total = purchaseAmount + (purchaseAmount * 0.0725) + (purchaseAmount * 0.0131) + (purchaseAmount * 0.01);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{} //Figured out problem for everything above California, will need to test once code is finished

    
    if(stateName == "Colorado")
    {
        total = purchaseAmount + (purchaseAmount * 0.0290) + (purchaseAmount * 0.0473);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{} 

    if((stateName == "Connecticut") && (month == "August") && (day == 21 || day == 22 || day == 23 || day == 24 || day == 25 || day == 26 || day == 27))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Connecticut")
    {
        total = purchaseAmount + (purchaseAmount * 0.0635);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Delware")
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Florida")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600) + (purchaseAmount * 0.0105);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;   
    }
    else{}

    if(stateName == "Georgia")
    {
        total = purchaseAmount + (purchaseAmount * 0.0400) + (purchaseAmount * 0.0329);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;  
    }
    else{}

    if(stateName == "Hawaii")
    {
        total = purchaseAmount + (purchaseAmount * 0.0400) + (purchaseAmount * 0.0041);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;  
    }
    else{}

    if(stateName == "Idaho")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600) + (purchaseAmount * 0.0003);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;  
    }
    else{}

    if(stateName == "Illinois")
    {
        total = purchaseAmount + (purchaseAmount * 0.0625) + (purchaseAmount * 0.0249);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Indiana")
    {
        total = purchaseAmount + (purchaseAmount * 0.0700);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Iowa" && month == "August" && (day == 5 || day == 6))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Iowa")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600) + (purchaseAmount * 0.0082);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}
    
    if(stateName == "Kansas")
    {
        total = purchaseAmount + (purchaseAmount * 0.0650) + (purchaseAmount * 0.0217);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}
    
    if(stateName == "Kentucky")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Louisiana")
    {
        total = purchaseAmount + (purchaseAmount * 0.0445) + (purchaseAmount * 0.0500);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Maine")
    {
        total = purchaseAmount + (purchaseAmount * 0.0550);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Maryland" && month == "August" && (day == 14 || day == 15 || day == 16 || day == 17 || day == 18 || day == 19 || day == 20))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if(stateName == "Maryland")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Massachusetts" && month == "August" && (day == 14 || day == 15))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Massachusetts")
    {
        total = purchaseAmount + (purchaseAmount * 0.0625);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Michigan")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Minnesota")
    {
        total = purchaseAmount + (purchaseAmount * 0.0688) + (purchaseAmount * 0.0055);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Mississippi" && month == "July" && (day == 29 || day == 30))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Mississippi")
    {
        total = purchaseAmount + (purchaseAmount * 0.0700) + (purchaseAmount * 0.0007);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Missouri" && month == "April" && (day == 19 || day == 20 || day == 21 || day == 22 || day == 23 || day == 24 || day == 25))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Missouri")
    {
        total = purchaseAmount + (purchaseAmount * 0.0423) + (purchaseAmount * 0.0390);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }

    if(stateName == "Montana")
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Nebraska")
    {
        total = purchaseAmount + (purchaseAmount * 0.0550) + (purchaseAmount * 0.0135);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Nevada" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Nevada")
    {
        total = purchaseAmount + (purchaseAmount * 0.0685) + (purchaseAmount * 0.0129);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "New Hampshire")
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if (stateName == "New Jersey")
    {
        total = purchaseAmount + (purchaseAmount * 0.0663) + (purchaseAmount * -0.0003);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "New Mexico")
    {
        total = purchaseAmount + (purchaseAmount * 0.0513) + (purchaseAmount * 0.0269);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "New York")
    {
        total = purchaseAmount + (purchaseAmount * 0.0400) + (purchaseAmount * 0.0449);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "North Carolina")
    {
        total = purchaseAmount + (purchaseAmount * 0.0475) + (purchaseAmount * 0.0222);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Nebraska")
    {
        total = purchaseAmount + (purchaseAmount * 0.0500) + (purchaseAmount * 0.0185);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if (stateName == "Ohio" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Ohio")
    {
        total = purchaseAmount + (purchaseAmount * 0.0575) + (purchaseAmount * 0.0142);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;

    }
    else{}

     if (stateName == "Oklahoma" && month == "August" && (day == 6 || day == 7 || day == 8))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Oklahoma")
    {
        total = purchaseAmount + (purchaseAmount * 0.0450) + (purchaseAmount * 0.0442);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;

    }
    else{}
    
    if(stateName == "Oregon")
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Pennsylvania")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600) + (purchaseAmount * 0.0034);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Rhode Island")
    {
        total = purchaseAmount + (purchaseAmount * 0.0700);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if (stateName == "South Carolina" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "South Carolina")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600) + (purchaseAmount * 0.0143);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;

    }
    else{}

    if (stateName == "South Dakota")
    {
        total = purchaseAmount + (purchaseAmount * 0.0450) + (purchaseAmount * 0.0190);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Tennessee" && month == "July" && (day == 29 || day == 30 || day == 31))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "Tennessee")
    {
        total = purchaseAmount + (purchaseAmount * 0.0700) + (purchaseAmount * 0.0247);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }

    if(stateName == "Texas" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if(stateName == "Texas")
    {
        total = purchaseAmount + (purchaseAmount * 0.0625) + (purchaseAmount * 0.0194);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }

    if(stateName == "Utah")
    {
        total = purchaseAmount + (purchaseAmount * 0.0595) + (purchaseAmount * 0.0099) +  (purchaseAmount * 0.0125);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Vermont")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600) + (purchaseAmount * 0.0018);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Virginia")
    {
        total = purchaseAmount + (purchaseAmount * 0.0530) + (purchaseAmount * 0.0035) +  (purchaseAmount * 0.01);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Washington")
    {
        total = purchaseAmount + (purchaseAmount * 0.0650) + (purchaseAmount * 0.0267);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if (stateName == "West Virginia" && month == "August" && (day == 5 || day == 6 || day == 7))
    {
        total = purchaseAmount;
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else if (stateName == "West Virginia")
    {
        total = purchaseAmount + (purchaseAmount * 0.0600) + (purchaseAmount * 0.0039);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Wisconsin")
    {
        total = purchaseAmount + (purchaseAmount * 0.0500) + (purchaseAmount * 0.0044);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    if(stateName == "Wyoming")
    {
        total = purchaseAmount + (purchaseAmount * 0.0400) + (purchaseAmount * 0.0136);
        cout << fixed << showpoint << setprecision(2);
        cout << "Please pay a total of $" << total << endl;
        return 0;
    }
    else{}

    
}
