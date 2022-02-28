/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include <SFML/Graphics.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Event.h>
    #include <SFML/Window/VideoMode.h>
    #include <SFML/Window/WindowHandle.h>
    #include <SFML/Window/Types.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/System/Export.h>
    #include <SFML/Audio.h>

typedef struct s_Sprite {
    sfSprite *my_ssky;
    sfSprite *my_smountain;
    sfSprite *my_sstar;
    sfSprite *my_stree;
    sfSprite *my_spika;
    sfSprite *my_sground;
    sfSprite *my_scube;
}t_Sprite;

typedef struct s_Texture {
    sfTexture *my_tsky;
    sfTexture *my_tmountain;
    sfTexture *my_tstar;
    sfTexture *my_ttree;
    sfTexture *my_tpika;
    sfTexture *my_tground;
    sfTexture *my_tcube;
}t_Texture;

typedef struct s_Music {
    sfMusic *my_route;
    sfSound *my_pika;
    sfSoundBuffer *bpika;
}t_Music;

typedef struct s_Vector {
    sfVector2f my_mountainpos;
    sfVector2f my_treepos;
    sfVector2f my_skypos;
    sfVector2f my_starpos;
    sfVector2f my_pikapos;
    sfVector2f my_groundpos;
    sfVector2f my_cubepos;
}t_Vector;

typedef struct s_OWindow {
    sfRenderWindow *my_window;
}t_OWindow;

typedef struct s_Event {
    sfEvent my_event;
}t_Event;

typedef struct s_Clock {
    sfClock *my_clock;
}t_Clock;

typedef struct s_Time {
    sfTime *my_time;
}t_Time;

typedef struct s_IntRect {
    sfIntRect my_pikaint;
}t_IntRect;

typedef struct s_Text {
    sfText *text;
    sfFont *font;
}t_Text;

typedef struct s_Structure {
    t_Sprite sprite;
    t_Texture texture;
    t_Music music;
    t_Vector vector;
    t_OWindow window;
    t_Event event;
    t_Clock clock;
    t_Time time;
    t_IntRect intrect;
    t_Text text;
}t_Structure;

int open_window(t_Structure *fs);
int event(t_Structure *fs);
int boucle_isopen(t_Structure *fs);
int route(t_Structure *fs);
int sky_sprite(t_Structure *fs);
int tree_sprite(t_Structure *fs);
int mountain_sprite(t_Structure *fs);
int star_sprite(t_Structure *fs);
int pika_sprite(t_Structure *fs);
int ground_sprite(t_Structure *fs);
int cube_sprite(t_Structure *fs);
void pika_sheet(t_Structure *fs);
void moving_mountain(t_Structure *fs);
void moving_tree(t_Structure *fs);
void moving_star(t_Structure *fs);
void moving_ground(t_Structure *fs);
void moving_cube(t_Structure *fs);
void score(t_Structure *fs);
void update_score(t_Structure *fs);
void pika_jump(t_Structure *fs);
void draw_sprite(t_Structure *fs);

#endif
