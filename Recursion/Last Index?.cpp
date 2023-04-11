#include<iostream>
using namespace std;
int ans=0;
int lastindex(int arr[],int k,int n)
{
	if(n==0)
	return -1;

	if(arr[n]==k)
	{
		ans = n;
		return ans;
	}

	return lastindex(arr,k,n-1);
	
}
int main() {
	int n,k;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];

	cin>>k;

	cout<<lastindex(arr,k,n-1);
	return 0;
}
