#include<iostream>
using namespace std;
main(){
string movieName;
float adultTicketPrice;
float childTicketPrice;
int adultTicketSold;
int childTicketSold;
float donatingPercentage;
cout<<"Enter the name of movie :";
cin>>movieName;
cout<<"Enter adult ticket price :";
cin>>adultTicketPrice;
cout<<"Enter child ticket price :";
cin>>childTicketPrice;
cout<<"Enter the adult ticket sold :";
cin>>adultTicketSold;
cout<<"Enter the child ticket sold :";
cin>>childTicketSold;
cout<<"Enter the donating percentage :";
cin>>donatingPercentage;
float totalAmount;
totalAmount = (adultTicketPrice*adultTicketSold) + (childTicketPrice*childTicketSold);
float donatedAmount;
donatedAmount = (totalAmount*donatingPercentage)/100;
float amountAfterDonation;
amountAfterDonation = totalAmount-donatedAmount;
cout<<"The total Amount generated is :"<<totalAmount<<endl;
cout<<"Amount After Donation is :"<<amountAfterDonation<<endl;
}