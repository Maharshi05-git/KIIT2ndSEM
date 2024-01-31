#include <stdio.h>

int main() {
  char a;
  printf("Enter an alphabet: ");
  scanf("%c", &a);
  if (a>=97) {
    printf("The uppercase of the entered letter is \'%c\'\n", (a-32));
  } else if ((a>=65)&&(a<97)) {
    printf("You have entered \'%c\' which is already in upper case\n", a);
  }
  return 0;
}
