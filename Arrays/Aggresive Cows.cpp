#include<iostream>
#include<algorithm>
using namespace std;
bool check(int arr[],int n,int mid,int cows)
{
    int pos = arr[0];
    cows--;
    for(int i=1;i<n;i++)
    {
        if(arr[i]-pos>=mid)
        {
            pos=arr[i];
            cows--;
        }

    }
    if(cows<=0)
    return true;
   
    return false;

}
int main()
{
        int n;
        cin>>n;
        int arr[n];

        int cows;
        cin>>cows;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);//we have to sort it
        
        int l=1;
        int hi=arr[n-1];
        int mid;
        int ans=0;
        while(l<=hi)
        {
            mid=(l+hi)/2;
            if(check(arr,n,mid,cows))
            {
                ans=mid;    
                l=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        cout<<ans;

    return 0;
}
