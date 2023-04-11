#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void printlist(node* &head)
{
    if(head==NULL)
    {
        cout<<"List is Empty";
        return;
    } 

    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    getchar();
    getchar();

}

int length_of_list(node* &head)
{
    node* temp=head;
    int ans=0;
    while(temp!=NULL)
    {
        ans++;
        temp=temp->next;
    }
        
    return ans;
}
void Insert_at_end(node* &head,node* &tail,int d)
{
    if(head==NULL)
    {
        node* ptr = new node(d);
        head=ptr;
        tail=ptr;
    }
    else
    {
        node* ptr = new node(d);
        tail->next=ptr;
        tail=ptr;
    }
}
bool ispallindrome(node* head,node* tail)
{
    if(head==tail)
    {
        return true;
    }

    if(tail->next==head)
    return true;

    if(head->data==tail->data)
    {
        node* temp=head;
        while(temp->next!=tail)
        temp=temp->next;

        return ispallindrome(head->next,temp);
    }

    return false;
}

int main()
{
    int n;
    cin>>n;
    node* head=NULL;
    node* tail=NULL;

    while(n--)
    {
        int i;
        cin>>i;
        Insert_at_end(head,tail,i);
    }

    bool i=ispallindrome(head,tail);
    if(i==1)
    cout<<"true";
    else
    cout<<"false";


}
