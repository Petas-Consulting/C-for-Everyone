/*   Operators
Operators are used to perform operations on variables and values.

In the example below, we use the + operator to add together two values:

Example */
#include <stdio.h>

int main() {
  int myNum = 100 + 50;
  printf("%d", myNum);
  return 0;
}

// Although the + operator is often used to add together two values, like in the example above, it can also be used to add together a variable and a value, or a variable and another variable:

#include <stdio.h>

int main() {
  int sum1 = 100 + 50;       
  int sum2 = sum1 + 250;      
  int sum3 = sum2 + sum2
  printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("%d\n", sum3);	
  return 0;
}

// Note: \n means new line the next output will start on a new line

/* C divides the operators into the following groups:

	Arithmetic operators
	Assignment operators
	Comparison operators
	Logical operators
	Bitwise operators */




/*    Arithmetic Operators
Arithmetic operators are used to perform common mathematical operations.

Operator	Name					Description				Example	
+		Addition			Adds together two values			x + y	
-		Subtraction			Subtracts one value from another		x - y	
*		Multiplication			Multiplies two values				x * y	
/		Division			Divides one value by another			x / y	
%		Modulus				Returns the division remainder			x % y	
++		Increment			Increases the value of a variable by 1		++x	
--		Decrement			Decreases the value of a variable by 1		--x	
*/



/*  Assignment Operators
Assignment operators are used to assign values to variables.

In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x:

Example */

#include <stdio.h>

int main() {
  int x = 10;       
  printf("%d", x);	
  return 0;
}

// The addition assignment operator (+=) adds a value to a variable:

#include <stdio.h>

int main() {
  int x = 10; 
  x += 5;      
  printf("%d", x);	
  return 0;
}





/* Comparison Operators
Comparison operators are used to compare two values.

Note: The return value of a comparison is either true (1) or false (0).

In the following example, we use the greater than operator (>) to find out if 5 is greater than 3:

Example */

#include <stdio.h>

int main() {
  int x = 5; 
  int y = 3;     
  printf("%d", x > y); // // returns 1 (true) because 5 is greater than 3	
  return 0;
}




































































