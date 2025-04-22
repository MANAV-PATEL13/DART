### 🌐 **What is Dart?**

**Dart** is an **open-source, general-purpose programming language** developed by **Google**. It is optimized for building **fast, scalable, multi-platform apps**, especially **frontend user interfaces**, both for **web** and **mobile** (with Flutter).

---

### 🛠️ **Who Created Dart and When?**

- **Created by**: Google
- **First announced**: **October 2011**
- **Main creators**:  
  - **Lars Bak** (a Danish computer scientist known for work on virtual machines)  
  - **Kasper Lund** (also known for VM and language design)

---

### ❓ **Why Was Dart Created?**

Dart was created to address several limitations in existing languages (especially JavaScript) and to provide a better developer experience. Key goals were:

1. **Faster and more predictable performance** (especially on the web and mobile)
2. **Structured, object-oriented programming** with a familiar syntax (similar to Java, C#, and JavaScript)
3. **Tooling support**: Strong IDE support, static analysis, and debugging tools
4. **Modern language features**: Async/await, sound null safety, optional typing
5. **Cross-platform capability**: Build apps for **iOS**, **Android**, **web**, **desktop**, and even **backend** using one codebase

---

### 🚀 Where Is Dart Used Today?

Dart powers **Flutter**, Google’s popular UI toolkit for building natively compiled apps from a single codebase. It’s widely used for:

- Mobile app development (Flutter)
- Web apps
- Server-side apps
- Command-line tools

---

#### **Why Learn Dart?**
1. **Easy to Learn** – Dart has a simple syntax similar to Java, C#, and JavaScript.
2. **Fast and Efficient** – It compiles to native code, making it fast.
3. **Cross-Platform** – Used for mobile, web, and desktop applications.
4. **Null Safety** – Helps prevent null reference errors.
5. **Strongly Typed** – Supports both static and dynamic typing.

#### **Basic Dart Syntax**
Here’s a simple Dart program:
```dart
void main() {
  print("Hello, Dart!");
}
```

## 📜Dart Execution Flowchart
# 🧠 Dart Execution Flow
```
┌──────────────────────────────┐
│ 1️. Source Code (.dart File)  │
│ • Human-written Dart code    │
│ • You write this part        │
└─────────────┬────────────────┘
              ▼
┌────────────────────────────────┐
│ 2️. Tokenizer (Lexer)           │
│ • Breaks code into tokens      │
│ • Identifiers, keywords, etc.  │
└─────────────┬──────────────────┘
              ▼
┌──────────────────────────────┐
│ 3️. Parser                    │
│ • Validates Dart grammar     │
│ • Builds Abstract Syntax Tree│
└─────────────┬────────────────┘
              ▼
┌────────────────────────────────────┐
│ 4️. Analyzer (Type Checker, etc.)   │
│ • Resolves types and variables     │
│ • Performs static analysis         │
└─────────────┬──────────────────────┘
              ▼
┌────────────────────────────────────┐
│ 5️. Intermediate Representation (IR)│
│ • Internal representation of code  │
│ • Used for optimization            │
└─────────────┬──────────────────────┘
              ▼
┌────────────────────────────────────────────┐
│ 6️. Compiler Phase                          │
│                                            │
│ Dart has **multiple compilation targets**: │
│                                            │
│  A. JIT (Just-In-Time)                     │
│   • Used in development (hot reload)       │
│   • Dart VM compiles code at runtime       │
│                                            │
│  B. AOT (Ahead-Of-Time)                    │
│   • For production & native builds         │
│   • Compiles to native machine code        │
│   • Command: `dart compile exe`            │
│                                            │
│  C. JS Compiler                            │
│   • Compiles Dart to JavaScript            │
│   • For web apps: `dart compile js`        │
└─────────────┬──────────────────────────────┘
              ▼
┌────────────────────────────────┐
│ 7️. Dart VM or Native Binary    │
│ • JIT: Runs in Dart VM         │
│ • AOT: Runs as native binary   │
└─────────────┬──────────────────┘
              ▼
┌──────────────────────────────┐
│ 8️. Garbage Collector (GC)    │
│ • Frees unused memory        │
│ • Automatic memory management│
└─────────────┬────────────────┘
              ▼
┌──────────────────────────────┐
│ 9️. Output / Result           │
│ • Final result on screen     │
│ • Prints, returns, etc.      │
└──────────────────────────────┘
```


### **Key Features of Dart**
- **Variables**  
  ```dart
  var name = "Alice"; // Type inferred as String
  int age = 25; // Explicitly defined type
  ```
- **Functions**  
  ```dart
  void greet(String name) {
    print("Hello, $name!");
  }
  greet("Alice");
  ```
- **Control Statements (if-else, loops)**  
  ```dart
  for (int i = 1; i <= 5; i++) {
    print("Number: $i");
  }
  ```
- **Classes and Objects**  
  ```dart
  class Person {
    String name;
    
    Person(this.name);
    
    void sayHello() {
      print("Hello, my name is $name.");
    }
  }
  
  void main() {
    var person = Person("Alice");
    person.sayHello();
  }
  ```

### **Getting Started with Dart**
1. Install Dart from [dart.dev](https://dart.dev/get-dart).
2. Use DartPad ([dartpad.dev](https://dartpad.dev)) to run Dart code online.
3. Learn Dart and build Flutter apps!

<p align="center">
 
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/READme.md">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/README.md" style="float: right;">Next ➡️</a>
</p>