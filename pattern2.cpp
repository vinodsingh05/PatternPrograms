
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter how many line of * you want:";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        
        for(;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}