/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on: January 24, 2015 9:50 pm
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap5_Problem6)
 */

//System Libraries 
 
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main() {
//Declare variables
    float miles,
          hours,
          distance;
    //Description of program
    cout<<"\t\t This program will display the distance traveled per hour\n\n";
    //Prompt user for input
    cout<<"What is the speed of the vehicle in MPH? "<<endl; 
    cin>>miles;
   
    while(miles<=0){
        cout<<"Please enter a number greater than 0: "<<endl;
        cin>>miles;
    }
    cout<<"How many hours has the vehicle traveled? "<<endl; 
    cin>>hours;
    
    while(hours<1){
        cout<<"Hours must be at least one "<<endl;
        cin>>hours;
    }
    cout<<"Hour   Distance Traveled"<<endl;
    cout<<"--------------------------"<<endl;
    for(int count=1;count<=hours;count++){
        distance=miles*count;
        cout<<count<<setw(12)<<distance<<endl;
    }
    return 0;
}