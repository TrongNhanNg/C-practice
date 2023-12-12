//Quan ly sach bang pointer

#include<stdio.h>
#include<string.h>

struct Books 
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
//Function declaration
void printBookptr( struct Books *book);
void printBook( struct Books book);
//Print out with pointer ( arrow )
void printBookptr( struct Books *book ) 
{
   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
}
void printBook( struct Books book ) 
{
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}


int main()
{

    struct Books Book1 = {"C Programming", "Nuha Ali", "C Programming Tutorial", 6495407};
    
    struct Books Book2;
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Zara Ali");
    strcpy( Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;

    //print Book1 by passing address of Book1:
    printBookptr( &Book1);
    //print Book2 by passing address of Book2:
    printBook( Book2);

    return 0;
}

