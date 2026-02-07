void mx_printchar(char c);

static void print_spaces(int count) {
    for (int i = 0; i < count; i++)
    mx_printchar(' ');
}

static void print_chars(char c, int count) {
    for (int i = 0; i < count; i++)
        mx_printchar(c);
}

static void upper_line(int width, int depth){
        print_spaces(depth + 1);
        mx_printchar('+');
        print_chars('-', width);
        mx_printchar('+');
        mx_printchar('\n');
}

static void vertical_lines(int width, int depth){
        for (int i = 0; i < depth; i++) {
            print_spaces(depth - i);
            mx_printchar('/');
            print_spaces(width);
            mx_printchar('/');
            print_spaces(i);
            mx_printchar('|');
            mx_printchar('\n');
        }
}

static void upper_middle(int width, int depth){
        mx_printchar('+');
        print_chars('-', width);
        mx_printchar('+');
        print_spaces(depth);
        mx_printchar('|');
        mx_printchar('\n');
}

static void bottom_middle(int width, int depth, int n){
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
}

static void bottom_break_line(int width, int depth){
        mx_printchar('|');
        print_spaces(width);
        mx_printchar('|');
        print_spaces(depth);
        mx_printchar('+');
        mx_printchar('\n');

}

static void bottom(int width, int depth){
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

void mx_cube(int n) {
    if (n <= 1) {
        return;}

        int width = 2 * n;
        int depth = n / 2;

        upper_line(width, depth);
        vertical_lines(width, depth);
        upper_middle(width, depth);
        bottom_break_line(width, depth);
        bottom_middle(width, depth, n);
        bottom(width, depth);
    }

int main(void){
    mx_cube(46);
}
