/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 20, 2015, 7:44 PM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap5_Problem7)
 * shows exponential increase
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables
    unsigned int salary=1; //integer number of pennies
    unsigned short nDays; //number of days to double your wallet
    unsigned int totPay=salary;
    //output the number of days to double your wallet
    cout<<"How many days to double the contents of your salary"<<endl;
    cout<<"Your Salary starts with $0.01"<<endl;
    cout<<"Maximum days allowed = 30"<<endl;
    cin>>nDays;
     cout<<fixed<<setprecision(2)<<showpoint;
      cout<<"On the first day ";
    cout<<"your salary =    $"<<setw(10)<<salary/100.0f<<endl;
    //calculate the result
    for (int day=2;day<=nDays;day++){
        salary*=2;
        totPay+=salary; cout<<"After   "<<day<<"   days ";
    cout<<"your salary =     $"<<setw(12)<<salary/100.0f<<endl;
    }
    //output results
   
    cout<<"After "<<nDays<<" days ";
    cout<<"Your total pay = $"<<setw(11)<<totPay<<endl;
        
    return 0;
}
    