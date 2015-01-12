/* 
 * File:   main.cpp
 * Author: Laura Herrera    
 * Purpose: Homework assignment (Gaddis_7thEd_Chapter2_Problem2)
 *
 * Created on January 11, 2015, 5:34 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {

//Declare variables
    float sales = 4.6e6; //Amount of sales this year
    float percentSales = .62; //Percent of sales generated]
    //Calculate sales generated 
    int salesGen = sales * percentSales;
    
    //Calculate percent of sales generated this year
    cout<<"The East Coast sales division will generate $"<<salesGen<<endl;
    cout<<"If the company has $ 4.6 million in sales this year."<<endl;
    return 0;
}

