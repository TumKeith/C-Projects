#include <stdio.h>
#include <stdlib.h>
// TUM KEITH KIMUTAI.
// ENE212-0092/2021.
// INSERTION AND DELETION OF AN ELEMENT IN AN ARRAY.
int main()
{
    int array[10]={1, 2, 3, 4, 6, 7, 8, 9, 10};
    int i, n, x, pos;
    n=10;
    printf("Array before insertion is:\n");
        for(i=0;i<n-1;i++)
        {
            printf("%d", array[i]);
        }
    printf("\n Enter element to be inserted:");
    scanf("%d", &x);
    printf("\n Enter position to insert element:");
    scanf("%d", &pos);
    //Inserting the element in the array
    for(i=10-1;i>=pos;i--)
    array[i]=array[i-1];
    array[pos-1]=x;
    //print array after insertion
    printf("\n Array after insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
    // Deleting the inserted number from the array
    for (int i = pos-1; i < n-1; i++) 
    {
        array[i] = array[i+1];
    }

    // Printing out the array after deletion
    printf("\n Array after deletion: ");
    for (int i = 0; i < n-1; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}