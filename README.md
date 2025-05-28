# Gesture Controlled Car 🏁

Control a robotic car with your hand! This project uses a smart glove to wirelessly control a robotic car. Tilt your hand, and the car moves!

---
## Components Used

### For the Transmitter Glove 🧤

| Component                | Quantity       
| :----------------------- | :------: 
| **Arduino Nano** |    1    
| **MPU6050** |    1     
| **HC-05 Bluetooth Module** | 1
| Vero Board               |    1    
| Solder station           |    1                      |

### For the Car 🏎️

| Component                | Quantity 
| :----------------------- | :------: 
| **Arduino Mega** |    1     | The car's super-smart navigator.        |
| **HC-05 Bluetooth Module** |    1  (2 in total)   
| **L293D Motor Driver** |    1     
| DC Motors                |  2  
| Castor Wheel             |  1
| 9V Battery               |    1   
| Jumper Wires (M-F)       | 1 pack

---
# How it works?
As you move your hand, the MPU6050 detects the angular tilt and sends the updated values to the Arduino Nano using the I2C protocol. The Arduino processes this data and transmits corresponding movement commands through the HC-05 Bluetooth module via the UART protocol to another HC-05 module located in the robotic car. The second HC-05 forwards the received commands to an Arduino Mega, which then sends digital HIGH/LOW signals to an L293D motor driver, controlling the DC motors that drive the car's wheels.

---
# Steps to Create Your Own
1. Assemble Your Robot: Get your car chassis, motors, and wheels ready.
2. Solder the Transmitter Circuit: Follow your circuit diagram to solder the Arduino Nano, MPU6050, and HC-05 onto the vero board for your glove.
3. Assemble Car Components: Mount the Arduino Mega, HC-05, and L293D driver onto your car. Connect all components with jumper wires.
4. Pair the HC-05 Modules: Ensure your Bluetooth modules are paired so they can talk to each other.
5. Upload the Code: Flash the respective code to your Transmitter (Nano) and Receiver (Mega) Arduinos.
6. Test the Robot! Power everything up, connect, and start controlling your car with your hand!

---
Demo: 







