
#include "Questions.h"



int Q1_for(int num){

	int sum = 0, i;
	
	// calculate your sum below..this has to use for loop
	for(i = 0; i < 1000; i++){
		if(i % num == 0){
			sum += i;
		}
	}

	// here, we return the calcualted sum:
	return sum;
}
int Q1_while(int num){

	int sum = 0, i = 0;

	// calculate your sum below..this has to use while loop
	while(i < 1000){
		if(i % num == 0){
			sum += i;
		}
		i++;
	}

	// here, we return the calcualted sum:
	return sum;
}
int Q1_dowhile(int num){

	int sum = 0, i = 0;
	
	// calculate your sum below..this has to use do-while loop
	do{
		if(i % num == 0){
			sum += i;
		}
		i++;
	} while(i < 1000);

	// here, we return the calcualted sum:
	return sum;
}
//===============================================================================================
int Q2_FPN(float Q2_input, float Q2_threshold){
	
	int result;
	
	// Determine which range does Q2_input fall into.  Keep in mind the floating point number range.
	// Assign the correct output to the result.
	if((Q2_input >= -2*Q2_threshold) && (Q2_input <= -1*Q2_threshold)){
		result = 0;
	}
	else if((Q2_input >= -1*Q2_threshold) && (Q2_input < 0)){
		result = 1;
	}
	else if((Q2_input >= 0) && (Q2_input < Q2_threshold)){
		result = 2;
	}
	else if((Q2_input >= Q2_threshold) && (Q2_input <= 2*Q2_threshold)){
		result = 3;
	}
	else{
		result = -999;
	}

	// Finally, return the result.
	return result;
}
//===============================================================================================
int Q3(int Q3_input, int perfect[]){
	
		//counts is the variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	    int counts=0, i, j, sum;

		for(i = 1; i <= Q3_input; i++){
			j = 1;
			sum = 0;
			while(j < i){
				if(i % j == 0){
					sum += j;
					
				}
				j++;
			}
			if(i == sum){
				perfect[counts] = i;
				counts++;
			}
		}
		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*autmoatically reflect in the main calling function.
		*/
	    
	   return counts;
}
//===============================================================================================
int Q4_Bubble(int array[], int size){
	
	// This variable tracks the number of passes done on the array to sort the array.
	int passes = 0, i, j, temp;

	// Pseudocode
	// 	1. Given an array and its size, visit every single element in the array up to size-2 (i.e. up to the 
	//     second last element, omit the last element)
	//  2. For every visited element (current element), check its subsequent element (next element).  
	//     If the next element is smaller, swap the current element and the next element. 
	//  3. Continue until reaching size-2 element.  This is considered One Pass => increment pass count by one.
	//  4. Repeat 1-3 until encountering a pass in which no swapping was done.
	//   -> Sorting Completed.

	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - i - 1; j++) {
      		if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
      		}
    	}
		passes++;
  	}

	// Finally, return the number of passes used to complete the Bubble Sort
	return passes;	
}