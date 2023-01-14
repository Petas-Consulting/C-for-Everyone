/* Break
You have already seen the break statement used in an earlier chapter of this tutorial. It was used to "jump out" of a switch statement.

The break statement can also be used to jump out of a loop.

This example jumps out of the loop when i is equal to 4:
*/

#include <stdio.h>

int main() {
  int i;

  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  }
  return 0;
}


/* Continue
The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

This example skips the value of 4:
*/

#include <stdio.h>

int main() {
  int i;

  for (i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
}

/* Break and Continue in While Loop
You can also use break and continue in while loops: */

#include <stdio.h>

int main() {
  int i = 0;

  while (i < 10) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
    i++;
}
  return 0;
}



#include <stdio.h>

int main() {
  int i = 0;

  while (i < 10) {
    if (i == 4) {
      i++;
      continue;
    }
    printf("%d\n", i);
    i++;
  }
  return 0;
}