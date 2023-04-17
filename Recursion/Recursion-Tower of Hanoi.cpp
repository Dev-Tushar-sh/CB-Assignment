#include<iostream>
using namespace std;
int count=0;

void TOH(int d,string source,string destination,string helper)
{
    //base case
    if(d==0)
    {
        return;
    }
    //recursive case
    TOH(d-1,source,helper,destination);
    cout<<"Move "<<d<< "th disc from "<<source<<" to "<<destination;
    cout<<endl;
    count++;
    TOH(d-1,helper,destination,source);

}
int main()
{
    int d;
    cin>>d;

    TOH(d,"T1","T2","T3");
    cout<<count;
}
