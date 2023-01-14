/* Output (Print Text)

The printf() function is used to output values/print text:

Example */

#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}

// You can add as many printf() functions as you want. However, note that it does not insert a new line at the end of the output:

#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("I am learning C.");
  printf("And it is very interesting.");
  return 0;
}

/*    		C User Input
User Input
You have already learned that printf() is used to output values in C.

To get user input, you can use the scanf() function:

Example
Output a number entered by the user:*/

// Create an integer variable that will store the number we get from the user
int myNum;

// Ask the user to type a number
printf("Type a number: \n");

// Get and save the number the user types
scanf("%d", &myNum);

// Output the number the user typed
printf("Your number is: %d", myNum);


// The scanf() function takes two arguments: the format specifier of the variable (%d in the example above) and the reference operator (&myNum), which stores the memory address of the variable.



/* You can also get a string entered by the user:

Example
Output the name of a user: */

// Create a string
char firstName[30];

// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
scanf("%s", firstName);

// Output the text
printf("Hello %s.", firstName);


// Note that you must specify the size of the string/array (we used a very high number, 30, but atleast then we are certain it will store enough characters for the first name), and you don't have to specify the reference operator (&) when working with strings in scanf().

