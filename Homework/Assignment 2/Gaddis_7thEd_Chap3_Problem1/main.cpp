/* 
 * File:   main.cpp
 * Author: Laura
 *
 * Created on January 13, 2015, 11:20 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables and initialize
     float tank; 
     float mildriv;//Size of the tank, miles per gallon
    float mpg;
    mpg= tank + mildriv; //Calculates MPG
    
    cout<<"How many gallons of gas does your car hold? "<<endl;
    cin>>tank;
    cout<<"How many miles can you drive on a single tank of gas?"<<endl;
    cin>>mildriv;
    cout<<"According to the information you entered, you get ";
    cout<<mpg<<" miles per gallon."<<endl;
    

    return 0;
}

