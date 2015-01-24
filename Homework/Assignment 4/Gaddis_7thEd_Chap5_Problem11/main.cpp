/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 23, 2015, 8:22 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap5_Problem11)
 */
//System library
#include <iostream>
#include <iomanip>

using namespace std;
//user libraries
//function prototypes
//global constants
//Execution begins here
int main(int argc, char** argv) {
    int strOrg =2; //starting number of organisms
    float popIncr=0; //Average daily population increase as percentage
    int days ; //number of days they will multiply
    float totPop,popSize;
    //prompt user for inputs
    
    cout<<"This program will predict the size of a population of organisms"<<endl;
    cout<<"Please enter the number starting number of organisms: \n";
    cin>>strOrg;
    while (strOrg <2)
    { 
        cout<<"Starting size of population must be 2 or larger.\n";
        cin>>strOrg;
        cout<<"Please enter the number starting number of organisms: \n";
    }
    cout<<"Please enter the average daily population increase as a percentage (ex.03 for 3%): \n";
    cin>>popIncr;
    while (popIncr < 0)
    {
        cout<<"Please enter a positive number.\n";
        cin>>popIncr;
        cout<<"Please enter the average daily population increase as a percentage (ex.03 for 3%): \n";
    }
     cout<<"Please enter the number of days they will multiply: \n";
     cin>>days;
    while (days < 1)
    {
         cout<<"please enter a positive number.\n";
         cin>>days;
         cout<<"Please enter the number of days they will multiply: \n";
    }
     for (int day=days; day<days; day++)
         float totPop = popSize+(popIncr*popSize/100);
         cout<<"After "<<days<<" days "<<endl;
         cout<<"The population size of the organisms is "<<setw(2)<<totPop<<endl;
        
  
    
    return 0;
}

