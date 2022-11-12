/*
 * File:   newmain.c
 * Author: Investigación
 *
 * Created on 11 de noviembre de 2022, 11:43
 */

// CONFIG
#pragma config FOSC = INTRCIO   // Oscillator Selection bits (INTOSC oscillator: I/O function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON       // Power-Up Timer Enable bit (PWRT enabled)
#pragma config MCLRE = OFF      // GP3/MCLR pin function select (GP3/MCLR pin function is digital I/O, MCLR internally tied to VDD)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config CP = OFF         // Code Protection bit (Program Memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)

#define _XTAL_FREQ 4000000

#include <xc.h>


void InitApp (void);

void main(void) {
    InitApp();
    while(1){
        GPIO = 0X02;
        __delay_ms(1000);
        GPIO = 0X00;
        __delay_ms(1000);        
    }
}

void InitApp(void){
    TRISIO = 0X00;
    GPIO = 0X00;
}