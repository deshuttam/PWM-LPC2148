# DEVICE DRIVER FOR LPC2148/PULSE WIDTH MODULATION

By Uttam Deshpande et. al.,

## Introduction
PWM or Pulse Width Modulation is a technique that modulates the width of a rectangular pulse wave in order to get a variation in the average value of the resulting wave. The main application of PWM is to control the power delivered to the loads. PWM is classified into two types,
* Single Edged PWM signal.
* Double Edged PWM signal.
We have generated the device driver for Single Edged PWM.

![image](https://user-images.githubusercontent.com/107185323/198998608-641bfb8d-befe-45ee-9609-694a7cce730a.png)


Device Drivers: A device driver is a software program that controls a particular type of hardware device that is attached to a computer. 

API: An Application Programming Interface is a set of subroutine definitions, communication protocols, and tools for building software. It is a set of clearly defined methods of communication among various components.

Requirements: Software
* DDGen Software
* Microvsion Keil

Hardware
* LPC2148

### Register Details of LPC2148/PWM: 
* PWM Timer Control Register 
* PWM Prescale Register 
* PWM Match Register 
* PWM Match Control Register 
* PWM Interrupt Register 
* PWM atch Enable Register 
* PWM Control Register

### APls designed: 
* int setpclock(int clock): To set pclk 
* int pwm_config (): To configure the pwm 
* int pwm_startcounter (): To start the timer counter 
* int set_frequency (int frequency, int timeperiod, int clock): To set the frequency and to calculate time period 
* int set _duty (int duty, int timeperiod, int pwm_no , float pulsewidth) : To set the dutycycle 
* int pwm_update (pwm_no): To update corresponding match register 
* int pwmenable_output (pwm_no): To enable the corresponding PWM output. 
* int pwm_reset_counter (): To reset the counter, when match is found between PWMTC and PWMMRO.

### Generation of device drivers: 
The device drivers for LPC2148/PWM were generated using DDGen tool, as per the guidelines given during training period. The input to the DDGen tool were DPS file and RTS file. The output was the generated driver. 
DPS file: It includes all the details of the registers and their fields; and the sequences i.e. APIs. 
RTS file: It includes system specification and base address of peripheral.

## Verification and testing of device driver 
The generated drivers were simulated on Keil uvision5 by writing a test application. The waveform generated in logic analyzer and the updated register values were verified using the Simulator in Keil uvisions.

Validation: After verifying the driver on simulator, it was implemented on the actual hardware i.e. LPC2148 Evaluation board by connecting to the CRO.

![image](https://user-images.githubusercontent.com/107185323/198998674-72b2a630-ebf5-4162-83e8-351859aaa8b6.png)

![image](https://user-images.githubusercontent.com/107185323/198998688-7facccd8-ccd5-4567-aa5b-bbc5831defc9.png)

![image](https://user-images.githubusercontent.com/107185323/198998697-6703d443-6756-4328-91bf-0f9771988364.png)

Verification results:

![image](https://user-images.githubusercontent.com/107185323/198998734-960a2e4d-d95b-460c-a237-09bc9783c9c5.png)



