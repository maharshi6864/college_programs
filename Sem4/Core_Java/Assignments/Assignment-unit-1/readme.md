# Core Java - Unit 1: Introduction to Java and Classes

## Overview

This document provides a structured explanation of fundamental concepts in Java, covering its history, features, comparison with other programming languages, key terminologies, and practical implementation of classes, objects, and constructors. It is designed to offer clarity to beginners while reinforcing the knowledge of intermediate Java programmers.

---

## Table of Contents

1. What is Java?
2. History of Java
3. Features of Java
4. Comparison: Java vs. C vs. C++
5. Key Terminologies
6. Classes and Objects
7. Constructors in Java
8. Code Examples

---

## 1. What is Java?

Java is a versatile, secure, and object-oriented programming language widely used in various domains, such as web development, enterprise solutions, and mobile applications. Its primary principle is **WORA** - Write Once, Run Anywhere.

### Characteristics:

- Platform-independent (bytecode interpreted by JVM).
- Secure and robust.
- Designed to support multithreading and distributed environments.

---

## 2. History of Java

Java was created in 1991 as part of the "Green Project" at Sun Microsystems. It was initially called **Oak** but renamed **Java** in 1995.

**Key Milestones:**

- 1991: Conceived by James Gosling and team.
- 1995: Officially released as "Java," with the tagline **Write Once, Run Anywhere (WORA)**.

---

## 3. Features of Java

Java is designed to be:

- **Object-Oriented:** Everything in Java is treated as an object.
- **Platform Independent:** Compiled code (bytecode) runs on any platform with JVM.
- **Robust:** Strong error-checking during compile and runtime.
- **Secure:** Built-in security features prevent unauthorized access.
- **Dynamic:** Adapts to evolving environments through runtime information.
- **High Performance:** Features like Just-In-Time (JIT) compilation optimize performance.

---

## 4. Comparison: Java vs. C vs. C++

| Feature             | C          | C++                  | Java                           |
| ------------------- | ---------- | -------------------- | ------------------------------ |
| Language Type       | Procedural | Procedural + OOP     | Purely OOP                     |
| Platform Dependency | Yes        | Yes                  | No (Platform Independent)      |
| Memory Management   | Manual     | Manual + Destructors | Automatic (Garbage Collection) |
| Speed               | Fast       | Slower than C        | Slower (JVM Overhead)          |
| Libraries           | Limited    | Extensive            | Comprehensive                  |
| Inheritance         | No         | Multiple Inheritance | Single + Interfaces            |

---

## 5. Key Terminologies

### Java Virtual Machine (JVM):

- Converts bytecode to machine code.
- Ensures platform independence.

### Java Development Kit (JDK):

- Includes tools for compiling, debugging, and running Java programs.

### Bytecode:

- Intermediate code generated by the Java compiler.
- Executed by the JVM.

---

## 6. Classes and Objects

### Definition:

- **Class:** Blueprint for objects.
- **Object:** Instance of a class.

### Example:

```java
class Car {
    String brand;
    int speed;

    void display() {
        System.out.println("Brand: " + brand + ", Speed: " + speed);
    }
}

public class Main {
    public static void main(String[] args) {
        Car car1 = new Car();
        car1.brand = "Toyota";
        car1.speed = 120;
        car1.display();
    }
}
```

---

## 7. Constructors in Java

Constructors are special methods used to initialize objects.

### Types of Constructors:

1. **Default Constructor:** No parameters, provided by the compiler if none is defined.
2. **Parameterized Constructor:** Accepts parameters for initialization.
3. **Copy Constructor:** Creates a new object by copying the attributes of another object.

### Example:

```java
class Rectangle {
    int length, width;

    // Parameterized Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
}

public class Main {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(10, 5);
        System.out.println("Area: " + rect.area());
    }
}
```

---

## 8. Code Examples

### Example 1: Input Handling Using Scanner Class

```java
import java.util.Scanner;

public class InputExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = sc.nextLine();

        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        System.out.println("Hello, " + name + ". You are " + age + " years old.");
    }
}
```

### Example 2: Leap Year Checker Using JOptionPane

```java
import javax.swing.JOptionPane;

public class LeapYearChecker {
    public static void main(String[] args) {
        String yearStr = JOptionPane.showInputDialog("Enter a year:");
        int year = Integer.parseInt(yearStr);

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            JOptionPane.showMessageDialog(null, "Leap Year");
        } else {
            JOptionPane.showMessageDialog(null, "Not a Leap Year");
        }
    }
}
```

---

## Conclusion

This document provides a comprehensive overview of Java basics, enabling learners to understand its core features, advantages, and practical applications. By implementing the examples provided, students can solidify their understanding and improve their coding skills in Java.
