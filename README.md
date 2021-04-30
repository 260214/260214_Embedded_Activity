# Embedded-Project

|SEAT_HEATING_APP|
|:--:|
|![IMAGE](Simulation_Images/images.png)|





#### CI and Code Quality
|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/260214/260214_Embedded_Activity/actions/workflows/compile.yml/badge.svg)](https://github.com/260214/260214_Embedded_Activity/actions/workflows/compile.yml)|[![Cppcheck](https://github.com/260214/260214_Embedded_Activity/actions/workflows/codequality.yml/badge.svg)](https://github.com/260214/260214_Embedded_Activity/actions/workflows/codequality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/5b348aa747d448c6956a23de6776c18c)](https://www.codacy.com/gh/260214/260214_Embedded_Activity/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=260214/260214_Embedded_Activity&amp;utm_campaign=Badge_Grade)



#### INTRODUCTION:

A microcontroller (MCU for microcontroller unit) is a small computer on a single metal-oxide-semiconductor (MOS) integrated circuit (IC) chip. A microcontroller contains one or more CPUs (processor cores) along with memory and programmable input/output peripherals. Program memory in the form of ferroelectric RAM, NOR flash or OTP ROM is also often included on chip, as well as a small amount of RAM. Microcontrollers are designed for embedded applications, in contrast to the microprocessors used in personal computers or other general purpose applications consisting of various discrete chips.

In modern terminology, a microcontroller is similar to, but less sophisticated than, a system on a chip . SoC may include a microcontroller as one of its components, but usually integrates it with advanced peripherals like graphics processing unit (GPU), Wi-Fi module, or one or more coprocessors.

Microcontrollers are used in automatically controlled products and devices, such as automobile engine control systems, implantable medical devices, remote controls, office machines, appliances, power tools, toys and other embedded systems. By reducing the size and cost compared to a design that uses a separate microprocessor, memory, and input/output devices, microcontrollers make it economical to digitally control even more devices and processes. Mixed signal microcontrollers are common, integrating analog components needed to control non-digital electronic systems. In the context of the internet of things, microcontrollers are an economical and popular means of data collection, sensing and actuating the physical world as edge devices.

Some microcontrollers may use four-bit words and operate at frequencies as low as 4 kHz for low power consumption (single-digit milliwatts or microwatts). They generally have the ability to retain functionality while waiting for an event such as a button press or other interrupt; power consumption while sleeping (CPU clock and most peripherals off) may be just nanowatts, making many of them well suited for long lasting battery applications. Other microcontrollers may serve performance-critical roles, where they may need to act more like a digital signal processor (DSP), with higher clock speeds and power consumption.

ATmega328P is one of the high performances AVR technology microcontroller with a large number of pins and features. It is designed by 8-bit CMOS technology and RSIC CPU which enhance its performance and its power efficiency get improved by auto sleeps and internal temperature sensor. This ATmega328P IC comes with internal protections and multiple programming methods which helps the engineers to priorities this controller for different situations. The IC allows multiple modern era communications methods for other modules and microcontrollers itself, which is why the microcontroller ATmega328P usage has been increasing every day.


### ATmega328 BLOCK DIAGRAM:
![ATmega328 BLOCK DIAGRAM](Simulation_Images/ATMEGA328P-Block-Diagram.jpg)

#### FEATURES:
* Non programmable data and program memory.
* High performance.
* Low power consumption.
* Fully static operation.
* On chip analog comparator.

#### APPLICATIONS:
* Used in ARDUINO UNO, ARDUINO NANO and ARDUINO MICRO boards.
* Industrial control systems.
* SMPS and Power Regulation systems.
* Digital data processing.
* Analog signal measuring and manipulations.
* Embedded systems like coffee machine, vending machine.
* Motor control systems.

The Seat Heating control system is basically used to control the temperature of a car seat. When a passanger or a driver of the car seats on a car, the button sensor gets activated (which acts as one switch here). After that, the user can turn on the heater(which acts as another switch). The temperature sensor keeps monitoring and recording the temperature and sends the Pulse Width Modulation output to microcontroller ATmega328. The microcontroller takes the analog input of the sensor and gives output a tdesired output value through UART( through serial communication).


## SIMULATION:


### ACTIVITY_1:
#### LED_STATUS-
![LED GLOWS](Simulation_Images/PIC1.png)
![LED DOESN'T GLOW](Simulation_Images/PIC2.png)
![LED DOESN'T GLOW](Simulation_Images/PIC3.png)
![LED DOESN'T GLOW](Simulation_Images/PIC4.png)


### ACTIVITY_2:
![ReadADC](Simulation_Images/ACT_2.png)


### ACTIVITY_3:
![PWMOutput](Simulation_Images/ACT_3.png)


### ACTIVITY_4:
![UART](Simulation_Images/ACT_4.png)


## DETAIL REQUIREMENTS-
### HIGH LEVEL REQUIREMENTS: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | A user must know to call every function. | Techincal | IMPLEMENTED | 
| HR02 | User must know the number of arguments and the arguments itself to be passed during the function call. | Techincal |  IMPLEMENTED  |
| HR03 | User must be familiar with executing C codes in his/her own machine and a must knowledge of embedded is required. | Techincal |  IMPLEMENTED  |
| HR04 | User must be familiar with reading and writing files in C language if looking for storing data. | Techincal |  IMPLEMENTED  |
| HR05 | User must be familiar using VScode,Codeblocks,SimulIDE | Techincal |  IMPLEMENTED  |



##  LOW LEVEL REQUIREMENTS:
 
| ID | Description | Category |
| ------ | --------- | ------ | 
| LR01 | User must have knowledge about the app and how to use it. | Scenario |                                                                                      
| LR02 | User must have knowledge about c language.| Scenario | 
| LR03 | User must have idea of open-source codes | Scenario |                                                                                           
| LR04 | User must be familiar with different types of functions available.| Scenario | 
| LR05 | User must have idea of Git and GitHub. | Scenario | 
| LR06 | User must have idea of microcontroller and microprocessor. | Scenario | 



### CHALLENGES FACED AND HOW WAS IT SOLVED:
| No. | Challenge | Solution
|-----|-----------|--------
|1| Had faced a lot of errors while running the code in the VSC software and couldn't clone it directly with GitHub | Resolved it by using commands in the terminal |
|2| The cicruit wasn't proper hence desired output was not sufficient  | The wires were fixed,PINS were checked and put accordingly |








