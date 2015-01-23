/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 22, 2015, 7:20 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Function Prototypes
//
int main(int argc, char** argv) {
    //Declare and initialize values
    int game = 1,
        points ,
        total=0;
    cout<<"Enter the number of points your team has earner\n";
    cout<<"so far in the season, then enter -1 when finished.\n\n";
    cout<<"Enter the points for game "<<game<<":"<<endl;
    cin>>points;
    
    while (points !=-1)
    {
        total +=points;
        game++;
        cout<<"Enter the points for game"<<game<<endl;
        cin>>points;
        
    }
    cout<<"\nThe total points are "<<total<<endl;
    return 0;
}