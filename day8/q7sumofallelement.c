
#include<stdio.h>
void main(){
    int a[3][3],b[3][3], sum[3][3],i,j;
     printf("Enter the elemnets");

     for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d\t",&a[i][j]);

        }
     }

          for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d\t",&b[i][j]);

        }
     }

     for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d \t",sum[i][j]);
        }
        printf("\n");
     }
     

}


