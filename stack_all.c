 #include<stdio.h>
 #include <stdlib.h>
 #define MAXSIZE 100
 
 struct stack
 {
 	int stack [MAXSIZE];
 	int top;
 	
 	
 };
 
 void push (struct stack *pu )
 {
 	
 	int item;
 	if (pu->top==MAXSIZE-1)
		{
		printf("\n The stack is Full");
		exit(0);
		}
		else
		{
		printf("\n Enter the Element to be Inserted= ");
		scanf("%d",&item);
		pu->stack [++pu->top]=item;
		
		//top=top+1; // -1+1=0
		//pu->stack[top]=item;
		}
	
 }
 
 void pop (struct stack *po)
 {
 	
 	int item;
 	if(po->top==-1)
 	{
		printf("\n The stack is empty");
		exit(0);
	}
	else
	{
		item=po->stack[po->top--];
		
		//item=po->stack[top];
		//top=top-1;
		printf("\n The Deleted Element is=%d",item);	
		
	}
 }
 
 void traverse (struct stack *pt)
 {
 	int i;
 	
 	if(pt->top==-1)
 	{
 		
 		printf("\n The stack is empty");
	}
	else
	{
		printf("\n\n The Elements in the stack is/are...: ");
		for (i=pt->top;i>=0;i--)
		{
		printf("\n %d", pt->stack[i]);	
		}
	}
 }
 
 
 int main()
 
 {
 	int choice;
 	int check=1;
 	
 	struct stack *ps;
 	
 	ps=(struct stack *) malloc (100* sizeof(struct stack));
 	
 	ps->top=-1;
 	
 	do
 	{
		printf("\n 1. PUSH Operation");
		printf("\n 2. POP Operation");
		printf("\n 3. Traverse Operation");
		printf("\n Enter Your Choice= ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			
			case 1: 
					push(ps);
					break;
			case 2: 
					pop(ps);
					break;
			case 3:
					traverse(ps);
					break;
			default:
					printf("\n You Entered wrong choice");
		}
		
		printf("\n\n Press 1 for continue and 2 for Exit the environment= ");
		scanf("%d",&check);
	
	}
	
	
	while (check!=2);
 
 	return 0;
 	
 	
 }
