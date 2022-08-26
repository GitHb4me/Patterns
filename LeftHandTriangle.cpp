#include<stdio.h>
#include<iostream>
using std::cout;
using std::cin;
int rev(int n)
{
for(int b=n;b>0;b--){ 
for(int a=b;a>0;a--)
{
cout<<'*'<<" ";
}cout<<"\n";}
return 0;
}
int main(){
int n;
cin>>n;
for(int b=0;b<n;b++){
for(int a=0;a<=b;a++)
{                                  
cout<<'*'<<" ";
} cout<<"\n";} rev(n);}
