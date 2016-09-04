int incomingByte = 0;   // for incoming serial data

void setup() {
  pinMode(7,OUTPUT);
  digitalWrite(7, LOW);
  pinMode(8,OUTPUT);
  digitalWrite(8, LOW);
  //pinMode(13, OUTPUT);
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();


    if(incomingByte==65){//A                 
      digitalWrite(8, HIGH);
    }else if(incomingByte==97){//a
      digitalWrite(8, LOW);
    }else if(incomingByte==66){//B
      digitalWrite(7, HIGH);
    }else if(incomingByte==98){//b
      digitalWrite(7, LOW);
    }

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);

    }
      
}
