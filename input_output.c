void show_mainmenu()
{
    printf("Book catalog:\n");
    printf("  1. Add new book\n");
    printf("  2. search by name\n");
    printf("  3. search by author\n");
    printf("  4. search by publish date\n");
    printf("  5. search by edition\n");
    printf("  6. search by rank\n");
    printf("  7. search by ID\n");
    printf("  0. exit\n");
    printf("\n");
}

void addbook()
{
    for (i = 1; i <= MAX_BOOK_NUMBER; i++)
    {
        if (!book[i].id)
        {
            printf("Add new book:\n");
            book[i].id = i;
            printf("  name = ");
            gets(book[i].name);
            printf("  author = ");
            gets(book[i].author);
            printf("  publish date = ");
            gets(book[i].pub);
            printf("  edition = ");
            sscanf(gets(inp), "%u", &book[i].ed);
            printf("  rank = ");
            sscanf(gets(inp), "%lf", &book[i].book_rank);
            printf("  Book added successfully.\n");
            printf("\n");
            break;
        }
        else if (i == MAX_BOOK_NUMBER)
            printf("Memory full.\n");
    }
}

void addmenu()
{
    p = 1;
    while (p)
    {
        if (p == 1)
            addbook();
        else
            printf("ERROR! Input is not correct.\n");
        show_addmenu();
        sscanf(gets(inp), "%d", &p);
    }
}

void show_addmenu()
{
    printf("Next actions:\n");
    printf("  1. Add another book\n");
    printf("  0. Main menu\n");
}

void show_book(int i)
{

    printf("Book:\n");
    printf("  id = %d\n", book[i].id);
    printf("  name = ");
    puts(book[i].name);
    printf("  author = ");
    puts(book[i].author);
    printf("  publish date = ");
    puts(book[i].pub);
    printf("  edition = %u\n", book[i].ed);
    printf("  rank = %.2f\n\n", book[i].book_rank);
}

void show_searchmenu()
{
    printf("Next actions:\n");
    printf("  1. Delete\n");
    printf("  2. Edit\n");
    printf("  0. Main menu\n");
}

void edit_book(int i)
{
    printf("Edit book %d:\n", book[i].id);
    printf("  name = ");
    gets(inp);
    if (inp[0] != 0)
        strcpy(book[i].name, inp);
    printf("  author = ");
    gets(inp);
    if (inp[0] != 0)
        strcpy(book[i].author, inp);
    printf("  publish date = ");
    gets(inp);
    if (inp[0] != 0)
        strcpy(book[i].pub, inp);
    printf("  edition = ");
    sscanf(gets(inp), "%u", &book[i].ed);
    printf("  rank = ");
    sscanf(gets(inp), "%lf", &book[i].book_rank);
    printf("  The book has been edited successfully.\n\n");
    show_book(i);
}

void searchmenu(int i)
{
    show_searchmenu();
    sscanf(gets(inp), "%d", &lev);
    while (lev)
    {
        if (lev == 1)
        {
            book[i].id = 0;
            printf("The book has been deleted.\n");
            break;
        }
        else if (lev == 2)
        {
            edit_book(i);
        }
        else
            printf("ERROR! Input is not correct.\n");
        show_searchmenu();
        sscanf(gets(inp), "%d", &lev);
    }
}
