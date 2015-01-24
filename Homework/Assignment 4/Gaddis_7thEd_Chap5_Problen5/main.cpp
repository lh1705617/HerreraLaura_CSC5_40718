/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 23, 2015, 12:44 PM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap5_Problem5)
 * 
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
 
    //declare variables
    float curMem=2500,incr=.04;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The current annual fee for our country club membership is $"<<curMem<<endl;
    cout<<"During the next six years we will increase our membership fee 4% every year.\n"<<endl;
    cout<<"Below is a list of the anticipated fees for the next six years:"<<endl;
    cout<<"_______________________________________________________________"<<endl;
    for(int year=1;year<7;year++){
        curMem+=curMem*incr;
        cout<<" year "<<year<<", the annual membership fee will increase to $"<<curMem<<endl;
    }
    //Exit Program! 
    return 0;
}