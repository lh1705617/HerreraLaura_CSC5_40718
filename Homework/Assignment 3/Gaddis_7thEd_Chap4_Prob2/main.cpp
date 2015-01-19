/* 
 * File:   main.cpp
 * Author: Laura
 *
 * Created on January 17, 2015, 7:08 PM
 */

// This program uses a switch statement to determine
// the item selected from a menu.
// This program uses a switch statement to determine
// the item selected from a menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int num=1,2,3,4,5,6,7,8,9,10;   // To hold the monthly charges

   // Constants for membership rates
   const int 1= I,
             2= II,
             3=III,
             4=IV,
             5= V;

   // Constants for menu choices
   const int CHOICE_ONE = 1,
             CHOICE_TWO = 2,
             CHOICE_THR = 3,
             CHOICE_FOU = 4,
             CHOICE_FIV = 5;

   // Display the menu and get a choice.
   cout << "\t\tHealth Club Membership Menu\n\n"
        << "1. Standard Adult Membership\n"
        << "2. Child Membership\n"
        << "3. Senior Citizen Membership\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
   cin >>num ;
   
   // Set the numeric ouput formatting.
   cout << fixed << showpoint << setprecision(2);
   
   // Respond to the user's menu selection.
   switch (num)
   {
      case CHOICE_ONE:
         cout << "For how many months? ";
         cin > charges << endl;
         break;
         
      case CHILD_CHOICE:
         cout << "For how many months? ";
         cin >> months;
         charges = months * CHILD;
         cout << "The total charges are $" << charges << endl;
         break;
         
      case SENIOR_CHOICE:
         cout << "For how many months? ";
         cin >> months;
         charges = months * SENIOR;
         cout << "The total charges are $" << charges << endl;
         break;
        
      case QUIT_CHOICE:
         cout << "Program ending.\n";
         break;
         
      default:
         cout << "The valid choices are 1 through 4. Run the\n"
              << "program again and select one of those.\n";
   }

   return 0;
}