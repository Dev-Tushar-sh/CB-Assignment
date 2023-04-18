#include<iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
		int i=0,j=i+(k-1);
		while(j!=n)
		{
			for(int o=i;o<=j;o++)
			{
				if(arr[o]<0)
				{
					cout<<arr[o]<<" ";
					break;
				}
				if(o==j)
				{
					cout<<"0 ";
				}
			}
			i=i+1;
			j=j+1;
		}

		cout<<endl;
	}
	return 0;
}
