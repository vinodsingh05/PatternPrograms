
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n=";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        for(int j=i;j<2*n-1-i;j++)
        {
            cout<<"*";
        }
            
        cout<<endl;
    }

    return 0;
}