/* 
 * File:   main.cpp
 * Author: Laura
 *
 * Created on January 13, 2015, 11:59 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char tank;
    int mildr;
    float mpg;
    
    //Calculate MPG
    mpg=tank/mildr;
    
    cout<<"How many gallons of gas does your car hold? "<<endl;
    cin>>tank;
    cout<<"How many miles can you drive on a single tank of gas?"<<endl;
    cin>>mildr;
    cout<<"According to the information you entered, you get ";
    cout<<mpg<<" miles per gallon."<<endl;
    return 0;
}

