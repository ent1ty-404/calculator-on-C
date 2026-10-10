#include <stdio.h>
int main() {
while(1){

   float num_one;

   float num_two;

   char op;

   printf("введите первое число(введите 0 для выхода): \n");
   scanf("%f", &num_one);
     if(num_one == 0){
    break;
   }

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
   } else{
    printf("неизвестное значение: %c\n ", op);
   }
}
    return 0;
}
