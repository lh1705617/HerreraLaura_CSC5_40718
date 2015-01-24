/* 
 * File:   main.cpp
 * Author: Laura
 *
 * Created on January 23, 2015, 2:43 PM
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
  string name;
  int numStudents;
  do{
    cout << "How many students ? (Enter a number between 1 and 25) \n";
    cin >> numStudents;
  } while (numStudents < 1 || numStudents>25);

  for (int i = 1; i <= numStudents; i++){ // i++ means i = i+1
    cout << "Please enter the name for student #" << i << "\n";
    cin >> name;

  }
  return 0;
}