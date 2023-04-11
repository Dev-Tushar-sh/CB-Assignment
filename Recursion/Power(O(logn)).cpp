#include<iostream>
using namespace std;

int power(int n,int p)
{	
	int ans=1;
	//base case
	if(p==1)
	return n;
	//recursive case
	ans = n * power(n,p-1);
	return ans;

}
int main() {
	
	
	int n,p;
	cin>>n;
	cin>>p;

	cout<<power(n,p);
	return 0;
}
