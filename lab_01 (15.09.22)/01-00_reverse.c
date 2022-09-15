#include <stdio.h>
#include <stdlib.h>

// CREATES A MULTIPLIER EQUALS 10^SPACES
long multiplier(int spaces){
    long answer = 1;
    while (spaces != 0){
        answer *= 10;
        spaces -= 1;
    }
    return answer;
}

// REVERSES THE NUMBER: 19 -> 91; 9 -> 90;
long transform_particle(int part){
    if (part < 10){
        return part * 10;
    } else {
        return (part % 10) * 10 + part / 10;
    }
}

// REVERSES THE WHOLE NUMBER
long reverse(long number){
    long answer = 0, spaces = 0;
    long part = 0;

    int sign = 1;
    if (number < 0){
        sign = -1;
        number *= -1;
    }

    while (number != 0){
        part = number % 100;
        part = transform_particle(part);

        answer += part * multiplier(spaces);
        spaces += 2;
        number /= 100;
    }
    return answer * sign;
}

int main(){
    long number = 0;
    printf("Enter the number: ");
    scanf("%ld", &number);
    printf("%ld", reverse(number));
    return 0;
}
