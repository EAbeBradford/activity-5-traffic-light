#define RED_LED 12
#define YELLOW_LED 11
#define GREEN_LED 10
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //set up red led
  pinMode(RED_LED, OUTPUT);

  //set up yellow led
  pinMode(YELLOW_LED, OUTPUT);

  //set up green led
  pinMode(GREEN_LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //turn red for 3 secs
  digitalWrite(RED_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  delay(3000);

  //turn green for 3 secs
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(3000);
  
  //turn yellow for 1 sec
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  delay(1000);
}
