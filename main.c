/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
*/

#include "struct.h"
#include <stdlib.h>
#include <unistd.h>

int my_description(void)
{
    write(1, " \n", 2);
    write(1, "The project My_Runner is a project that consist", 47);
    write(1, " to recreate a platformer game like Super Mario", 47);
    write(1, " or Geometry Dash.\n", 19);
    write(1, " \n", 2);
    write(1, "<COMMANDS AVAILABLE>\n", 21);
    write(1, " \n", 2);
    write(1, "[ESCAPE] QUIT THE GAME\n", 23);
    write(1, "[SPACE] JUMP\n", 13);
    write(1, " \n", 2);
    return 0;
}

int main(int ac, char **av)
{
    t_Structure *fs = malloc(sizeof(t_Structure));

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_description();
    } else if (ac != 1) {
        return 84;
    } else {
        open_window(fs);
    }
    free(fs);
    return 0;
}
