# Using the PCA as a PWM source

Altough the PCA has many different uses, like simply functioning as a counter (hence the counter array name) in a customizable way (hence the programmable name), as a watchdog timer and more, we are going to focus on the PWM output aspect of it.

![PWM mode of the PCA](PCA_in_PWM_mode.png)
*Block diagram of the PCA functioning as a PWM signal source*

The following picture demonstrates how the output is formulated.

![Output generation of the PCA in PWM mode](PCA_in_PWM_mode_output.png)
*K* is the reload value of **PCA0L**. This value determines how long **CEXn** is high/low. (When there is an overflow, **CEXn** changes to the opposite value.)
In general the following equation describes the frequency of the PWM output: *f_PWM=f_CLK/(2^K)*

The duty cycle determines that how much is high under one output cycle. It depends on the resolution(**N**), the compare value (**PCA0CPn**) and the polarity of the output (**CEXnPOL**).

*Calculation of the duty cycle*
![Duty cycle of PCA: PWM, CEXnPOL=0](PCA_in_PWM_mode_duty_cycle1.png) ![Duty cycle of PCA: PWM, CEXnPOL=1](PCA_in_PWM_mode_duty_cycle2.png)

Due to architectural design, all pins must be skipped by the crossbar and set to ground.
