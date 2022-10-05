#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
    string name;
    string number;
}
person;

int main (void)
{
    int a[2];
    a[0] = 1;
    a[1] = 2;
    person people[2];

    //banav data type
    //datatype varaible name
    //variable name.property name = "value"
    people[0].name = "Naveed";
    people[0].number = "7051966050";

    people[1].name = "Nihal";
    people[1].number = "6005233301";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Naveed") == 0)
        {
            printf("Found %s \n", people[i].number );
        }
        return 0;
    }
    printf("Not Found\n");
    return 1;
}