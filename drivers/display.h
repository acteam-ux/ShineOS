#pragma once

#define VIDEO_ADDRESS 0xb8000
#define MAX_ROWS 25
#define MAX_COLS 80

//Colors (used to calculate fore and background)
#define BLACK 0x00
#define BLUE 0x01
#define GREEN 0x02
#define CYAN 0x03
#define RED 0x04
#define PINK 0x05
#define BROWN 0x06
#define LGREY 0x07
#define GREY 0x08
#define LBLUE 0x09
#define LGREEN 0x0a
#define LCYAN 0x0b
#define LRED 0x0c
#define LPINK 0x0d
#define YELLOW 0x0e
#define WHITE 0x0f

/* Screen i/o ports */
#define REG_SCREEN_CTRL 0x3d4
#define REG_SCREEN_DATA 0x3d5

/* Public kernel API */
char get_defcolor();
char mix_color(char foreground, char background);

void print_string(char *string, char color);
void print_char(char *chr, char color);
void print_string_defcol(char *string);

void print_nl();

void clear_screen();

int scroll_ln(int offset);

void print_backspace();
