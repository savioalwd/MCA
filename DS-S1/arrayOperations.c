#include<stdio.h>
int size,i;
int a[100];
void create(){
    printf("enter array size");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter first array %d th position value",i+1);
        scanf("%d",&a[i]);
    }
}
void insert(){
    printf("enter element to insert");
    scanf("%d",&a[size]);
    size++;
}
void deletes(){
    a[size] == 0;
    size--;
}
void view(){
    for(i=0;i<size;i++){
        printf("%d \t",a[i]);
    }
}

void main(){
int opt =1;
    while(opt){
        printf("\n\n...................\n");
		printf("1) CREATE\n");
		printf("2) INSERT\n");
		printf("3) DELETE\n");
		printf("4) VIEW\n");
		printf("0) QUIET\n\n");
		printf("choose your option : ");
		scanf("%d",&opt);
		printf("\n\n...................\n");
		switch(opt){
			case 1:
				create();
				break;
			case 2:
				insert();
				break;
			case 3:
				deletes();
				break;
			case 4:
				view();
				break;
			default:
				printf("Invalid option! Try Again.");
		}
    }
}
