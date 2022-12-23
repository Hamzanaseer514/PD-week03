#include<iostream>
using namespace std;
main(){
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
cout<<"Enter your name :";
cin>>name;
cout<<"Enter marks in subject 1 :";
cin>>subject1;
cout<<"Enter marks in subject 2 :";
cin>>subject2;
cout<<"Enter marks in subject 3 :";
cin>>subject3;
cout<<"Enter marks in subject 4 :";
cin>>subject4;
cout<<"Enter marks in subject 5 :";
cin>>subject5;
float sum;
float percentage;
sum = subject1+subject2+subject3+subject4+subject5; 
percentage = (sum*100)/500;
cout<<"Your name is :"<<name<<endl;
cout<<"Your Percentage is :"<<percentage<<endl;

}