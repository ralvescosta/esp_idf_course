# Fundamentals of ESP-IDF Course

This repository contains the application developed during the course [IoT Application Development with the ESP32 Using the ESP-IDF](https://www.udemy.com/course/iot-application-development-with-the-esp32-using-the-esp-idf/).

## Table of content
  - [Subjects covered by the course](#subjects-covered-by-the-course)
  - [Hardware Used](#hardware-used)
  - [IDF setup for Linux](#idf-setup)
  - [IDF common commands](#idf-common-commands)

### Subjects covered by the course

- [x] Setup IDF project
- [x] FreeRTOS
- [x] IDF Error Handling
- [x] Best practices for embedded software
- [x] IDF Components and sensores library
- [x] Simple RGB Application
- [x] WiFi Application
- [x] ESP HTTP Server
- [x] OTA
- [x] DHT22 Sensor (Temperature and humidity)
- [x] WiFi Manager
- [x] Non Volatile Storage (NVS)
- [x] Interrupt and Semaphore
- [x] Time synchronization
- [] AWS IoT MQTT
- [] AWS mTLS
- [] AWS Security
- [] AWS OTA Update by MQTT

### Hardware used

- [ESP32-DevKitC](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/hw-reference/esp32/get-started-devkitc.html)

### IDF Setup

Today the best option to setup the environment with IDF is using the VSCode extension. With VSCode extension you can select which version you want and the extension will do all the work for you. As I'm not a embedded engineer, instead of every time when I open my terminal load the IDF setup, I just configure an alisa in my .zshrc to setup my idf config only when I will need it. 

```bash
alias get_idf = '. $HOME/esp/esp-idf-v5.0/export.sh'
```

clone esp-idf-libs inside your esp root folder 

```bash
git clone https://github.com/UncleRus/esp-idf-lib.git $HOME/esp/esp-idf-lib
```

### IDF Common commands

- **Setup the board for the project:**

```
idf.py set-target esp32
```

- **Configure the sdkconfig file using the menuconfig:**

```
idf.py menuconfig
```

- **Build the application:**

```
idf.py build
```

- **Flash onto the device:**

```
idf.py -p PORT flash
```

the PORT for Linux could be: /dev/ttyUSB0, /dev/ttyUSB1, /dev/ttyUSB2 ...


- **To connect to the serial monitor:**

```
idf.py -p PORT monitor
```