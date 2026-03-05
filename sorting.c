#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the  size of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the aeear element :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int term;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                term = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = term;
            }
        }
    }    
    printf("The shorted array is:");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }                                      
    return 0;
}