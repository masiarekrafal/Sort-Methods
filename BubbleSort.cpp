#include<stdio.h>

void BubbleSort(int array[],int n){
	int temp = 0;
	int i,j;
	for(i = n-1;i>0;i--){
		for(j = 0;j<i;j++){
			if(array[j+1]<array[j]){
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main()
{
	int a[] = {10,9,3,8,4,3,2,1,0};
	BubbleSort(a,9);
	for(int i=0;i<9;i++){
		printf("%d ",a[i]);
	}
}

