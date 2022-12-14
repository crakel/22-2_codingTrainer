#include <stdio.h>

int _strcmp(char* s1, char* s2) {
    while (*s1 != '\0' || *s2 != '\0') {
        if (*s1 > *s2)
            return 1;
        else if (*s1 < *s2)
            return -1;
        else {
            s1++;
            s2++;
        }
    }
    return 0;
}

int main() {
    int month, day, year;
    char str[256];
    char s_month[10];
    // char* s_month = (char*)malloc(sizeof(char));

    // scanf("%d %s %d", day, s_month, year);
    // scanf("%s", s_month);
    // char *temp = strtok(s_month, " ");
    // while (temp != NULL) {
    //     printf("%s\n", temp);
    //     temp = strtok(NULL, " ");
    // }
    gets(str);
    sscanf(str, "%d %s %d", &day, s_month, &year);
    // strcmp 직접구현
    if (_strcmp(s_month, "January") == 0)
        month = 1;
    else if (_strcmp(s_month, "February") == 0)
        month = 2;
    else if (_strcmp(s_month, "March") == 0)
        month = 3;
    else if (_strcmp(s_month, "April") == 0)
        month = 4;
    else if (_strcmp(s_month, "May") == 0)
        month = 5;
    else if (_strcmp(s_month, "June") == 0)
        month = 6;
    else if (_strcmp(s_month, "July") == 0)
        month = 7;
    else if (_strcmp(s_month, "August") == 0)
        month = 8;
    else if (_strcmp(s_month, "September") == 0)
        month = 9;
    else if (_strcmp(s_month, "October") == 0)
        month = 10;
    else if (_strcmp(s_month, "November") == 0)
        month = 11;
    else if (_strcmp(s_month, "December") == 0)
        month = 12;

    printf("%d/%d/%d\n", month, day, year);
}