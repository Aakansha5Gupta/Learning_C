#include <stdio.h>

int main() {
    int choice, num, temp, rem, rev, sum;
    float a, b;

    do {
        printf("\n1. Calculator\n2. Palindrome\n3. Armstrong\n ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:     // -------- Calculator --------
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("1.+ 2.- 3.* 4./ : ");
                scanf("%d", &num);

                if(num==1) printf("= %.2f\n", a+b);
                else if(num==2) printf("= %.2f\n", a-b);
                else if(num==3) printf("= %.2f\n", a*b);
                else if(num==4) {
                    if(b!=0) printf("= %.2f\n", a/b);
                    else printf("Error! Division by zero\n");
                }
                else printf("Invalid operation\n");
                break;

            case 2:     // -------- Palindrome --------
                printf("Enter number: ");
                scanf("%d", &num);
                temp = num; rev = 0;

                while(temp > 0) {
                    rem = temp % 10;
                    rev = rev * 10 + rem;
                    temp /= 10;
                }

                printf(num == rev ? "Palindrome\n" : "Not Palindrome\n");
                break;

            case 3:     // -------- Armstrong --------
                printf("Enter number: ");
                scanf("%d", &num);
                temp = num; sum = 0;

                while(temp > 0) {
                    rem = temp % 10;
                    sum += rem * rem * rem;
                    temp /= 10;
                }

                printf(num == sum ? "Armstrong\n" : "Not Armstrong\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
