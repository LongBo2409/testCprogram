#include <stdio.h>

int isEvenNumber(int number) {
  return number % 2 == 0;
}

int main() {
  int n, m, number;
  

  printf("Enter a number: ");
  scanf("%d", &number);

  if (isEvenNumber(number)) {
    printf("%d is even.\n", number);
  }
  else {
    printf("%d is odd.\n\n", number);
  }

  printf("Please, enter a number n: ");
  scanf("%d", &n);
  
  printf("Please, enter a number m: ");
  scanf("%d", &m);

  printf("Even numbers between %d and %d:\n", n, m);
  for (int i = n; i <= m; i++) {
    if (isEvenNumber(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}

