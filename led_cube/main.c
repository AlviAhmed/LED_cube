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

/////layer inputs 
#define layer1  DDRC |= (1 << PC0) 
#define layer2  DDRB |= ( 1 << PB2)
#define layer3	DDRB |= ( 1 << PB1) 
///////  



///////led inputs   
#define purp1 DDRD |= (1 << PD5) 
#define or2 DDRD |= (1 << PD6)  
#define yel3 DDRD |= (1 << PD7)  
#define gra4 DDRB |= (1 << PB0)  
#define whit5 DDRC|= (1 << PC5)  
#define bro6  DDRC|= (1 << PC4)  
#define gree7  DDRC|= (1 << PC3)  
#define blu8  DDRC |= (1 << PC2)  
#define red9 DDRC |= (1  << PC1)  
//////////// 

//led on and off
#define purp1on PORTD |= (1 << PD5)  
#define purp1off PORTD &= ~ (1 << PD5)
#define or2on PORTD |= (1 << PD6)  
#define or2off PORTD &= ~ (1 << PD6) 
#define yel3on PORTD |= (1 << PD7)  
#define yel3off PORTD &= ~ (1 << PD7) 
#define gra4on	PORTB |= (1 << PB0)  
#define gra4off	PORTB &= ~ (1 << PB0) 
#define whit5on	PORTC |= (1 << PC5)  
#define whit5off PORTC &= ~ (1 << PC5) 
#define bro6on	PORTC |= (1 << PC4)  
#define bro6off	PORTC &= ~ (1 << PC4) 
#define gree7on	PORTC |= (1 << PC3)  
#define gree7off PORTC &= ~ (1 << PC3) 
#define blu8on	PORTC |= (1 << PC2)  
#define blu8off	PORTC &= ~ (1 << PC2) 
#define red9on	PORTC |= (1  << PC1)  
#define red9off PORTC &= ~ (1 << PC1)  
////// 

////layer on and off 
#define layer1on  PORTC |= (1 << PC0)  
#define layer1off  PORTC &= ~ (1 << PC0) 
#define layer2on  PORTB |= ( 1 << PB2)  
#define layer2off  PORTB &= ~ ( 1 << PB2) 
#define layer3on	PORTB |= ( 1 << PB1)  
#define layer3off	PORTB &= ~ ( 1 << PB1) 
///////

#define n 1000


int main(void)
{ 
	
	TCCR1B |= (1 << WGM12);
	TIMSK1 |= (1 << OCIE1A);
	sei();
	OCR1A = 800;
	TCCR1B |= (1 << CS11); // 8 prescaler
	
	
	
   
		layer1on; ///
		purp1on;  
		_delay_ms(n);
		purp1off; 
		or2on;  
		_delay_ms(n);
		or2off; 
		yel3on;  
		_delay_ms(n);
		yel3off; 
		gra4on;  
		_delay_ms(n);
		gra4off; 
		whit5on; 
		_delay_ms(n); 
		whit5off; 
		bro6on;  
		_delay_ms(n);
		bro6off; 
		gree7on;  
		_delay_ms(n);
		gree7off; 
		blu8on;  
		_delay_ms(n);
		blu8off; 
		red9on; 
		_delay_ms(n); 
		red9off;  
		layer1off; // 
		layer2on; // 
		_delay_ms(n);
		purp1on; 
		_delay_ms(n);
		purp1off; 
		or2on; 
		_delay_ms(n);
		or2off;
		yel3on; 
		_delay_ms(n);
		yel3off;
		gra4on; 
		_delay_ms(n);
		gra4off;
		whit5on; 
		_delay_ms(n);
		whit5off;
		bro6on; 
		_delay_ms(n);
		bro6off;
		gree7on; 
		_delay_ms(n);
		gree7off;
		blu8on; 
		_delay_ms(n);
		blu8off;
		red9on; 
		_delay_ms(n);
		red9off; 
		layer2off; //
		layer3on; // 
		_delay_ms(n);
		purp1on; 
		_delay_ms(n);
		purp1off;
		or2on; 
		_delay_ms(n);
		or2off;
		yel3on; 
		_delay_ms(n);
		yel3off;
		gra4on; 
		_delay_ms(n);
		gra4off;
		whit5on; 
		_delay_ms(n);
		whit5off;
		bro6on; 
		_delay_ms(n);
		bro6off;
		gree7on; 
		_delay_ms(n);
		gree7off;
		blu8on; 
		_delay_ms(n);
		blu8off;
		red9on; 
		_delay_ms(n);
		red9off; 
		layer3off; //
	
} 



ISR (TIMER1_COMPA_vect){
		
}
