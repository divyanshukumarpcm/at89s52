//Blinks led connected to P3.0, P3.1 ... P3.7 pins of AT89S52 Chip

#include<reg51.h> //Library containing register definition of AT89S52 Chip


void delay(int);


/**This code will blink led(s) connected to port 3**/

void main(){
	P1=0xFF; //Declares P1 (port 1 all pins) as input
	P2=0xFF; //Declares P2 (port 2 all pins) as input
	P0=0xFF; //Declares P0 (port 0 all pins) as input
	//The above three lines are optional
	
	P3=0x00; //Declares P3 (port 3 all pins) as output
	
	while(1){
		P3=0xFF; //Outputs 1 at all pins of port 3
		delay(100); //waits for 200 milliseconds at 12Mhz crystal oscillator
		P3=0x00; //Outputs 0 at all oins of port 3
		delay(1000); //Wait for a second
	}
	
}


//Delay function


void delay(int millisec){
	int i,j;
	for(i=0;i<183;++i)
		for(j=0;j<millisec;++j);
}
