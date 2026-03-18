#include <stdio.h>

int main(){
    int arr[100],n,i,pos,value;
    
    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter %d elements: ",n);
    for(i=0;i<n;i++){   
        scanf("%d",&arr[i]);}

    printf("enter position to insert(1 to %d): ",n+1);
    scanf("%d",&pos);

    printf("enter the value: ");
    scanf("%d",&value);

    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = value;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}