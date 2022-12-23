#include<iostream>
using namespace std;
main(){
int numb;
int digit;
int result;
cout<<"Enter the number :";
cin>>numb;
digit = numb%10;
result = digit;
numb = numb/10;

digit = numb%10;
result = result + digit;
numb = numb/10;

digit = numb%10;
result = result+digit;
numb = numb/10;

digit = numb%10;
result = result+digit;
numb = numb/10;
cout<<"The sum is :"<<result;



}
