/*
 Capacitive touch keyboard based on TTP2244N.
 - Uses 4 digital inputs of Arduino, each senser one key from TTP224N and 
 prints on the serial monitor the key number pressed.

 Developed by Clovis Fritzen on March 12,2017 for
 http://www.FritzenLab.com.br
 
 */

// constants won't change. They're used here to
// set pin numbers:
#define botao4  2
#define botao3  3
#define botao2  4
#define botao1  5

const int ledPin =  13;      // the number of the LED pin

// variables will change:
int estadobotao1 = 0;         // variable for reading the pushbutton status
int estadobotao2 = 0;
int estadobotao3 = 0;
int estadobotao4 = 0;

boolean estadoanterior1 = false;
boolean estadoanterior2 = false;
boolean estadoanterior3 = false;
boolean estadoanterior4 = false;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  estadobotao1 = digitalRead(botao1);
  estadobotao2 = digitalRead(botao2);
  estadobotao3 = digitalRead(botao3);
  estadobotao4 = digitalRead(botao4);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (estadobotao1 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("Botao 1");
    Serial.println("------");
   
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
   
  }
  if (estadobotao2 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("Botao 2");
    Serial.println("------");
   
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    
  }
  if (estadobotao3 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("Botao 3");
    Serial.println("------");
    
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    
  }
  if (estadobotao4 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("Botao 4");
    Serial.println("------");
    
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    
  }
}
