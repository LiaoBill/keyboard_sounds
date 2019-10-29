# keyboard_sounds

* sfml based global keyboard sound generator, ctrl+alt+f9 to exit, using nintendo switch sounds, enjoy~

## file description:
* tech-unwrap.cpp
  * ain cpp file, using python automatically generated
* xmain.exe
  * MinGW g++ 7.1.0 build, tested on windows 18362 build
* msounds/*
  * all flac sounds

## tech description:
* based on SFML multimedia libraray:
  * a multi-media, multi-platform, multi-language supported library
  * [SFML official website](https://www.sfml-dev.org/)
* using python auto generating codes (handtyping will cause A suiside)
* using easy-tricky frame count calculation to limit sf::Keyboard::isKeyPressed trigger amount
  * e.g. x_counter_obj.f_d <= 2 && x_counter_obj.f_d >= 0
* using frame count to check whether one key has been pressed continuously:
  * e.g. x_counter_obj.f_d_times >= 30

## How to use?
* keys available:

|      values       |      completed       | flac prepared |
| ----------------- | -------------------- | ------------- |
| a-z               | (√)                  | (√)           |
| 0-9               | (√)                  | (√)           |
| enter             | (√)                  | (√)           |
| delete            | (√)                  | (√)           |
| backspace         | (√)                  | (√)           |
| blank             | (√)                  | (√)           |
| big_bracket{}     | (√)                  | (√)           |
| big_bracket[]     | (√)                  | (√)           |
| semicolon;        | (√)                  | (√)           |
| quotation_marks"' | (√)                  | (√)           |
| <>                | (√)                  | (√)           |
| /\                | (√)                  | (√)           |
| ?                 | (√)                  | (√)           |
| ~                 | (√)                  | (√)           |
| -                 | (√)                  | (√)           |
| +                 | (√)                  | (√)           |
| windows           | (√)                  | (√)           |
| up                | (√)                  | (√)           |
| down              | (√)                  | (√)           |
| left              | (√)                  | (√)           |
| right             | (√)                  | (√)           |
| capslock          | (×)--unavailable     | (√)           |
| tab               | (√)                  | (√)           |
| shift             | (√)                  | (√)           |
| control           | (√)                  | (√)           |
| alt               | (√)                  | (√)           |
| F1-F12            | (×)--not considering | (×)           |
| home              | (√)                  | (√)           |
| end               | (√)                  | (√)           |

* you can change all audios (./msounds directory), if you want, each audio is playing on a seperated thread.
* Ctrl + Alt + F9 to exit the program, hearing one "dong dong" music and the program will exit by itself.

## Embedding
* if you want to embed your program into other programs
* e.g. python, my xmain.exe was put in XCppHelpers folder
```
├── XXXX.py
├── XCppHelpers
│   ├── msounds
│   │   ├── alt.flac
│   │   ├── backspace.flac
│   │   ├── big_bracket.flac
│   │   ├── blank.flac
│   │   ├── capslock_off.flac
│   │   ├── capslock_on.flac
│   │   ├── continue.flac
│   │   ├── ctrl.flac
│   │   ├── delete.flac
│   │   ├── down.flac
│   │   ├── enter.flac
│   │   ├── exit.flac
│   │   ├── left.flac
│   │   ├── normal_type.flac
│   │   ├── quotation_mark.flac
│   │   ├── right.flac
│   │   ├── semicolon.flac
│   │   ├── shift.flac
│   │   ├── splash.flac
│   │   ├── tab.flac
│   │   ├── up.flac
│   │   └── windows.flac
│   ├── openal32.dll
│   ├── sfml-audio-2.dll
│   ├── sfml-audio-d-2.dll
│   ├── sfml-graphics-2.dll
│   ├── sfml-graphics-d-2.dll
│   ├── sfml-network-2.dll
│   ├── sfml-network-d-2.dll
│   ├── sfml-system-2.dll
│   ├── sfml-system-d-2.dll
│   ├── sfml-window-2.dll
│   ├── sfml-window-d-2.dll
│   └── xmain.exe  <-----I'm here!
```
* we just need to specify cwd, and then we are good to go.
  ``` python
    startupinfo = subprocess.STARTUPINFO()
    startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
    subprocess.Popen("./XCppHelpers/xmain.exe", cwd="./XCppHelpers/", shell = False, startupinfo = startupinfo)
  ```


g++ -Wall -D