#include <unistd.h>

int strlen(char *str)
{
    int len = 0;
    while(str[len]){
        len++;
    }
    return len;
}

char *strrev(char *str)
{
    int len = strlen(str) - 1;

    while(len >= 0)
    {
        write(1, &str[len], 1);
        len--;
    }
    return str;
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int start = 1;
        int end;
        while(argv[1])
        {
            strrev(argv[1]);
        }
    }
    write(1, "\n", 1);
}