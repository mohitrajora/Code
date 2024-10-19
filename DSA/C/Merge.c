#include<stdio.h>

int main(){
    int arra[5]={5,10,15,20,25};
    int arrb[5]={7,12,17,21,22};
    int arrc[10];
    int i=0,j=0,k=0;
    while(i<5,j<5){
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