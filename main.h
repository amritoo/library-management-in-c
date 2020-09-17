#include <stdio.h>
#include <string.h>

/**
 * Maximum number of books allowed in the library.
 * Currently it is set to 2000.
*/
#define MAX_BOOK_NUMBER 2000

/**
 * The structure of a single book.
*/
struct Book
{
    unsigned id;
    char name[100];
    char author[100];
    char pub[100];
    unsigned ed;
    double book_rank;
};

struct Book book[MAX_BOOK_NUMBER + 2];
int i, j, p, lev;
char str[1000];
unsigned ed;
double book_rank;
char inp[1000];

// Definition inside input_output.c file
void show_mainmenu();
void addbook();
void addmenu();
void show_addmenu();
void show_book(int i);
void show_searchmenu();
void edit_book(int i);
void searchmenu(int i);

// Definition inside case_functions.c file
void search_by_name();
void search_by_author();
void search_by_publishdate();
void search_by_edition();
void search_by_rank();
void search_by_id();
