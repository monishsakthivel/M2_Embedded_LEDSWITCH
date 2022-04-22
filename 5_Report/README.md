Introduction
 -----  
      Squinting of LED is a basic venture in Embedded programming world. There are multiple approaches to making a flickering LED circuit. You can make one utilizing transfers. You can make one utilizing semiconductors. Or on the other hand you can make one utilizing parts like an inverter, a 555 Timer or a microcontroller. Here switch is utilized to squint the two LED utilizing ATmega328(a microcontroller).

Objective
------
     The main objective is to blink the led using ATmega328 and a switch to control two LED's.

Components used
 -----
  1.ATmega328
  
  2.Two LED
  
  3.Switch
  
  4.Resistor

Software used
-----
  1.simulIDe

Research
--------
      Atmega328 is an Atmel microcontroller, which is utilized in Arduino UNO board. Atmega328 has 28 pins altogether. It has 3 Ports in complete which are named as Port B,Port C and Port D.Port C is a simple Port and it has six pins altogether. Thus, in basic words, ATmega328 has 6 simple pins.Port B and Port D are computerized ports and have 7 pins each.So, altogether ATmega328 has 14 advanced pins. It additionally upholds Serial Communications; we can perform sequential correspondence through Pin 2 (RX) and Pin 3 (TX). It likewise upholds SPI Protocol.
 
Features
---------
  It has simple features.
  
  1.It can switch off the LED's when switch is in off state.
  
  2.It can switch on the LED's when switch is in on state.

4W's and 1 H's
---------------
Why

  1.To blink two LED's using a switch in ATmega328.
  
  2.To understand basic concepts in ATmega328.

Where

  1. It can be used anywhere.
  
  2. It can be used for understanding purposes in schools and colleges.

Who
   
   1.It can be used by students.

   2.It can be used by anyone who are new to embedded programming language.

When

  1.People are trying to learn an embedded programming language.

  2.In schools and colleges it can be implemented.

How
  
  1.By using software to execute the program.
  
  2.By loading the program in ATmega328.

SWOT Analysis
-------------
Strengths

  1.Simple program to understand.

  2.Cost effective.

Weakness

  1.Basic program.

Opportunities

  1.Program can be made more complex by adding more components.

Threats

  1.There are advanced programs which are simple to learn is out already.

High Level Requirements
 -------------------------
  | Id	  |  Description	Status |
  | --- | --- |
  | HLR_1 |	Microcontroller	Implemented |
  | HlR_2 |	Switch	Implemented |  
  | HLR_3 | Two LED	Implemented |
  |HLR_4	|Software	Implemented |


Low Level Requirements
------------------------
|Id	| Description	Status |
| --- | --- |
| LLR_1 |	ATmega328	Implemented |
| LLR_2	|Switch	Implemented |
| LLR_3	|Two LED	Implemented |
| LLR_4	|Visual studio & SimulIDE	Implemented |

Design
---
    1.This project uses ATmega328.
    
    2.This system uses swtich to blink LED.
    
Behavior Diagram
---
![behaviour diagram](https://user-images.githubusercontent.com/102243824/164652412-f4cde1df-5c48-4013-9ffb-aa7e98c7d937.png)

Structural Diagram
---
![structural diagram](https://user-images.githubusercontent.com/102243824/164652717-37a593c2-a7ce-4cb3-95e7-2a0e11a24372.png)

Block Diagram
---
![block diagram](https://user-images.githubusercontent.com/102243824/164653288-66ce7aa5-3291-437e-9fe0-fdb5cbca617b.png)

Simulation
---
![circuit](https://user-images.githubusercontent.com/102243824/164655270-bd8a54cb-5fe1-48f9-8688-13780105d4fb.png)

  High Level Requirement
----

|Id	| Description | Expected I/P	| Expected O/P | Actual O/P |	Type Of Test |
| --- | --- | --- | ---| --- | --- |
| HLR_1 |  Switch on | High power	| LED On | 	LED On |	Rquirement |
| HLR_2 |	Switch Off |No power | 	LED Off |	LED Off |	Requirement |

Low Level Requirement
---

|Id	| Description | Expected I/P	| Expected O/P | Actual O/P |	Type Of Test |
| --- | --- | --- | ---| --- | --- |
| LLR_1 |  Switch on | Value 1	| LED On | 	LED On |	Rquirement |
| LLR_2 |	Switch Off | Value 0 | 	LED Off |	LED Off |	Requirement |
