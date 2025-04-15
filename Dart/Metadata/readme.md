
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

### ⚙️ Common `@pragma` Directives

Here are some commonly used `@pragma` directives in Dart:

1. **`@pragma('vm:entry-point')`**
   - **Purpose**: Marks a function or class as an entry point, ensuring it's retained during tree shaking in ahead-of-time (AOT) compilation.
   - **Example**:
     ```dart
     @pragma('vm:entry-point')
     void initializeApp() {
       // Initialization code
     }
     ```
   - **Use Case**: When native code needs to call Dart functions directly, marking them as entry points prevents their removal during optimization.

2. **`@pragma('vm:prefer-inline')`**
   - **Purpose**: Suggests to the Dart VM that it should inline the annotated function if possible, potentially improving performance.
   - **Example**:
     ```dart
     @pragma('vm:prefer-inline')
     void compute() {
       // Computation code
     }
     ```
   - **Note**: Inlining is an optimization where the function's code is inserted directly at the call site, reducing the overhead of a function call.

3. **`@pragma('vm:never-inline')`**
   - **Purpose**: Instructs the Dart VM not to inline the annotated function, regardless of potential optimizations.
   - **Example**:
     ```dart
     @pragma('vm:never-inline')
     void logData() {
       // Logging code
     }
     ```
   - **Use Case**: Useful when inlining could interfere with debugging or when specific function boundaries need to be preserved.

4. **`@pragma('vm:exact-result-type', Type)`**
   - **Purpose**: Informs the Dart VM about the exact return type of a function, aiding in type propagation and optimization.
   - **Example**:
     ```dart
     @pragma('vm:exact-result-type', int)
     int getCount() {
       return 42;
     }
     ```
   - **Note**: The specified type must match the actual return type at runtime to avoid undefined behavior.

### 🧠 Socratic Questions

1. **Why might you use `@pragma('vm:entry-point')` in a Dart application?**
2. **What are the potential benefits and drawbacks of inlining functions using `@pragma('vm:prefer-inline')`?**

### 🧪 Exercise

**Task**: Write a Dart function that performs a simple calculation. Annotate it with `@pragma('vm:prefer-inline')`. Then, write another function that logs information and annotate it with `@pragma('vm:never-inline')`. Observe how these annotations might influence the behavior or performance during compilation.

**Example**:
```dart
@pragma('vm:prefer-inline')
int add(int a, int b) => a + b;

@pragma('vm:never-inline')
void logMessage(String message) {
  print('Log: $message');
}
```

### ✅ Ready to Proceed?

Would you like to move on to the next lesson on creating custom annotations, or do you need further clarification on the `@pragma` annotation?

--- 