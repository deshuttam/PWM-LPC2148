//Test application: 
#include "lpc214x.h" 
#include "lpc2148_pwm_yapphdr.h" /declarations in this file 
int main() 
PINSELO Ox00020000; 
I/PLL for 60MHZ 
PLLOCON=OX01; 
PLLOCFG=0X24; 
PLLOFEED=0Xaa; 
PLLOFEED-0x55;
while((PLLOSTAT & OX00000400): 
PLLOCON=OX03: 
PLLOFEED=OXaa: 
PLLOFEED=0x55; 
VPBDIV-OX01: 
unsigned int *tp; 
struct Ipc2148_pwm_device_apis *pwm_apis; 
struct lpc2148_pwm_prv_data pdata; 
Ipc2148_pwm_init(&pdata,0); 
pwm_apis=lpc2148_pwm_deviceopen(); 
pwm_apis->setpclock(60000,&pdata); 
pwm_apis->pwm_config(&pdata); 
pwm_apis->pwm_startcounter(&epdata); 
pwm_apis->set_frequency(3000,tp ,60000,&pdata); 
pwm_apis->set_duty(80,*tp,4,&pdata); 
pwm_apis->pwm_update(4,&pdata); 
pwm_apis->pwmenableoutput(4,&pdata); 
pwm_apis->pwm_reset_counter(&pdata);
}
