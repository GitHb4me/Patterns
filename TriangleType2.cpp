#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;//cin>>n;
    int count=n-1;
    for(int i=n;i<n*2;i++){
    for(int j=0;j<i;j++)
    {
        if(j<count)
        {cout<<' '<<' ';}  // <---- remove one single space for no space in between numbers here 
        else{ cout<<i-n<<' ';}

    }   
    count--;
    cout<<endl;
        }
return 0; }
