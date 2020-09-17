void search_by_name()
{
    printf("Enter name: ");
    gets(inp);
    p = 0;
    for (i = 1; i <= MAX_BOOK_NUMBER; i++)
    {
        if (!strcmp(inp, book[i].name) && book[i].id)
        {
            show_book(i);
            j = i;
            p++;
        }
        else if (i == MAX_BOOK_NUMBER && !p)
        {
            printf("The book DOESNOT EXIST in the library.\n");
        }
    }
    if (p != 1)
        return;
    searchmenu(j);
}

void search_by_author()
{
    printf("Enter author: ");
    gets(inp);
    p = 0;
    for (i = 1; i <= MAX_BOOK_NUMBER; i++)
    {
        if (!strcmp(inp, book[i].author) && book[i].id)
        {
            show_book(i);
            j = i;
            p++;
        }
        else if (i == MAX_BOOK_NUMBER && !p)
        {
            printf("The book DOESNOT EXIST in the library.\n");
        }
    }
    if (p != 1)
        return;
    searchmenu(j);
}

void search_by_publishdate()
{
    printf("Enter publish date: ");
    gets(inp);
    p = 0;
    for (i = 1; i <= MAX_BOOK_NUMBER; i++)
    {
        if (!strcmp(inp, book[i].pub) && book[i].id)
        {
            show_book(i);
            j = i;
            p++;
        }
        else if (i == MAX_BOOK_NUMBER && !p)
        {
            printf("The book DOESNOT EXIST in the library.\n");
        }
    }
    if (p != 1)
        return;
    searchmenu(j);
}

void search_by_edition()
{
    printf("Enter edition: ");
    sscanf(gets(inp), "%u", &ed);
    p = 0;
    for (i = 1; i <= MAX_BOOK_NUMBER; i++)
    {
        if ((ed == book[i].ed) && book[i].id)
        {
            show_book(i);
            j = i;
            p++;
        }
        else if (i == MAX_BOOK_NUMBER && !p)
        {
            printf("The book DOESNOT EXIST in the library.\n");
        }
    }
    if (p != 1)
        return;
    searchmenu(j);
}

void search_by_rank()
{
    printf("Enter rank: ");
    sscanf(gets(inp), "%lf", &book_rank);
    p = 0;
    for (i = 1; i <= MAX_BOOK_NUMBER; i++)
    {
        if ((book_rank == book[i].book_rank) && book[i].id)
        {
            show_book(i);
            j = i;
            p++;
        }
        else if (i == MAX_BOOK_NUMBER && !p)
        {
            printf("The book DOESNOT EXIST in the library.\n");
        }
    }
    if (p != 1)
        return;
    searchmenu(j);
}

void search_by_id()
{
    printf("Enter ID (1 - %d): ", MAX_BOOK_NUMBER);
    sscanf(gets(inp), "%d", &i);
    if (!book[i].id)
    {
        printf("The book DOESNOT EXIST in the library.\n");
        return;
    }
    show_book(i);

    searchmenu(i);
}
