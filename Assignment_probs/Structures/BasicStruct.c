#include <stdio.h>
typedef struct myStructure {
  int myNum;
  char myLetter;
}s2;

int main() {

 s2 s1;

  s1.myNum = 13;
  s1.myLetter = 'B';
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);
}

