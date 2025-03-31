# Introduction to Dart for Beginners  

Dart is a modern, object-oriented programming language developed by Google. It is mainly used for building mobile, web, and desktop applications. Dart is the primary language for **Flutter**, Google’s UI toolkit for building natively compiled applications.

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
