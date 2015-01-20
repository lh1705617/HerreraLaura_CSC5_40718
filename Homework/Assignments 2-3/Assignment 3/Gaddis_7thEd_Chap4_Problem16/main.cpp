 /* File:   main.cpp
 * Author: Laura Herrera
 * Created on January 17, 2015, 1:00 PM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap3_Problem16)
 */


//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv)
{//Execution Begins Here!
    int   cal, fatGram; //number of calories/serving and total fat grams/serving
    float calFat,percCal; //total calories from fat and percentage of calories from fat
    //Prompt user for number of calories and fat grams
    cout<<"This program calculates the percentage of calories that come from fat.\n\n",
    cout<<"Please enter the number of calories per serving of a particular food: "<<endl;
    cin>>cal;//input calories
    cout<<"Please enter the number of fat grams per serving of a particular food "<<endl;
    cin>>fatGram;//input fat grams
    calFat = fatGram * 9; //calculate calories from fat
    percCal= (calFat/cal)*100; //calculate percentage of calories from fat
    //output results
    if (cal >0 && cal > calFat && fatGram> 0)
        cout<<"The percentage of calories that come from fat are: "<<percCal<<" %"<<endl; 
    else if (cal < calFat)
        cout<<"Error!! The number of calories from fat cannot be greater than the total number of calories.\n",
        cout<<"Either the fat grams or the calories were entered incorrectly. Please try again."<<endl;
    else    
        cout<<" Invalid Entry!! The number of calories and number of fat grams must be greater than 0."<<endl;
    
    return 0;
}
