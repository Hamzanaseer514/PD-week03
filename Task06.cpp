#include<iostream>
using namespace std;
main(){
float bagSize;
float bagCost;
float bagArea;
cout<<"Enter the siza of bag :";
cin>>bagSize;
cout<<"Enter the cost of the bag :";
cin>>bagCost;
cout<<"Enter the area covered by each bag :";
cin>>bagArea;
float fertilizerCost;
fertilizerCost = bagCost/bagSize;
float fertilizingCostPerArea;
fertilizingCostPerArea = bagCost/bagArea;
cout<<"The cost of Fertilizer per pound:"<<fertilizerCost<<endl;
cout<<"The cost of fertilizer the area per square meter :"<<fertilizingCostPerArea<<endl;






}