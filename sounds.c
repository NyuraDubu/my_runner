/*
** EPITECH PROJECT, 2021
** sounds.c
** File description:
** sounds.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/VideoMode.h>
#include <SFML/Window/WindowHandle.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Export.h>
#include <SFML/Audio.h>
#include "struct.h"
#include <stdlib.h>

int route(t_Structure *fs)
{
    fs->music.my_route =
    sfMusic_createFromFile("files/route.ogg");
    sfMusic_play(fs->music.my_route);
    sfMusic_setLoop(fs->music.my_route, sfTrue);
    return 0;
}
