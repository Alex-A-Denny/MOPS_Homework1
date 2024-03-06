// 
/// File: triangle.c 
/// 
/// A program to print out multiple triangles of the form:
/// <pre>
///    *
///  ***
/// ****
/// </pre>
/// 
/// @author aad7700 : Alexander A Denny
/// 
// // // // // // // // // // // // // // // // // // // // // // // // 

#include <stdio.h>

/**
 *  Function: drawTriangle
 *
 *  Description: Draw a triangle whose base width is 'size'.
 *  Note: If size is even, the function makes a 'size + 1' triangle. 
 * 
 *  @param size  the width of the base of the triangle to draw
 */
void drawTriangle( int size ){

	if( size % 2 == 0){
		size++;
	}

	for( int i = 0; i < size; i += 2 ){
	
		for( int spaces = 0; spaces < size - i; spaces++ ){
		
			printf(" ");

		}
		
		for( int stars = size - i; stars <= size; stars++ ){
		
			printf("*");
		
		}
				
		printf("\n");
	}

}

/**
 *  Function: main 
 *
 *  Description: draws pyramid triangles of size 1, 5, and 6.
 *
 *  @returns errorCode  error Code; EXIT_SUCCESS if no error
 */
int main(void){

	
	drawTriangle( 1 );
	drawTriangle( 5 );
	drawTriangle( 6 );

	return 0;

}
