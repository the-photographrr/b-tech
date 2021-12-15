#include<stdio.h>
int a[5],n = 5,front = -1,rear = -1,i,num;

void add_front(){

	int pos;
	if(front == -1){
		pos = 0;
	}
	else if(front == 0){
	pos = (n-1);
	
	}
	else{
		pos = front -1;
	}
	if(pos == rear)
		printf("Queue is full");
	else{
	printf("Enter the number");
	scanf("%d",&num);	
	front = pos;
	a[front] = num;
	
	if(rear == -1){
		rear = 0;
	}
	}
	return;
	}
	
void del_rear(){
	if(rear == -1){
		printf("Queue is empty");
	}
	
	else if(front == rear){
		front = -1;
		rear = -1;
	}
	
	else{
		if(rear == 0)
			rear = n-1;
		else
			rear = rear -1;
	}
	return;
	
}

void add_rear(){

	if(front == (rear+1)%n){
		printf("Queue is full");
		
	}
	else{
	
		
		printf("Enter the number");
		scanf("%d",&num);
		
		rear = (rear+1)%n;
		a[rear] = num;
	
	}
	if(front == -1){
		front =0;
	}
	return;
}

void del_front(){
	
	
	if(front == -1){
		printf("Queue is empty");
		return;
	}
	if(front == rear){
	front = -1;
	rear = -1;
	}
	else
		front = (front+1)%n;
	return;	
		
}

void display(){
	if(rear == -1){
	
		printf("Queue is empty");
		return;
	}

	if(front <= rear){
		for(i = front; i<= rear; i++)
			printf(", %d ",a[i]);
			
		}
	else{
		for(i = front; i < n ; i++){
			printf(", %d ",a[i]);
		}
		for(i = 0; i <= rear; i++){
			printf(", %d ",a[i]);
		} 
	
	}
	
	}



void main(){

int loop = 1,choice;
while(loop){
	printf("\n 1. Add front \n 2. Delete front \n 3. Add rear \n 4. Delete rear \n 5. Display \n 6. Stop \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			add_front();
			break;
	
		case 2:
			del_front();
			break;
		case 3:
			add_rear();
			break;
			
		case 4:
			del_rear();
			break;
		case 5:
			display();
			break;
		case 6:
			loop = 0;
			break;
			
		default:
			printf("Enter a valid choice");
	
	
	}


}
return;
}


