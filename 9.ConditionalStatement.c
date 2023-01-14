/* We have three kinds of conditional statements 
	1. if Statement
	2. else if Statement
	3. else Statement */

/* The if Statement
Use the if statement to specify a block of C code to be executed if a condition is true.

Syntax
if (condition) {
  // block of code to be executed if the condition is true
}
Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.

In the example below, we test two values to find out if 40 is greater than 26. If the condition is true, print some text: */

#include <stdio.h>

int main() {
  if (40 > 26) {
    printf("40 is greater than 26");
}
  return 0;
}

// We can also test variables:
int main() {
  int x = 20;
  int y = 18;
  if (x > y) {
    printf("x is greater than y");
}
  return 0;
}




// In the example above we use two variables, x and y, to test whether x is greater than y (using the > operator). As x is 20, and y is 18, and we know that 20 is greater than 18, we print to the screen that "x is greater than y".

/* The else Statement
Use the else statement to specify a block of code to be executed if the condition is false.

Syntax
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
} 
*/

#include <stdio.h>

int main() {
  int time = 20;
  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
// Outputs "Good evening."
  return 0;
}

// In the example above, time (20) is greater than 18, so the condition is false. Because of this, we move on to the else condition and print to the screen "Good evening". If the time was less than 18, the program would print "Good day".


/* The else if Statement
Use the else if statement to specify a new condition if the first condition is false.

Syntax
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
} */


#include <stdio.h>

int main() {
  int time = 22;
  if (time < 10) {
    printf("Good morning.");
  } else if (time < 20) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
// Outputs "Good evening."
  return 0;
}

// In the example above, time (22) is greater than 10, so the first condition is false. The next condition, in the else if statement, is also false, so we move on to the else condition since condition1 and condition2 is both false - and print to the screen "Good evening".

However, if the time was 14, our program would print "Good day."



// This example shows how you can use if..else if to find out if a number is positive or negative:

#include <stdio.h>

int main() {
  int myNum = 10; // Is this a positive or negative number?

  if (myNum > 0)
    printf("The value is a positive number.");
  else if (myNum < 0)
    printf("The value is a negative number.");
  else
    printf("The value is 0.");
  return 0;
}

































