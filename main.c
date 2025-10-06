#include <stdio.h>

int main(){
    printf("Здравствуйте! Это простейший файл исходного кода");
    int n1, n2;
    printf("Введите первое целое число: ");
    scanf("%d", &n1);
    printf("Введите второе целое число: ");
    scanf("%d", &n2);
    int result = n1 + n2;
    printf("Результат: %d\n", result);
    return 0;
}
