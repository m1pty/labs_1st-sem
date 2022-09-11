#include <stdio.h>
#include <stdlib.h>

int counter(int x){
    int answer = 0;
    while (x != 0){
        answer += x % 10;
        x /= 10;
    }
    return answer;
}

int main(){
    int number = 0;
    printf("Введите число для подсчёта суммы цифр: ");
    scanf("%d", &number);
    number = counter(number);
    printf("Результат: %d\n", number);
    return 0;
}
