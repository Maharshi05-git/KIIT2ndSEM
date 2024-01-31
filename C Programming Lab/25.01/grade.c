#include <stdio.h>

int main() {
  int marks;
  printf("Enter total mark secured by a student: \n");
  scanf("%d", &marks);
  if (marks>=90&&marks<=100){
  printf("Secured grade is O\n");
  } else if (marks>=80) {
  printf("Secured grade is E\n");
  } else if (marks>=70) {
  printf("Secured grade is A\n");
  } else if (marks>=60) {
  printf("Secured grade is B\n");
  } else if (marks>=50) {
  printf("Secured grade is C\n");
  } else if (marks>=40) {
  printf("Secured grade is D\n");
  } else if (marks>=0) {
  printf("Secured grade is D\n");
  }
  return 0;
}
