void setup() {
    pinMode(D3, OUTPUT);
}

void loop() {
int ldr_value = analogRead(A0);
if( ldr_value = > 100 ){
 digitalWrite(D3, HIGH);
}
}
