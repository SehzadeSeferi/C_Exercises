#include<stdio.h>
float avg_f(int [],int );
int max_f(int [],int );
int min_f(int [],int );
int main(){
	
	int array[6]={1,2,6,12,26,23};
	int max,min;
	float average;
	average=avg_f(array,6);
	max=max_f(array,6);
	min=min_f(array,6);
	printf("Max value of array=%d \nMinumum value of array=%d \nAverage of array=%.2f",max,min,average);
	
	
	return 0;
}
int max_f(int array[],int size){
	
	int counter=1,max;
	max=array[0];
	
	for( ;counter<size;counter++){
		if(max<array[counter])
			max=array[counter];
		
	}		
	
	return max;
}

int min_f(int array[],int size){
	int counter=1,min;
	min=array[0];
	
	for( ;counter<size;counter++){
		if(min>array[counter])
			min=array[counter];
		
	}
	
	return min;
}
float avg_f(int array[],int size){
	float avg;
	int sum=0,counter=0;
	
	for( ;counter<size;counter++){
		sum+=array[counter];
		
	}
	avg=(float)sum/size;
	
	
	return avg;
}







