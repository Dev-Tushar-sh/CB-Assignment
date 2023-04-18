#include<iostream>
#include<stack>

using namespace std;
void insertdown(stack<int>& s,int ans)
{
	//base case
	if(s.empty()==true)
	{
		s.push(ans);
		return;
	}

	//recursive case
	int t=s.top();
	s.pop();
	insertdown(s,ans);
	s.push(t);
}
void reversestack(stack <int>& s)
{
	//base case
	if(s.size()==1)
	return;

	//recusive case
	int ans = s.top();
	s.pop();
	reversestack(s);
	insertdown(s,ans);

}

int main() 
{
	stack <int> s;
	int n;
	cin>>n;
	int t=n;
	while(t--)
	{
		int data;
		cin>>data;

		s.push(data);
	}

	reversestack(s);

	while(n--)
	{
		cout<<s.top()<<endl;
		s.pop();
	}

	return 0;
}
