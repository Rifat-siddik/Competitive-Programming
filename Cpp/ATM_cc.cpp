/*Pooja would like to withdraw X US Dollar from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 US Dollar.

Calculate Pooja's account balance after an attempted transaction.*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

int x;
float y;
cin>>x>>y;
if(x % 5 == 0 && (x + 0.50) <= y){
cout << fixed << setprecision(2) << (y - x - 0.50) << endl;
}else{
cout << fixed << setprecision(2) << y << endl;}
}