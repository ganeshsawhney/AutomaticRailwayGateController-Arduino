/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

Implementation of Automatic Railway Gate Controller by Arduino

ABSTRACT
The objective of this project is to provide an automatic railway gate at a level crossing replacing the gates operated by the gatekeeper. 
The road users have to wait for a long time before the arrival of train and even after the train have left. And secondly the chances of accidents that usually made by the carelessness of the road users or due to the time errors made by the gatekeepers is more. Here comes the importance of automatic railway gate control system. 
The system reduces the time for which the gate remains closed. This type of gates can be employed in an unmanned level crossing where the chances of accidents are higher and reliable operation is required.  
Since, the operation is automatic; error due to manual operation is prevented. The system works on a microcontroller based control. The proposed system uses Arduino Duemilanove Atmega 328 microcontroller. With the help of Ultrasonic Ping sensors, the arrival and leaving of the system is monitored and the gate is operated accordingly with the help of Servo Motor.

COMPONENTS USED
Material	Quantity
Arduino	1
Bread Board	1
Buzzer	1
Ultra Sonic Sensor	2
Pin Connectors	3
Servo Motors	1
RGB LED	2
LCD	1

Other Hardware/Software requirements of the Project:-
1.	USB programming cable (A to B)
2.	22 g solid wire for connections
3.	 Host PC running the Arduino development environment. Versions exist for Windows, Mac and Linux.
4.	Connecting Wires
5.	Toy cars/train to depict rail motion
6.	Other Craft Material for situation representation.

Working of this Design
•	We made all the connection i.e. connecting all of the Arduino Board, LEDs, Buzzer, Server Motor, Ultrasonic Ping Sensor, LCD.
•	Now as soon as the Ultrasonic Ping Sensor (used for measuring distance) catches up the incoming train i.e. the distance between approaching train and the U.P.S. decreases, the buzzer would be raised and the Server motor (initially at 90o) would rotate the barrier by 900 more leading to the blockage of road until the train passes. The buzzer would be raised and the LED would be lighted. The LCD would display corresponding message.
•	Now as soon as the Ultrasonic Ping Sensor senses the outgoing train, the buzzer would be raised again and with a safety delay of 30 sec, the Server motor (initially at 00) would rotate the barrier by 900, thus clearing the passage of vehicles.

Benefits of the Project:-
•	Fully automatic, leading to no manual error.
•	Extra safety measures being used makes it more safe and efficient.
•	Less resources, better benefits.

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */