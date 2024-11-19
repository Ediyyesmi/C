#include <stdio.h>
#include <stdlib.h>

struct student {
	int yas;
	struct student *next;
};
typedef struct student node;

void sonaekle(int sayi){
	int stdno;
	node *p, *q, *head;
	node *addnode(node *head);
	node *newnode = (node*)malloc(sizeof(node));
	printf("yas girin: "); scanf("%d" ,&newnode->yas);
	printf("numaraniz: "); scanf("%d" ,&stdno);
	
	p=head;
	if(p->next==NULL){
		p->next=newnode;
	    newnode->next=NULL;
	}
}

void yazdir(){
	
}

int main(){
	
	int sayi, sayac=0;
	while(sayac !=2){
		printf("sayi gir: ");
		scanf("%d" ,&sayi);
		sonaekle(sayi);
		sayac++;
	}
	
	
	
	
	return 0;
}
