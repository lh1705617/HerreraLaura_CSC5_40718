/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 23, 2015, 1:16 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap5_Problem19)
 */

//system Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!
int main(int argc, char** argv) {

      float expense,   // Expenses for the month
            count=1,   // To hold a number of expenses
            begBud, // Begining monthly budget
            total = 0; // Accumulator
        
	//Prompt user to enter monthly budget
        cout<<"Please enter your budget amount for this month: "<<endl;
        cin>>begBud;
        cout<<"Enter your expenses, then enter -1 when finished."<<endl;
        //prompt user to enter each expense
        cout << "Enter expense # " << count << ": ";
        cin >> expense;

   while (expense != -1)
   {  
      total += expense;
      count++;
      cout << "Enter expense # " << count << ": ";
      cin >> expense;
   }
   cout<<fixed<<setprecision(2)<<showpoint;
   cout << "\nYour total expenses for this month are $ " << total << endl;
   if (total<=begBud)
       cout<<"Congratulations! you are under budget. You are $ "<<begBud-total<<" under budget\n";
   else
       cout<<"You are over budget by $"<<begBud-total<<"."<<endl;
   return 0;
}