// write a c program to merge and sort the elements of two different Array 
#include<stdio.h>

void sortArray(int a[],int size){
	int temp,i,j;
	
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			
			if(a[i]>a[j]){
				// swapping
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
// Function to merge two arrays
void mergeArray(int a1[], int size1, int a2[], int size2, int merged[]) {
    int i;
    for (i = 0; i < size1; i++) {
        merged[i] = a1[i];
    }
    for (i = 0; i < size2; i++) {
        merged[size1 + i] = a2[i];
    }
}

int main(){
  int arr1[100], arr2[100], merged[200];
    int size1, size2;
    int i;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    for (i = 0; i < size1; i++) {
        printf("Enter element %d for the first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    for (i = 0; i < size2; i++) {
        printf("Enter element %d for the second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Merge the arrays
    mergeArray(arr1, size1, arr2, size2, merged);

    // Sort the merged array
    sortArray(merged, size1 + size2);

    // Print the sorted merged array
    printf("Merged and sorted array:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
