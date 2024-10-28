#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <termios.h>
#include <fcntl.h>

int kbhit()
{
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if(ch != EOF)
    {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

int main()
{
    int hour, minute, second;
    hour = minute = second = 0;
    char key;

    while (1)
    {
        if (kbhit()) 
        {
            key = getchar();
            if (key == 's') 
                break;
            else if (key == 'r') 
            {
                hour = minute = second = 0;
                continue;
            }
        }

        system("clear");
        printf("%02d : %02d : %02d", hour, minute, second);
        fflush(stdout);

        second++;

        if (second == 60)
        {
            minute++;
            second = 0;
        }

        if (minute == 60)
        {
            hour++;
            minute = 0;
        }

        if (hour == 24)
        {
            hour = 0;
            minute = 0;
            second = 0;
        }

        sleep(1);
    }

    return 0;
}

