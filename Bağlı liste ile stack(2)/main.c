#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node{
	int data;
	struct Node* next;
}
*top=NULL;

void push(int x){
	struct Node* t;
	t=(struct Node*)malloc(sizeof(struct Node));
	if(t==NULL){
		printf("Stack if full\n");
		
	}
	else{
		t->data=x;
		t->next=top;
		top=t;
	}
}

int pop(){
	struct Node *t;
	int x=-1;
	if(top==NULL){
		printf("Stack is Empty\n");
	}
	else{
		t=top;
		top=top->next;
		x=t->data;
		t->next=NULL;
		free(t);
	}
	return x;
}

void Display(){
	struct Node *p;
	p=top;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	push(10);
	push(20);
	push(30);
	
	Display();
	
	printf("%d\n",pop());
	
	Display();
	
	return 0;
}