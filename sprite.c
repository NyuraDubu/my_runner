/*
** EPITECH PROJECT, 2021
** sprite.c
** File description:
** sprite;c
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

int sky_sprite(t_Structure *fs)
{
    fs->sprite.my_ssky = sfSprite_create();
    fs->texture.my_tsky =
    sfTexture_createFromFile("files/images/sky.jpg", NULL);
    sfSprite_setTexture(fs->sprite.my_ssky,
    fs->texture.my_tsky, sfFalse);
    return 0;
}

int tree_sprite(t_Structure *fs)
{
    fs->sprite.my_stree = sfSprite_create();
    fs->texture.my_ttree =
    sfTexture_createFromFile("files/images/tree.png", NULL);
    sfVector2f treepos = {200, 900};
    sfSprite_setTexture(fs->sprite.my_stree,
    fs->texture.my_ttree, sfFalse);
    sfSprite_setPosition(fs->sprite.my_stree, treepos);
    sfSprite_setScale(fs->sprite.my_stree, (sfVector2f) {0.5, 0.5});
    return 0;
}

int mountain_sprite(t_Structure *fs)
{
    fs->sprite.my_smountain = sfSprite_create();
    fs->texture.my_tmountain =
    sfTexture_createFromFile("files/images/mountain.png", NULL);
    sfVector2f mountainpos = {0, 0};
    sfSprite_setTexture(fs->sprite.my_smountain,
    fs->texture.my_tmountain, sfFalse);
    sfSprite_setPosition(fs->sprite.my_smountain, mountainpos);
    return 0;
}

int star_sprite(t_Structure *fs)
{
    fs->sprite.my_sstar = sfSprite_create();
    fs->texture.my_tstar =
    sfTexture_createFromFile("files/images/star.png", NULL);
    sfVector2f starpos = {0, 0};
    sfSprite_setTexture(fs->sprite.my_sstar,
    fs->texture.my_tstar, sfFalse);
    sfSprite_setPosition(fs->sprite.my_sstar, starpos);
    return 0;
}

int ground_sprite(t_Structure *fs)
{
    fs->sprite.my_sground = sfSprite_create();
    fs->texture.my_tground =
    sfTexture_createFromFile("files/images/sol.png", NULL);
    sfVector2f groundpos = {0, 0};
    sfSprite_setTexture(fs->sprite.my_sground,
    fs->texture.my_tground, sfFalse);
    sfSprite_setPosition(fs->sprite.my_sground, groundpos);
    sfSprite_setScale(fs->sprite.my_sground, (sfVector2f) {3, 2.37});
    return 0;
}
