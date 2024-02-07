/*
** EPITECH PROJECT, 2023
** radar.h
** File description:
** header
*/

#ifndef MY_RADAR
    #define MY_RADAR
    #include <errno.h>
    #include <dirent.h>
    #include <sys/stat.h>
    #include <time.h>
    #include <pwd.h>
    #include <grp.h>
    #include <errno.h>
    #include <string.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics/Rect.h>
    #include <unistd.h>
    #include <time.h>
    #include <math.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <unistd.h>
    #define PI 3.14159265358979323846

typedef struct hitbox {
    sfRectangleShape *rect;
    sfVector2f size;
    sfCircleShape* circle;
    float radius;
    sfVector2f pos;
    int actif;
} hitbox;

typedef struct sprite {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f posfin;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    hitbox hitbox;
    int actif;
    int speed;
} sprite;

typedef struct game {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfMusic *music;
    sprite background;
    sprite *tower;
    sprite *plane;
    sfClock *clock;
    int hit;
    int nbr_plane;
    int nbr_tower;
} game;


struct game set_game(char **settings);
int my_radar(char **settings);
void display(struct game *game);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
int my_getnbr(char const *str);
char **my_str_to_word_array(char const *str);
int compt_plane(char **settings);
int compt_tower(char **settings);



#endif