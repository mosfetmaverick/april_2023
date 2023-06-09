#ifndef INC_MOTOR_H_
#define INC_MOTOR_H_

#include "motor_encoder.h"

typedef struct
{
	float p_gain;
	float i_gain;
	float d_gain;
	int16_t last_error;
	int32_t error_integral;
	int16_t output;
}pid_instance_int16;

void set_pid_gain(pid_instance_int16 *pid_instance, float p, float i, float);
void apply_pid(pid_instance_int16 *pid_instance, int16_t input_error, uint16_t sampling_rate);
#endif /* INC_MOTOR_H_ */
