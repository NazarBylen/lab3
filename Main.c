#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


void transformingToLowerCase(char *string, int count) {
    for (int i = 0;i<count; i++) {
        string[i] = tolower(string[i]);
    }
}

void sort (char* string, int count) {
    char nextItem, currentItemKey;

    for (int i = 1; i < strlen(string); i++) {
        nextItem = string[i];
        currentItemKey = i - 1;


        while (currentItemKey >= 0 && string[currentItemKey] > nextItem) {

            string[currentItemKey + 1] = string[currentItemKey];

            string[currentItemKey] = nextItem;

            currentItemKey--;
        }
    }
}

_Bool isIsogram(char* string,int count) {
    int result = 0;

    for (int i = 0; i < count; i++) {
        if (string[i] == string[i + 1]) {
            result = 1;
            break;
        }return true;
    }
}


void main() {

    char words[100];

    scanf("%s", words);

    printf("entered string: %s\n", words);

    int count = strlen(words);

    toLowerCase(words, count);

    printf("string in lower case: %s\n", words);

    sort(words, count);


    printf("sorted string: %s\n", words);

    printf(isIsogram(words, count) == false ? "Isogram" : "NOT Isogram");
}

