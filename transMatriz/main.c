/*
    matrizDestino.byteDestino[0] = matrizOrigem'[7];
    matrizDestino.byteDestino[1] = matrizOrigem'[6];
    ...
    matrizDestino.byteDestino[6] = matrizOrigem'[1];
    matrizDestino.byteDestino[7] = matrizOrigem'[0];


    Exemplo:
        Origem:
            0b00000001 // 0x01
            0b00000011 // 0x03
            0b00000111 // 0x07
            0b00001111 // 0x0F
            0b00011111 // 0x1F
            0b00111111 // 0x3F
            0b01111111 // 0x7F
            0b11111111 // 0xFF
        Destino:
            0b10000000 // 0x80
            0b11000000 // 0xC0
            0b11100000 // 0xE0
            0b11110000 // 0xF0
            0b11111000 // 0xF8
            0b11111100 // 0xFc
            0b11111110 // 0xFE
            0b11111111 // 0xFF
*/

#include <stdint.h>
#include <stdio.h>

int main()
{
    uint8_t matrizOrigem[8] = 
    {
        0b00000001, // 0x01
        0b00000011, // 0x03
        0b00000111, // 0x07
        0b00001111, // 0x0F
        0b00011111, // 0x1F
        0b00111111, // 0x3F
        0b01111111, // 0x7F
        0b11111111  // 0xFF
    };

    union
    {
        uint8_t byteDestino;

        struct
        {
            uint8_t b0:1;
            uint8_t b1:1;
            uint8_t b2:1;
            uint8_t b3:1;
            uint8_t b4:1;
            uint8_t b5:1;
            uint8_t b6:1;
            uint8_t b7:1;
        } bits;

    } matrizDestino[8];

    for (register uint8_t i = 0; i < 8; ++i)
    {
        matrizDestino[i].bits.b0 = (matrizOrigem[0] >> (8-1-i)) & 0x01;
        matrizDestino[i].bits.b1 = (matrizOrigem[1] >> (8-1-i)) & 0x01;
        matrizDestino[i].bits.b2 = (matrizOrigem[2] >> (8-1-i)) & 0x01;
        matrizDestino[i].bits.b3 = (matrizOrigem[3] >> (8-1-i)) & 0x01;
        matrizDestino[i].bits.b4 = (matrizOrigem[4] >> (8-1-i)) & 0x01;
        matrizDestino[i].bits.b5 = (matrizOrigem[5] >> (8-1-i)) & 0x01;
        matrizDestino[i].bits.b6 = (matrizOrigem[6] >> (8-1-i)) & 0x01;
        matrizDestino[i].bits.b7 = (matrizOrigem[7] >> (8-1-i)) & 0x01;
    }

    for (uint8_t i = 0; i < 8; ++i)
    {
        printf("0x%02hhX -> 0x%02hhX\n", matrizOrigem[i], matrizDestino[i].byteDestino);
    }

    return 0;
}