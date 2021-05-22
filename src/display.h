#ifndef _DISPLAY_H
#define _DISPLAY_H

#include <SDL/SDL.h>

#define DIR_U 0
#define DIR_D 1
#define DIR_L 2
#define DIR_R 3

#define C_BOTTOM 3
#define C_RIGHT 14

void initDisplay();

void drawInput(SDL_Surface* screen, char* input, uint16_t inputEnd);
void drawResult(SDL_Surface* screen, double result);
void drawOSK(SDL_Surface* screen);

void moveOSKCursor(SDL_Surface* screen, uint8_t dir);

uint8_t getCurrentChar();

#endif