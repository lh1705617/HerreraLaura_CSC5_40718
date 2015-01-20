/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 15, 2015, 7:09 AM
 * Purpose: Homework assignment (Gaddis_8thEd_Chapter3_Problem6)
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
    const float sugconv = 1.5/48;//Sugar conversion
    const float butconv = 1.0/48;//Butter conversion
    const float flconv = 2.75/48;//Flour conversion
    float nCookie;   //Number of cookies
    
    //Original ingredients for 48 cookies
    cout<<"The following ingredients will yield 48 cookies:"<<endl;
    cout<<"- 1.5 cups of sugar"<<endl;
    cout<<"- 1 cup of butter"<<endl;
    cout<<"- 2.75 cups of flour"<<endl;
    //Prompt user to enter new amount of cookies
    cout<<"If your wish to make more or less than 48 cookies, please enter the desired "<<endl;
    cout<<"amount of cookies you would like to make to get the adjusted ingredients: "<<endl;
    cin>>nCookie;
    cout<<"In order to make "<<nCookie<<" cookies you will need the following ingredients: "<<endl;
    //Calculate new ingredient amount and output results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"- "<<nCookie*sugconv<<" cups of sugar"<<endl;
    cout<<"- "<<nCookie*butconv<<" cups of butter"<<endl;
    cout<<"- "<<nCookie*flconv<<" cups of flour"<<endl;
   
  
    //Exit Stage Right!
    return 0;
}