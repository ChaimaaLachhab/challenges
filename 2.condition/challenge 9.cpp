#include <stdio.h>

int main() {
    char c;
    printf("Entrez un caractère: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
        printf("'%c' est un alphabet majuscule.\n", c);
    else
        printf("'%c' n'est pas un alphabet majuscule.\n", c);

    return 0;
}

