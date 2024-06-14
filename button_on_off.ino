#define buttonhijau 8
#define buttonmerah 11
#define ledmerah 10

int tombolhijau;
int tombolmerah;

void setup() {
  // put your setup code here, to run once:
  pinMode (buttonhijau, INPUT);
  pinMode (buttonmerah, INPUT);

  pinMode (ledmerah, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tombolhijau = digitalRead(buttonhijau);
  tombolmerah = digitalRead(buttonmerah);

  if (tombolhijau == HIGH) {
    digitalWrite (ledmerah, HIGH);
  }
  if (tombolmerah == HIGH) {
    digitalWrite (ledmerah, LOW);
  }
}
