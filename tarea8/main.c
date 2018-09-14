void menu() {
    printf("Chose: A, for Perimeter\n B, for Area\n C, for Volume\n X, for Exit\n");
    printf("What do you want to calculate?");
}

void perimeter() {
    
    double i;
    double h;
    double k;
    double a;
    double b;
    double perimeter;
    int decision;
    
    printf("Press 1 if you want the perimeter of a rectangle \n Press 2 if you want the perimeter of an square \n Press 3 if you want the perimeter of an triangle\n");
    scanf("%i", &decision);
    
    switch (decision) {
        case 1:
            printf("Give me the size 1: \n");
            scanf("%lf", &i);
            printf("Give me the size 2: \n");
            scanf("%lf", &h);
            printf("Give me the size 3: \n")
            printf("%lf", &k)
            perimeter = (i) + (h) + (k);
            printf("The perimeter %lf \n", perimeter);
            break;

        case 2:
            printf("Give me one size:");
            scanf("%lf", &a);
            perimeter = 4 * a;
            printf("The perimeter is %lf \n", perimeter);
            break;

        case 3:
            printf("Give me one size:");
            scanf("%lf", &b);
            perimeter = 3 * s;
            printf("The perimeter is %lf \n", perimeter);
            break;

        default:
            printf("Give a valid character, please");
    }
}

void area() {
    
    double i;
    double h;
    double a;
    double b;
    double c;
    double area;
    int decision;
    
    printf("Press 1 if you want the perimeter of a rectangle \n Press 2 if you want the perimeter of an square \n Press 3 if you want the perimeter of an triangle\n");
    scanf("%i", &decision);
    
    switch (decision) {
        case 1:
            printf("Give me the base:");
            scanf("%lf", &i);
            printf("Give me the height:");
            scanf("%lf", &h);
            area = i * h;
            printf("The area is %lf ^2", area);
            break;

        case 2:
            printf("Give me the size:");
            scanf("%lf", &a);
            area = pow(a,2);
            printf("The area of the square is %lf ^2", area);
            break;

        case 3:
            printf("Give me the side:");
            scanf("%lf", &b);
            printf("Give me the height:");
            scanf("%lf", &c);
            area = (b * c)/2;
            printf("The area of the triangle is %lf ^2", area);
            break;

        default:
            printf("Give a valid character, please");
    }
}

void volume() {
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    const double pi = 3.141516;
    double volume;
    int decision;
    
    printf("Press 1 if you want the volume of a rectangle \n Press 2 if you want the volume of an square \n Press 3 if you want the volume of a triangle\n");
    scanf("%i", &decision);

    switch (decision) {
        case 1:
            printf("Give me the width:");
            scanf("%lf", &b);
            printf("Give me the length:");
            scanf("%lf", &a);
            printf("Give me the height:");
            scanf("%lf", &c);
            volume = b * a * c;
            printf("The volume of the rectangle prism is %lf ^3", volume);
    
        case 2:
            printf("Give me the length of the side:");
            scanf("%lf", &d);
            volume = pow(d,3);
            printf("The volume of the cube is %lf ^3.", volume);

        case 3:
            printf("Give me the length of the radius:");
            scanf("%lf", &e);
            printf("Give me the length of the height:");
            scanf("%lf", &f);
            volume = (pi * pow(e,2)) * f;
            printf("The volume of the cylinder is %lf ^3", volume);

        default:
            printf("The option that you introduced is not valid. Please introduced a valid option.");
    }
}

int main() {
    char option;

    do {
        menu();
        scanf("%c",&option);
        if (option != 'X') {
            switch (option) {
                case 'A':
                    perimeter();
                    break;
                case 'B':
                    area();
                    break;
                case 'C':
                    volume();
                    break;
                default:
                    printf("Give a valid character, please");
            }
        }

    } while (option != 'X');
    printf("BYE");

    return 0;
}