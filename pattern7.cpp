
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
        int j,k=1;
        for(j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        
        for(;j<=n;j++)
        {
            cout<<k++;
        }
        cout<<endl;
    }

    return 0;
}