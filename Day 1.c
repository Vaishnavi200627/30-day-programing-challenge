#include<stdio.h>
#include<stdlib.h>
void sort(int arr[],int n)
{
	int low=0;
	int high=n-1;
	int mid=0;
	while(mid<=high)
	{
		switch(arr[mid])
		{
			case 0:{
				
				int temp=arr[low];
				arr[low]=arr[mid];
				arr[mid]=temp;
				low ++;
				mid ++;
				break;}
			case 1:
				mid ++;
				break;
			case 2:{
		
				int temp1=arr[mid];
				arr[mid]=arr[high];
				arr[high]=temp1;
				high --;
				break;}
		}
	}
}

int main() {
    int n,i;
    printf("enter size of array");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("enter elements of array");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n); 

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
