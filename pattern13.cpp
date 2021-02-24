
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
        int k=1;
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        
        for(int j=0;j<2*i-1;j++)
        {
            cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}