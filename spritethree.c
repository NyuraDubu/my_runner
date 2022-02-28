/*
** EPITECH PROJECT, 2022
** spritethree.c
** File description:
** spritethree.c
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

int cube_sprite(t_Structure *fs)
{
    fs->sprite.my_scube = sfSprite_create();
    fs->texture.my_tcube =
    sfTexture_createFromFile("files/images/cube.png", NULL);
    fs->vector.my_cubepos = (sfVector2f) {2000, 874};
    sfSprite_setTexture(fs->sprite.my_scube,
    fs->texture.my_tcube, sfFalse);
    sfSprite_setPosition(fs->sprite.my_scube, fs->vector.my_cubepos);
    return 0;
}
