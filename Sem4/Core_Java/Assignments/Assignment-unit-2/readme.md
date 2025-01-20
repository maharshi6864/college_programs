# Java Programming Arrays and Collections

## Overview

This document provides a comprehensive overview of Java programming concepts related to **Arrays** and **Collections**. It covers key topics, including the structure of arrays, their advantages and limitations, and the utility of Java's Collection Framework, such as ArrayList, LinkedList, Stack, and PriorityQueue. Practical examples and detailed explanations accompany each concept to enhance understanding.

---

## Table of Contents

1. Arrays
   - Introduction
   - Single Dimensional Arrays
   - Multi-Dimensional Arrays
   - For-each Loop
   - Passing and Returning Arrays from Methods
   - Variable Arguments
2. Collections
   - Introduction
   - Hierarchy
   - ArrayList
   - LinkedList
   - Stack
   - PriorityQueue

---

## 1. Arrays

### 1.1 Introduction to Arrays

An array in Java is an object that holds a fixed number of elements of the same data type in contiguous memory locations. Arrays provide random access to elements and allow efficient storage and retrieval of data.

**Advantages:**

- Optimized code for data storage.
- Efficient retrieval using indices.

**Disadvantages:**

- Fixed size, which cannot be altered during runtime.
- Use of collections is recommended for dynamic sizing.

### 1.2 Single Dimensional Arrays

**Syntax:**

```java
// Declaration
int[] arr;

// Instantiation and Initialization
arr = new int[5];
arr[0] = 10;

// Declaration, Instantiation, and Initialization in one line
int[] arr = {10, 20, 30, 40, 50};
```

### 1.3 Multi-Dimensional Arrays

Multi-dimensional arrays (e.g., matrices) store data in row-column format.

**Syntax:**

```java
int[][] matrix = new int[3][3]; // A 3x3 matrix
matrix[0][0] = 1;
matrix[0][1] = 2;

// Declaration and initialization
int[][] matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

### 1.4 For-each Loop

The `for-each` loop, introduced in JDK 1.5, simplifies array traversal by eliminating index management.

**Example:**

```java
int[] numbers = {10, 20, 30, 40};
for (int num : numbers) {
    System.out.println(num);
}
```

### 1.5 Passing and Returning Arrays

**Passing Arrays to Methods:**

```java
public static void printArray(int[] array) {
    for (int num : array) {
        System.out.print(num + " ");
    }
}
```

**Returning Arrays from Methods:**

```java
public static int[] reverseArray(int[] array) {
    int[] reversed = new int[array.length];
    for (int i = 0, j = array.length - 1; i < array.length; i++, j--) {
        reversed[j] = array[i];
    }
    return reversed;
}
```

### 1.6 Variable Arguments

Variable arguments allow passing a variable number of arguments to a method.

**Syntax:**

```java
public static void displayArgs(String... args) {
    for (String arg : args) {
        System.out.println(arg);
    }
}
```

---

## 2. Collections

### 2.1 Introduction

Java Collections provide a dynamic way to manage groups of objects. Unlike arrays, collections are resizable, offering flexibility for operations like searching, sorting, insertion, and deletion.

### 2.2 Hierarchy of Collections

The Java Collections Framework consists of interfaces such as **Set**, **List**, **Queue**, and classes like **ArrayList**, **LinkedList**, **HashSet**, and **PriorityQueue**.

---

### 2.3 ArrayList

**ArrayList** is a resizable array implementation.

**Features:**

- Allows duplicate elements.
- Maintains insertion order.
- Non-synchronized.

**Example:**

```java
import java.util.ArrayList;

public class ArrayListExample {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<>();
        cars.add("Tesla");
        cars.add("BMW");
        cars.add("Audi");

        System.out.println("Cars: " + cars);
    }
}
```

### 2.4 LinkedList

**LinkedList** implements a doubly linked list, enabling efficient insertions and deletions.

**Example:**

```java
import java.util.LinkedList;

public class LinkedListExample {
    public static void main(String[] args) {
        LinkedList<String> fruits = new LinkedList<>();
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.addFirst("Mango");

        System.out.println("Fruits: " + fruits);
    }
}
```

### 2.5 Stack

A **Stack** is a Last-In-First-Out (LIFO) data structure.

**Example:**

```java
import java.util.Stack;

public class StackExample {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        stack.push(10);
        stack.push(20);
        System.out.println("Top Element: " + stack.peek());
        stack.pop();
        System.out.println("Stack after pop: " + stack);
    }
}
```

### 2.6 PriorityQueue

**PriorityQueue** processes elements based on priority.

**Example:**

```java
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.offer(50);
        pq.offer(30);
        pq.offer(40);

        System.out.println("Priority Queue: " + pq);
        System.out.println("Head: " + pq.poll());
    }
}
```

---

## Conclusion

This document explains the core concepts of Arrays and Collections in Java with practical examples. By understanding these fundamentals, developers can efficiently manage data structures and leverage the power of Java's Collection Framework in real-world applications.
