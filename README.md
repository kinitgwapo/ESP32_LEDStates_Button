# ESP32_LEDStates_Button

![Circuit Diagram](Circuit-Diagram)

### Observation Table

| Button States    | Yellow LED (18) | Green LED (19) |
| :--------------- | :-------------- | :------------- |
| Float (Released) | 0               | 1              |
| Pressed          | 1               | 0              |
| Released         | 0               | 1              |
| Pressed          | 1               | 0              |

### LED States Explanation

The LED pins are normally off when 0, while the Button is active-low.
Whenever the Button is released, it is currently high, else it is low when pressed/held.