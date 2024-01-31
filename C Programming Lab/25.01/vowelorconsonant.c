#include <stdio.h>

int main() {
  char a;
  printf("Enter an alphabet: ");
  scanf("%c", &a);
  if ((a>='a' && a<='z')||(a>='A' && a<='Z')) {
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U') {
      printf("The entered character %c is a vowel", a);
    } else {
      printf("The entered character %c is a consonant", a);
    }

  } else {
    printf("The entered character %c is not an alphabet", a);
  }
}
