## WROOM OLED SSD1306

Download and setup:

```
sudp pip3 install adafruit-ampy # but included here
wget https://raw.githubusercontent.com/adafruit/micropython-adafruit-ssd1306/master/ssd1306.py
ampy --port /dev/ttyUSB0 --baud 115200 put ssd1306.py
```

Complete [ssd1306](https://github.com/adafruit/micropython-adafruit-ssd1306) is on github.

Example code:

```
%serialconnect to --port=/dev/ttyUSB0 # for Jupyter
import machine, ssd1306
i2c = machine.I2C(-1, scl=machine.Pin(22), sda=machine.Pin(21))
oled = ssd1306.SSD1306_I2C(128, 64, i2c)
oled.fill(0) 
oled.text('MicroPython on', 0, 0)
oled.text('attached SSD1306', 0, 20)
oled.text('OLED display', 0, 30)
oled.show()
```

[xlink](https://www.instructables.com/id/MicroPython-on-an-ESP32-Board-With-Integrated-SSD1/)

