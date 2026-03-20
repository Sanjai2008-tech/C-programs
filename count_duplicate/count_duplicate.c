#include <stdio.h>

int main(){
    int n,i,j,count,duplicate_count=0;

    printf("enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    int counted[n];

    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        counted[i]=0;
    }

    for(i=0;i<n;i++){

        if(counted[i]== 1){
            continue;
        }

        count=1;

        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                counted[j]=1;
            }
        }
        if(count>1){
            duplicate_count++;
        }
    }

    printf("the total duplicate values are: %d\n",duplicate_count);



}
