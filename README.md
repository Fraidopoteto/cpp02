# CPP Module 02

A project from the 42 curriculum. The goal of this module is to introduce ad-hoc polymorphism, operator overloading, and fixed-point number representation in C++ using the Orthodox Canonical Class Form.

## Overview of Exercises

The module consists of exercises designed to build a fully functional `Fixed` point number class step by step:

* **ex00: My First Class in Orthodox Canonical Form**
  * **Goal:** Implement a basic class in Orthodox Canonical Form.
  * **Concept:** Defines the fundamental canonical structure for the `Fixed` class, including:
    * Default constructor
    * Copy constructor
    * Copy assignment operator (`operator=`)
    * Destructor
    * `getRawBits()` and `setRawBits()` member functions for raw integer manipulation.

* **ex01: Towards a More Useful Fixed-Point Class**
  * **Goal:** Convert standard types to fixed-point representations and format output.
  * **Concept:** Expands the `Fixed` class to include:
    * Integer and floating-point constructors (`Fixed(const int)` and `Fixed(const float)`)
    * Conversion methods (`toFloat()` and `toInt()`)
    * An overload for the insertion stream operator (`operator<<`) to output float representations directly.

* **ex02: Now We're Talking**
  * **Goal:** Full operator overloading and utility functions.
  * **Concept:** Implements full operator support for fixed-point arithmetic and logic:
    * Comparison operators: `>`, `<`, `>=`, `<=`, `==`, `!=`
    * Arithmetic operators: `+`, `-`, `*`, `/`
    * Increment and decrement operators: pre-increment (`++a`), post-increment (`a++`), pre-decrement (`--a`), post-decrement (`a--`)
    * Static overloaded `min` and `max` functions handling both mutable and constant references.

* **ex03: BSP (Binary Space Partitioning)**
  * **Goal:** Real-world application of fixed-point arithmetic.
  * **Concept:** Utilizes the `Fixed` class to implement a 2D geometric algorithm (`bsp`) that determines whether a given point lies strictly inside a triangle defined by three vertices.

## Compilation and Usage

### 1. Compilation

Navigate to any exercise directory (`ex00/` through `ex03/`) and compile using `make`. All exercises compile with `c++` using strict flags (`-Wall -Wextra -Werror -std=c++98`).

```bash
cd ex02
make
```

### 2. Usage

Run the executable produced by `make`:

```bash
./ex02
```

## Requirements

* Language: C++ (C++98 Standard)
* Compiler: `c++`
* Flags: `-Wall -Wextra -Werror -std=c++98`

## Author

* **joschmun** - *42 Student*