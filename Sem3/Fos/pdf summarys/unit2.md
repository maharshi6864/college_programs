# README: Process Management Summary

This summary provides key concepts and important details from **Unit 2: Process Management** for your exam preparation. Focus on these essential topics to get a solid understanding of process management in operating systems.

---

## **1. Fundamentals of Process Management**

- **Program, Job, Task, and Process**:
  - A **program** is a set of instructions.
  - A **job** is a sequence of programs (e.g., compiling, linking, loading in batch systems).
  - A **task** involves concurrent execution of multiple programs.
  - A **process** is an active entity representing a program ready for execution.

---

## **2. Process Life Cycle**

### **Process States and Transitions**:

1. **New**: Process enters the system and is in the job queue.
2. **Ready**: Process is loaded into memory and waiting for execution.
3. **Running**: Process is executing on the CPU.
4. **Blocked**: Waiting for I/O or an event.
5. **Terminated**: Process has completed execution.
6. **Suspended**:
   - **Blocked Suspended**: Process is blocked and swapped to disk.
   - **Ready Suspended**: Process is ready but still in secondary storage.

---

## **3. Process Control Block (PCB)**

- A **data structure** used by the operating system to store:
  - Process ID (PID)
  - Process state
  - CPU registers and Program Counter
  - Memory-related info (e.g., stack, code, data sections)
  - Resource-related info (e.g., open files, allocated devices)
  - Scheduling info (e.g., priority, CPU time used)

---

## **4. Schedulers**

- **Long-Term Scheduler**:

  - Selects jobs to bring into the ready queue.
  - Controls degree of multiprogramming.

- **Short-Term Scheduler**:

  - Selects processes from the ready queue for CPU execution.
  - Invoked frequently (e.g., on interrupts).

- **Medium-Term Scheduler**:
  - Swaps out blocked processes to free memory.

---

## **5. Scheduling Algorithms**

- **First Come First Serve (FCFS)**:
  - Non-preemptive.
  - Processes executed in the order of arrival.
- **Shortest Job Next (SJN)**:

  - Non-preemptive.
  - Executes process with the shortest execution time.

- **Shortest Remaining Time (SRT)**:

  - Preemptive version of SJN.
  - Process with the shortest remaining time gets priority.

- **Round Robin (RR)**:
  - Time-sharing algorithm.
  - Each process gets a fixed time quantum.
  - Preemptive.

---

## **6. Process Synchronization and Communication**

- Processes may need to:
  - Share data.
  - Send signals to coordinate activities.
  - Communicate via Inter-Process Communication (IPC).

---

## **7. Key Examples**

- **Gantt Chart Calculations**:

  - Use the scheduling algorithms (e.g., FCFS, SJN) to:
    - Calculate **Waiting Time**, **Turnaround Time**, and **Normalized Turnaround Time**.
  - Example metrics:
    - Average Waiting Time
    - Average Turnaround Time
    - Average Normalized Turnaround Time

- **Round Robin Example**:
  - Time quantum: 2 units.
  - Processes executed in a cyclic order.

---

Focus on these topics and practice the examples provided in the material to enhance your understanding. Good luck with your exam!
