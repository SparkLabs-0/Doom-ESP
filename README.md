## Doom port for ESP32

---

This code is not fully mine. I used an existing [doom port](https://github.com/daveruiz/doom-nano) For Arduino Nano, and I just removed the part where native AVR API was used and replaced with Arduino API.

---
## To-Do:
  - I need to resolve a problem with buzzer. In the original repo, the code used AVR API to controll buzzer, and it processed Wolfstein 3D PC sound format or whatever. I just didn't undestand how to port it to ESP.

Apart from that, game is fully playable, though it is not a full port of a doom, rather a version with many features cut, for performance and simplicity.
