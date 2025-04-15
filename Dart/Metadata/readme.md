
---


# 🧭 Metadata

1. **Introduction to Metadata**
2. **Built-in Annotations in Dart**
3. **Creating Custom Annotations**
4. **Applying Metadata in Real-world Scenarios**
5. **Advanced Metadata Usage**
6. **Review and Final Challenge**

---
## 📘 Lesson 1: Introduction to Metadata (Expanded)

### 🔍 What is Metadata?

In Dart, **metadata** provides additional information about your code. It's akin to attaching a note or label to a piece of code to convey extra context or instructions. This is achieved using **annotations**, which start with the `@` symbol.

### 🧠 Real-world Analogy

Imagine you're organizing files in a cabinet. You might use sticky notes to label certain files as "Urgent" or "Confidential." These labels don't change the content of the files but provide additional information about how they should be handled. Similarly, annotations in Dart don't alter the behavior of the code but offer supplementary details.

### 🛠️ Syntax and Usage

A metadata annotation begins with the character `@`, followed by either a reference to a compile-time constant (such as `deprecated`) or a call to a constant constructor.

**Example:**

```dart
@Deprecated('Use newFunction instead')
void oldFunction() {
  print('This function is deprecated.');
}
```

Here, `@Deprecated` is an annotation indicating that `oldFunction` should no longer be used, and it suggests using `newFunction` instead.

### 📌 Common Built-in Annotations

- `@Deprecated`: Marks a feature as deprecated.
- `@override`: Indicates that a method is overriding a method in a superclass.
- `@pragma`: Provides hints to the compiler for specific behaviors.

These annotations are available to all Dart code and serve various purposes, such as guiding developers, informing tools, or influencing compiler behavior.

### 🧠 Socratic Question

Why might it be beneficial to mark a function as deprecated in your code?

### 🧪 Exercise

Try writing a simple Dart function and annotate it with `@Deprecated`. Observe any warnings or messages your IDE or compiler provides.

**Example:**

```dart
@Deprecated('Use greetUser instead')
void greet() {
  print('Hello!');
}
```

When you use the `greet()` function, your IDE should warn you about its deprecation and suggest using `greetUser` instead.

---
## 📘 Lesson 2: Built-in Annotations in Dart

### 🧩 What Are Built-in Annotations?

Dart provides several built-in annotations that serve specific purposes, enhancing code clarity and functionality. These annotations are available in the Dart core libraries and are commonly used in everyday Dart programming.

### 🛠️ Common Built-in Annotations

1. **@override**
   - **Purpose**: Indicates that a method is intended to override a method in a superclass.
   - **Example**:
     ```dart
     class Animal {
       void speak() => print('Animal speaks');
     }

     class Dog extends Animal {
       @override
       void speak() => print('Dog barks');
     }
     ```
     ```dart
     class Animal {
          void speak() => print('Animal speaks');
          }

          class Dog extends Animal {
          @override
          void speak() => print('Dog barks');
          }

          void main() {
          Dog dog = Dog();
          dog.speak(); // Output: Dog barks
          }
          
     ```
     Here, `@override` clarifies that `speak` in `Dog` overrides the `speak` method in `Animal`.

2. **@Deprecated**
   - **Purpose**: Marks a feature as deprecated, signaling that it should no longer be used and may be removed in the future.
   - **Example**:
     ```dart
     @Deprecated('Use newFunction instead')
     void oldFunction() {
       print('This function is deprecated.');
     }
     ```
     class
     ```dart
            @deprecated
          class TestLibrary {
          void oldFunction() {
          print('This function is deprecated.');
          }
          }

          void main() {
          TestLibrary testLibrary = TestLibrary();
          testLibrary.oldFunction();
          }

     ```
      class
     ```dart
           
          class TestLibrary {
          @deprecated
          void oldFunction() {
          print('This function is deprecated.');
          }
          }

          void main() {
          TestLibrary testLibrary = TestLibrary();
          testLibrary.oldFunction();
          }

     ```
     This annotation informs developers to use `newFunction` instead of `oldFunction`.

3. **@pragma**
   - **Purpose**: Provides hints to the compiler for specific behaviors, often used for optimization or special instructions.
   - **Example**:
     ```dart
     @pragma('vm:entry-point')
     void entryPointFunction() {
       // This function is retained as an entry point.
     }
     ```
     In this case, `@pragma` ensures that the function is retained during tree shaking in Dart's compilation process.

    ✅ Let’s recap:<br>
    @pragma('vm:entry-point') is for keeping important functions.

    @pragma('vm:prefer-inline') can make code faster, but possibly larger.

    @pragma('vm:never-inline') can help preserve code boundaries, useful for debugging.
### 🧠 Socratic Questions

1. **Why is it beneficial to use the `@override` annotation when overriding methods in Dart?**
2. **What might be the consequences of using a function marked with `@Deprecated` in your code?**

### 🧪 Exercise

Write a Dart class that extends another class. Override a method from the superclass using the `@override` annotation. Then, create a deprecated method using the `@Deprecated` annotation and observe any warnings or messages from your IDE or compiler.

**Example:**
```dart
class Vehicle {
  void start() => print('Vehicle started');
}

class Car extends Vehicle {
  @override
  void start() => print('Car started');
}

@Deprecated('Use startNewEngine instead')
void startOldEngine() {
  print('Old engine started');
}
```
Great! Let's delve deeper into the `@pragma` annotation in Dart, focusing on its purpose, usage, and practical examples.

---

## 📘 Lesson 3: Understanding `@pragma` in Dart

### 🔍 What is `@pragma`?

In Dart, `@pragma` is a special annotation used to convey hints to tools, such as the Dart compiler or virtual machine (VM). These hints can influence how the code is compiled or executed, enabling optimizations or preserving certain behaviors during compilation.

### 🛠️ Syntax

```dart
@pragma('tool:directive', [options])
```

- `'tool:directive'`: Specifies the tool and the directive. For Dart VM-specific directives, the prefix is typically `'vm:'`.
- `[options]`: Optional parameters providing additional information for the directive.

### ✅ Let’s recap:<br>
    @pragma('vm:entry-point') is for keeping important functions.

    @pragma('vm:prefer-inline') can make code faster, but possibly larger.

    @pragma('vm:never-inline') can help preserve code boundaries, useful for debugging.

---

 **`@pragma` in Dart** is a powerful, low-level feature that gives you control over how your code is compiled or treated by the Dart VM or compilers. It’s rarely used in everyday programming, but when you’re writing performance-critical code, libraries, or working closely with the compiler/runtime—**it’s gold**.


### 🧱 **Lesson 1: What is `@pragma` and why it exists**

**Concept**  
In Dart, `@pragma` is a *compiler directive*. It's like whispering a message to the compiler:  
> “Hey, do something special with this function/class/element. Don’t treat it the normal way.”

This is NOT a general annotation like `@deprecated`.  
It's meant for internal optimization, controlling compiler behavior, or keeping code alive during tree shaking (dead code elimination in release builds).

**Analogy**  
Think of `@pragma` like sticky notes you put in a book when giving it to a friend:  
"Hey, don't skip Chapter 4" → `@pragma('vm:entry-point')`  
"Read this fast" → `@pragma('vm:prefer-inline')`

---

**Socratic Question:**  
Why do you think a compiler might remove unused code in release mode?  
And why might you want to *force* it to keep something?

---

**Exercise:**  
Imagine you have a Dart class with a method that’s *never* called directly in your app, but it's invoked via reflection or dynamic calls.  
What might happen in a release build?  
What do you think you could do to prevent that?

---

### ✅ **Answers**

**Q1: Why do compilers remove unused code?**  
To **optimize** your app—make it smaller, faster, and leaner. In *release mode*, Dart does **tree shaking**, which cuts out code that’s never referenced. If the compiler doesn’t *see* a usage, it assumes it’s safe to delete.

**Why force the compiler to keep something?**  
Because *you* might be calling it in a way the compiler can’t detect—like through **reflection**, **dynamic calls**, or **plugin registrations**. If it’s gone, your app will crash or fail silently.

---

**Q2: The method is used via reflection but never directly called. What happens?**  
In release mode, it gets **stripped out**—poof 💨. Your app might throw a runtime error or silently fail.

**What can you do?**  
Use:
```dart
@pragma('vm:entry-point')
```
This **tells the VM: “Hey, don’t remove this, I need it even if you can’t see where it’s used.”**

---

## ▶️ Lesson 2: Syntax and Structure of `@pragma`

**Basic Syntax:**
```dart
@pragma('name', [options])
```

- First argument = **pragma type**, e.g., `'vm:entry-point'`, `'vm:prefer-inline'`
- Second argument (optional) = extra data, like an identifier or flag

**Example:**
```dart
@pragma('vm:entry-point')
void mySpecialFunction() {
  print("This function must be preserved.");
}
```

**Compiler Pragmas are used for:**
- **Preserving functions** that are dynamically invoked
- **Hinting inlining behavior**
- **Runtime optimizations**

They are **not enforced at runtime**—they’re for **build time** and **compiler** only.

---

**Socratic Check-In:**
What’s the difference between an annotation like `@deprecated` and a pragma like `@pragma('vm:entry-point')`?

---

**Mini Exercise:**  
Write a Dart function named `initService()` that prints `"Service initialized"` and use the correct `@pragma` to ensure it's not removed in release mode—even if it’s never directly called.

---

### ✅ **Answers**

**Q: Difference between `@deprecated` and `@pragma`?**

- `@deprecated` = **Annotation for humans and the analyzer.** It tells **you** (and your IDE): “Don’t use this anymore.”
- `@pragma` = **Compiler directive for the Dart VM or AOT compiler.** It’s a message to the *machine*, telling it to optimize, preserve, or treat the code differently during build.

---

**Q: Write function with pragma**

```dart
@pragma('vm:entry-point')
void initService() {
  print("Service initialized");
}
```

Even if `initService()` is never called directly, this pragma ensures it survives tree shaking.

---

# 🚀 Lesson 3: Common Use Cases of `@pragma`

Let’s break down the most commonly used pragmas in Dart:

---

### 1. **`@pragma('vm:entry-point')`**

📌 **Purpose:** Prevents tree shaking from removing a class/function/method—even if it looks unused.

🛠️ **Use Case:** Reflection, dynamic calls, Flutter plugin registration.

```dart
@pragma('vm:entry-point')
class PluginLoader {
  void load() => print("Plugin loaded");
}
```

---

### 2. **`@pragma('vm:prefer-inline')`**

📌 **Purpose:** Instructs the compiler to *inline* the function for performance.

💡 Inlining = The compiler copies the code directly into the call site. Removes function call overhead.

🛠️ **Use Case:** Tiny utility functions used in performance-critical loops.

```dart
@pragma('vm:prefer-inline')
int add(int a, int b) => a + b;
```

> You don’t *need* this usually. Dart does inlining smartly. But you can nudge it.

---

### 3. **`@pragma('dart2js:tryInline')`** (for web builds)

📌 **Purpose:** Ask `dart2js` to inline something for performance on the web.

```dart
@pragma('dart2js:tryInline')
String fastConcat(String a, String b) => '$a$b';
```

---

### 4. **`@pragma('dart2js:noInline')`**  
📌 **Purpose:** Prevent inlining in web builds—for debugging or reducing code bloat.

---

### Socratic Questions:
1. Why might inlining improve performance in tight loops?
2. When would it be *bad* to inline every function?

---

### 💪 Exercise:

Write a Dart method `double square(double x)` that:
- Squares a number
- Is hinted to the compiler to be inlined

Use the correct `@pragma` and write the full code.

---

