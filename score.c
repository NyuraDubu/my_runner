/*
** EPITECH PROJECT, 2022
** score.c
** File description:
** score.c
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

void score(t_Structure *fs)
{
    fs->text.font = sfFont_createFromFile("files/arial.ttf");
    fs->text.text = sfText_create();
    sfText_setString(fs->text.text, "SCORE:");
    sfText_setFont(fs->text.text, fs->text.font);
    sfText_setCharacterSize(fs->text.text, 50);
    sfText_setFillColor(fs->text.text, sfWhite);
    sfText_setPosition(fs->text.text, (sfVector2f) {50, 50});
}

void update_score(t_Structure *fs)
{
    sfText_setString(fs->text.text, "SCORE:");
    sfRenderWindow_drawText(fs->window.my_window, fs->text.text, NULL);
}
