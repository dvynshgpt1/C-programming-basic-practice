// exercise for managing travel agency. take data of drivers such as their
// not working this progrram
// name
// vehicle no.
// id no.
// route
// using struct
// not printing taken data  appropriately in last 

#include <stdio.h>
#include <string.h>
struct driver
{
    char name[10];
    char vehno[5];
    char idno[5];
    char route[10];
};

void main()
{
    int n;
    printf("travel agency drivers enter your following details\n\n ");

    struct driver a , b, c ;
    a.name;
    a.vehno;
    a.idno;
    a.route;
    b.name;
    b.vehno;
    b.idno;
    b.route;
    c.name;
    c.vehno;
    c.idno;
    c.route;
    for (int i = 1; i <= 2; i++)
    {
        printf(" driver %d enter your name\n ", i);
        scanf("%s", &a.name);
        printf("enter your vehicle no.\n");
        scanf("%s", &a.vehno);
        printf("enter your  id no.\n");
        scanf("%s", &a.idno);
        printf("enter your route\n ");
        scanf("%s", &a.route);
    }
    for (int j = 1; j <= 2; j++)
    {
        printf("name of  driver %d is %s \n ", j, a.name);
        printf("vehicle no.of driver %d is %s \n ", j, a.vehno);
        printf("id no.of driver  %d is %s \n ", j, a.idno);
        printf("route of  driver %d is %s\n ", j, a.route);
    }
}