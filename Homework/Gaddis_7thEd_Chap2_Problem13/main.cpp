/* 
 * File:   main.cpp
 * Author: Laura Herrera    
 * Purpose: Gaddis_7thEd_Chapter2_Problem13
 *
 * Created on January 11, 2015, 5:34 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global constants
//Function prototypes

//Execution begins here
int main(int argc, char** argv) {

//Declare variables
    float cost = 12.67; //Cost of circuit board before markup
    float markup = .40; //Percentage of Markup
    float markupAmount = cost*markup; //Markup of circuit board
    float retailPrice = cost + markupAmount; //Retail price of circuit board
    
    //Calculate totals of circuit board with 40% markup
    cout<<"Cost of circuit board = $ "<<cost<<endl;
    cout<<"Markup amount (40%) = $"<<std::setprecision(3)<<markupAmount<<endl;
    cout<<"Retail price of circuit board = $"<<std::setprecision(4)<<retailPrice<<endl;
   
    return 0;
}