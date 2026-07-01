import random

class Pin:
    def __init__(self, pin, mode=None):
        self.pin = pin
        self.mode = mode

class PWM:
    def __init__(self, pin, freq=50):
        self.pin = pin
        self.freq = freq
        self.duty_value = 0

    def duty(self, value):
        self.duty_value = value

class ADC:
    def __init__(self, pin):
        self.pin = pin

    # Read the analog value from the pin (0-1023)
    def read(self):
        # Simulate reading an analog value (for testing purposes)
        return random.randint(0, 1023)