#include <stdio.h>
#include <string.h>

// global variables
char *todo[100];
int counter = 0;


// prototypes
void get_input(void);
void add_item(void);
void view_items(void);
void delete_items(void);

// main function
int main(void)
{
    printf("-------------ToDo List-------------\n");
    get_input();
}

// get user commands
void get_input(void)
{
    char input[100]; // input
    
    printf("\n: ");
    scanf("%[^\n]%*c", input); // filters \n char from the string input

    if (strcmp(input, "exit") == 0 || strcmp(input, "quit") == 0)
    {
        // exit function
        return;
    }
    else if (strcmp(input, "add") == 0)
    {
        // adding items to todo
        add_item();
        get_input();
    }
    else if (strcmp(input, "view") == 0)
    {
        // viewing items in todo
        view_items();
        get_input();
    }
    else if (strcmp(input, "delete") == 0)
    {
        // deleteing items from todo
        delete_items();
        get_input();
    }
    else
    {
        // for typos
        get_input();
    }
}

void delete_items(void)
{
    int item;

    do
    {
        printf("Item No: ");
        scanf("%i", &item);
    }
    // getting item number until it is between 0 and counter
    while ((item - 1) >= counter);

    // clear the \n char from interfearing
    while (getchar() != '\n');

    // deleting the item
    todo[item - 1] = NULL;

    // removing the space for deleted item
    for (int i = item - 1; i < counter; i++)
    {
        todo[i] = todo[i + 1];
    }

    // clear duplicated last item
    todo[counter - 1] = NULL;
    // reduce coutner
    counter--;
}

void view_items(void)
{
    for (int i = 0; i < counter; i++)
    {
        // printing todo items
        printf("%i-> %s\n", i+1, todo[i]);
    }
}

void add_item(void)
{
    char item[100];

    // getting item to add
    printf("Item: ");
    scanf("%[^\n]%*c", item);

    // freeing space and copying the item to todo
    todo[counter] = strdup(item);

    // increasing counter
    counter++;
}