#include <stdio.h>
#include <string.h>
/*data_type func_name(parameter_type parametername){
    return value_of_type_data_type;
}*/
int glo = 76;
void newPrint(char *char1)
{
    printf("the value is %s\n", char1);
}
int sum(int a, int b)
{
    return a + b;
}
float average(float a, float b)
{
    return (a + b) / 2;
}
// structures
struct Books
{
    char name[50];
    char authors[50];
    int price;

} book;
void printStruct(struct Books bk)
{
    printf("book name is %s", bk.name);
    printf("author name is %s", bk.authors);
    printf("book price is %d\n", bk.price);
}
int main()
{
    struct Books bk1, bk2;
    strcpy(bk1.name, "C programming\n");
    strcpy(bk1.authors, "dennis\n");
    bk1.price = 78;
    printStruct(bk1);
    // char name[3]={'m','y','\0'};
    // char str1[65],str2[98],str3[32];
    // strcpy(str1,"zarry");
    // strcpy(str2,"rohan");
    // // strcat(str1,str2);//add or concate
    // printf("%d\n",strcmp(str1,str2));//for same 0 for a <b -1 and for a>b 1
    // printf("%s",str1);

    // pointers
    //  int a = 98;
    //  printf("%d\n", a);
    //  int *ptr = NULL;
    //  if (!ptr){
    //      printf("pointer is not null");
    //  }
    //  ptr = &a;
    //  *ptr = 988;
    //  printf("%d", a);
    //  printf("the sum of a and b is %d\n", sum(10, 20));
    //  printf("the average of 100 and 299is %f\n", average(100, 299));
    //  int glo = 87; // local variable take the precidence then global variable local>>>>>>global****
    //  printf("Glo is %d\n", glo);
    //  newPrint("hello world\n");
    //  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //  for (int i = 0; i < 10; i++)
    //  {
    //      printf("enter the value for index %d\n",i);
    //      scanf("%d", &arr[i]);
    //  }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("the values for index %d\n",i,arr[i]);
    // }
    // printf("%d",arr[7]);

    return 0;
}