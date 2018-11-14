
// the setup function runs once when you press reset or power the board
void setup() {
  
  //DDRB |= (1 << PB5); //definiranje izlaznog pina PB5

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
   
}

// the loop function runs over and over again forever
void loop() {

    
  //PORTB |= (1 << PB5);  // uključi pin PB5
  //_delay_ms(100);       // pričekaj 100 ms                
  //PORTB &= ~(1 << PB5); // isključi pin PB5
  //_delay_ms(100);       // pričekaj 100 ms  
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
