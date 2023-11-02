#include <stdio.h>
#include <stdlib.h>

struct n{
	struct n * next;
	int data;
};
typedef struct n node;

void bastir(node * root){
	while(root!=NULL){
	 printf("%d\n",root->data);
	 root = root->next;
}
}



int pop (node* root){
	if(root==NULL){
	 printf("Stack bos\n");
	 return -1;
	 }
	node * iter =root;
	
	if(iter->next==NULL){
		int rvalue=root->data;
		free(root);
		return rvalue;
	}
	
	while(iter->next->next!=NULL){
      iter=iter->next;
}	 	
     node* temp = iter->next;
     int rvalue=temp->data;
     iter->next = NULL;
     free(temp);
     return rvalue;

}





node* push(node * root,int a){
	if(root==NULL){
	 root=(node*)malloc(sizeof(node));
	 root->data = a;
	 root->next=NULL;
	 return root;
}

node* iter=root;
while(iter->next!=NULL){
	iter=iter->next;
}
node * temp= (node*)malloc(sizeof(node));
temp->data=a;
temp->next=NULL;
iter->next=temp;
return root;

}




	

int main(int argc, char *argv[]) {
	node * s =NULL;
	s=push(s,10);
	s=push(s,20);
	s=push(s,30);
	printf("%d\n",pop(s));
	printf("%d\n",pop(s));
	printf("%d\n",pop(s));
	
	
	return 0;
}