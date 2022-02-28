/*
** EPITECH PROJECT, 2022
** parallax.c
** File description:
** parallax
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

void moving_mountain(t_Structure *fs)
{
    sfTime tmountain;
    float sec;

    tmountain = sfClock_getElapsedTime(fs->clock.my_clock);
    sec = tmountain.microseconds / 1;
    if (sec > 0.01) {
        fs->vector.my_mountainpos.x -= 1;
        sfSprite_setPosition(fs->sprite.my_smountain,
        fs->vector.my_mountainpos);
        if (fs->vector.my_mountainpos.x == -3840) {
            fs->vector.my_mountainpos.x = 0;
            sfClock_restart(fs->clock.my_clock);
        }
    }
}

void moving_tree(t_Structure *fs)
{
    sfTime ttree;
    float sec;

    ttree = sfClock_getElapsedTime(fs->clock.my_clock);
    sec = ttree.microseconds / 1;
    if (sec > 0.01) {
        fs->vector.my_treepos.x -= 5;
        fs->vector.my_treepos.y = 545;
        sfSprite_setPosition(fs->sprite.my_stree, fs->vector.my_treepos);
        if (fs->vector.my_treepos.x == -2000) {
            fs->vector.my_treepos.x = 0;
            sfClock_restart(fs->clock.my_clock);
        }
    }
}

void moving_star(t_Structure *fs)
{
    sfTime tstar;
    float sec;

    tstar = sfClock_getElapsedTime(fs->clock.my_clock);
    sec = tstar.microseconds / 1;
    if (sec > 0.01) {
        fs->vector.my_starpos.x -= 10;
        sfSprite_setPosition(fs->sprite.my_sstar, fs->vector.my_starpos);
        if (fs->vector.my_starpos.x == -30) {
            fs->vector.my_starpos.x = 2000;
            fs->vector.my_starpos.y = rand() % 200;
            sfClock_restart(fs->clock.my_clock);
        }
    }
}

void moving_ground(t_Structure *fs)
{
    sfTime tground;
    float sec;

    tground = sfClock_getElapsedTime(fs->clock.my_clock);
    sec = tground.microseconds / 1;
    if (sec > 0.01) {
        fs->vector.my_groundpos.x -= 3;
        sfSprite_setPosition(fs->sprite.my_sground, fs->vector.my_groundpos);
        if (fs->vector.my_groundpos.x == -1800) {
            fs->vector.my_groundpos.x = 0;
            sfClock_restart(fs->clock.my_clock);
        }
    }
}

void moving_cube(t_Structure *fs)
{
    sfTime tcube;
    float sec;

    tcube = sfClock_getElapsedTime(fs->clock.my_clock);
    sec = tcube.microseconds / 1;
    if (sec > 0.01) {
        fs->vector.my_cubepos.x -= 3;
        sfSprite_setPosition(fs->sprite.my_scube, fs->vector.my_cubepos);
        if (fs->vector.my_cubepos.x == -100) {
            fs->vector.my_cubepos.x = 0;
            sfClock_restart(fs->clock.my_clock);
        }
    }
}
