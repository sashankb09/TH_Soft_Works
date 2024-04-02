#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct MB {
    char name[50];
    struct Sasi *next;
};

struct Sasi {
    char name[50];
    struct MB *next;
};

struct MB star;
struct Sasi me;

int main() {
    strcpy(star.name, "MB");
    strcpy(me.name, "Sasi");

    star.next = &me;
    me.next = NULL;

    printf("%s\n", star.name);
    printf("%s\n", star.next->name);

    return 0;
}
