#include<stdio.h>


void fullname() {
    printf("Dan");
    printf("Dela Cruz \n");

}

int main()
{

    fullname();
    
    int n;

    printf("Enter an integer\n");
    scanf("%d", &n);

    if ((n / 2) * 2 == n)
        printf("Even\n");
    else
        printf("Odd\n");
    /*

    int num1;
    int num2;

    printf("Enter First Number: ");
    scanf("%d",&num1);

    printf("Enter Second Number: ");
    scanf("%d",&num2);


    if(num1 == 100 && num2 == 100) {

        printf("Login Success 100");

    }
    else {
        printf("Above 100");
    }

*/

    return 0;
}
