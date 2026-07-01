from vandroid import Pin, PWM
from time import sleep

# --- Servo Setup ---
# SG90 uses ~50 Hz PWM
FREQ = 50

# Helper: convert angle (0 - 180) to duty cycle for SG90
def angle_to_duty(angle):
    # SG90 pulse width: 0.5ms - 2.5ms
    # duty for ESP32 PWM is 0-1023
    min_duty = 26   # ~.5ms
    max_duty = 128  # ~2.5ms
    duty = int(min_duty + (angle / 180) * (max_duty - min_duty))
    return duty

# Create PWM servo objects
servo1 = PWM(Pin(14), freq=FREQ)
servo2 = PWM(Pin(27), freq=FREQ)

# --- Servo Movement Function ---
def move_servo(servo, start, end, step = 2, delay = 0.02):
    if start < end:
        rng = range(start, end + 1, step)
    else:
        rng = range(start, end - 1, -step)

    for angle in rng:
        servo.duty(angle_to_duty(angle))
        sleep(delay)

# --- Butter Passing Sequence ---
def pass_the_butter():
    response = input("What is my purpose:")
    # voice activation logic here
    if response.lower() == "pass the butter":
        print("Oh my God...")

    # 1. Raise arm
    move_servo(servo1, 90, 40) # shoulder up
    move_servo(servo2, 90, 140) # elbow extend

    sleep(0.5)

    # 2. Push the butter (extend forearm)
    move_servo(servo2, 140, 160)

    sleep(0.5)

    # 3. Retract arm
    move_servo(servo2, 160, 90)
    move_servo(servo1, 40, 90)

    print("Life has no meaning...")

# --- Main Loop --
while True:
    pass_the_butter()
    sleep(3)
    