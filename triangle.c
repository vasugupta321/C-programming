#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows, i, j;
    printf ("Enter the number of rows in the triangle: ");
    scanf("%d", &rows);
    if (rows < 1 || rows > 20){ // checking if input is not in range of 1-20
		printf("Input must be between 1 and 20 "); //tell user that number entered is not in range
	}
    for (i=1; i<=rows; i++){
        for (j=i; j<rows; j++){ // Printing trailing spaces (all whitespaces at end of *) for each row so we can form equilateral triangle
            printf(" ");
        }
        for (j=1; j<=(2*i-1); j++){
			if (i==rows || j==1 || j==(2*i-1)){
				printf("*"); //print * for the last row, for 1st column, or for last column
			}
			else
			{
				printf(" "); // print spaces between the 1st column and last to make triangle hollow
			}
		}
		printf("\n"); //go to next line
    }
    return 0;
}

