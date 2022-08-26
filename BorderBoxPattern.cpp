#include<bits/stdc++.h>  //program to print rectangular border
using std::cout;
using std::endl;
int main()
{
  for(int i=0;i<6;i++){
              for(int j=0;j<20;j++){
                 if(i==0|i==5|j==0|j*2==38)   //j*2 bcoz one space character is extra adding in a# to output
                 cout<<'*'<<' '; //a#  -----------^
                 else{ cout<<' '<<' ';}  // so here extra space is adding for false statment bcoz j only iterate for 20 times but we have to print after 38th position due to extra space adding at a# for better look
                }cout<<endl;
            }                 
}     // return 0; // is default in main function so no need to write okay if(j==0|j==20){ int a=6; while(a--){ cout<<'*'; } }
