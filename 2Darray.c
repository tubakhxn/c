#include<stdio.h>

int main(){
    int arr[100], size, odd_count = 0, even_count = 0, i;

    printf("Enter array size\n");
    scanf("%d",&size);

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);


    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 1)
            odd_count++;
        else
            even_count++;
    }
}