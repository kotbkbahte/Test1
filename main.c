#include <stdio.h>
#include <stdlib.h>

#include "src/core.h"


TState State;
int i = 0;
int main()
{
    init_core();

    State.isRunning = True;

    while(State.isRunning)
    {
        i++;
        system("cls");


        printf("[%d]Running!\n", i);

    }
    return 0;

}
