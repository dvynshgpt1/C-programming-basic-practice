#include <stdio.h>
#include <string.h>

// make this programm
// take input : <h1> this is divyanshu<h1/>
// print : this is divyanshu

void parser(char *string)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }

        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
  while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while ( string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
  
}

int main()
{
    char string[] = "<h1>     this is divyanshu   <h1/>";
    parser(string);
    printf("the parser string is ... %s ...", string);
    return 0;
}
