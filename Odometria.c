// Odometria.ino

// Pin Definitions
#define ENCR 2 // White
#define ENR 4 // Black
#define ENCL 3 // Green
#define ENL 5 // Blue

// Mathematical Constants
#define PI 3.1415926535897932384626433832795

// Wheel Parameters
const float driveX = 130;   // cm
const float driveY = 140;   // cm
const int wheel_d = 54.2;           // Wheel diameter (mm)
const float wheel_c = PI * wheel_d; // Wheel circumference (mm)
const int counts_per_rev = 9903;   // Encoder counts per wheel revolution

// Encoder Parameters
volatile int posR = 0;
volatile int posL = 0;

// Odometry Parameters
const float wheelDistance = 250000; // Distance between the two wheels in mm
float meanDistance = 0;
float theta = 0;
float posX = 0;
float posY = 0;
int deg = 0;

// Precomputed constant
const float distancePerCount = wheel_c / counts_per_rev; // Distance each encoder count represents in mm

// Function Prototypes
void setup();
void loop();
void updateEncoderR();
void updateEncoderL();
void calculateOdometry();
void Diff(float theta);

// Setup function
void setup() {
  Serial.begin(9600);

  // Set pin modes for encoders
  pinMode(ENCR, INPUT);
  pinMode(ENR, INPUT);
  pinMode(ENCL, INPUT);
  pinMode(ENL, INPUT);

  // Attach interrupts for encoders
  attachInterrupt(digitalPinToInterrupt(ENCR), updateEncoderR, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENCL), updateEncoderL, CHANGE);
}

// Main loop
void loop() {
  calculateOdometry();
  delay(100); // Adjust delay as necessary
}

// Update right encoder position
void updateEncoderR() {
  posR++;
}

// Update left encoder position
void updateEncoderL() {
  posL++;
}

// Function to calculate odometry
void calculateOdometry() {
  static int encoderRPosPrev = 0;
  static int encoderLPosPrev = 0;

  // Calculate distances traveled by each wheel
  float SR = distancePerCount * (posR - encoderRPosPrev); // Distance traveled by right wheel
  float SL = distancePerCount * (posL - encoderLPosPrev); // Distance traveled by left wheel

  // Update previous encoder positions
  encoderRPosPrev = posR;
  encoderLPosPrev = posL;

  // Calculate new position
  float dTheta = (SR - SL) / wheelDistance;
  theta += dTheta;
  
  float distance = (SR + SL) / 2;
  posX += distance * cos(theta);
  posY += distance * sin(theta);

  // Convert theta to degrees
  deg = theta * (180 / PI);

  // Output current position and orientation
  Serial.print("  DEG : "); Serial.print(deg);
  Serial.print("  X : "); Serial.print(posX);
  Serial.print("  Y : "); Serial.print(posY);
  Serial.println();

  // Optional: Call to Diff function if needed
  Diff(theta);
}

// Differential drive calculation (Optional)
void Diff(float theta) {
  // Example implementation of a differential drive calculation
  float phiR = (cos(theta) + sin(theta));
  float phiL = (-sin(theta) + cos(theta));
  float M = (wheel_d / 2 * cos(theta));
  // Add your code here if you need specific differential calculations
}
