#include<stdio.h>

int main() {
   int a[10],i,j,n,temp;
    printf("enter the number of elements in array: ");
    scanf("%d",&n);
    
    printf("enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("array before sorting: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    printf("\nthe sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

