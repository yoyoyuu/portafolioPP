#include <stdio.h>

typedef struct  _book
{
    int id;
    char title[100];
    char author[100];
    int pubication_year;
    int quantity;
} book_t;

typedef struct _member
{
    int id;
    char name[100];
    int bookIssued;
} member_t;


int main()
{
    int choice = 0;

    do
    {
        printf("\nMenu de sistema de manejo de biblioteca\n");
        printf("\t1. agregar un libro\n");
        printf("\t2. mostrar libros disponibles\n");
        printf("\t3. agregar un miembro\n");
        printf("\t4. prestar libro\n");
        printf("\t5. salir\n");
        printf("\tIndica tu opcion: ");
        scanf("%d", &choice);

        /*switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            addMember();
            break;
        case 4:
            IssueBook();
            break;
        default:
        printf("\nOpcion invalida, por favor intenta de nuevo.\n");
            break;
        }*/
    } while (choice != 5);
    
}