# ESP32-Three-Mode-LEDs

This project simulates an ESP32 microcontroller handling LEDs and switches using the [Wokwi Simulator](https://wokwi.com/). The program runs in three different modes depending on switch input.

🔗 **Try the simulation here**: [ESP32 Wokwi Project](https://wokwi.com/projects/398529717527689217)

---

## 📋 Project Description

### Hardware Setup (Simulated via Wokwi)
- **5 LEDs** connected to output pins
- **3 Switches** connected to input pins (with internal pull-up resistors enabled)

### Modes of Operation

| Mode | Triggered by | Behavior               |
|------|--------------|------------------------|
| 1    | Switch 1     | All LEDs ON            |
| 2    | Switch 2     | All LEDs OFF           |
| 3    | Switch 3     | Running lights effect  |

> **Running lights**: A visual sequence where LEDs turn on one after another in a loop, mimicking vehicle running lights.

---

## 🔌 Pin Configuration

### LED Pins (Output)

| LED # | GPIO Pin |
|-------|----------|
| LED 1 | GPIO 16  |
| LED 2 | GPIO 4   |
| LED 3 | GPIO 0   |
| LED 4 | GPIO 2   |
| LED 5 | GPIO 15  |

### Switch Pins (Input with Pull-Up)

| Switch # | GPIO Pin | Mode Triggered |
|----------|----------|----------------|
| Switch 1 | GPIO 17  | Mode 1 (All LEDs ON)  |
| Switch 2 | GPIO 18  | Mode 2 (All LEDs OFF) |
| Switch 3 | GPIO 19  | Mode 3 (Running lights) |

---

## 🛠 Technologies Used

- [ESP32](https://www.espressif.com/en/products/socs/esp32)
- [Wokwi Simulator](https://wokwi.com/)
- C++ (Arduino framework)

---

## 📁 Project Files

- sketch.ino – The main Arduino sketch file for the ESP32 project.
- diagram.json – The Wokwi project configuration file, which defines the virtual hardware setup (e.g., ESP32 board, connections, components, etc.).

 ## 🚀 How to Open the Project in Wokwi
You can open this project in Wokwi using the .json file:

1. Go to wokwi.com.

2. Click "Start from Project" or go to https://wokwi.com/projects.

3. Click the folder icon to "Upload Project".

4. Select both the .ino and .json files from this repository.

5. Wokwi will load your ESP32 project with the correct circuit and code.

✅ Make sure both files are in the same folder when uploading, so the simulation loads correctly.

---

## 📄 License
This project is licensed under the MIT License.
You are free to use, modify, and distribute this software with proper attribution.

---

## 🙋 Author
Aobakwe Bogatsu

Computer Systems Engineering Student
