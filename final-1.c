#include <stdio.h>
#include <unistd.h>

// Function prototypes
int my_print_fromntoz(void);
int my_print_altcase(void);
int my_print_int_range(void);
int my_print_opposite(int n);
int my_print_checkerboard(void);

// Helper function to print a single character
void my_putchar(char c) {
    write(1, &c, 1);
}

// Function definitions
int my_print_fromntoz(void) {
    for (char c = 'n'; c <= 'z'; c++) {
        putchar(c);
    }
    putchar('\n');
    return 0;
}

int my_print_altcase(void) {
    for (char c = 'a'; c <= 'z'; c++) {
        if ((c - 'a') % 2 == 0) {
            putchar(c);
        } else {
            putchar(c - ('a' - 'A'));
        }
    }
    putchar('\n');
    return 0;
}

int my_print_int_range(void) {
    for (int i = -9; i <= 9; i++) {
        printf("%d", i);
    }
    putchar('\n');
    return 0;
}

int my_print_opposite(int n) {
    if (n < -9 || n > 9) {
        return -1;
    }

    if (n < 0) {
        my_putchar('-');
        n = -n;
    } else if (n > 0) {
        n = -n;
    }

    if (n == 0) {
        my_putchar('0');
    } else {
        my_putchar('0' + (n < 0 ? -n : n));
    }

    return 0;
}

int my_print_checkerboard(void) {
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            if ((row + col) % 2 == 0) {
                my_putchar('#');
            } else {
                my_putchar('.');
            }
        }
        my_putchar('\n');
    }
    return 0;
}

// Consolidated main function
int main() {
    my_print_fromntoz();
    my_print_altcase();
    my_print_int_range();
    my_print_opposite(5);
    my_print_opposite(-3);
    my_print_opposite(0);
    my_print_checkerboard();
    return 0;
}
