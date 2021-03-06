#ifndef _DISPLAY_H
#define _DISPLAY_H

#include <SDL/SDL.h>

#define DIR_U 0
#define DIR_D 1
#define DIR_L 2
#define DIR_R 3

#define C_BOTTOM 3
#define C_RIGHT  9

void initDisplay();

void drawTitleBar(SDL_Surface* screen, char* mode);

void drawInput(SDL_Surface* screen, char* input, uint16_t inputCursor, uint16_t inputEnd);
void drawResult(SDL_Surface* screen, double result);

void drawPlotterInput(SDL_Surface* screen, char* inputs[], uint16_t* inputCursors, uint16_t* inputEnds, uint8_t plotIndex);
void drawPlotGrid(SDL_Surface* screen, double zoom);
void drawFunction(SDL_Surface* screen, double points[], uint8_t index);

void drawOSK(SDL_Surface* screen);
void drawOSKCursor(SDL_Surface* screen, uint8_t new);

void moveOSKCursor(SDL_Surface* screen, uint8_t dir);

char* getCurrentChar();

void drawSettings(SDL_Surface* screen, double angleMode);

#endif