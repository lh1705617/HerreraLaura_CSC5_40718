/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 13, 2015, 8:50M
 */

#include <iostream>

using namespace std;
//Global Constants
const int CNVHRMN=60;
const int CNVMNSC=60;

/*
 * 
 */
int main(int argc, char** argv) {
//clare variables
  float mph; //mph on treadmill
  float hpm; //pace as hours per mile
  float mpm; // miles per minute
  int impm; // miles per mmin as an int
  float frasc; //fraction left for sec per mile
  
  //prompt for input
  cout<<"How many miles are you running in an hour?"<<endl;
  cout<<"Format answer as a float."<<endl;
  cin>>mph;
  //calculate the relevant pace
  hpm=1/mph;
  mpm=hpm*CNVHRMN;
  impm=static_cast<int>(mpm);
  frasc=(mpm-impm)*CNVMNSC;
  //output results
  cout<<mph<<" = ";
  cout<<impm<<"(mins)";
  cout<<mpm<<" (secs)"<<endl;

  return 0;
}