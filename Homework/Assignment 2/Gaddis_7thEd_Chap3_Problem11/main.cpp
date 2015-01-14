/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 14, 2015, 10:12 AM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap3_Problem11)
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables and initialize
    float erToDlr=0.85;//January 14, 2015
    float ynToDlr=117.07;  //Same Date
    float dollars,euros,yen;
    //Input the number of dollars and then convert
    cout<<"Input the number of dollars "<<endl;
    cout<<"You wish to convert."<<endl;
    cin>>dollars;
    //Convert to all the currencies
 
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //Output the results
    cout.setf(ios::fixed);
    cout.precision(2);
  
    cout<<dollars<<" =    "<<euros<<"(euros)"<<endl;
    cout<<dollars<<" = "<<yen<<"(yen)"<<endl;
    //Exit stage right!
    return 0;
}


