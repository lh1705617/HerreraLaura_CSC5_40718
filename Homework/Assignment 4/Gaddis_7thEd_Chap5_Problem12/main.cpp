/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 20, 2015, 1:22 PM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap5_Problem12)
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
    int f1=32,f2=212;
    float c1=0,c2=100;
    float cEqua,cInterp;
    //Loop to create table out
    cout<<setprecision(4)<<fixed<<showpoint;
   cout<<" Eq Celsius Interp Celsius : "<<endl;
    for(int fahr=f1;fahr<=f2;fahr+5){
        cEqua=5.0f/9.0*(fahr-32);
        cInterp=c1+(c2-c1)/(f2-f1)*(fahr-f1);
        cout<<setw(6)<<fahr<<cEqua<<cInterp<<endl;
    }
    
    return 0;
}
    