#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n],b[n],c[10000],count=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int i=0;i<n;i++)
    cin>>b[i];
    
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
                b[j]=-8000;
                count++;
                break;
            }

        }
        
    }

    for(int i=0;i<=count-2;i++)
    {
        bool isswap=false;
        for(int j=0;j<=count-2-i;j++)
        {
            if(c[j]>c[j+1])
            {
                swap(c[j],c[j+1]);
                isswap = true;
            }
        }
        if(isswap==false)
        break;
    }
    for(int l=0;l<count;l++)
    cout<<c[l]<<" ";
    
}
