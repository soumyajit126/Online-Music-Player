#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct Book{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main(){
    Book book;

    strcpy(book.title,"meri zindagi");
    strcpy(book.author,"codewith harry");
    strcpy(book.subject,"comedy");
    book.book_id=420;
    printf("book title:%s\n",book.title);
    printf("book author: %s\n",book.author);
    printf("book subject:%s\n",book.subject);
    
    return 0;

}