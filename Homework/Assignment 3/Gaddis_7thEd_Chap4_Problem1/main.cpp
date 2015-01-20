/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 17, 2015, 2:49 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chapter4_Problem1)
*/
//System Library
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main()
{
   int num1, num2;
  

   // Get numbers from user
   cout << "Please enter a number ";
   cin >> num1;
   cout << "Please enter a second number ";
   cin >> num2;
   // Determine which number is smaller/larger.
   if (num1< num2)
       cout<<num1<<" is less than "<<num2<<endl;
   else
       cout<<num1<<" is greater than "<<num2<<endl;
   //exit program
   return 0;
}

