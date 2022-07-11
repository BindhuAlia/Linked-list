#include <bits/stdc++.h>
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

void display()
{
	struct Node *p;
	p=head;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

int size()
{
	struct Node *k;
	int c;
	k=head;
	while(k!=NULL)
	{
		c++;
		k=k->next;
	}
	return c;
}

int main() {
	insert(5);
	insert(4);
	insert(3);
	display();
	
	// accessing 1st element
	cout<<head->data<<endl;;
	
	//to get size
	cout<<"size is "<<size();
	
	

	return 0;
}