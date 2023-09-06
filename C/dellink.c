#include<stdio.h>
#include<stdlib.h>
typedef struct LinkedList
{
	int n; 
	struct LinkedList *next;
}LL;
void add(LL **start,int t)
{
	LL *temp,*temp1;
	printf("\nenter 1: beginning\nenter 2: middle\nenter 3: end\n");
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		temp1=(LL*)malloc(sizeof(LL));
		printf("enter the value:");
		scanf("%d",&temp1->n);
		
		temp1->next=*start;
		*start=temp1;
	}
	if(choice==2)
	{
	 	int t,m=t/2;
	 	temp=(LL*)malloc(sizeof(LL));
	 	printf("enter the value:");
		scanf("%d",&temp->n);
		temp->next=0;
		temp1=*start;
			if(m==0)
			{
				temp->next=*start;
				*start=temp;
			}
			else
			{
				temp1=*start;
				while(m>1) // while(temp1->n<temp->n)
				{
					temp1=temp1->next;
					m--;
				}
					temp->next=temp1->next;
					temp1->next=temp;
				}
			
	}
	if(choice==3)
	{
	temp=(LL*)malloc(sizeof(LL));
	printf("enter the value:");
	scanf("%d",&temp->n);
	temp->next=0;
	if(*start==0)
	{
		*start=temp;
	}
	else
	{
		temp1=*start;
		while(temp1->next!=0)
		temp1=temp1->next;
		temp1->next=temp;
	}
}
}
void deletes(LL **start, int t)
{
	LL *temp, *temp1;

	int m=t/2;
	int ch;

	printf("PRESS: 1. delete at beginning, 2. delete in middle, 3. delete at last\n");
	scanf("%d",&ch);

	if(ch==1)
	{
		if(*start==0)
		{
		  printf("List is empty\n");	
		}
		else
		{
			temp = *start;
			*start=temp->next;
			temp->next=0;
			free (temp);
		}
		
	}	
	if(ch==2)
	{
		temp = *start;
		if(t==0)
		{
			printf("List is empty\n");
		}
		else
		{
			if(m==0)
			{
				printf("There is only one node which will be deleted\n");
				*start=0;
				free (temp);
			}
			else
			{
				if(t%2!=0)
					    {
						m=m+1;
						}
				while(m>1)
				{
						temp1= temp;
						temp = temp->next;
						m--;
				}	
				temp1->next = temp->next;
				free(temp);
			}
		}
	}
	if(ch==3)
	{
		if(*start==0)
		{
			printf("List is empty\n");
		}
		else
		{
			temp = *start;
			while(temp->next!=0)
			{
				temp1= temp;
				temp = temp->next;
			}
			temp1->next = temp->next;
			free (temp);
		}
	}
}
void display(LL *temp)
{
	printf("Linked List is:\n");
	while(temp)
	{
		printf("%d\t",temp->n);
		temp=temp->next;
	}
}
int main()
{
	LL *Base=0;
	int choice,t=0;
	while(1)
	{
		printf("\nPress 1 for Addition of a node, 2 for Display, 3 for delete, 4 for exit\n");
		scanf("%d",&choice);
			if(choice==1)
			{
			add(&Base,t);
			t++;
			}
			if(choice==2)
			display(Base);
			if(choice==3)
			{
			deletes(&Base, t);
			t--;
			}
			if(choice==4)
			exit(0);
	}
	return 0;
}