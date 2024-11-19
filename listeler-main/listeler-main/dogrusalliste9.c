#include <stdio.h> 
#include <stdlib.h>


struct student{
	int no;
	char name[30];
	int age;
	struct student *next;
};
typedef struct student node;


void listele(node *head){
		node *p=head;
		while(p!=NULL){
			printf(" no: %d\n name: %s\n age: %d\n" ,p->no, p->name, p->age);
			p=p->next;
		}
}

int main(){
	

	int n,i;
	node *head=NULL, *p=NULL;
	printf("ogrenci sayisi: ");
	scanf("%d" ,&n);
	for(i=0;i<n;i++){
		if(i==0){
			head=(node*)malloc(sizeof(node));
			p=head;
		}else{
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
		}
		printf("%d. ogrenci no: ",i+1); scanf("%d" ,&p->no);
		printf("%d. ogrenci isim: ",i+1); scanf("%s" ,p->name);
		printf("%d. ogrenci yas: ",i+1); scanf("%d" ,&p->age);
	}	
	
	if (p != NULL) {
        p->next = NULL;
    }
	
	listele(head);
	
	
	p = head;
	node *temp;
	while (p != NULL) {
		temp = p;
		p = p->next;
		free(temp);
	}
	
	return 0;
}
