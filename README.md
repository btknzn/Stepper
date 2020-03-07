 
TOBB ETU
Mekatronical Insturmatation			
Project-1
You can watch the video
Video:https://www.youtube.com/watch?v=hPZ8onPFUYQ&feature=youtu.be
 
Names	
Batu Kaan Özen
Hande Yıldırım
Number
141201079
141201047
Tarih	27/02/2020






Project Aim: 
 We will ask user the location of stepper motor under serial communication window between Arduino and Personal Computer. For instance, they initialize our system one tour and then our system is supposed to move one tour and then our system ask about location.
Equipment List:
• PC 
• Arduino (Nano/Uno/Mega)
• Breadboard x 1 
• ETUKit x 1
• Stepper motor (Nema 200 steps) x 1
• LN298N motor driver
• DC162 micro switch x1

System Description and Mathematical Calculation:
 We know from our measurement that our system has 31 cycles and one cycle contain 200 steps.
 Our system asks the user which location they want the stepper. It asks it as the number of stepper cycles.
 To be clear, if the user enters 20,23 circles, our stepper motor steps for one step 360/200 degree. 
 One of the important things in our system is finding reference point. 
 For example if we move our system without knowing the starting point we do not know where our system is going to be ended up. Because of this reason Micro Switch is used, when we enter the location, our system is going to move first to reference point, where our Micro Switch located and then our stepper press our Micro Switch and we understand that we are in the center point. After finding center point we count steps until we complete our cycles. You can see our system in foto-1.
