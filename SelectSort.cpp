#include<stdio.h>

void SelectSort(int array[],int n){
	int tmp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(array[j]<array[i]){
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
			}
		}
	}
}


int main()
{
	int a[] = {10,2,3,8,4,3,2,1,0};
	SelectSort(a,9);
	for(int i=0;i<9;i++){
		printf("%d ",a[i]);
	}
}