//	Program to test builtin 3 LEDS on WaveShare UNO PLUS.
//
//	(c) Hubert Świerczewski				Siedlce, dnia 18.04.2018r.

#define	LED_RX		  0
#define	LED_TX		  1

#define	TIME_ON		750
#define	TIME_OFF	250

void setup() {
	pinMode(LED_RX,		 OUTPUT);
	pinMode(LED_TX,		 OUTPUT);
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
	digitalWrite(LED_RX,	HIGH);	//	Próba zapalenia LEDa odpowiedzialnego za RX
	delay(TIME_ON);
	digitalWrite(LED_RX,	LOW );
	delay(TIME_OFF);

	digitalWrite(LED_TX,	HIGH);	//	Próba zapalenia LEDa odpowiedzialnego za TX
	delay(TIME_ON);
	digitalWrite(LED_TX,	LOW );
	delay(TIME_OFF);

//	digitalWrite(HIGH, LED_BUILTIN);	//	To za cholerę nie chce działać
	digitalWrite(LED_BUILTIN, HIGH);
	delay(TIME_ON);
	digitalWrite(LED_BUILTIN, LOW );
	delay(TIME_OFF);
}
