# Quick control access

Plugin for the PlayStation Vita to provide an easy access to common setup actions.

## Controls
- select + left : turns down screen brightness
- select + right : turns up screen brightness
- select + L + right : turns down volume
- select + R + right : turns up volume


## Build

Use the following command to build every samples:

``` shell
mkdir build && cd build
cmake ..
make
```


## Dependencies

Instal the Vita SDK from https://vitasdk.org/


## VSCODE intellisense

Add this to your settings.json

``` json
"C_Cpp.default.systemIncludePath": [
  "/usr/local/vitasdk/arm-vita-eabi/include",
  "/usr/local/vitasdk/arm-vita-eabi/include/libk",
  "/usr/local/vitasdk/arm-vita-eabi/include/c++/10.1.0",
  "/usr/local/vitasdk/arm-vita-eabi/include/c++/10.1.0/arm-vita-eabi"
]
```
