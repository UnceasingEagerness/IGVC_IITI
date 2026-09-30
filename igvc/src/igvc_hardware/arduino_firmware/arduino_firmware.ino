// IGVC Arduino Motor Bridge
// Listens for "V,left_target,right_target\n" from Jetson
// Sends "E,left_ticks,right_ticks\n" to Jetson

// TODO: Replace with your actual encoder pins (Must be hardware interrupt pins!)
#define ENCODER_LEFT_A 2
#define ENCODER_LEFT_B 3
#define ENCODER_RIGHT_A 18
#define ENCODER_RIGHT_B 19

// TODO: Replace with your actual motor driver pins
#define MOTOR_LEFT_PWM 5
#define MOTOR_LEFT_DIR 6
#define MOTOR_RIGHT_PWM 7
#define MOTOR_RIGHT_DIR 8

volatile long left_ticks = 0;
volatile long right_ticks = 0;
unsigned long last_time = 0;

float target_v_left = 0.0;
float target_v_right = 0.0;

void setup() {
  Serial.begin(125000);
  
  pinMode(ENCODER_LEFT_A, INPUT_PULLUP);
  pinMode(ENCODER_LEFT_B, INPUT_PULLUP);
  pinMode(ENCODER_RIGHT_A, INPUT_PULLUP);
  pinMode(ENCODER_RIGHT_B, INPUT_PULLUP);
  
  pinMode(MOTOR_LEFT_PWM, OUTPUT);
  pinMode(MOTOR_LEFT_DIR, OUTPUT);
  pinMode(MOTOR_RIGHT_PWM, OUTPUT);
  pinMode(MOTOR_RIGHT_DIR, OUTPUT);
  
  // Attach interrupts for encoders
  attachInterrupt(digitalPinToInterrupt(ENCODER_LEFT_A), leftEncoderISR, RISING);
  attachInterrupt(digitalPinToInterrupt(ENCODER_RIGHT_A), rightEncoderISR, RISING);
}

void loop() {
  // 1. Read Commands from Jetson
  if (Serial.available() > 0) {
    String cmd = Serial.readStringUntil('\n');
    if (cmd.startsWith("V,")) {
      int first_comma = cmd.indexOf(',');
      int second_comma = cmd.indexOf(',', first_comma + 1);
      
      if (first_comma != -1 && second_comma != -1) {
        String left_str = cmd.substring(first_comma + 1, second_comma);
        String right_str = cmd.substring(second_comma + 1);
        
        target_v_left = left_str.toFloat();
        target_v_right = right_str.toFloat();
      }
    }
  }

  // 2. Publish Encoders at 20Hz (every 50ms)
  unsigned long current_time = millis();
  if (current_time - last_time >= 50) {
    last_time = current_time;
    Serial.print("E,");
    Serial.print(left_ticks);
    Serial.print(",");
    Serial.println(right_ticks);
    
    // TODO: Write a PID controller here that adjusts the MOTOR_PWM values 
    // to actually match the target_v_left and target_v_right!
    // For now, this is a dummy pass-through:
    int left_pwm = map(abs(target_v_left * 100), 0, 100, 0, 255);
    int right_pwm = map(abs(target_v_right * 100), 0, 100, 0, 255);
    
    analogWrite(MOTOR_LEFT_PWM, constrain(left_pwm, 0, 255));
    analogWrite(MOTOR_RIGHT_PWM, constrain(right_pwm, 0, 255));
    digitalWrite(MOTOR_LEFT_DIR, target_v_left >= 0 ? HIGH : LOW);
    digitalWrite(MOTOR_RIGHT_DIR, target_v_right >= 0 ? HIGH : LOW);
  }
}

// Encoder Interrupt Service Routines
void leftEncoderISR() {
  if (digitalRead(ENCODER_LEFT_B) == HIGH) left_ticks++;
  else left_ticks--;
}

void rightEncoderISR() {
  if (digitalRead(ENCODER_RIGHT_B) == HIGH) right_ticks++;
  else right_ticks--;
}
