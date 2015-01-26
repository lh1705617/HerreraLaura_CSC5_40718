/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 23, 2015, 8:22 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap5_Problem11)
 */
//System libraries
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries
//function prototypes
//global constants
//Execution begins here
int main() {
    //declare variables
    float strOrg =0.0; //starting number of organisms
    float popIncr= 0.0; //Average daily population increase as percentage
    int days=0; //number of days they will multiply
      //prompt user for inputs
    
    cout<<"This program will predict the size of a population of organisms"<<endl;
    cout<<"Please enter the number starting number of organisms: \n";
    cin>>strOrg;
    while (strOrg <2)
    { 
        cout<<"Starting size of population must be 2 or larger. Please re-enter population size. \n";
        cin>>strOrg;
        
    }
    cout<<"Please enter the average daily population increase as a percentage (ex.03 for 3%): \n";
    cin>>popIncr;
    while (popIncr < 0)
    {
        cout<<"Please enter a positive number.\n";
        cout<<"Please re-enter the average daily population increase as a percentage (ex.03 for 3%): \n";
        cin>>popIncr;
        
    }
     cout<<"Please enter the number of days they will multiply: \n";
     cin>>days;
    while (days < 1)
    {
         cout<<"Number of days must be at least 1 .\n";
         cout<<"Please re-enter the number of days they will multiply: \n";
         cin>>days;
     //Calculate population growth   
    }
     for (int count=0; count !=days; count++){
         strOrg = strOrg + (strOrg * popIncr);
         cout<<"On day "<<count + 1<<", The population size of the organisms was "<<setprecision(1)<<fixed<<strOrg<<endl;
        
     }
    
    return 0;
}

