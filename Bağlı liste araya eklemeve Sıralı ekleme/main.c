#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct n{
	int x;
	struct n* next;
};
typedef struct n node;

void ekle(node * iter,int x){
	while(iter->next!=NULL){
		iter = iter->next;
	}
	iter->next=(node*)malloc(sizeof(node));
	iter->next->x=x;
	iter->next->next=NULL;
	
}	

void bastir(node * iter){
	while(iter!=NULL){
		printf("%d\n",iter->x);
		iter=iter->next;
	}
}


node* SiraliEkle(node * iter,int x){
	if ( iter==NULL){
		iter=(node*)malloc(sizeof(node));
		iter->next=NULL;
		iter->x=x;
		return iter;
	}
	if(iter->x >x){
			node * temp;
			temp =(node*)malloc(sizeof(node));
			temp->x =x;
			temp->next= iter;
			return temp;
}
	node * r= iter;
	while(r->next!=NULL && r->next->x <x){
		r=r->next;
	}
	
	node * temp = (node*)malloc(sizeof(node));
	temp->next = r->next;
	r->next=temp;
	temp->x=x;
	return iter;
	
	}	



node * sil(node * r,int x){
	node * temp;
	node * iter=r;
	if(r->x == x){
		temp=r;
		r= r->next;
		free(temp);
		return r;
		 
	}
	while(iter->next!=NULL && iter->next->x != x ){
		iter= iter->next;
	}
	if(iter->next==NULL){
		printf("Sayi Bulunamadi");
		return r;
	}
	temp=iter->next;
	iter->next= iter->next->next;
	free(temp);
	return r;
	
}	
	
	














node* SiraliEkle2(node * iter,int x){
	if(iter==NULL){
		iter= (node*)malloc(sizeof(node));
		iter->x=x;
		iter->next=NULL;
		return iter;
	}
	if(iter->x>x){
		node* tmp =(node*)malloc(sizeof(node));
		tmp->x=x;
		tmp->next=iter;
		return tmp;
	}
	node * r = iter;
	while(r->next !=NULL && r->next->x < x ){
		r=r->next;
	}
	
	if(r->next==NULL){ 
		node* tmp = (node*)malloc(sizeof(node));
		tmp->x=x;
		tmp->next=NULL;
		r->next=tmp;
		return iter;
	}
	node* tmp = (node*)malloc(sizeof(node));
	tmp->x=x;
	tmp->next=r->next;
	r->next=tmp;
	return iter;
	
	
	}	
	
int varmi(node * root,int x){
	node* r=root;
	while(r!=NULL&& r->x!=x){
		r=r->next;
	}
	if(r==NULL){
		return 0;
	}
	return 1;
}







void sinav(node **liste1 , node** liste2){
	
	node *r = *liste1;
    node *r2 = NULL; 
    node *r3 = NULL; 
   
    node *tmp;

    while (r != NULL) {
        if (r->x % 2 == 0) {
            tmp = r;
            r = r->next;
            tmp->next = NULL;
            if (r2 == NULL) {
                r2 = tmp;
            } else {
                r2->next = tmp;
                r2 = tmp;
            }
        } 
		else {
            tmp = r;
            r = r->next;
            tmp->next = NULL;
            if (r3 == NULL) {
                r3 = tmp;
            } else {
                r3->next = tmp;
                r3 = tmp;
            }
        }
        
    }
    

    
	

}















int main(int argc, char *argv[]) {
	
/**	
	node * root;
	
	root=NULL;
	root=SiraliEkle2(root,5);
	root=SiraliEkle2(root,14);
	root=SiraliEkle2(root,3);
	root=SiraliEkle2(root,24);
	root=SiraliEkle2(root,30);
	root=SiraliEkle2(root,12);
	root=SiraliEkle2(root,6);
	root=SiraliEkle2(root,5);
	root=sil(root,5);
	printf("%d\n",varmi(root,5));
	bastir(root);
**/	
	node * root;
	node * root2;
	root=NULL;
	root2=NULL;
	root=SiraliEkle2(root,1);
	root=SiraliEkle2(root,2);
	root=SiraliEkle2(root,3);
	root=SiraliEkle2(root,4);
	root=SiraliEkle2(root,5);
	root=SiraliEkle2(root,6);
	root=SiraliEkle2(root,7);
	root=SiraliEkle2(root,9);
	root=SiraliEkle2(root,12);
	root=SiraliEkle2(root,14);
	root=SiraliEkle2(root,15);
	
	sinav(&root,&root2);
	bastir(root);
	
	
	return 0;
}