#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *head=NULL;

 void insert(int item)
 {
	 struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	 new_node->data=item;
	 new_node->next=head;
	 head=new_node;
 }
 
 int find(int target)
 {
	 struct Node *p;
	 p=head;
	 while(p!=NULL)
	 {
		 if (p->data==target)
		 return 1;
		 p=p->next;
	 }
	 return 0;
 }
int main()
{
	int n,target;
	cin>>n;
	cin>>target;
	for(int i=0;i<n;i++)
	{
		int n;
		cin>>n;
		insert(n);
	}
	cout<<find(target);
}