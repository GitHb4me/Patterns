#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int count=n-1,p;
    for(int i=n;i<n*2;i++){
    for(int j=0;j<i;j++)
    {
        if(j<count)
        {cout<<n-j<<' ';}  
        else{ p=n-count;cout<<n-count<<' ';}

    }   
    for(int g=p+1;g<=n;g++)
    {
        cout<<g<<' ';
    }
     count--;
     cout<<endl;
        }
return 0;
}                       
