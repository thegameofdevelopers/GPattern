#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i==n-1)
            {
                if(j>0&&j<n-1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else if(i<ceil(n/2))
            {
                if(j==0)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else if(i==ceil(n/2))
            {
                if(j!=1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else if(i>ceil(n/2))
            {
                if(j==0||j==n-1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            
        }
        cout<<"\n";
    }
    return 0;
}
