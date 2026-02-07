#include <unistd.h>
void mx_printchar(char c){
    write(1, &c, 1);
}

static void print_spaces(int count) {
    for (int i = 0; i < count; i++)
    mx_printchar(' ');
}

static void print_chars(char c, int count) {
    for (int i = 0; i < count; i++)
        mx_printchar(c);
}

void mx_cube(int n) {
    if (n <= 1) {
        return;}

        int width = 2 * n;
        int depth = n / 2;

        //Upper line

        print_spaces(depth + 1);
        mx_printchar('+');
        print_chars('-', width);
        mx_printchar('+');
        mx_printchar('\n');

        //Verical lines

        for (int i = 0; i < depth; i++) {
            print_spaces(depth - i);
            mx_printchar('/');
            print_spaces(width);
            mx_printchar('/');
            print_spaces(i);
            mx_printchar('|');
            mx_printchar('\n');
        }

        // Upper Middle

        mx_printchar('+');
        print_chars('-', width);
        mx_printchar('+');
        print_spaces(depth);
        mx_printchar('|');
        mx_printchar('\n');

        // Bottom middle

        if (n % 2 == 0){

        for (int i = 0; i < depth - 1; i++) {
            mx_printchar('|');
            print_spaces(width);
            mx_printchar('|');
            print_spaces(depth);
            mx_printchar('|');
            mx_printchar('\n');

        } }else {
        for (int i = 0; i < depth; i++) {
            mx_printchar('|');
            print_spaces(width);
            mx_printchar('|');
            print_spaces(depth);
            mx_printchar('|');
            mx_printchar('\n');
        }
        }

        mx_printchar('|');
        print_spaces(width);
        mx_printchar('|');
        print_spaces(depth);
        mx_printchar('+');
        mx_printchar('\n');

        // Bottom

        for (int i = 0; i < depth; i++) {
            mx_printchar('|');
            print_spaces(width);
            mx_printchar('|');
            print_spaces(depth - i - 1);
            mx_printchar('/');
            mx_printchar('\n');
        }

        mx_printchar('+');
        print_chars('-', width);
        mx_printchar('+');
        mx_printchar('\n');
    }




int main(void) {
    mx_cube(2);
    mx_cube(3);
    mx_cube(4);
    mx_cube(5);
    mx_cube(1);
    mx_cube(12);
}
