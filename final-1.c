#include <unistd.h>

// Prototypes
int my_print_fromntoz(void);
int my_print_altcase(void);
int my_print_int_range(void);
int my_print_opposite(int n);
int my_print_checkerboard(void);

// Affiche un caractère
void my_putchar(char c) {
    write(1, &c, 1);
}

// Affiche les lettres minuscules de n à z
int my_print_fromntoz(void) {
    for (char c = 'n'; c <= 'z'; c++) {
        my_putchar(c);
    }
    my_putchar('\n');
    return 0;
}

// Affiche l'alphabet en alternant minuscule/majuscule
int my_print_altcase(void) {
    for (char c = 'a'; c <= 'z'; c++) {
        if ((c - 'a') % 2 == 0) {
            my_putchar(c);
        } else {
            my_putchar(c - 32); // 'a' - 'A' = 32
        }
    }
    my_putchar('\n');
    return 0;
}

// Affiche les entiers de -9 à 9 sans espace
int my_print_int_range(void) {
    for (int i = -9; i <= 9; i++) {
        if (i < 0) {
            my_putchar('-');
            my_putchar('0' - i);
        } else {
            my_putchar('0' + i);
        }
    }
    my_putchar('\n');
    return 0;
}

// Affiche l'opposé d'un chiffre entre -9 et 9
int my_print_opposite(int n) {
    if (n < -9 || n > 9) return -1;
    if (n == 0) {
        my_putchar('0');
    } else if (n > 0) {
        my_putchar('-');
        my_putchar('0' + n);
    } else {
        my_putchar('0' - n);
    }
    return 0;
}

// Affiche un damier 8x8 avec # et .
int my_print_checkerboard(void) {
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            if ((row + col) % 2 == 0)
                my_putchar('#');
            else
                my_putchar('.');
        }
        my_putchar('\n');
    }
    return 0;
}

// Main unique pour tester toutes les fonctions
int main() {
    my_print_fromntoz();
    my_print_altcase();
    my_print_int_range();
    my_print_opposite(5);
    my_putchar('\n');
    my_print_opposite(-3);
    my_putchar('\n');
    my_print_opposite(0);
    my_putchar('\n');
    my_print_checkerboard();
    return 0;
}
