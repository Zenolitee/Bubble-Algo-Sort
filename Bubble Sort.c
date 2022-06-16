#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main (){
	int i, temp, swapped;
	
	int items = 10;
	int arr[items];
	
	for(i = 0; i < items; i++){
		arr[i] = ( rand()%25 )+1;
	}
	printf("Original List\n");
	
		for(i = 0; i < items; i++){
		printf("%d \n", arr[i]);
	}
	
	//infinite loop vvv
	while(1){
		
		swapped = 0;
		
		for(i = 0; i < items-1; i++){
			
			if(arr[i] > arr[i+1]){
				int temp = arr[i];
					arr[i] = arr[i+1];
						arr[i+1] = temp;
							swapped = 1;
		 		}
		
			}
			if(swapped == 0){
				break;
		}
		
	}
	
	printf("\nSorted List\n");
	 for(i = 0; i < items; i++){
		printf("%d \n", arr[i]);
}
	
	
	
	return 0;
	
	
}
