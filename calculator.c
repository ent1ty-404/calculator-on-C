#include <stdio.h>

int main() {
    double a, b;
    char op;
    
    printf("Введите первое число: \n");
    scanf("%lf", &a);                    
    
    printf("Введите второе число: \n");
    scanf("%lf", &b);                    
    
    printf("Введите действие (+, -, *, /): \n");
    scanf(" %c", &op);                   
    
    if (op == '+') {                     
        printf("%.2f\n", a + b);        
    } 
    else if (op == '-') {
        printf("%.2f\n", a - b);
    } 
    else if (op == '*') {
        printf("%.2f\n", a * b);
    } 
    else if (op == '/') {
        if (b != 0) {                   
            printf("%.2f\n", a / b);
        } else {
            printf("Ошибка: деление на ноль!\n");
        }
    } 
    else {
        printf("Неверное действие\n");   
    }                                    
    
    return 0;
}