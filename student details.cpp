#include<iostream>
#include<stdlib.h>
struct node{
	char name[20];
	int rollno;
	float marks;
	struct node *l;
	
};
void student()
{
	struct node *t,*n,*h='\0';
	struct node *p0;
	char ch='y';
	while(ch!='n')
	{
		n = new node;
		if(h=='\0')
		{
			
			
			h=n;
			t=n;
			std::cout<<"enter name ";
		std::cin>>n->name;
		std::cout<<"\n enter roll no. ";
		std::cin>>n->rollno;
		std::cout<<"\n enter avg marks ";
		std::cin>>n->marks;
		}
		else{
			
		std::cout<<"enter name ";
		std::cin>>n->name;
		std::cout<<"\n enter roll no. ";
		std::cin>>n->rollno;
		std::cout<<"\n enter avg marks ";
		std::cin>>n->marks;
		t->l=n;
		t=n;
		t->l='\0';
		}
		std::cout<<"\n you want to add student data enter y for yes and n for no ";
		std::cin>>ch;
    }
     struct node *p='\0';
	p=h;
	while(p!=NULL)
	{
		std::cout<<"name "<<p->name<<"rollno. "<<p->rollno<<"marks "<<p->marks<<"\n";
		p=p->l;
	}
}
	int main()
	{
	student();	
	return 0;
		
	 } 
