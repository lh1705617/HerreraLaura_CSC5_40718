/* 
 * File:   main.cpp
 * Author: Laura
 * Created on January 19, 2015, 11:14 AM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap4_Problem11)
 */

#include <iostream>
using namespace std;
//Global Constants
 
//Function Prototypes

//Execution begins here
int main()
{
    //Declare Variables
    int  POINTS_60 = 4,
         POINTS_30 = 3,
         POINTS_15 = 2,
         POINTS_5= 1;

   int books;  // Number of books purchased

   // Ask user how many books they have purchased.
   cout << "Enter the number of books you have purchased this\n"
        << "month to display the number of points you have earned: ";
   cin >> books;
   
   // Display how many pints were earned this month.
   if (books >= POINTS_60)
      cout << "You have earned 60 points this month.\n";
   else if (books >= POINTS_30)
      cout << "You have earned 30 points this month.\n";
   else if (books >= POINTS_15)
      cout << "You have earned 15 points this month.\n";
   else if (books >= POINTS_5)
      cout << "You have earned 5 points this month.\n";
   else
      cout << "You have not earned any points this month.\n";
   
   return 0;
}