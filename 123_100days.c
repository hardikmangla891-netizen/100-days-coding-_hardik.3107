//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main() {
    FILE *file;
    char ch, prev = ' ';
    int characters = 0, words = 0, lines = 0;

    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if ((ch != ' ' && ch != '\n' && ch != '\t') &&
            (prev == ' ' || prev == '\n' || prev == '\t')) {
            words++;
        }

        prev = ch;
    }

    if (characters > 0 && prev != '\n')
        lines++;

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}