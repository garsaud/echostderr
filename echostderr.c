#include <unistd.h>

#define STDERR_FD 2

const char space = ' ';
const char line_break = '\n';

int main(int argc, char **argv) 
{
    /* program called without arguments */
    if (argc <= 1) {
        write(STDERR_FD, &line_break, 1);
        return 0;
    }
    
    /* user doesn't want a final line break */
    int minus_n = 0;
    if (
        argv[1][0] == '-' &&
        argv[1][1] == 'n' &&
        argv[1][2] == '\0'
    ) {
        minus_n = 1;
    }

    for (
        int i = 1 + minus_n, first_iteration = 1;
        i < argc;
        i++, first_iteration = 0
    ) {
        /* add spaces between arguments */
        if (!first_iteration) {
            write(STDERR_FD, &space, 1);
        }

        for (
            long c = 0;
            argv[i][c];
            c++
        ) {
            write(STDERR_FD, &argv[i][c], 1);
        }
    }

    /* add line break if not disabled */
    if (!minus_n) {
        write(STDERR_FD, &line_break, 1);
    }
    
    return 0;
}
