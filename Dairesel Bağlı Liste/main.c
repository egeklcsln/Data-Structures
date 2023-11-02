#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct n{
	int x;
	struct n * next;
};
typedef struct n node;

void bastir(node * r){
	node * iter =r;
	printf("%d\n",iter->x);
	iter= iter->next;
	while(iter!=r){
	printf("%d\n",iter->x);
	iter=iter->next;	
}}







void ekle( node * r,int x){
	node * iter =r;
	
	while(iter->next!=r){
		iter=iter->next;
		}
	  iter->next=(node*)malloc(sizeof(node));
	  iter->next->x=x;
	  iter->next->next=r;
}











node* SiraliEkle(node * r,int x){
	if ( r==NULL){
		r=(node*)malloc(sizeof(node));
		r->next=r;
		r->x=x;
		return r;
	}
	if((r->x) >x){
			node * temp;
			temp =(node*)malloc(sizeof(node));
			temp->x =x;
			temp->next= r;
			node * iter = r;
			while(iter->next!=r){
				iter= iter->next;
			}
			iter->next=temp;
			return temp;
}
	node * iter= r;
	while(iter->next!=r && ((iter->next->x) <x)){
		iter=iter->next;
	}
	
	node * temp = (node*)malloc(sizeof(node));
	temp->next = iter->next;
	iter->next=temp;
	temp->x=x;
	return r;
	
	}	
	








node * sil(node * r,int x){
	node * temp;
	node * iter=r;
	if(r->x == x){
		while(iter->next!=r){
			iter=iter->next;
		}
		iter->next =r->next;
		free(r);
		return iter->next;
		 
	}
	while(iter->next!=r && iter->next->x != x ){
		iter= iter->next;
	}
	if(iter->next==r){
		printf("Sayi Bulunamadi\n");
		return r;
	}
	temp=iter->next;
	iter->next= iter->next->next;
	free(temp);
	return r;
	
}	
	
	
	
	



	
		
	
	
	
	

int main() {
	
	node* root;
	root =NULL;
	root=SiraliEkle(root,400) ;
	root=SiraliEkle(root,40) ;
	root=SiraliEkle(root,4) ;
	root=SiraliEkle(root,450) ;
	root=SiraliEkle(root,50) ;
	root=SiraliEkle(root,30) ;
	root=SiraliEkle(root,70) ;
	root=SiraliEkle(root,1000) ;
	root=SiraliEkle(root,500) ;
	bastir(root);
	printf("****************************************\n");
	root=sil(root,50);
	bastir(root);
	
	
	
	




	return 0;	
}