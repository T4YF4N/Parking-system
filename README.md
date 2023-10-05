# Parking-system

# This code serves as a basic parking assistant that utilizes an ultrasonic sensor to measure distances from obstacles and informs the driver about approaching obstacles using LED lights and sound. Here's an explanation of how the application works:

 Initialization of pins: At the beginning of the program, pin numbers are defined for various components such as the ultrasonic sensor, LEDs, and buzzer.
 Pin setup: In the setup() function, pins are initialized as inputs/outputs, and the buzzer pin is set to a low state.
 Main loop: In the loop() function, distance from obstacles is continuously read using the ultrasonic sensor.
 Distance measurement: The line duration = pulseIn(echo, HIGH); measures the duration of the echo signal from the sensor to calculate the distance in centimeters and inches.
 Conditions: Depending on the measured distance, different LEDs are turned on, and the buzzer generates sounds. For example, if the distance is between 20 and 75 centimeters, the orange LED is lit, and the buzzer produces a sound with a frequency of 1100 Hz for 175 milliseconds.
 Displaying results: If the measured distance is less than 100 inches (approximately 254 cm), measurement results are displayed on the serial monitor using the Serial.print() function.
 Delay: Finally, there's a 500-millisecond delay (0.5 seconds) at the end of the loop() to allow for cyclic measurements and responses.
