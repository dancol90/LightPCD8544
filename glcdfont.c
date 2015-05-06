#include <Arduino.h>

#ifndef FONT5X7_H
#define FONT5X7_H

// standard ascii 5x7 font

static unsigned const char font[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00,   
	0x3E, 0x5B, 0x4F, 0x5B, 0x3E, 	
	0x3E, 0x6B, 0x4F, 0x6B, 0x3E, 	
	0x1C, 0x3E, 0x7C, 0x3E, 0x1C, 
	0x18, 0x3C, 0x7E, 0x3C, 0x18, 
	0x1C, 0x57, 0x7D, 0x57, 0x1C, 
	0x1C, 0x5E, 0x7F, 0x5E, 0x1C, 
	0x00, 0x18, 0x3C, 0x18, 0x00, 
	0xFF, 0xE7, 0xC3, 0xE7, 0xFF, 
	0x00, 0x18, 0x24, 0x18, 0x00, 
	0xFF, 0xE7, 0xDB, 0xE7, 0xFF, 
	0x30, 0x48, 0x3A, 0x06, 0x0E, 
	0x26, 0x29, 0x79, 0x29, 0x26, 
	0x40, 0x7F, 0x05, 0x05, 0x07, 
	0x40, 0x7F, 0x05, 0x25, 0x3F, 
	0x5A, 0x3C, 0xE7, 0x3C, 0x5A, 
	0x7F, 0x3E, 0x1C, 0x1C, 0x08, 
	0x08, 0x1C, 0x1C, 0x3E, 0x7F, 
	0x14, 0x22, 0x7F, 0x22, 0x14, 
	0x5F, 0x5F, 0x00, 0x5F, 0x5F, 
	0x06, 0x09, 0x7F, 0x01, 0x7F, 
	0x00, 0x66, 0x89, 0x95, 0x6A, 
	0x60, 0x60, 0x60, 0x60, 0x60, 
	0x94, 0xA2, 0xFF, 0xA2, 0x94, 
	0x08, 0x04, 0x7E, 0x04, 0x08, 
	0x10, 0x20, 0x7E, 0x20, 0x10, 
    0x10, 0x10, 0x54, 0x38, 0x10, 
	0x08, 0x1C, 0x2A, 0x08, 0x08, 
	0x1E, 0x10, 0x10, 0x10, 0x10, 
	0x0C, 0x1E, 0x0C, 0x1E, 0x0C, 
	0x30, 0x38, 0x3E, 0x38, 0x30, 
	0x06, 0x0E, 0x3E, 0x0E, 0x06, 
    
    /* 6-7px in altezza, da 1 a 5px in lunghezza (solo M ne ha 5) */
    
    
    0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000001, //*SPACE*
    0b01011100, 0b00000001, 0b00000001, 0b00000001, 0b00000001, //!
    0b00001100, 0b00000000, 0b00001100, 0b00000001, 0b00000001, //"
    0b00101000, 0b01111100, 0b00101000, 0b01111100, 0b00101000, //#
    0b01010000, 0b01011000, 0b11101100, 0b00101000, 0b00000001, //$
    0b00000100, 0b01100000, 0b00010000, 0b00001100, 0b01000000, //%
    0b00101000, 0b01010100, 0b01010100, 0b00100000, 0b01010000, //&
    0b00001100, 0b00000001, 0b00000001, 0b00000001, 0b00000001, //'
    0b00111000, 0b01000100, 0b00000001, 0b00000001, 0b00000001, //(
    0b01000100, 0b00111000, 0b00000001, 0b00000001, 0b00000001, //)
    0b00010100, 0b00001000, 0b00010100, 0b00000001, 0b00000001, //*
    0b00010000, 0b00111000, 0b00010000, 0b00000001, 0b00000001, //+
    0b11000000, 0b01000000, 0b00000001, 0b00000001, 0b00000001, //,
    0b00010000, 0b00010000, 0b00010000, 0b00000001, 0b00000001, //-
    0b01000000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, //.
    0b01000000, 0b00100000, 0b00010000, 0b00001000, 0b00000100, ///
    0b00111000, 0b01000100, 0b01000100, 0b00111000, 0b00000001, //0
    0b00000000, 0b00000100, 0b01111100, 0b00000001, 0b00000001, //1
    0b01100100, 0b01010100, 0b01010100, 0b01001000, 0b00000001, //2
    0b01000100, 0b01010100, 0b01010100, 0b00101000, 0b00000001, //3
    0b00110000, 0b00101000, 0b01111100, 0b00100000, 0b00000001, //4
    0b01011100, 0b01010100, 0b01010100, 0b00100100, 0b00000001, //5
    0b00111000, 0b01010100, 0b01010100, 0b00100000, 0b00000001, //6
    0b00000100, 0b01100100, 0b00010100, 0b00001100, 0b00000001, //7
    0b00101000, 0b01010100, 0b01010100, 0b00101000, 0b00000001, //8
    0b00001000, 0b01010100, 0b01010100, 0b00111000, 0b00000001, //9
    0b00101000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, //:
    0b01101000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, //;
    0b00010000, 0b00101000, 0b01000100, 0b00000001, 0b00000001, //<
    0b00101000, 0b00101000, 0b00101000, 0b00000001, 0b00000001, //=
    0b01000100, 0b00101000, 0b00010000, 0b00000001, 0b00000001, //>
    0b00000100, 0b01010100, 0b00010100, 0b00001000, 0b00000001, //?
    0b00111000, 0b01000100, 0b01110100, 0b01010100, 0b00111000, //@
    0b01111000, 0b00100100, 0b00100100, 0b01111000, 0b00000001, //A
    0b01111100, 0b01010100, 0b01010100, 0b00101000, 0b00000001, //B
    0b00111000, 0b01000100, 0b01000100, 0b00000001, 0b00000001, //C
    0b01111100, 0b01000100, 0b01000100, 0b00111000, 0b00000001, //D
    0b01111100, 0b01010100, 0b01010100, 0b01000100, 0b00000001, //E
    0b01111100, 0b00010100, 0b00010100, 0b00000100, 0b00000001, //F
    0b00111000, 0b01000100, 0b01010100, 0b01110100, 0b00000001, //G
    0b01111100, 0b00010000, 0b00010000, 0b01111100, 0b00000001, //H
    0b01000100, 0b01111100, 0b01000100, 0b00000001, 0b00000001, //I
    0b00100000, 0b01000000, 0b01000100, 0b00111100, 0b00000001, //J
    0b01111100, 0b00010000, 0b00101000, 0b01000100, 0b00000001, //K
    0b01111100, 0b01000000, 0b01000000, 0b00000001, 0b00000001, //L
    0b01111100, 0b00001000, 0b00010000, 0b00001000, 0b01111100, //M
    0b01111100, 0b00001000, 0b00010000, 0b01111100, 0b00000001, //N
    0b00111000, 0b01000100, 0b01000100, 0b00111000, 0b00000001, //O
    0b01111100, 0b00100100, 0b00100100, 0b00011000, 0b00000001, //P
    0b00111000, 0b01000100, 0b01000100, 0b10111000, 0b00000001, //Q
    0b01111100, 0b00100100, 0b00100100, 0b01011000, 0b00000001, //R
    0b01001000, 0b01010100, 0b01010100, 0b00100100, 0b00000001, //S
    0b00000100, 0b01111100, 0b00000100, 0b00000001, 0b00000001, //T
    0b00111100, 0b01000000, 0b01000000, 0b00111100, 0b00000001, //U
    0b00111100, 0b01000000, 0b00110000, 0b00001100, 0b00000001, //V
    0b00111100, 0b01000000, 0b00111000, 0b01000000, 0b00111100, //W
    0b01101100, 0b00010000, 0b00010000, 0b01101100, 0b00000001, //X
    0b00001100, 0b01010000, 0b01010000, 0b00111100, 0b00000001, //Y
    0b01100100, 0b01010100, 0b01001100, 0b00000001, 0b00000001, //Z
    0b01111100, 0b01000100, 0b00000001, 0b00000001, 0b00000001, // [
    0b00000100, 0b00001000, 0b00010000, 0b00100000, 0b01000000, /* \ */
    0b01000100, 0b01111100, 0b00000001, 0b00000001, 0b00000001, // ]
    0b00001000, 0b00000100, 0b00001000, 0b00000001, 0b00000001, // ^
    0b01000000, 0b01000000, 0b01000000, 0b01000000, 0b00000001, // _
    0b00000100, 0b00001000, 0b00000001, 0b00000001, 0b00000001, // `
    0b00110000, 0b01001000, 0b01001000, 0b01111000, 0b00000001, // a
    0b01111100, 0b01001000, 0b01001000, 0b00110000, 0b00000001, // b
    0b00110000, 0b01001000, 0b01001000, 0b00000001, 0b00000001, // c
    0b00110000, 0b01001000, 0b01001000, 0b01111100, 0b00000001, // d
    0b00110000, 0b01101000, 0b01011000, 0b00010000, 0b00000001, // e
    0b00010000, 0b01111000, 0b00010100, 0b00000001, 0b00000001, // f
    0b00011000, 0b10100100, 0b10100100, 0b01111100, 0b00000001, // g
    0b01111100, 0b00001000, 0b00001000, 0b01110000, 0b00000001, // h
    0b01110100, 0b00000001, 0b00000001, 0b00000001, 0b00000001, // i
    0b01000000, 0b00110100, 0b00000001, 0b00000001, 0b00000001, // j
    0b01111100, 0b00100000, 0b00110000, 0b01000100, 0b00000001, // k
    0b01111100, 0b00000001, 0b00000001, 0b00000001, 0b00000001, // l
    0b01111000, 0b00001000, 0b01111000, 0b00001000, 0b01110000, // m
    0b01111000, 0b00001000, 0b00001000, 0b01110000, 0b00000001, // n
    0b00110000, 0b01001000, 0b01001000, 0b00110000, 0b00000001, // o
    0b11111000, 0b01001000, 0b01001000, 0b00110000, 0b00000001, // p
    0b00110000, 0b01001000, 0b01001000, 0b11111000, 0b00000001, // q
    0b01111000, 0b00010000, 0b00001000, 0b00000001, 0b00000001, // r
    0b01010000, 0b01011000, 0b01101000, 0b00101000, 0b00000001, // s
    0b00001000, 0b00111100, 0b01001000, 0b00000001, 0b00000001, // t
    0b00111000, 0b01000000, 0b01000000, 0b01111000, 0b00000001, // u
    0b00111000, 0b01000000, 0b00100000, 0b00011000, 0b00000001, // v
    0b00011000, 0b01100000, 0b00011000, 0b01100000, 0b00011000, // w
    0b01001000, 0b00110000, 0b01001000, 0b00000001, 0b00000001, // x
    0b00011000, 0b10100000, 0b10100000, 0b01111000, 0b00000001, // y
    0b01001000, 0b01101000, 0b01011000, 0b01001000, 0b00000001, // z
    0b00010000, 0b01101100, 0b01000100, 0b00000001, 0b00000001, // {
    0b01111110, 0b00000001, 0b00000001, 0b00000001, 0b00000001, // |
    0b01000100, 0b01101100, 0b00010000, 0b00000001, 0b00000001, // }
    0b00001000, 0b00000100, 0b00001000, 0b00000100, 0b00000001  // ~
    
};

static unsigned const char font_width[] PROGMEM = {
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 3, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 3, 1, 3, 5, 4, 5, 5, 1, 2, 2, 3, 3, 2, 3, 1, 5, 4, 3, 4, 4, 4, 4,
    4, 4, 4, 4, 1, 1, 3, 3, 3, 4, 5, 4, 4, 3, 4, 4, 4, 4, 4, 3, 4, 4, 3, 5, 4, 4, 4,
    4, 4, 4, 3, 4, 4, 5, 4, 4, 3, 2, 5, 2, 3, 4, 2, 4, 4, 3, 4, 4, 3, 4, 4, 1, 2, 4,
    1, 5, 4, 4, 4, 4, 3, 4, 3, 4, 4, 5, 3, 4, 4, 3, 1, 3, 4
};

#endif
