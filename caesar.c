#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char message [80]; // Message is a max of 80
	char ch;
	int i; // Using i to keep track of characters
	int message_length; //length of message
	int shift; //amount we want to shift by
	printf("Enter message to be encrypted: ");
	
	for (i = 0; (ch = getchar()) != '\n'; i++){ // Getting the characters and making sure they are on one line
		message[i] = ch; // Putting the characters of message in array
	}
	message_length = i; // length of message to be encrypted
	
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);
	while(shift < 1 || shift > 25){ // use a while loop to allow user to put correct input for shift amount 
		printf("Shift amount must be between 1 and 25 (inclusive)");
		printf("\n");
		printf("Enter shift amount (1-25): ");
		scanf("%d", &shift);
	}
	if(shift >=1 || shift <=25){ //shift amount is in range
		printf("Encrypted message: ");
	
		for(i = 0; i < message_length; i++){ // iterate through all characters in our message
			ch = message[i]; //we store in an array to check each character for the following
			if ('A' <= ch && ch <= 'Z'){ // if characters in our message are uppercase
				ch = ((ch - 'A') + shift) % 26  + 'A'; /* we subratct the value of 'A' and then add the amount we would like to shift 
													  by doing a mod operation on the total number of letters in alphabet. We then add this shift amount to 'A' to get our new uppercase character */
			}
			if ('a' <= ch && ch <= 'z'){ // if characters in our message are lowercase
			ch = ((ch - 'a') + shift) % 26  + 'a'; /* we subratct the value of 'a' and then add the amount we would like to shift  
			                                          by doing a mod operation on the total number of letters in alphabet. We then add this shift amount to 'a' to get our new lowercase character */
			}
			printf("%c", ch);
			}
		}
	printf("\n"); //use this to print new line when program is done
	return 0;
}
