# Qt Signals and Slots – Console Application
![Qt](https://img.shields.io/badge/Qt-%23217346.svg?style=for-the-badge&logo=Qt&logoColor=white)
![C++](https://img.shields.io/badge/C++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
## Overview

This project is a simple Qt console application created as part of an Object-Oriented Programming exercise.  
The purpose of the assignment is to demonstrate the basic structure of a Qt application and the usage of the **signals and slots** mechanism provided by the Qt framework.

Although the application itself is synchronous, signals and slots are used to illustrate how Qt replaces traditional callback-based designs.

---

## Project Structure
```
h6a/
│
├── h6a.pro
├── main.cpp
├── myclass.h
└── myclass.cpp
```

---

## Technologies Used

- C++
- Qt 6 (Qt Core module)
- qmake build system
- Qt Creator

---

## Key Concepts

### QObject

The `MyClass` class inherits from `QObject`. This is required in order to:
- use Qt’s signals and slots mechanism
- enable Qt’s object ownership (parent–child) memory management
- take advantage of Qt’s meta-object system

---

### Q_OBJECT Macro

The `Q_OBJECT` macro is mandatory for any class that defines **signals** or **slots**.  
It instructs Qt’s Meta-Object Compiler (MOC) to generate additional code needed for:
- signal-slot connections
- runtime type information

Without this macro, signal and slot communication will not work.

---

## Implementation Details

### MyClass

- Defines a custom signal `mySignal`
- Defines a public slot `mySlot`
- Connects the signal to the slot in the constructor
- Emits the signal using the `raiseMySignal()` method

When the signal is emitted, the connected slot is automatically executed.

---

### main.cpp

- Initializes the application using `QCoreApplication`
- Creates an instance of `MyClass`
- Calls `raiseMySignal()`, which triggers the signal-slot mechanism

---

## Build Configuration

The project is configured as a Qt console application using the Qt Core module.

Relevant section of the `.pro` file:

```pro
QT = core
CONFIG += console
CONFIG -= gui
```
## Program Output

When the application is executed, the following output appears in the console:
```makefile
mySlot:ia kutsuttiin
```
This confirms that the signal was successfully emitted and the connected slot was called.
## Purpose of Signals and Slots

Signals and slots are especially useful in larger and more complex applications.
They are commonly used for:

- asynchronous operations
- event-driven programming
- decoupling components

Qt’s signal-slot system provides a safer and more flexible alternative to traditional callback functions.
## Author

Completed as part of an Object-Oriented Programming course using Qt.
