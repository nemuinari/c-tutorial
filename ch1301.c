#include <stdio.h>
#include <string.h>

typedef enum {
    START,
    RUN,
    STOP,
    SLEEP,
} STATE;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        return 1;
    }

    STATE state = START;
    for (size_t i = 0; i < strlen(argv[1]); i++) {
        char ch = argv[1][i];
        switch (state) {
            case START:
                if (ch == '0') {
                    puts("run");
                    state = RUN;
                }
                break;
            case RUN:
                if (ch == '1') {
                    puts("stop");
                    state = STOP;
                }
                break;
            case STOP:
                if (ch == '2') {
                    puts("sleep");
                    state = SLEEP;
                }
                break;
            case SLEEP:
                if (ch == '3') {
                    puts("start");
                    state = START;
                }
                break;
        }
    }
    return 0;
}
