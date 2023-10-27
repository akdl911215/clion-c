#include <stdio.h>
#include <string.h>
#include <malloc/malloc.h>
#include <stdlib.h>

int main() {

    char *pszData = NULL;
    char *str;
    gets(&str);
    printf("%s\n", &str);

    int size = strlen(&str);
    printf("size: %d\n", size);

    pszData = (char*)malloc(sizeof (char) * size);
    printf("address: %p\n", &pszData);
    printf("%d\n", *pszData);

    *pszData = 'a';
    printf("size :: %d\n", malloc_size(pszData));

    free(pszData);
    return 0;
}
