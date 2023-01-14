/*	Return Values
The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int or float, etc.) instead of void, and use the return keyword inside the function:
*/

int myFunction(int x) {
  return 5 + x;
}
int main() {
  printf("Result is: %d", myFunction(3));
  return 0;
}
// Outputs 8 (5 + 3)


// This example returns the sum of a function with two parameters:


int myFunction(int x, int y) {
  return x + y;
}
int main() {
  printf("Result is: %d", myFunction(5, 3));
  return 0;
}
// Outputs 8 (5 + 3)


// You can also store the result in a variable:


int myFunction(int x, int y) {
  return x + y;
}
int main() {
  int result = myFunction(5, 3);
  printf("Result is = %d", result);
  return 0;
}
// Outputs 8 (5 + 3)