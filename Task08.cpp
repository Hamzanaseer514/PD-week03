#include<iostream>
using namespace std;
main(){
float vegetablePrice;
float fruitPrice;
int vegetablesKilogram;
int fruitsKilogram;
cout<<"Enter the vegetable price per kilogram :";
cin>>vegetablePrice;
cout<<"Enter the fruit price per kilogram :";
cin>>fruitPrice;
cout<<"Total kilogram of vegetables :";
cin>>vegetablesKilogram;
cout<<"Total kilogram of fruits :";
cin>>fruitsKilogram;
float totalEarning;
totalEarning = (vegetablePrice*vegetablesKilogram) + (fruitPrice*fruitsKilogram);
float earningInRs;
earningInRs = totalEarning/1.94;
cout<<"Earning of all fruits and vegetables in rupees is :"<<earningInRs;




}