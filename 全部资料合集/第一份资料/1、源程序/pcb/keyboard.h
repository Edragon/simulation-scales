#ifndef   _KEYBOARD_H
#define   _KEYBOARD_H

#include <reg52.h>
sbit ROW1=P1^5;
sbit ROW2=P1^4;
sbit ROW3=P1^3;
sbit ROW4=P1^2;
sbit COL1=P1^6;
sbit COL2=P1^7;
sbit COL3=P3^2;
sbit COL4=P3^3;

unsigned char Getkeyboard(void);

#endif