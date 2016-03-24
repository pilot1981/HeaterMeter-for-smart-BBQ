// HeaterMeter Copyright 2016 Bryan Mayland <bmayland@capnbry.net> 

//#define GRILLPID_CALC_TEMP
//#define GRILLPID_SERIAL_ENABLED
#define GRILLPID_SERVO_ENABLED

#define TEMP_PIT    0
#define TEMP_FOOD1  1
#define TEMP_COUNT 0

// Use oversample/decimation to increase ADC resolution to 2^(10+n) bits n=[0..3]
#define TEMP_OVERSAMPLE_BITS 1

// The time (ms) of the measurement period
#define TEMP_MEASURE_PERIOD 1000
// The temperatures are averaged over 1, 2, 4 or 8 samples per period
#define TEMP_AVG_COUNT 1
// 2/(1+Number of samples used in the exponential moving average)
#define TEMPPROBE_AVG_SMOOTH (2.0f/(1.0f+60.0f))
#define PIDOUTPUT_AVG_SMOOTH (2.0f/(1.0f+240.0f))
// Once entering LID OPEN mode, the minimum number of seconds to stay in
// LID OPEN mode before autoresuming due to temperature returning to setpoint
#define LIDOPEN_MIN_AUTORESUME 30

// Servo refresh period in usec, 20000 usec = 20ms = 50Hz
#define SERVO_REFRESH          20000
