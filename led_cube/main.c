/*
 * led_cube.c
 *
 * Created: 2016-05-18 4:27:51 AM
 * Author : Alvi
 */ 


#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/delay.h>

//active LOW  
#define layer1  PC0
#define layer2  PB2
#define layer3	PB1
/// 
///////   
#define purp1 DDRD |= (1 << PD5) 
#define or2 DDRD |= (1 << PD6); 
#define yel3 DDRD |= (1 << PD7); 
#define gra4 DDRB |= (1 << PB0); 
#define whit5 DDRC|= (1 << PC5); 
#define bro6  DDRC|= (1 << PC4); 
#define gre7  DDRC|= (1 << PC3); 
#define blu8  DDRC |= (1 << PC2); 
#define red9 DDRC |= (1  << PC1); 
////////////
//active HIGH
#define purp1on PORTD |= (1 << PD5) 
#define purp1off PORTD &= ~ (1 << PD5)
#define or2on PORTD |= (1 << PD6); 
#define or2off PORTD &= ~ (1 << PD6);
#define yel3on PORTD |= (1 << PD7); 
#define yel3off PORTD &= ~ (1 << PD7);
#define gra4on	PORTB |= (1 << PB0); 
#define gra4off	PORTB &= ~ (1 << PB0);
#define whit5on	PORTC |= (1 << PC5); 
#define whit5off PORTC &= ~ (1 << PC5);
#define bro6on	PORTC |= (1 << PC4); 
#define bro6off	PORTC &= ~ (1 << PC4);
#define gre7on	PORTC |= (1 << PC3); 
#define gre7off	PORTC &= ~ (1 << PC3);
#define blu8on	PORTC |= (1 << PC2); 
#define blu8off	PORTC &= ~ (1 << PC2);
#define red9on	PORTC |= (1  << PC1); 
#define red9off PORTC &= ~ (1 << PC1);


int main(void)
{ 
	
	TCCR1B |= (1 << WGM12);
	TIMSK1 |= (1 << OCIE1A);
	sei();
	OCR1A = 800;
	TCCR1B |= (1 << CS11); // 8 prescaler
	
	
	
    while (1) 
    {
    }
} 



ISR (TIMER1_COMPA_vect){
		
}
