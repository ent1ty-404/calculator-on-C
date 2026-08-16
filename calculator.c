#include <stdio.h>
#include <stdbool.h>
int main() {
bool ishascar = true;
while(ishascar){

   float num_one;

   float num_two;

   char op;

   printf("введите первое число: \n");
   scanf("%f", &num_one);

   printf("введите второе число: \n");
   scanf("%f", &num_two);

   printf("введите действие(/, +, -, *): \n");
   scanf(" %c", &op);

   if(op == '+'){
    printf("%.2f\n", num_one + num_two);
   } else if (op == '*'){
    printf("%.2f\n", num_one * num_two);
   } else if (op == '-'){
    printf("%.2f\n", num_one - num_two);
   } else if (op == '/'){
            if (num_two != 0) {
            printf("Результат: %.2f\n", num_one / num_two);
        } else {
            printf("Ошибка: деление на ноль невозможно!\n");
        }
   }
}
    return 0;
}
