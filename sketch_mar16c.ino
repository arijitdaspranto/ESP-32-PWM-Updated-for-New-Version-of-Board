const int led=16;
const int freq=5000;
const int ledchannel=0;
const int resolution=8;
void setup() {
  // put your setup code here, to run once:
//ledcSetup(ledchannel,freq,resolution);
 // if you want to attach a specific channel, use the following instead
ledcAttachChannel(led, freq, resolution, ledchannel);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int dutyCycle=0;dutyCycle<256;dutyCycle++){
  ledcWrite(led,dutyCycle);
  delay(20);
}
}
