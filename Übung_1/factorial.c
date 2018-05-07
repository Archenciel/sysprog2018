#include <stdio.h>

int factorial(int n);

int main(){
  int input=0;
  int output=1;
  printf("Of which number do you wish to the know the factorial: ");
  scanf("%d", &input);
  if (input<0) {
    printf("You entered a negative number!\nt");
  }
  else {
    output = factorial(input);
    printf("%d!=%d\n", input,output);
  }
  return 0;
}

int factorial(int n){
  int output=1;
  while (n>1){
    output=output*n--;
  }
  return output;
}
