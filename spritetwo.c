/*
** EPITECH PROJECT, 2022
** spritetwo.c
** File description:
** spritetwo.c
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

int pika_sprite(t_Structure *fs)
{
    fs->sprite.my_spika = sfSprite_create();
    fs->texture.my_tpika =
    sfTexture_createFromFile("files/images/pikachu.png", NULL);
    sfVector2f pikapos = {200, 824};
    sfSprite_setTexture(fs->sprite.my_spika, fs->texture.my_tpika, sfFalse);
    sfSprite_setPosition(fs->sprite.my_spika, pikapos);
    sfSprite_setScale(fs->sprite.my_spika, (sfVector2f) {2, 2});
    pika_jump(fs);
    return 0;
}

void pika_sheet(t_Structure *fs)
{
    sfTime tpika = sfClock_getElapsedTime(fs->clock.my_clock);
    float sec = tpika.microseconds / 1000000.0;
    sfIntRect rect = {0, 0, 66, 57};
    if (sec > 0) {
        rect.left += 70;
        sfSprite_setTextureRect(fs->sprite.my_spika, rect);
    }
    if (sec > 0.15) {
        rect.left += 70;
        sfSprite_setTextureRect(fs->sprite.my_spika, rect);
    }
    if (sec > 0.3) {
        rect.left += 70;
        sfSprite_setTextureRect(fs->sprite.my_spika, rect);
    }
    if (sec > 0.45) {
        sfSprite_setTextureRect(fs->sprite.my_spika, rect);
        sfClock_restart(fs->clock.my_clock);
        rect.left = 0;
    }
}

void pika_jump(t_Structure *fs)
{
    sfTime tjump;
    sfVector2f pikapos = {200, 720};
    float sec = tjump.microseconds / 1000000.0;

    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        sfSprite_setPosition(fs->sprite.my_spika, pikapos);
        tjump = sfClock_getElapsedTime(fs->clock.my_clock);
        if (sec > 0.5) {
            sfSprite_setPosition(fs->sprite.my_spika, pikapos);
            sfClock_restart(fs->clock.my_clock);
        }
    }
}
