#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int counter(long x){
    long answer = 0;
    while (x != 0){
        answer += x % 10;
        x /= 10;
    }
    return answer;
}

int main(){
    long number = 0;
    setlocale(LC_ALL, "Russian");
    printf("Введите число для подсчёта суммы цифр: ");
    scanf("%d", &number);
    number = counter(number);
    printf("Результат: %d\n", number);
    return 0;
}
