#include<stdio.h>
#include<iostream>
using std::cout;
using std::cin;
 int checkspace(int h)
{ 
   for(int b=0;b<h;b++){
    cout<<"*";}
    return 0;
}
int rev(int j){
for(int b=j;b>0;b--)
{
checkspace(j-b); // try this ----> checkspace(j-b+1); when for(int a=b-2;a>0;a--) 
for(int a=b-1;a>0;a--)
{                            
cout<<"* ";
}cout<<"\n";}
return 0;
}
int main(){
int n;
cin>>n;
int k=n-1;                     
//for(int b=1;b<=n*2-1;b++){     //n*2-1 converts any number to odd number while n*2 converts any number to even also doubles the number
//for(int a=1;a<=b*2-1;a++)
for(int b=0;b<n;b++)
{
checkspace(k-b); 
for(int a=0;a<b;a++)
{                            
cout<<"*"<<" ";
}cout<<"\n";a}
rev(n);
}  
/*
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9  this program prints following output*/
