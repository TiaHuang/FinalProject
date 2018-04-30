int ThermistorPin = 0;
int Vo;
float R1 = 10000;

//declares all the888888 pin connections to the arduino board
const int LED1= 13; 
const int LED2= 12;
const int LED3= 11;
const int LED4= 10;
const int LED5= 9;
const int LED6= 6;
const int LED7= 5;
const int LED8= 3;
const int LED9= 2;
const int LED10= 2;
const int potentiometer= A0;

float value=0;

//declares the LEDs as outputs and the potentiometer as inputs
//also creates a Serial Monitor so that we can see what the actually analog value is
void setup(void)
{
pinMode(LED1, OUTPUT); 
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode (LED5, OUTPUT);
pinMode (LED6, OUTPUT);
pinMode (LED7, OUTPUT);
pinMode (LED8, OUTPUT);
pinMode (LED9, OUTPUT);
pinMode (LED10, OUTPUT);
Serial.begin(9600);
// analogReference(EXTERNAL);

}

void loop()
{
value= analogRead(potentiometer);
value= (3200*value)/1023;
value= (value-500)/10;
Serial.println(value);

//all LEDs are off
if (value == 0)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH); 
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH); 
digitalWrite (LED7, HIGH);
digitalWrite (LED8, HIGH); 
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW); 

  delay(5000);
}

//lights up 3 LED
if ((value >= 80))
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH); 
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH); 
digitalWrite (LED7, HIGH);
digitalWrite (LED8, LOW); 
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW); 
}

//lights up 4 LEDs
if ((value >= 70) && (value < 80))
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH); 
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH); 
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW); 
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}

//lights up 5 LEDs
if ((value >= 60) && (value < 70))
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH); 
digitalWrite (LED5, HIGH);
digitalWrite (LED6, LOW); 
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW); 
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}

//lights up 6 LEDs
if ((value >= 45) && (value < 60))
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH); 
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW); 
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW); 
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW); 
}

//lights up 8 LEDs
if ((value >= 30) && (value < 45))
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, LOW); 
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW); 
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW); 
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW); 
}

//lights up 10 LEDs
if ((value < 30))
{
digitalWrite (LED1, LOW);
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);
digitalWrite (LED4, LOW); 
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW); 
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW); 
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW); 
}
}

