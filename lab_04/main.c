#include <stdio.h>
#include <stdlib.h>

void write_shapes_to_file();
void draw_square(int size);
void draw_triangle(int size);

int main() {
    int choice = 0;
    while (choice != 3) {
        printf("Welcome to Shape Reader! Please make your choice to continue:\n");
        printf("1-) Generate a shape file\n");
        printf("2-) Read and draw a shape file\n");
        printf("3-) Terminate the program\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                write_shapes_to_file();
                break;
            case 2: ;
                FILE *file = fopen("shapes.txt", "r");
                if (file == NULL) {
                    printf("Error opening file\n");
                    exit(1);
                }
                char shape_type;
                int size;
                while (fscanf(file, "%c,%d\n", &shape_type, &size) == 2) {
                    switch (shape_type) {
                        case 's':
                            draw_square(size);
                            break;
                        case 't':
                            draw_triangle(size);
                            break;
                        default:
                            printf("Invalid shape type\n");
                            break;
                    }
                }
                fclose(file);
                break;
            case 3:
                printf("Terminating the program\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
        printf("\n");
    }
    return 0;
}

void write_shapes_to_file() {
    FILE *file = fopen("shapes.txt", "a");
    if (file == NULL) {
        printf("Error creating file\n");
        exit(1);
    }
    char shape_type;
    int size;
    printf("Enter the shape type (s: square, t: triangle): ");
    scanf(" %c", &shape_type);
    printf("Enter the size of the shape: ");
    scanf("%d", &size);
    fprintf(file, "%c,%d\n", shape_type, size);
    fclose(file);
}

void draw_square(int size) {
    int i, j;
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void draw_triangle(int size) {
    int i, j;
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= 2 * size - 1; j++) {
            if (i == size || i + j == size + 1 || j - i == size - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}