
// Program to perfrom Selection Sort Algortihm 


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




// Function to swap elements using pointers
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// Function to do Selection Sort that takes in an array and the size of the array
void selectionSort(int arr[], int size)
{
    int i;
    int j;
    int min_index;

    
    for (i = 0; i < size - 1; i++)
    {
        // Find the min element in the unsorted array
        min_index = i;
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[min_index])
                min_index = j;

        // Swap the found minimum element with the first element
        if (min_index != i)
            swap(&arr[min_index], &arr[i]);
    }
}

// Function to print array 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d \n", arr[i]);
        
}



// Main program to test selection sort 
int main()
{

    // Create array 
    int sample_array[] = {29,10,14,37,14};
    int n = sizeof(sample_array) / sizeof(sample_array[0]);

    // Print array before sorting
    printf("Before Selection Sort, the array is: \n");
    printArray(sample_array, n);


    
    // Call function to sort the sample array
    selectionSort(sample_array, n);

    // Print array after selection sort
    printf("After Selection Sort: \n");
    printArray(sample_array, n);


    return 0;
}
