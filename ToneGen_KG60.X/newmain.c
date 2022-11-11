/*
 * File:   newmain.c
 * Author: Investigación
 *
 * Created on 11 de noviembre de 2022, 11:43
 */

// CONFIG
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config CP = OFF         // Code Protect (Code protection off)
#pragma config MCLRE = OFF      // Master Clear Enable (GP3/MCLR pin fuction is digital I/O, MCLR internally tied to VDD)

#define _XTAL_FREQ 4000000

#include <xc.h>


void InitApp (void);

void main(void) {
    InitApp();
    while(1){
        GPIO = 0X02;
        __delay_ms(300);
        GPIO = 0X00;
        __delay_ms(300);        
    }
}

void InitApp(void){
    TRISGPIO = 0X00;
    GPIO = 0X00;
}