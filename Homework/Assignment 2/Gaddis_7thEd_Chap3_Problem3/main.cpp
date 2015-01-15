/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 14, 2015, 3:24 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap3_Problem3)
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float test1, test2, test3;  // Scores of all 3 tests
    float average;              // Average of all 3 test scores

    // Get the three test scores.
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score: ";
    cin >> test2;
    cout << "Enter the third test score: ";
    cin >> test3;
    
    // Calculate the average of the scores.
    average = (test1 + test2 + test3) / 3.0;
    
    // Display the average.
    cout<<setprecision(1)<<fixed<<showpoint;
    cout << "The average score is: " << average << endl;
    
    return 0;
}

