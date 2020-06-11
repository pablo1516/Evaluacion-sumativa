// Motor A
int ENA = 10;
int IN1 = 9;
int IN2 = 8;

// Motor B
int ENB = 5;
int IN3 = 7;
int IN4 = 6;
//comunicacion serial
char serialData;
int pin =4;

void setup() {
// Declaracion pines
 pinMode (ENA, OUTPUT);
 pinMode (ENB, OUTPUT);
 pinMode (IN1, OUTPUT); 
 pinMode (IN2, OUTPUT);
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
 pinMode (pin, OUTPUT);
 Serial.begin(9600);
 
}
void Adelante ()
{
 //motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 255); //Velocidad motor A
 //motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 255); //Velocidad motor B
}
void Atras ()
{
 //motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
 analogWrite (ENA, 128); //Velocidad motor A
 //motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite (ENB, 128); //Velocidad motor B
}
void Derecha ()
{
 //motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 200); //Velocidad motor A
 //motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite (ENB, 100); //Velocidad motor A
}
void Izquierda ()
{
 //motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
 analogWrite (ENA, 50); //Velocidad motor A
 //motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 150); //Velocidad motor A
}
void Parar ()
{
 //motorA
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 0);
 //motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 0); //Velocidad motor A
}
void loop() {
  if(Serial.available()>0)
  {
    serialData = Serial.read();
    //funcion adelante
    if(serialData=='1')
    {
      Adelante ();
    }
    //funcion atras
    if(serialData=='2')
    {
      Atras ();  
    }
    //funcion izquierda
    if(serialData=='3')
    {
      Izquierda ();
    }
    //funcion derecha
    if(serialData=='4')
    {
      Derecha ();
    }    
  }

}
