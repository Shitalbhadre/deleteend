#include<stdio.h>
void main()
{
    int n,i,a[10];
    printf("Enter the number of elements you want in an array:");
    scanf("%d", &n);

    printf("Enter the array elements:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Array elements are:");
    for(i=0; i<n; i++){
        printf("%d\n",a[i]);
    }

    for(i=n; i>1; i--){
    a[n-1]=a[n-2];
    }

    printf("Array after deleting the ending elements:");
    for(i=0; i<n-1; i++){
        printf("%d\n", a[i]);
    }
}