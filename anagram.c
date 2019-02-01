#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 26

void read_word(int letters[]); // initialize function

/*We use this function to check whether the characters are part of the alphabet or not*/
void read_word(int letters[])
{
  char ch;
  while ((ch = getchar()) != '\n') // check if characters are not new line
  {
    if (isalpha(ch)) //checks if character is alphabetic
      letters[tolower(ch) - 'a']++; //make it lowercase, if alphabetic, and add to our count
  }
}

bool chars_equal(int firword_letters[], int secword_letters[]); // initialize function

/* Checks if the two words are anagram by looking at characters of 1st word and 2nd word
and seeing if all chars from word1 equal all chars from word 2 and if so, they are anagrams */
bool chars_equal(int firword_letters[], int secword_letters[]) 
{
  int value;
  
  for (value = 0; value < SIZE; value++) { // checking for values not equal to 0
    if (firword_letters[value] != secword_letters[value]) //we terminate loop immediately if this is true
      break;
  }
  if (value == SIZE){
	  return true;
  }
  else{
	  return false;
  }
}

int main(void)
{
  int word1[SIZE] = {0}; //initial size
  int word2[SIZE] = {0};

  printf("Enter the first word: ");
  read_word(word1);
  printf("Enter the second word: ");
  read_word(word2);

  if (chars_equal(word1, word2))
    printf("The words are anagrams\n");
  else
    printf("The words are not anagrams\n");

  return 0;
}
