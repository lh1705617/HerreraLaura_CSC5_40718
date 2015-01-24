/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on: 
 */
//system Libraries 
#include <iostream>
#include<iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float ocnlvl=1.5, total=1.5;
    unsigned int year=2;
    //output the first year
    
    cout<<"In 1 Year the ocean laval will rise by "<<ocnlvl<<endl;
    while(year<26){
        total+=ocnlvl;
        cout<<"in "<<year<<" Year the ocean level will increase by "<<total<<"  millimeters"<<endl;
        year++;  
    }

    return 0;
}
