# Controlling a H-Bridge Motor Driver Circuit With an Arduino


This is a H-Bridge circuit Driver of type (L293D) used to control two dc motors via an Arduino. Additionally, the speed of the motors is controlled with a potentiometer. Also, a button is added to the circuit to provide a reverse movement of the motors while pressed.

## repository content:
* Circuit Diagram 
* Arduino code
* a diagram of L293D

## More information:

### *H-bridge circuit*
![H-bridge circuit](https://www.circuitstoday.com/wp-content/uploads/2011/01/h-bridge-motor-driver.png)

H-bridge is a driver circuit consists mainly of 4 transistors, its function is to determine the circular movement of certain types of dc motors. Drivers of this type can be found as IC’s (L293D) or as electric module (L298N).

### L293D implementation 

![L293d picture](https://github.com/AbdullahAlshambri/H-Bridge-Circuit/blob/main/Circuit%20Diagram/L293D.jpg?raw=true)


this type of H-bridge drivers has 16 pins as illustrated above, in this implementation all of which were used. Enable pins determine the speeds of each motor, while “in” pins are connected digitally to the controller. Output pins are connected to the motors, and power pins must be connected to an external power source other than the Arduino, because dc motors draw a huge amount of current that the Arduino can not provide. 

### Circuit Diagram :

In this repsitory, L293D was implemented as:

![circuit Diagram](https://github.com/AbdullahAlshambri/H-Bridge-Circuit/blob/main/Circuit%20Diagram/Circuit%20Diagram.png?raw=true)
