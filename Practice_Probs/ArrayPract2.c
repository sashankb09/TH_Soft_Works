#include<stdio.h>

int delete(int arr[],int size,int pos){
    for(int i =0;i<size-1;i++){
        if(i==pos){
            arr[i]=arr[i+1];
        }
        
    }
    return size-1;
}

int main(){
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
      int *arr1 = (int *)malloc(size * sizeof(int));
     printf("Enter the array ele's :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    int pos;
    printf("enter the position:");
    scanf("%d",&pos);
   size=  delete(arr1,size,pos);
    for(int i=0;i<size;i++){
        printf("%d",arr1[i]);
    }
    free(arr1);
}