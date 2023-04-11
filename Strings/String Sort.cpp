#include<iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	string str[n];
    for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
            if(str[i].find(str[j])<=100 || str[j].find(str[i])<=100)
                {
                    if(str[i].length()>str[j].length())
                    {
                        continue;
                    }
                    else
                    swap(str[i],str[j]);
                }
            else if(str[i]>str[j])
                   swap(str[i],str[j]);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<str[i]<<endl;
	}
	return 0;
}
