/*
 RC PulseIn Serial Read out
 By: Nick Poole
 SparkFun Electronics
 Date: 5
 License: CC-BY SA 3.0 - Creative commons share-alike 3.0
 use this code however you'd like, just keep this license and
 attribute. Let me know if you make hugely, awesome, great changes.
 */
 
long unsigned int ch1; // Here's where we'll keep our channel values
long unsigned int ch2;
long unsigned int ch3;
long unsigned int ch4;

void setup() {

  pinMode(3, INPUT);
  pinMode(6, INPUT); // Set our input pins as such
  pinMode(10, INPUT);
  pinMode(11, INPUT);

  Serial.begin(9600); // Pour a bowl of Serial

}

void loop() {

  ch1 = pulseIn(3, HIGH, 25000); // front 
  ch2 = pulseIn(6, LOW, 25000); // back

  ch3 = pulseIn(3, LOW, 25000); // front 
  ch4 = pulseIn(6, HIGH, 25000); // back
  //ch3 = pulseIn(10, HIGH); // right
  //ch4 = pulseIn(11, HIGH); // left

  Serial.print("Channel 1:"); // Print the value of 
  Serial.println(ch1);        // each channel

  Serial.print("Channel 2:");
  Serial.println(ch2);
  Serial.print("HIGH, LOW\n");
  
  Serial.print("Channel 3:");
  Serial.println(ch3);

  Serial.print("Channel 4:");
  Serial.println(ch4);
  Serial.print("LOW, HIGH\n\n");
  
  delay(100); // I put this here just to make the terminal 
              // window happier
}

