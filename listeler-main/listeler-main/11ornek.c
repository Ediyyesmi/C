#include <stdio.h>
#include <stdlib.h>

struct musteri{
	int hesapno;
	char name[30];
	double bakiye;
};

int main(){
	
	//dosya oluþturma
	
	int i;
	struct musteri hesapbilgi = {0,"",0.0};
	FILE* myptr;
	if((myptr=fopen("musteri.dat","w"))==NULL){
		printf("dosya acilamadi");
	}else{
		for(i=0;i<=100;i++){
			fwrite(&hesapbilgi ,sizeof(struct musteri),1,myptr);
		}
		printf("dosya olusturuldu\n\n");
		fclose(myptr);
	}
	
	
	
	//dosyaya yazma
	
	if((myptr=fopen("musteri.dat","w+"))==NULL){
		printf("dosya acilamadi");
	}else{
		printf("cikis icin 0 a basin\n");
		printf("hesapno girin: \n"); 
		scanf("%d",&hesapbilgi.hesapno);
		
		while(hesapbilgi.hesapno!=0){
			printf("ad gir: ");
            scanf(" %s", hesapbilgi.name); // Boþluk karakteri ekleyerek gereksiz karakterleri yutun
            printf("bakiye gir: ");
            scanf("%lf", &hesapbilgi.bakiye);
            fseek(myptr,(hesapbilgi.hesapno -1)*sizeof(struct musteri),SEEK_SET);
			fwrite(&hesapbilgi,sizeof(struct musteri),1,myptr);
			printf("hesapno girin: \n"); scanf("%d",&hesapbilgi.hesapno);
		}
		
		printf("dosyaya yazildi\n\n");
		fclose(myptr);
	}
	
	
	//dosyadan okuma
	
	if((myptr=fopen("musteri.dat","r"))==NULL){
		printf("dosya acilamadi");
	}else{
		
		while(!feof(myptr)){
			fread(&hesapbilgi,sizeof(struct musteri),1,myptr);
			if(hesapbilgi.hesapno!=0){
				printf("%d %s %lf\n",hesapbilgi.hesapno,hesapbilgi.name,hesapbilgi.bakiye);
			}
			}
		
		printf("dosyadan okuma yapildi\n\n");
		fclose(myptr);
	}
	
	
	
	getchar();
	return 0;
}
