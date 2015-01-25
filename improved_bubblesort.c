/* 
    Program that sorts five differently sized arrays from random numbers in mod(2*n) to ascending order 
    using the Improved Bubble Sort Algorithm and counts the number of comparisons/swaps done.
    
    Date: 25/03/2014
    Author: Seán Jennings
*/

#include <stdio.h>
#include <stdlib.h>

void improved_bubblesort(int[],int);

main()
{
    //display title of the results to the user
    printf("============================");
    printf("\nImproved Bubble Sort Results\n");
    printf("============================");
    
    //loop variables
    int i,j;
    
    //arrays for each n case
    int array1[800];
    int array2[1600];
    int array3[2400];
    int array4[3200];
    int array5[4000];
    
    //initialise arrays with random numbers in mod2*n
    for(i=0;i<800;i++)
    {
        array1[i]=rand()%(2*800);
    }
    for(i=0;i<1600;i++)
    {
        array2[i]=rand()%(2*1600);
    }
    for(i=0;i<2400;i++)
    {    
        array3[i]=rand()%(2*2400);
    }
    for(i=0;i<3200;i++)
    {    
        array4[i]=rand()%(2*3200);
    }
    for(i=0;i<4000;i++)
    {    
        array5[i]=rand()%(2*4000);
    }
    
    //for loop for each n case
    for(j=1;j<6;j++)
    {
        switch(j)
        {
            case 1:
            {
                improved_bubblesort(array1,800);
                break;
            }
            case 2:
            {
                improved_bubblesort(array2,1600);
                break;
            }
            case 3:
            {
                improved_bubblesort(array3,2400);
                break;
            }
            case 4:
            {
                improved_bubblesort(array4,3200);
                break;
            }
            case 5:
            {
                improved_bubblesort(array5,4000);
                break;
            }
        }
    }
    
    getchar();
}

void improved_bubblesort(int a[], int N)
{
    int i, j, temp, compare_ctr=0, swap_ctr=0, swapped;
    
    printf("\n\nN: %d\n",N);
    printf("\nUnsorted [First 5]: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    
    for (i = N - 1; i >= 1; i--)    //last element
    {
        swapped=0;
        for (j = 0; j < i; j++)
        {
            compare_ctr++;
            
            if (a[j] > a[j+1])      // swap them
            {                       
                temp = a[j+1];
                a[j+1] = a[j];      // swap code
                a[j] = temp;
                swapped=1;
                swap_ctr++;
            }
        }
        if(swapped==0)
        {
            break;
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