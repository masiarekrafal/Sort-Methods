#include<stdio.h>

void InsertSort(int array[],int n){
	int i,j;
	for(i = 0;i<n-1;i++){
		int tmp = array[i+1];
		for(j = i;array[j]>=tmp;j--){
			array[j+1] = array[j];
		}
		array[j+1] = tmp;
	}
}
int main()
{
	int a[] = {10,9,3,8,4,3,2,1,0};
	InsertSort(a,9);
	for(int i=0;i<9;i++){
		printf("%d ",a[i]);
	}
}
