//PROGRAM TO IMPLEMENT QUEUE USING ARRAYS
#include<stdio.h>
#include <stdlib.h>
#define MAX 50

	int queue_arr[MAX];
	int rear = -1;
	int front =-1;
	int isEmpty();

	//This function will insert an element to the queue
	void Enqueue ()
	{
	 int added_item;
	 if (rear==MAX-1)
	 {
	 printf("\nQueue Overflow\n");
	 return;
	 }
	 else
	 {
	 if (isEmpty() == 1) /*If queue is initially empty */
	 {
	 printf("Queue is Empty, Your are going to create a queue\n");
	 front = 0;
	 }
	 printf("\nInput the element for adding in queue:");
	 scanf("%d", &added_item);
	 rear=rear+1;
	//Inserting the element
	 queue_arr[rear] = added_item ;
	 }
	}/*End of insert()*/
	
	//This function will delete (or pop) an element from the queue
	void Dequeue()
	{
	 if (isEmpty() == 1)
	 {
	 printf ("\nQueue Underflow or Queue is Empty\n");
	 return;
	 }
	 else
	 {
	 //deleteing the element
	 printf ("\nElement deleted from queue is : %d\n",
	 queue_arr[front]);
	 front=front+1;
	 }
	}/*End of del()*/
	
	//Displaying all the elements of the queue
	void Traverse()
	{
	 int i;
	 //Checking whether the queue is empty or not
	 if (isEmpty() ==1)
	 {
	 printf ("\nQueue is empty\n");
	 return;
	 }
	 else
	 {
	 printf("\nFront is %d and Queue is :\n",front);
	 for(i=front;i<= rear;i++)
	 printf("%d ",queue_arr[i]);
	 printf("\n");
	 }
	}/*End of display() */
	
	/*Checks whether the Queue is Empty or not */
	int isEmpty()
	{
	    if (front == -1 && rear == -1) // Queue is empty if both front and rear are -1
	    {
	        return 1; // True
	    }
	    else 
	    {
	        return 0; // False
	    }
	}

int main()
{
 	int choice;
 	while (1)
	{
	 //system("cls");
	 //Menu options
	 printf("\n1.Enqueue\n");
	 printf("2.Dequeue\n");
	 printf("3.Traverse\n");
	 printf("4.Size\n");
	 printf("5.Quit");
	 printf("\nEnter your choice:");
	 scanf("%d", & choice);
	 switch(choice)
		 {
		 	
		 case 1 :
		 Enqueue();
		 break;
		 case 2:
		 Dequeue();
		 break;
		 case 3:
		 Traverse();
		 break;
		 case 4:
		 printf("The size of the queue is %d\n",rear-front+1);
		 break;
		 case 5:
		 exit(1);
		 default:
		 printf ("\n Wrong choice\n");
	 
 		}/*End of switch*/
 	}/*End of while*/
 	return 0;
 //return NAN;
}/*End of main()*/
