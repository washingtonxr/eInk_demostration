#ifndef NUMBER_ROM_H
#define NUMBER_ROM_H
/*
* Software model:       PCtoLCD2002
* Font width & height:  64*64
* Font type:            Imitation Song
* Dot matrix format:    Yang code
* Molding direction:    Forward MSB
* Output format:        HEX
* Modulation method:    Each row
* Pixel size:           10
* Date:                 Jan.14th,2019
* Private format:       1:{ 2:}, 3:/\*" 4:", 5:0x 6:, 7: 8:, 9:*\/},{
*/
const unsigned char B_Num[10][256] = {
{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFC,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x3F,0xFF,
0xFF,0xFC,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xF8,0x00,0x3F,0xFF,0x00,0x0F,0xFF,
0xFF,0xF8,0x03,0xFF,0xFF,0xF0,0x07,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xFE,0x03,0xFF,
0xFF,0xF0,0x3F,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,0xC1,0xFF,
0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,
0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,
0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,
0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,0xC1,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xFF,0x83,0xFF,
0xFF,0xF0,0x1F,0xFF,0xFF,0xFE,0x03,0xFF,0xFF,0xF8,0x07,0xFF,0xFF,0xF8,0x07,0xFF,
0xFF,0xF8,0x00,0x3F,0xFF,0x00,0x07,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x0F,0xFF,
0xFF,0xFE,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x7F,0xFF,
0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x07,0xFF,0xFF,
0xFF,0xFF,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"0",9*/
},{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xF9,0xFF,
0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xF9,0xFF,
0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xF9,0xFF,
0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0xE1,0xFF,
0xFF,0xFC,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x01,0xFF,
0xFF,0xF0,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x01,0xFF,
0xFF,0xE0,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x01,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"1",0*/
},{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x81,0xFF,
0xFF,0xFF,0xC0,0x7F,0xFF,0xFF,0x01,0xFF,0xFF,0xFF,0x00,0x3F,0xFF,0xFE,0x01,0xFF,
0xFF,0xFE,0x00,0x3F,0xFF,0xF8,0x01,0xFF,0xFF,0xFC,0x00,0x3F,0xFF,0xF0,0x01,0xFF,
0xFF,0xF8,0x00,0x3F,0xFF,0xE0,0x01,0xFF,0xFF,0xF8,0x00,0x3F,0xFF,0xC0,0x41,0xFF,
0xFF,0xF0,0x30,0x3F,0xFF,0x80,0xC1,0xFF,0xFF,0xF0,0xF8,0x7F,0xFF,0x03,0xC1,0xFF,
0xFF,0xE1,0xFF,0xFF,0xFE,0x07,0xC1,0xFF,0xFF,0xE1,0xFF,0xFF,0xFC,0x0F,0xC1,0xFF,
0xFF,0xE3,0xFF,0xFF,0xF8,0x1F,0xC1,0xFF,0xFF,0xE3,0xFF,0xFF,0xF0,0x3F,0xC1,0xFF,
0xFF,0xE3,0xFF,0xFF,0xE0,0x7F,0xC1,0xFF,0xFF,0xE3,0xFF,0xFF,0xC0,0xFF,0xC1,0xFF,
0xFF,0xE3,0xFF,0xFF,0x81,0xFF,0xC1,0xFF,0xFF,0xE1,0xFF,0xFF,0x03,0xFF,0xC1,0xFF,
0xFF,0xE1,0xFF,0xFE,0x07,0xFF,0xC1,0xFF,0xFF,0xE0,0xFF,0xF8,0x07,0xFF,0xC1,0xFF,
0xFF,0xF0,0x7F,0xF0,0x0F,0xFF,0xC1,0xFF,0xFF,0xF0,0x1F,0x80,0x1F,0xFF,0x81,0xFF,
0xFF,0xF0,0x00,0x00,0x3F,0xFF,0x01,0xFF,0xFF,0xF8,0x00,0x00,0x7F,0xFE,0x01,0xFF,
0xFF,0xF8,0x00,0x00,0xFF,0xE0,0x01,0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xE0,0x01,0xFF,
0xFF,0xFF,0x00,0x07,0xFF,0xE0,0x01,0xFF,0xFF,0xFF,0xC0,0x3F,0xFF,0xE0,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"2",1*/
},{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xFF,0x81,0xFF,0xFF,0xE0,0x1F,0xFF,
0xFF,0xFE,0x00,0xFF,0xFF,0xC0,0x0F,0xFF,0xFF,0xFC,0x00,0xFF,0xFF,0xC0,0x07,0xFF,
0xFF,0xF8,0x00,0xFF,0xFF,0xC0,0x07,0xFF,0xFF,0xF0,0x00,0xFF,0xFF,0xC0,0x03,0xFF,
0xFF,0xF0,0xE1,0xFF,0xFF,0xC0,0x03,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xE0,0xC1,0xFF,
0xFF,0xE1,0xFF,0xFC,0x7F,0xFF,0xE1,0xFF,0xFF,0xE3,0xFF,0xFC,0x7F,0xFF,0xE1,0xFF,
0xFF,0xE3,0xFF,0xFC,0x7F,0xFF,0xF1,0xFF,0xFF,0xE3,0xFF,0xFC,0x7F,0xFF,0xF1,0xFF,
0xFF,0xE3,0xFF,0xF8,0x7F,0xFF,0xF1,0xFF,0xFF,0xE1,0xFF,0xF8,0x3F,0xFF,0xF1,0xFF,
0xFF,0xE1,0xFF,0xF8,0x3F,0xFF,0xF1,0xFF,0xFF,0xE0,0xFF,0xF0,0x3F,0xFF,0xE1,0xFF,
0xFF,0xE0,0x7F,0xE0,0x1F,0xFF,0xE1,0xFF,0xFF,0xF0,0x1F,0x80,0x0F,0xFF,0xC3,0xFF,
0xFF,0xF0,0x00,0x00,0x07,0xFF,0x03,0xFF,0xFF,0xF8,0x00,0x03,0x01,0xFC,0x03,0xFF,
0xFF,0xF8,0x00,0x07,0x80,0x00,0x07,0xFF,0xFF,0xFC,0x00,0x07,0x80,0x00,0x0F,0xFF,
0xFF,0xFF,0x00,0x1F,0xC0,0x00,0x1F,0xFF,0xFF,0xFF,0xC0,0x7F,0xE0,0x00,0x3F,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x01,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"3",2*/
},{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x3F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xE0,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x3F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x02,0x3F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xF8,0x06,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x1E,0x3F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xC0,0x3E,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0xFE,0x3F,0xFF,0xFF,
0xFF,0xFF,0xFE,0x01,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xFE,0x3F,0xF9,0xFF,
0xFF,0xFF,0xF0,0x0F,0xFE,0x3F,0xF9,0xFF,0xFF,0xFF,0xE0,0x3F,0xFE,0x3F,0xF9,0xFF,
0xFF,0xFF,0x80,0x7F,0xFE,0x3F,0xF9,0xFF,0xFF,0xFF,0x01,0xFF,0xFE,0x3F,0xF9,0xFF,
0xFF,0xFC,0x03,0xFF,0xFE,0x3F,0xF1,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x01,0xFF,
0xFF,0xE0,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x01,0xFF,
0xFF,0xE0,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x01,0xFF,
0xFF,0xE0,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xF1,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xF9,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xF9,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,/*"4",3*/
},{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x3F,0xFF,
0xFF,0xFF,0xFF,0x00,0x1F,0x80,0x1F,0xFF,0xFF,0xE0,0x00,0x00,0x1F,0x80,0x0F,0xFF,
0xFF,0xE0,0x00,0x00,0x1F,0x80,0x07,0xFF,0xFF,0xE0,0x00,0x00,0x3F,0x80,0x03,0xFF,
0xFF,0xE0,0x01,0xF0,0x3F,0x80,0x03,0xFF,0xFF,0xE0,0xFF,0xE0,0xFF,0xC1,0xC3,0xFF,
0xFF,0xE0,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,0xFF,0xE0,0xFF,0xC3,0xFF,0xFF,0xE1,0xFF,
0xFF,0xE0,0xFF,0xC3,0xFF,0xFF,0xF1,0xFF,0xFF,0xE0,0xFF,0xC7,0xFF,0xFF,0xF1,0xFF,
0xFF,0xE0,0xFF,0xC7,0xFF,0xFF,0xF1,0xFF,0xFF,0xE0,0xFF,0xC7,0xFF,0xFF,0xF1,0xFF,
0xFF,0xE0,0xFF,0xC7,0xFF,0xFF,0xF1,0xFF,0xFF,0xE0,0xFF,0xC3,0xFF,0xFF,0xE1,0xFF,
0xFF,0xE0,0xFF,0xC3,0xFF,0xFF,0xC1,0xFF,0xFF,0xE0,0xFF,0xC1,0xFF,0xFF,0x81,0xFF,
0xFF,0xE0,0xFF,0xC0,0x7F,0xFF,0x03,0xFF,0xFF,0xE0,0xFF,0xE0,0x0F,0xF8,0x03,0xFF,
0xFF,0xE0,0xFF,0xE0,0x00,0x00,0x07,0xFF,0xFF,0xE0,0xFF,0xF0,0x00,0x00,0x0F,0xFF,
0xFF,0xE0,0xFF,0xF8,0x00,0x00,0x1F,0xFF,0xFF,0xE0,0xFF,0xFC,0x00,0x00,0x3F,0xFF,
0xFF,0xE1,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"5",4*/
},{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x3F,0xFF,0xFF,
0xFF,0xFF,0xFE,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,0xC0,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x1F,0xFF,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFE,0x00,0x3C,0x07,0xC0,0x07,0xFF,
0xFF,0xFC,0x07,0xF8,0x1F,0xFC,0x03,0xFF,0xFF,0xF8,0x1F,0xF0,0x3F,0xFE,0x03,0xFF,
0xFF,0xF0,0x3F,0xF0,0x7F,0xFF,0x83,0xFF,0xFF,0xF0,0x7F,0xF0,0xFF,0xFF,0xC1,0xFF,
0xFF,0xF0,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,
0xFF,0xE1,0xFF,0xE3,0xFF,0xFF,0xF1,0xFF,0xFF,0xE3,0xFF,0xE3,0xFF,0xFF,0xF1,0xFF,
0xFF,0xE3,0xFF,0xE3,0xFF,0xFF,0xF1,0xFF,0xFF,0xE3,0xFF,0xE3,0xFF,0xFF,0xF1,0xFF,
0xFF,0xE3,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,
0xFF,0xE0,0x1F,0xE0,0xFF,0xFF,0xC3,0xFF,0xFF,0xE0,0x0F,0xF0,0x3F,0xFF,0x03,0xFF,
0xFF,0xF0,0x0F,0xF0,0x0F,0xF8,0x03,0xFF,0xFF,0xF0,0x0F,0xF0,0x00,0x00,0x07,0xFF,
0xFF,0xF8,0x0F,0xF8,0x00,0x00,0x0F,0xFF,0xFF,0xF8,0x0F,0xFC,0x00,0x00,0x1F,0xFF,
0xFF,0xFE,0x1F,0xFE,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF0,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"6",5*/
},{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xE0,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xE0,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xE0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x7F,0xFF,0xFF,0xF8,0x03,0xFF,
0xFF,0xE0,0xFF,0xFF,0xFF,0x80,0x01,0xFF,0xFF,0xE0,0xFF,0xFF,0xF8,0x00,0x01,0xFF,
0xFF,0xE0,0xFF,0xFF,0xE0,0x00,0x01,0xFF,0xFF,0xE0,0xFF,0xFF,0x00,0x00,0x01,0xFF,
0xFF,0xE0,0xFF,0xFC,0x00,0x00,0x01,0xFF,0xFF,0xE0,0xFF,0xF0,0x00,0x00,0x01,0xFF,
0xFF,0xE0,0xFF,0xC0,0x00,0x00,0x03,0xFF,0xFF,0xE0,0xFF,0x00,0x03,0xFF,0xFF,0xFF,
0xFF,0xE0,0xFC,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xE0,0xF8,0x01,0xFF,0xFF,0xFF,0xFF,
0xFF,0xE0,0xE0,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x80,0x3F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xE0,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xE0,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"7",6*/
},{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xFF,
0xFF,0xFF,0xC0,0x7F,0xF8,0x00,0x7F,0xFF,0xFF,0xFF,0x00,0x1F,0xF0,0x00,0x1F,0xFF,
0xFF,0xFE,0x00,0x07,0xE0,0x00,0x0F,0xFF,0xFF,0xFC,0x00,0x03,0xC0,0x00,0x0F,0xFF,
0xFF,0xF8,0x00,0x01,0x80,0x00,0x07,0xFF,0xFF,0xF0,0x00,0x01,0x00,0x7C,0x03,0xFF,
0xFF,0xF0,0x1E,0x00,0x03,0xFF,0x03,0xFF,0xFF,0xF0,0x7F,0x00,0x0F,0xFF,0xC3,0xFF,
0xFF,0xE0,0xFF,0xC0,0x1F,0xFF,0xC1,0xFF,0xFF,0xE1,0xFF,0xC0,0x3F,0xFF,0xE1,0xFF,
0xFF,0xE1,0xFF,0xE0,0x3F,0xFF,0xF1,0xFF,0xFF,0xE3,0xFF,0xF0,0x3F,0xFF,0xF1,0xFF,
0xFF,0xE3,0xFF,0xF0,0x1F,0xFF,0xF1,0xFF,0xFF,0xE3,0xFF,0xF8,0x0F,0xFF,0xF1,0xFF,
0xFF,0xE3,0xFF,0xF8,0x0F,0xFF,0xF1,0xFF,0xFF,0xE1,0xFF,0xFC,0x07,0xFF,0xE1,0xFF,
0xFF,0xE1,0xFF,0xF8,0x03,0xFF,0xE1,0xFF,0xFF,0xE0,0xFF,0xF0,0x01,0xFF,0xC1,0xFF,
0xFF,0xF0,0x7F,0xE0,0x00,0xFF,0x83,0xFF,0xFF,0xF0,0x1F,0x81,0x00,0x3E,0x03,0xFF,
0xFF,0xF0,0x00,0x01,0x80,0x00,0x07,0xFF,0xFF,0xF8,0x00,0x03,0xC0,0x00,0x07,0xFF,
0xFF,0xFC,0x00,0x07,0xE0,0x00,0x0F,0xFF,0xFF,0xFE,0x00,0x0F,0xF0,0x00,0x1F,0xFF,
0xFF,0xFF,0x00,0x1F,0xF8,0x00,0x7F,0xFF,0xFF,0xFF,0xC0,0x7F,0xFF,0x01,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"8",7*/
},{
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x1F,0xFE,0x0F,0xFF,
0xFF,0xFE,0x00,0x00,0x0F,0xFC,0x07,0xFF,0xFF,0xFC,0x00,0x00,0x07,0xFC,0x03,0xFF,
0xFF,0xF8,0x00,0x00,0x03,0xFC,0x03,0xFF,0xFF,0xF0,0x07,0xF8,0x03,0xFC,0x03,0xFF,
0xFF,0xF0,0x3F,0xFF,0x03,0xFC,0x01,0xFF,0xFF,0xF0,0x7F,0xFF,0x81,0xFE,0x01,0xFF,
0xFF,0xE0,0xFF,0xFF,0xC1,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,0xF1,0xFF,
0xFF,0xE1,0xFF,0xFF,0xF1,0xFF,0xF1,0xFF,0xFF,0xE3,0xFF,0xFF,0xF1,0xFF,0xF1,0xFF,
0xFF,0xE3,0xFF,0xFF,0xF1,0xFF,0xE1,0xFF,0xFF,0xE3,0xFF,0xFF,0xF1,0xFF,0xE1,0xFF,
0xFF,0xE3,0xFF,0xFF,0xE1,0xFF,0xC1,0xFF,0xFF,0xE1,0xFF,0xFF,0xE1,0xFF,0xC3,0xFF,
0xFF,0xE1,0xFF,0xFF,0xC3,0xFF,0x03,0xFF,0xFF,0xF0,0xFF,0xFF,0x83,0xFE,0x07,0xFF,
0xFF,0xF0,0x7F,0xFF,0x07,0xF8,0x07,0xFF,0xFF,0xF0,0x1F,0xFE,0x07,0xC0,0x0F,0xFF,
0xFF,0xF8,0x03,0xF8,0x08,0x00,0x1F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x3F,0xFF,
0xFF,0xFE,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x01,0xFF,0xFF,
0xFF,0xFF,0xC0,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x3F,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"9",8*/
}};




#endif
/* End of this file. */