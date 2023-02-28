#include<stdio.h>

/*void main(){
    int a1,a2,i,j;
    printf("Enter The first array size and second array size = ");
    scanf("%d%d",&a1,&a2);
    int b1[a1],b2[a2],b3[a1+a2];
    for(i=0;i<a1;i++){
        printf("Enter first array %d th position value",i+1);
        scanf("%d",&b1[i]);
    }for(i=0;i<a2;i++){
        printf("Enter second array %d th position value",i+1);
        scanf("%d",&b2[i]);
    }
    for(i=0;i<a1;i++){
        b3[i] = b1[i];
    }
    for(i=0;i<a2;i++){
        b3[i+a1] = b2[i];
    }
    for(i=0;i<a1+a2;i++){
        for(j=0;j<a1+a2;j++){
            if(b3[i] > b3[j]){
                int temp = b3[j];
                b3[j]=b3[i];
                b3[i] = temp;
            }
        }
    }
    printf("final array\n");
    for(i=0;i<a1+a2;i++){
       printf("%d \t",b3[i]);
    }
}*/
