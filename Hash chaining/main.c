#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node{
	int data;
	struct Node *next;
};

void SortedInsert(struct Node **H,int x){
	struct Node *t,*q=NULL,*p=*H;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data =x;
	t->next = NULL;
	if(*H==NULL){
		*H=t;
	}
	else{
		while(p && p->data <x){
			q=p;
			p=p->next;
		}
		if(p==*H){
			t->next=*H;
			*H=t;
		}
		else{
			t->next=q->next;
			q->next=t;
		}
		
	}
	
	}	


	
struct Node *Search(struct Node *p , int key)
{
	while(p!=NULL){
		if(key==p->data){
			return p;
		}
		p=p->next;
	}
	return NULL;
}

int hash(int key){
	return key%10;
}

void Insert(struct Node *H[], int key){
	int index = hash(key);
	SortedInsert(&H[index],key);
}




int main(int argc, char *argv[]) {
	struct Node *HT[10];
	int i;
	for(i=0;i<10;i++){
		HT[i]=NULL;
	}
	
	
	
	
	
	
	
	
	return 0;
}