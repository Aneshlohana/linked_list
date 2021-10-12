#include<iostream>
using namespace std;


class Node
{
	public:
	int   data;
	Node* next;

}*first=NULL;


void create(int A[],int n)
 {  
   int i;    
   Node *t,*last;    
   first=new Node;
   first->data=A[0];
   first->next=NULL;    
   last=first;       
   for(i=1;i<n;i++)    
   {        
   t=new Node;
   t->data=A[i];        
   t->next=NULL;       
   last->next=t;        
   last=t;    
   } 
}

void Display(Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
 } 


int main()
{
	int A[]={2,3,7,9,10};
	create(A,5);
	Display(first);
	return 0;
}
