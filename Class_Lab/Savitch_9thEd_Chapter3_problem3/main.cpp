/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 15, 2015, 9:23 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable
    bool cusp=false;
    int month, day;
    string sign;
    //prompt for the input
    cout<<"Input the numerical/integer month you were born on "<<endl;
    cin>>month;
    cout<<"Input the numerical/integer day you were born on"<<endl;
    cin>>day;
    //determine the sign
    if (month==1&&day<20)sign="Capricorn";
    else if (month==1&&day>=20)sign="Aquarius";
    else if (month==2&&day<=18)sign="Aquarius";
    //output the sign and the cusp
    if (month==1&&day>18||day<22)cusp=true;
    cout<<"Your sign is "<<sign;
    if(cusp)cout<<" and you are on the cusp"<<endl;
    else cout<<endl;
    return 0;
}

