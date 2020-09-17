#include "main.h"
#include "input_output.c"
#include "case_functions.c"

int main()
{
    int com;

    show_mainmenu();
    while (gets(inp) && sscanf(inp, "%d", &com) == 1)
    {
        if (!com)
            break;

        switch (com)
        {
        case 1:
            addmenu();
            break;

        case 2:
            search_by_name();
            break;

        case 3:
            search_by_author();
            break;

        case 4:
            search_by_publishdate();
            break;

        case 5:
            search_by_edition();
            break;

        case 6:
            search_by_rank();
            break;

        case 7:
            search_by_id();
            break;

        default:
            printf("ERROR! Input is not correct.\n");
            break;
        }

        printf("\n");
        show_mainmenu();
    }

    return 0;
}
