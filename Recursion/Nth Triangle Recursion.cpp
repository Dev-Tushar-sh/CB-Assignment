#include<iostream>
using namespace std;

int nth(int n)
{
	if(n==1)
	return 1;
	
	return n+nth(n-1);

}
int main() {
	int n;
	cin>>n;

	cout<<nth(n);
	return 0;
}
