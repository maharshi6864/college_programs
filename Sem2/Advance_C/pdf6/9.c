// Create a structure named Book to store book details like title, author, and price. Write a C
//  program to input details for three books, find the most expensive and the lowest priced books,
//  and display their information.

#include <stdio.h>

struct Book
{
  char title[20];
  char author[20];
  float price;
};

int main()
{

  int number_of_books = 0;
  printf("Enter number of books : ");
  scanf("%d", &number_of_books);
  getchar();

  struct Book books[number_of_books];

  for (int i = 0; i < number_of_books; i++)
  {
    printf("\n\nEnter Book Details for book %d\n", i + 1);
    printf("Enter title : ");
    fgets(books[i].title, sizeof(books[i].title), stdin);
    printf("Enter author : ");
    fgets(books[i].author, sizeof(books[i].author), stdin);
    printf("Enter price : ");
    scanf("%f", &books[i].price);
    getchar();
  }

  struct Book costly_books;
  struct Book cheapest_books;
  int mark = 0;

  for (int i = 0; i < number_of_books; i++)
  {
    if (mark < books[i].price)
    {
      mark = books[i].price;
      costly_books = books[i];
    }
  }

  for (int i = 0; i < number_of_books; i++)
  {
    if (mark > books[i].price)
    {
      mark = books[i].price;
      cheapest_books = books[i];
    }
  }

  printf("\n\nMost expensive book is : %sAuthor : %sPrice : %.2f", costly_books.title, costly_books.author, costly_books.price);
  printf("\n\nMost lowest book is : %sAuthor : %sPrice : %.2f", cheapest_books.title, cheapest_books.author, cheapest_books.price);
}