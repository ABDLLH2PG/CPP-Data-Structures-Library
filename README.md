# 📚 C++ Custom Data Structures Library (OOP) 🚀

[ **🇸🇦 Read this project in Arabic** ](./README-AR.md)

A comprehensive, ground-up implementation of core Data Structures in **C++** using **Object-Oriented Programming (OOP)**. This library serves as a personal toolkit, built completely from scratch without relying on the Standard Template Library (STL) for the foundational structures, demonstrating a deep understanding of memory management, pointers, and algorithmic efficiency.

---

## 🏗️ Implemented Data Structures & Features

### 1️⃣ Doubly Linked List (`clsDblLinkedList`) 🔗
- **Core Operations:** Insert at beginning/end, insert after a specific node, delete nodes, and find elements.
- **Traversal:** Efficient forward and backward traversal using `next` and `prev` pointers.
- **Dynamic Size:** Automatically grows and shrinks based on data.

### 2️⃣ Dynamic Array (`clsDynamicArray`) 📦
- **Memory Management:** Advanced dynamic memory allocation handling raw pointers.
- **Rich Methods:** Includes built-in methods like `Resize`, `Clear`, `Reverse`, `DeleteItemAt`, and `InsertAt`.
- **Safety:** Carefully designed to prevent memory leaks and handle buffer overrun scenarios (resolving strict compiler warnings like C6386).

### 3️⃣ Stacks & Queues (LIFO & FIFO) 🔄
- **Linked-List Based:** `clsMyStack` and `clsMyQueue` built dynamically on top of the custom Doubly Linked List.
- **Array Based:** `clsMyStackArr` and `clsMyQueueArr` demonstrating constrained structures using the custom Dynamic Array.
- **Operations:** standard `Push`, `Pop`, `Peek`, `Enqueue`, and `Dequeue` with robust boundary checking.

### 4️⃣ Advanced Utilities 🛠️
- **String Manipulation:** `clsMyString` for advanced, low-level string operations.
- **Queue Line System:** `clsQueueLine` showcasing a real-world application of the Queue data structure.

---

## 💻 Code Architecture & Design 🧬

### The Object-Oriented Paradigm
- **Templates (Generics):** Extensive use of C++ Templates `<class T>` allowing these data structures to store any data type dynamically (Integers, Strings, or Custom Objects).
- **Encapsulation:** Strict protection of internal states (like `_Size` and raw pointers) to prevent unauthorized external modifications.
- **Reusability:** Designed as independent header files (`.h`) ready to be plugged into any future C++ project.

---

## 🛠️ Key Technical Highlights ✨
- 🧠 **Deep Memory Control:** Manual allocation and deallocation using `new` and `delete` operators, ensuring zero memory leaks.
- 🚀 **Performance Optimized:** Direct pointer manipulation for O(1) insertions/deletions where applicable.
- 🏗️ **From Scratch:** A pure educational and architectural showcase of reinventing the wheel to truly understand the mechanics of internal C++ data structures.
