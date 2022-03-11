int led1 = D7;

SYSTEM_THREAD(ENABLED);

void setup() {
	pinMode(led1, OUTPUT);
}
// dot function turns the LED on for 1 sec and off for 1 sec.
void dot() {
	digitalWrite(led1, HIGH);
	delay(1s);
	digitalWrite(led1, LOW);
	delay(1s);
}
// dash function turns the LED on for 2 secs and off for 1 sec.
void dash() {
    	digitalWrite(led1, HIGH);
	delay(2s);
	digitalWrite(led1, LOW);
	delay(1s);
}

void loop() {
    // Vi (original) = ...- .. (Morse code).
    // I transform the - and . into 1 and 0 accordingly. So my name will be 0001 00
    String myNameInMorseCode = "0001 00";
    for(int i=0; i< strlen(myNameInMorseCode); i++){
        if(myNameInMorseCode[i] == '1'){
            dash();
        }
        else if(myNameInMorseCode[i] == '0'){
            dot();
        }
        else{
            digitalWrite(led1, LOW);
	        delay(1s);
        }
    }
}

