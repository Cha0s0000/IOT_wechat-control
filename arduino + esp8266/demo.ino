char state='0';
char c;
String comdata = "";
int temperature=123;


void setup() {
        Serial.begin(115200,SERIAL_8N1);
  //different esp8266 module may user 9600 rather than 115200
        pinMode(13,OUTPUT);
        digitalWrite(13,LOW); 
  Serial.println("AT+RST");
  delay(3000);
  Serial.println("AT+CWMODE=3");
  delay(500);
  Serial.println("AT+CWJAP=\"******\",\"######\"");
  //replace "*" with your wifi name 
  //replace "##"with your wifi password
  delay(5000);
  Serial.println("AT+CIPMUX=0");
  delay(500);
        while(Serial.read()>=0);//!!!!!!!!!!!!!!!!!!!        
}

void loop() {
  temperature = 123;
  send(temperature);
  while(Serial.available()) 
     {
       c = Serial.read();
       Serial.print(c);
       if (c == '{')
        {
       state = Serial.read();break;
        }
       }
       if(state=='1')
       {
         digitalWrite(13,HIGH);
       }
       else if(state=='0')
       digitalWrite(13,LOW);
}

  void send (int temperature)
{
  int i;
  char buffer[]="0";
  Serial.println("AT+CIPSTART=\"TCP\",\"########\",80");
 // replace ## with your server ip or hostname
    delay(200);
        Serial.println("AT+CIPMODE=1");
        delay(200);
        Serial.println("AT+CIPSEND");
        delay(300);
        while(Serial.read()>=0);//!!!!!!!!!!!!!!!!!!!!!!!!!!
    Serial.print("POST /api.php?token=weixin&data=");
  //if you put api.php file on the root of the server ,you should write this like me.The token in this line shoule be the same as the token in api.php
    Serial.print(temperature);
    Serial.println(" HTTP/1.1");
    Serial.println("Host: ######");
  // replace ## with your server ip or hostname which is ths same as line 49
    Serial.println("User-Agent: arduino-ethernet");
    Serial.println("Connection: close");
    Serial.println();
    delay(50);
    Serial.print("AT+CIPSEND");
    delay(30);
    Serial.println("+++");
    Serial.println();
    delay(20);
}







