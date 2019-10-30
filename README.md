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

|      values       |      completed       |  sf::Keyboard Name   |
| ----------------- | -------------------- | -------------------- |
| a-z               | (√)                  | [A-Z]                |
| 0-9               | (√)                  | Num[0-9]             |
| enter             | (√)                  | Enter                |
| delete            | (√)                  | Delete               |
| backspace         | (√)                  | Backspace            |
| blank             | (√)                  | Space                |
| big_bracket{}[]   | (√)                  | LBracket, RBracket   |
| semicolon;        | (√)                  | Semicolon            |
| quotation_marks"' | (√)                  | Quote                |
| [<,][>.]          | (√)                  | Comma, Period        |
| [?/][\]           | (√)                  | Slash, Backslash     |
| ~                 | (√)                  | Tilde                |
| -                 | (√)                  | Hyphen               |
| +                 | (√)                  | Add                  |
| windows           | (√)                  | LSystem, RSystem     |
| up                | (√)                  | Up                   |
| down              | (√)                  | Down                 |
| left              | (√)                  | Right                |
| right             | (√)                  | Left                 |
| capslock          | (×)--unavailable     | [NONE]               |
| tab               | (√)                  | Tab                  |
| shift             | (√)                  | LShift, RShift       |
| control           | (√)                  | LCtrl, RCtrl         |
| alt               | (√)                  | LAlt RAlt            |
| F1-F12            | (×)--not considering | (×)--not considering |
| home              | (√)                  | Home                 |
| end               | (√)                  | End                  |

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

## Build bash code
* After static build
  * https://www.sfml-dev.org/tutorials/2.5/compile-with-cmake.php#configuring-your-sfml-build
  * set SFML_USE_STATIC_STD_LIBS enabled
* Use following code to build static link xmain.exe
  * replace [include path] and [lib path] with your own paths
  ```
  g++ tech-unwrap.cpp -o xmain.exe -DSFML_STATIC -I [include path] -L [lib path] -lsfml-graphics-s -lsfml-window-s -lsfml-audio-s -lsfml-system-s -lopengl32 -lwinmm -lgdi32 -lfreetype -ljpeg -lopenal32 -lflac -lvorbisenc -lvorbisfile -lvorbis -logg
  ```
* According to unknown reason, openal32.dll still need to be included to run.