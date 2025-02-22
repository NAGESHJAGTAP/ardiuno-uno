#include <stdio.h>
#include <unistd.h>


#define WATER_SENSOR_PIN 0
#define SERVO_PIN1 1
#define SERVO_PIN2 2
#define ANGLE_START 0
#define ANGLE_END 160
#define WATER_THRESHOLD 300

void wipeWipers() {
  for (int angle = ANGLE_START; angle <= ANGLE_END; angle++) {
    
    printf("Servo 1: %d\n", angle);
    usleep(10000); 
  }
  for (int angle = ANGLE_END; angle >= ANGLE_START; angle--) {
    
    printf("Servo 1: %d\n", angle);
    usleep(10000); 
  }
  for (int angle = ANGLE_START; angle <= ANGLE_END; angle++) {
    
    printf("Servo 2: %d\n", angle);
    usleep(10000); 
  }
  for (int angle = ANGLE_END; angle >= ANGLE_START; angle--) {
    
    printf("Servo 2: %d\n", angle);
    usleep(10000); 
  }
}

int main() {
  while (1) {
    int waterValue = 0; 
    printf("Water sensor value: %d\n", waterValue);

    if (waterValue > WATER_THRESHOLD) {
      wipeWipers();
    } else {
      
      printf("Servo 1: %d\n", ANGLE_START);
      printf("Servo 2: %d\n", ANGLE_START);
    }

    usleep(500000); 
  }

  return 0;
}