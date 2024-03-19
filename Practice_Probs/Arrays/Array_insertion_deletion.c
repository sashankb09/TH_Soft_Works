#include<stdio.h>


int insert(char orrArr[] , int size , int position , char ins){
    for(int i=0;i<size;i++){
        if(orrArr[i]==orrArr[position]){
            orrArr[position]=ins;
        }
        
    }
}

int delete(char orrArr[] , int size , int position){
    for(int i=position;i<size-1;i++){
        
                 orrArr[i]=orrArr[i+1];
             
}
    
}


int main(){
    int size=4;
    int pos = 3;
    // int ins = 4;
    int positio=2;
    char ins = 'h';
    char arr[]={'a','b','c','d'};
 char res =  insert(arr,size,pos,ins);
 printf("After insertion :");
 for(int i=0;i<size;i++){
     printf("%c ",arr[i]);
 }

delete(arr,size+1,positio);
 printf("\nAfter Deletion :");
 for(int j=0;j<size;j++){
     printf("%c ",arr[j]);
 }
 return 0;
 
}