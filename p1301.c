#include <stdio.h>

typedef enum {
    UNINITIALIZED,
    INITIALIZED,
    RUNNING,
    CONFIRM,
    DELETED,
} STATE;

int check_status(STATE state) {
    switch (state) {
        case UNINITIALIZED:
            puts("uninitialized");
            break;
        case INITIALIZED:
            puts("initialized");
            break;
        case RUNNING:
            puts("running");
            break;
        case CONFIRM:
            puts("confirm");
            break;
        case DELETED:
            puts("deleted");
            break;
    }
    return 0;
};

int main() {
    STATE state;
    state = UNINITIALIZED;

    check_status(state);

    return 0;
};
