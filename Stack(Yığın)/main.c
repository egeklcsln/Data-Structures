#include <stdio.h>
#include <stdlib.h>
struct s {
	int boyut;
	int tepe;
	int*dizi;
};
typedef struct s stack;

stack* tanim(){
	stack *s=(stack*)malloc(sizeof(stack));
	s->dizi=NULL;
	s->boyut=2;
	s->tepe=0;
	return s;
}



int pop(stack *s){
	if(s->tepe<=0 || s->dizi==NULL){
		printf("Dizi bos");
		return -1 ;
	}
	if(s->tepe<=s->boyut/4){
		int *dizi2 = (int*)malloc(sizeof(int)*s->boyut/2);
		for(int i=0;i<s->tepe;i++){
			dizi2[i]=s->dizi[i];
		}
		free(s->dizi);
		s->dizi=dizi2;
		s->boyut = (s->boyut)/2;
		
	}
 return s->dizi[--s->tepe];
}



void push(int a,stack *s){
	if(s->dizi==NULL){
		s->dizi = (int*)malloc(sizeof(int)*2);
	}
	
	
	if(s->tepe>=s->boyut-1){
		int *dizi2 = (int*)malloc(sizeof(int)*s->boyut*2);
		for(int i=0;i<s->boyut;i++){
			dizi2[i]=s->dizi[i];
		}
		free(s->dizi);
		s->dizi=dizi2;
		s->boyut = (s->boyut)*2;
	}
  s->dizi[s->tepe++]=a;
}



void bastir(stack * s){
  printf("boyut: %d\n",s->boyut);
  for (int i=0;i<s->tepe;i++){
  printf("%d\n",s->dizi[i]);
}
}


int main(int argc, char *argv[]) {
	 stack *s1=tanim();
	 stack *s2=tanim();
	 
	 for (int i=0;i<10;i++){
	 	push(i*10,s1);
	 }
	 bastir(s1);
	 for(int i=0;i<10;i++){
	 	push(pop(s1),s2);
	 }

	
	
	
	
	
	
	
	return 0;
}