/*
 * tap.bio/@jesusma3009
 * 
 * Mapa de conexiones: TX bluetooth con RX
 *                     RX bluetooth con TX
 *                     GND bluetooth a ground de la placa
 *                     VCC bluetooth a 5V de la placa
 */
#define bluetooth 9

int data;
void setup() 
{
  pinMode(bluetooth, OUTPUT);
  digitalWrite(bluetooth, HIGH);
  Serial.begin(9600);

}

void loop() 
{
  while (Serial.available() > 0) 
  {
    data = Serial.read();
    switch(data)
    { 
      case '1':
      //Código que se ejecuta cuando el arduino recibe un '1'
      return;                                                         //Return; indica que al terminar el de ejecutar el código del caso 1, termine el switch.

      case '2':
      //Código que se ejecuta cuando el arduino recibe un '2'
      return;
      
      default:
      //Código que se ejecuta cuando no se recibe, en este caso, ni un uno, ni un dos
      //Default no necesita un return; ya que no se ejecuta más código despues de él.
    }
    //Es decir, return hace que desde cualquier parte del codigo del Switch salte aquí
  }
}