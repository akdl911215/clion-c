#include <stdio.h>

typedef struct Graph  {
    char key;
    char arr[2];
} Graph;



int main() {
    struct Graph graph = {"A", {"B", "C"}};

    return 0;
}
