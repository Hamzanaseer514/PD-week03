#include<iostream>
using namespace std;
main(){
float initialVelocity;
float time;
float acceleration;
float finalVelocity;
cout<<"Enter Initial velocity :";
cin>> initialVelocity;
cout<<"Enter Time :";
cin>> time;
cout<<"Enter the Acceleration :";
cin>> acceleration;
finalVelocity = (acceleration*time) + initialVelocity;
cout<<"The Final velocity is :"<<finalVelocity;
}