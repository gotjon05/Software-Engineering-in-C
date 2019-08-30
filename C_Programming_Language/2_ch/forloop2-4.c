#include <string.h>
#include <stdio.h>

void squeeze(char s1[], const char s2[]);

int main(void) {
    char s1[] = "The course of true love never did run smooth";
    char s2[] = { 'a', 'e', 'm', '\0' };
    squeeze(s1, s2);
    printf("%s\n", s1);
    return 0;
}

void squeeze(char s1[], const char s2[]) {
    int i, j, k;
    for (i = k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j])
                break;
        }
        if (s2[j] == '\0') {  // character was not found in s2
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0'; // null terminate s1 of it was shortened
}
