/* 
    Program that sorts five differently sized arrays from descending to ascending order 
    using the Bubble Sort Algorithm and counts the number of comparisons/swaps done.
    
    Date: 25/03/2014
    Author: Seán Jennings
*/

#include <stdio.h>
#include <stdlib.h>

void bubblesort(int[],int);

main()
{
    //display title of the results to the user
    printf("===================");
    printf("\nBubble Sort Results\n");
    printf("===================");
    
    //loop variables
    int i,j;
    
    //arrays for each n case
    int array1[800];
    int array2[1600];
    int array3[2400];
    int array4[3200];
    int array5[4000];
    
    //initialise arrays with numbers descending from N to 1
    for(i=0;i<800;i++)
    {
        array1[i]=800-i;
    }
    for(i=0;i<1600;i++)
    {
        array2[i]=1600-i;
    }
    for(i=0;i<2400;i++)
    {    
        array3[i]=2400-i;
    }
    for(i=0;i<3200;i++)
    {    
        array4[i]=3200-i;
    }
    for(i=0;i<4000;i++)
    {    
        array5[i]=4000-i;
    }
    
    //for loop for each n case
    for(j=1;j<6;j++)
    {
        switch(j)
        {
            case 1:
            {
                bubblesort(array1,800);
                break;
            }
            case 2:
            {
                bubblesort(array2,1600);
                break;
            }
            case 3:
            {
                bubblesort(array3,2400);
                break;
            }
            case 4:
            {
                bubblesort(array4,3200);
                break;
            }
            case 5:
            {
                bubblesort(array5,4000);
                break;
            }
        }
    }
    
    getchar();
}

void bubblesort(int a[], int N)
{
    int i, j, temp, compare_ctr=0, swap_ctr=0;
    
    printf("\n\nN: %d\n",N);
    printf("\nUnsorted [First 5]: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    
    for (i = N - 1; i >= 1; i--)    //last element
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j+1])      // swap them
            {                       
                temp = a[j+1];
                a[j+1] = a[j];      // swap code
                a[j] = temp;
                swap_ctr++;
            }
            compare_ctr++;
        }
    }
    
    printf("\nSorted [First 5]: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\nComparisons: %d",compare_ctr);
    printf("\nSwaps: %d",swap_ctr);
    printf("\n\n============================================");
}