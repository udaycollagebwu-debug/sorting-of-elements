#include<stdio.h>

int main(){
int n,i,j,temp;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array element:\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
        if(arr[j]<arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("The sorted array in descending order is:");
for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
    return 0;
}