// Task1) 
// Write three functions to evaluate a quadratic function. 

// 1a) double [] input () accepts numbers a, b and c one-by-one from the user. Terms a, b, c must be numbers. Your function has to check if the character user supplies is a number or not. If it is not a number, ignore the current input and continue accepting the next one.  Finally store a, b, c in an array and return the array.

// 1b) double evaluate (int [] array) accepts an array containing a, b, and c, and evaluate a simple quadratic function, f(x) = ax*x + b*x + c. Return the evaluated result

// 1c) void displayResult (double result) uses putc to display the evaluated result from 1b.

// Task2)
// Write a function to convert date representations from string to int.
// Accept string representation of date from the user.

// Example: 13 January 1993  -> 1/13/1993 
// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <string.h>
#include <stdlib.h>
#include <math.h>

// 직접 구현
int _strlen(char* str) {
    int cnt = 0;
    while(str[cnt] != '\0')
        ++cnt;
    return cnt;
}

int isNumber(char* str) {
    int size = _strlen(str);
    
    if (size == 0)
        return 0;
    
    for (int i = 0; i < size; i++) {
        if (str[i] == '.' || str[i] == '-')
            continue;
        if (str[i] < '0' || str[i] > '9')
            return 0;
    }
    return 1;
}

double* input() {
    double num[4];
    int cnt = 0;
    //char* n = (char*)malloc(sizeof(char));
    char n[100000];

    while (cnt < 4) {
        gets(n);
        //scanf("%s", n);
        if (isNumber(n)) {
            // num[cnt++] = strtod(n, NULL);
            // printf("%s\n", atof(n));
            num[cnt] = atof(n);
            cnt += 1;
            printf("It is number\n");
        }
    }
    // printf("1 : %lf\n", num[0]);
    // printf("2 : %lf\n", num[1]);
    // printf("3 : %lf\n", num[2]);
    // printf("4 : %lf\n\n", num[3]);
    return num;
}

double evaluate (double* array) {
    // printf("1 : %lf\n", array[0]);
    // printf("2 : %lf\n", array[1]);
    // printf("3 : %lf\n", array[2]);
    // printf("4 : %lf\n\n", array[3]);
    double a = array[0];
    double b = array[1];
    double c = array[2];
    double x = array[3];

    double result = (a*x*x) + (b*x) + c;
    
    return result;
}

void displayResult (double result) {
    char* s = (char*)malloc(sizeof(char));
    sprintf(s, "%lf", result);
    while (*s != '\0') {
        putc(*s, stdout);
        s++;
    }
}

int main() {
    double* function = input();
    // printf("1 : %lf\n", function[0]);
    // printf("2 : %lf\n", function[1]);
    // printf("3 : %lf\n\n", function[2]);
    displayResult(evaluate(function));
    
    return 0;
}