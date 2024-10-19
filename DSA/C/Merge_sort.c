#include<stdio.h>
int main()
{   
    // int m,n,a,b;
    // printf("m\n");
    // scanf("%d",&m);

    // printf("n\n");
    // scanf("%d",&n);
    // int arra[m];
    // int arrb[n];
    // printf("arra\n");
    // for(a=0;a<m;a++){
    //     scanf("%d",arra[a]);
    // }
    // printf("arrb\n");
    // for(b=0;b<n;b++){
    //     scanf("%d",arrb[b]);
    // }
    int arra[5]={9,3,7,1,5};
    int arrb[5]={4,}
   
    int arrc[10];
    int i=0,j=0,k=0;
    while(i<m,j<n){
        if(arra[i]<arrb[j]){
            arrc[k]=arra[i];
            i++;
            k++;
        }
        else if(arra[i]>arrb[j]){
            arrc[k]=arrb[j];
            j++;
            k++;
        }
    }
    while(i<=5){
        arrc[k]=arra[i];
        i++;
        k++;
    }
    while(j<=5){
        arrc[k]=arrb[j];
        j++;
        k++;
    }
    for(k=0;k<10;k++){
        printf(" %d ",arrc[k]);
    }
    return 0;
}
