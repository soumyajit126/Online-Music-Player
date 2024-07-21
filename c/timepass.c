#include <stdio.h>
int main()
{
    // single line comment
    /*multi
    line
    comment*/
    int a1 = 7;       // 2 to 4 bytes
    float b2 = 567.0; // 4 bytes-6 decimal precision
    char c1 = 't';    // 1 bytes
    unsigned int integer = 8;
    unsigned short integer4 = 7; // 2 bytes
    unsigned long integer5 = 6;
    long integer1 = 8;            // 4 bytes
    short integer7 = 8;           // 2 bytes
    double myfloat1 = 7.45;       // 8 bytes - 15 decimal places precision
    long double myfloat2 = 7.655; // 10 bytes and 19 decimal places precision

    printf("hello world%d\n", a1);
    printf("hello world%f\n", b2);
    printf("hello world%c\n", c1);
    printf("the size taken by int is %d\n", sizeof(int));
    printf("the size taken by unsigend int is %d\n", sizeof(unsigned int));
    printf("the size taken by float is %d\n", sizeof(float));
    printf("the size taken by double is %d\n", sizeof(double));
    printf("the size taken by long double is %d\n", sizeof(long double));
    printf("the size taken by short is %d\n", sizeof(short));
    printf("\n********rules of creating variables");
    int harryName;   // this is variable declararation
    harryName = 76;  // this is variable initialisation
    char five = '5'; // this is variable declaration and initialisation
    const int i = 9;
    harryName = 98;
    printf("********Types of  operators in c");
    // ctrl+/
    // arithmatic operators
    // relational operators
    // logical operators
    // bitwise operators
    // assisstant operators
    // misc operators
    // arithmatic operators
    int a = 6, b = 7, c = 8;
    printf("the sum of a and b is%d\n", a + b);
    printf("the subtract of a and b is%d\n", a - b);
    printf("the multiplication of a and b is%d\n", a * b);
    printf("the division of a and b is%d\n", a / b);
    printf("the modulo of a and b is%d\n", a % b);
    printf("the increament of a and b is%d\n", ++a);
    printf("the decreament of a and b is%d\n", --a);
    // 35:00
    // relatiomal operators
    int harry = 9, rohan = 45;
    printf("%d\n", harry == rohan);
    printf("%d\n", rohan != harry);
    printf("%d\n", rohan < harry);
    printf("%d\n", rohan > harry);
    printf("%d\n", rohan <= harry);
    printf("%d\n", rohan >= harry);
    // logical operators
    int h = 0, j = 1;
    printf("the logical operator return %d\n", h && j);
    printf("the logical operator return %d\n", h || j);
    printf("the logical operator return %d\n", !j);
    printf("the logical operator return %d\n", !h);
    // bitwise operators
    // A=00111100
    // B=00001101
    // R=00001100
    int A = 60, B = 14;
    printf("BItwise and Operator returned %d\n", A & B);
    printf("BItwise or Operator returned %d\n", A | B);
    printf("BItwise xor Operator returned %d\n", A ^ B);
    printf("BItwise ones Operator returned %d\n", ~B);
    printf("BItwise left shift Operator returned %d\n", A << B);
    printf("BItwise right shift Operator returned %d\n", A >> B);
    // assignment operators
    //=,+=,-=,*=,%=,etc
    //  int ha=9;
    //  ha+=9;
    //  printf("ha is %d\n",ha);
    //  //Misc operators - &,*,?:
    //  printf("\nTaking input from user in C");
    //  int harryInput;
    //  printf("\n Enter the value of harryInput");
    //  scanf("%d",&harryInput);
    //  printf("\nyou entered %d harryInput",harryInput);
    //  printf("\nyou entered %f harryInput",(float)harryInput);//will print float of 6 Decimal places after .

    // // int num1,num2;
    // // scanf("dividend%d",&num1);
    // // scanf("divisor%d",&num2);
    // // printf("\n num1/num2 is%f",(float)num1/num2);
    // printf("\n\n ***Decision Making In C***\n\n");
    // printf("enter your age\n");
    // int age;
    // scanf("%d",&age);
    // if(age<18){
    //     printf("\nyou cannot drive");

    // }
    // else if(age>=18&&age<=21) {
    //     printf("drive carefully");

    // }
    // else{
    //     printf("\nyou can drive");
    // }
    // //excersize tell me about switch case
    // int i4=age>3?100:200;//short hand if else
    // printf("%d",i4);
    printf("\n\n*****Loops in C****\n\n");
    int index = 0;
    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }
    for (int j = 0; j < 67; j++)
    {
        /* code */
        printf("%d\n", j);
    }
    do
    {
        printf("do while loop is running");
    } while (j > 666);
    printf("\n\n*****functions in C****\n\n");

    return 0;
}
