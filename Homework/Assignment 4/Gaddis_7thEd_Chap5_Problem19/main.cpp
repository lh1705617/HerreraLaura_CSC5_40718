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

      float expense,   // Game counter
            count=1,     // To hold a number of points
            begBud,
           total = 0; // Accumulator
        

        cout<<"Please enter your budget amount for this month: "<<endl;
        cin>>begBud;
        cout<<"Enter your expenses, then enter -1 when finished."<<endl;
        //
        cout << "Enter expense # " << count << ": ";
        cin >> expense;

   while (expense != -1)
   {  
      total += expense;
      count++;
      cout << "Enter expense # " << count << ": ";
      cin >> expense;
   }
   cout << "\nYour total expenses for this month are $ " << total << endl;
   if (total<=begBud)
       cout<<"Congratulations! you are under budget.";
   else
       cout<<"You are over budget by $"<<begBud-total<<"."<<endl;
   return 0;
}