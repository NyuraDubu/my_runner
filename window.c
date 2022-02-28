/*
** EPITECH PROJECT, 2021
** window.c
** File description:
** window.c
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

int open_window(t_Structure *fs)
{
    sfVideoMode mode = {1920, 1080, 32};
    fs->window.my_window =
    sfRenderWindow_create(mode, "My_Runner", sfFullscreen, 0);
    fs->clock.my_clock = sfClock_create();
    sfRenderWindow_setFramerateLimit(fs->window.my_window, 60);
    route(fs);
    draw_sprite(fs);
    score(fs);
    while (sfRenderWindow_isOpen(fs->window.my_window)) {
        event(fs);
        boucle_isopen(fs);
    }
    sfRenderWindow_destroy(fs->window.my_window);
    sfMusic_destroy(fs->music.my_route);
    return 0;
}

int event(t_Structure *fs)
{
    while (sfRenderWindow_pollEvent(fs->window.my_window,
    &fs->event.my_event)) {
        if (fs->event.my_event.type == sfEvtClosed) {
            sfRenderWindow_close(fs->window.my_window);
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            sfRenderWindow_close(fs->window.my_window);
        }
    }
    return 0;
}

int boucle_isopen(t_Structure *fs)
{
    sfRenderWindow_drawSprite(fs->window.my_window, fs->sprite.my_ssky, NULL);
    sfRenderWindow_drawSprite(fs->window.my_window, fs->sprite.my_sstar, NULL);
    moving_star(fs);
    sfRenderWindow_drawSprite(fs->window.my_window,
    fs->sprite.my_smountain, NULL);
    moving_mountain(fs);
    sfRenderWindow_drawSprite(fs->window.my_window, fs->sprite.my_stree, NULL);
    moving_tree(fs);
    sfRenderWindow_drawSprite(fs->window.my_window,
    fs->sprite.my_sground, NULL);
    moving_ground(fs);
    sfRenderWindow_drawSprite(fs->window.my_window,
    fs->sprite.my_scube, NULL);
    moving_cube(fs);
    sfRenderWindow_drawSprite(fs->window.my_window, fs->sprite.my_spika, NULL);
    update_score(fs);
    sfRenderWindow_display(fs->window.my_window);
    pika_sprite(fs),
    pika_sheet(fs);
    return 0;
}

void draw_sprite(t_Structure *fs)
{
    sky_sprite(fs);
    tree_sprite(fs);
    mountain_sprite(fs);
    star_sprite(fs);
    pika_sprite(fs);
    ground_sprite(fs);
    cube_sprite(fs);
}
