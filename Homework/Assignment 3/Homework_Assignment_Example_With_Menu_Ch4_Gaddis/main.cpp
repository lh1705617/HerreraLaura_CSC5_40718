/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 19, 2015, 9:10 PM
 * Purpose: Homework Assignment ( Example_With_Menu_Chap4_Gaddis_7thED)
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CNVLBGM=453.6;//Grams per pound
const int CNVHRMN=60;//Conversion from Hrs to Mins
const int CNVMNSC=60;//Conversion from Min to Secs


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Assignment 3 Menu Prompt
    cout<<"Solution 1 Gaddis 7thEd Chap 4 Prob 1"<<endl;
    cout<<"Solution 2 Gaddis 7thEd Chap 4 Prob 4"<<endl;
    cout<<"Solution 3 Gaddis 7thEd Chap 4 Prob 5"<<endl;
    cout<<"Solution 4 Gaddis 7thEd Chap 4 Prob 6"<<endl;
    cout<<"Solution 5 Gaddis 7thEd Chap 4 Prob 9"<<endl;
    cout<<"Solution 6 Gaddis 7thEd Chap 4 Prob 10"<<endl;
    cout<<"Solution 7 Gaddis 7thEd Chap 4 Prob 11"<<endl;
    cout<<"Solution 8 Gaddis 7thEd Chap 4 Prob 16"<<endl;
    cout<<"Solution 9 Gaddis 7thEd Chap 4 Prob 21"<<endl;
    
    
    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        case 1:{
            cout<<"You have choosen Solution 1"<<endl;
            //Declare variables
            const float CONC=1e-3f;//Sweetener concentration
            float wtCoke=3.5e2f;//Weight of coke in grams
            float kMouse=5.0f;//Quantity of sweetener that kills a mouse in grams
            float wtMouse=3.5e1f;//Wt of mouse in grams
            float kPer, wtDsPer;
            int   nCans;
            //Input the desire wt of person
            cout<<"Input your desired weight in lbs"<<endl;
            cout<<"Format the input as a float"<<endl;
            cin>>wtDsPer;
            wtDsPer*=CNVLBGM;//Convert to grams
            //Calculation
            kPer=kMouse/wtMouse*wtDsPer;
            nCans=kPer/wtCoke/CONC;
            //Output the limit of what you can drink
            cout<<"Number of cans of diet coke ";
            cout<<"that will kill you = "<<nCans<<endl;
            break;
        }
        case 2:{
            cout<<"You have chosen Solution 2"<<endl;
            //Declare variables
            float mph;//Miles per hour on a treadmill
            float hpm;//Pace as hours per mile
            float fmpm;//Miles per minute as a float
            int   impm;//Miles per minute as an integer
            float fmspm;//Fraction left for seconds per mile
            //Prompt for the input
            cout<<"How many miles are you running"<<endl;
            cout<<"in an hour?"<<endl;
            cout<<"Format answer as a float."<<endl;
            cin>>mph;
            //Calculate the relevant pace
            hpm=1/mph;
            fmpm=hpm*CNVHRMN;
            impm=static_cast<int>(fmpm);
            fmspm=(fmpm-impm)*CNVMNSC;
            //Output the result
            cout<<mph<<" (mph) = ";
            cout<<impm<<" (mins) ";
            cout<<fmspm<<" (secs) per mile"<<endl;
            break;
        }
        default: cout<<"Incorrect Choice!"<<endl;
    }
    //Exit Stage Right!
    return 0;