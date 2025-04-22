

#  Dart Keywords Summary Table 

| No. | Keyword   | Category / Purpose           | Example                                           | Explanation |
|-----|-----------|------------------------------|---------------------------------------------------|-------------|
| 1   | [`abstract`](https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Keywords/readme.md#-dart-abstract)| OOP (Classes & Interfaces)   | abstract class Shape { void draw(); }           | Defines an abstract class that cannot be instantiated. Used as a base class. |
| 2   | [`as`](https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Keywords/readme.md#%EF%B8%8F-as)      | Typecasting / Aliasing       | var str = '123' as String;                      | Used for type casting or import aliasing (`import 'x.dart' as x`). |
| 3   | [`assert`](https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Keywords/readme.md#%EF%B8%8F-assert)  | Debug / Error checking        | assert(age > 0);`                                | Ensures a condition is true during development; throws error if false. |
| 4   | `async`   | Asynchronous programming      | Future<void> fetch() async {}`                   | Marks a function as asynchronous. |
| 5   | `await`   | Asynchronous programming      | await fetchData();`                              | Pauses execution until an async function completes. |
| 6   | `base`    | OOP (Class Modifiers)         | base class Animal {}`                            | Marks a class as base, meant only to be extended. Introduced in Dart 3.0. |
| 7   | `break`   | Control flow (loops/switch)   | if (x > 10) break;`                              | Exits from a loop or switch block early. |
| 8   | `case`    | Switch statement              | case 1: print('One'); break;`                    | Matches values in a switch block. |
| 9   | `catch`   | Error handling                | catch (e) { print(e); }`                         | Handles exceptions in try blocks. |
| 10  | `class`   | OOP (Class definition)        | class Car {}`                                    | Declares a new class.
| 11  | `const`          | Constants / Compile-time      | const pi = 3.14;                        | Declares a compile-time constant. |
| 12  | `continue`       | Control flow (loops)          | for (var i = 0; i < 5; i++) { if (i == 2) continue; print(i); } | Skips the rest of the loop iteration and continues with the next one. |
| 13  | `covariant`      | Type system                   | class A { void set x(covariant int v) {} } | Allows a parameter's type to be overridden in a subclass. |
| 14  | `default`        | Switch case / Parameters      | switch(x) { default: print('None'); }   | Defines a default action in a switch, or a default value in parameters. |
| 15  | `deferred`       | Lazy loading / Imports        | import 'lib.dart' deferred as lib;      | Loads a library lazily to reduce startup time. |
| 16  | `do`             | Control flow (loops)          | do { print(i); } while (i < 5);         | Starts a loop that runs at least once. |
| 17  | `dynamic`        | Type system                   | dynamic value = 'hello';                | Declares a variable that bypasses static type checking. |
| 18  | `else`           | Control flow (conditions)     | if (x > 10) print('big'); else print('small'); | Defines an alternative block if `if` condition is false. |
| 19  | `enum`           | Enumerations                  | enum Color { red, green, blue }         | Defines a set of named constant values. |
| 20  | `export`         | Library visibility            | export 'src/utils.dart';                | Makes public members of another file available to users of this library. |
| 21  | `extends`     | OOP (Inheritance)              | class Dog extends Animal {}               | Indicates that a class inherits from another class. |
| 22  | `extension`   | OOP (Extensions)               | extension NumberParsing on String { int toInt() => int.parse(this); } | Adds methods to existing types without modifying them. |
| 23  | `external`    | Interop / Native Code          | external void log(String msg);            | Declares a function implemented outside Dart (e.g., native code). |
| 24  | `factory`     | Constructors                   | factory Shape.square() => Square();       | Defines a constructor that can return a subtype or cached instance. |
| 25  | `false`       | Boolean literal                | bool isCool = false;                      | Represents the boolean value "false". |
| 26  | `final (var)` | Variable declaration           | final name = 'Alice';                     | Declares a single-assignment variable. |
| 27  | `final (class)`| Class declaration (immutability) | final class Config {}                     | Declares a class that cannot be subclassed (Dart 3.0+). |
| 28  | `finally`     | Error handling                 | try {} catch (e) {} finally { cleanUp(); }| Runs code after try/catch, regardless of outcome. |
| 29  | `for`         | Control flow (loop)            | for (var i = 0; i < 5; i++) print(i);     | Iterates over a block of code. |
| 30  | `Function`    | Type system                    | Function greet = () => print('Hi');       | General function type declaration. |
| 31  | `get`       | Getters                      | String get name => _name;                 | Defines a getter method for a property. |
| 32  | `hide`      | Library visibility           | import 'lib.dart' hide secretFunction;    | Hides specified identifiers from an imported library. |
| 33  | `if`        | Control flow (conditions)    | if (x > 5) print('Big');                  | Executes code conditionally. |
| 34  | `implements`| OOP (Interfaces)             | class Car implements Vehicle {}           | Requires a class to implement an interface. |
| 35  | `import`    | Module inclusion             | import 'dart:math';                       | Includes a library into the current file. |
| 36  | `in`        | Iteration                    | for (var x in list) print(x);             | Used to iterate over a collection. |
| 37  | `interface` | OOP (Interfaces - Dart 3.0+) | interface class Printable {}              | Declares an interface that can’t be constructed. |
| 38  | `is`        | Type checking                | if (x is String) print('Yes');            | Checks if a variable is of a specific type. |
| 39  | `late`      | Lazy initialization          | late String name = getName();             | Delays variable initialization until it's accessed. |
| 40  | `library`   | Library declaration          | library my_library;                       | Declares the library name at the top of the file. |
| 41  | `mixin`     | OOP (Code reuse)             | mixin Flyer { void fly() => print("Flying"); } | Defines reusable class behavior to be mixed into other classes. |
| 42  | `new`       | Object instantiation         | var car = new Car();                      | Explicitly creates a new object (optional in modern Dart). |
| 43  | `null`      | Null value                   | String? name = null;                      | Represents a null (no) value. |
| 44  | `of`        | Collections / Extension APIs | final theme = Theme.of(context);          | Often used in Flutter to access inherited widgets. |
| 45  | `on`        | Mixin application / Exception handling | mixin MyMixin on MyClass {}       | Restricts a mixin to be applied only to certain types. |
| 46  | `operator`  | Operator overloading         | operator +(Point other) => Point(x + other.x, y + other.y); | Allows classes to define custom behavior for operators. |
| 47  | `part`      | Library splitting            | part 'my_library_part.dart';              | Declares a file as part of a larger library. |
| 48  | `required`  | Named parameter requirement  | void greet({required String name}) {}     | Marks a named parameter as required. |
| 49  | `rethrow`   | Error handling               | catch (e) { rethrow; }                    | Re-throws the current exception in a catch block. |
| 50  | `return`    | Control flow                 | return 42;                                | Exits a function and optionally returns a value. |
| 51  | `sealed`    | OOP (Class Modifiers)        | sealed class Vehicle {}                   | Restricts subclassing to the same library. |
| 52  | `set`       | Setters                      | set name(String value) => _name = value;  | Defines a setter method for a property. |
| 53  | `show`      | Library visibility           | import 'lib.dart' show usefulFunction;    | Limits imports to only specific identifiers. |
| 54  | `static`    | Class members                | static int count = 0;                     | Declares a member that belongs to the class rather than instances. |
| 55  | `super`     | Inheritance / Constructor calls | super.printInfo();                     | Refers to the superclass implementation. |
| 56  | `switch`    | Control flow                 | switch(x) { case 1: print('One'); break; }| Selects execution path based on a variable’s value. |
| 57  | `sync`      | Asynchronous programming     | Iterable<int> sync* countUp() { yield 1; }| Marks a generator function that returns an Iterable. |
| 58  | `this`      | Class member reference       | this.name = name;                         | Refers to the current instance. |
| 59  | `throw`     | Error handling               | throw Exception('Error occurred');        | Throws an exception. |
| 60  | `true`      | Boolean literal              | bool isReady = true;                      | Represents the boolean value "true". |
| 61  | `try`       | Error handling               | try { riskyCall(); } catch (e) { print(e); } | Attempts code that may throw an exception. |
| 62  | `type`      | Type system / Reflection     | print(someVar.runtimeType);               | Used to refer to a variable’s type (runtime or annotation). |
| 63  | `typedef`   | Type aliasing                | typedef IntList = List<int>;              | Creates a new name for a type. |
| 64  | `var`       | Variable declaration         | var age = 30;                             | Declares a variable with inferred type. |
| 65  | `void`      | Function return type         | void greet() { print('Hi'); }             | Specifies that a function does not return a value. |
| 66  | `when`      | Pattern matching (Dart 3.0+) | switch (value) { case int x when x > 0: print('Positive'); } | Adds conditions to switch cases. |
| 67  | `with`      | Mixins                       | class Bat with Flyer {}                   | Applies a mixin to a class. |
| 68  | `while`     | Control flow (loop)          | while (x < 5) { x++; }                    | Repeats a block of code while a condition is true. |
| 69  | `yield`     | Generator functions          | yield i;                                  | Produces a value in a sync*/async* generator function. |
| 70  | `yield*`    | Generator delegation         | yield* otherGenerator();                  | Delegates to another generator function.


<br><br><br><br><br><br>
# 🚀 Dart `abstract` 

## 1. What is an Abstract Class?
**📝 Definition :**<br>
An **abstract class** in Dart is a class that **cannot be instantiated directly**. It serves as a **blueprint** for other classes, allowing you to define methods and properties that must be implemented by subclasses.

🔍 Key Points:
- Declared using the `abstract` keyword.
- Can contain both abstract methods (without implementation) and concrete methods (with implementation).
- Used to define a common interface for a group of related classes.

---

## ❓ 2. Why Use Abstract Classes?

Abstract classes are used to:

- ✅ **Enforce a contract** : Ensure that all subclasses implement specific methods.
- ✅ **Promote code reusability** : Share common code among related classes.
- ✅ **Support polymorphism** : Allow objects of different classes to be treated uniformly based on shared behavior.
- ✅ **Improve code organization** : Separate the definition of behavior from its implementation.

---



## 🛠️ 3. How to define & use it?

### Step 1: Define an abstract class

```dart
abstract class Animal {
  void makeSound();  // Abstract method
  void sleep() {
    print("Sleeping...");
  }
}
```

### Step 2: Extend it with a concrete class

```dart
class Dog extends Animal {
  @override
  void makeSound() {
    print("Bark!");
  }
}
```

### Step 3: Use the child class

```dart
void main() {
  Dog dog = Dog();
  dog.makeSound(); // Output: Bark!
  dog.sleep();     // Output: Sleeping...
}
```
---

##  🧠 4. How Do Abstract Classes Work?

- **Abstract classes cannot be instantiated** directly. Attempting to do so will result in a compile-time error.
- **Subclasses must implement all abstract methods** defined in the abstract class.
- **Concrete methods** in the abstract class can be inherited by subclasses without modification.

---

## 💡 5. Example with Output

**Code:**

```dart
abstract class Animal {
  void makeSound();
  void sleep() {
    print('Sleeping...');
  }
}

class Dog extends Animal {
  @override
  void makeSound() {
    print('Woof!');
  }
}

void main() {
  Dog dog = Dog();
  dog.makeSound(); // Output: Woof!
  dog.sleep();     // Output: Sleeping...
}
```

**Explanation:**

- `Animal` is an abstract class with one abstract method `makeSound()` and one concrete method `sleep()`.
- `Dog` extends `Animal` and provides an implementation for `makeSound()`.
- In `main()`, we create a `Dog` object and call both methods.

---

## 🌍 6. Real-World Example with Output
```dart
abstract class PaymentMethod {
  void pay(double amount);
}

class UPI extends PaymentMethod {
  @override
  void pay(double amount) {
    print("Paid ₹$amount using UPI.");
  }
}

class CreditCard extends PaymentMethod {
  @override
  void pay(double amount) {
    print("Paid ₹$amount using Credit Card.");
  }
}

void main() {
  PaymentMethod payment;

  payment = UPI();
  payment.pay(250);

  payment = CreditCard();
  payment.pay(500);
}
```

🖨️ **Output:**
```
Paid ₹250 using UPI.
Paid ₹500 using Credit Card.
```

📖 **Explanation**:
- `PaymentMethod` is the base class.
- `UPI` and `CreditCard` implement the `pay()` method.
- We assign different object types to a single variable (`payment`), enabling **polymorphism**.

---

## 🚨 7. Exception Handling in Dart

### 7.1 What is an Exception?

An **exception** is an error that disrupts the normal flow of a program. In Dart, exceptions are **unchecked**, meaning:

- Methods don't declare which exceptions they might throw.
- You're not required to catch any exceptions.

### 7.2 Throwing Exceptions

You can throw exceptions using the `throw` keyword. Dart allows throwing any non-null object, but it's recommended to throw instances of classes that implement the `Exception` interface for clarity and consistency.

**Example:**

```dart
void checkAge(int age) {
  if (age < 18) {
    throw Exception('Age must be at least 18.');
  }
  print('Access granted.');
}
```

### 7.3 Catching Exceptions

To handle exceptions and prevent program crashes, use `try`, `on`, and `catch` blocks.

**Example:**

```dart
void main() {
  try {
    checkAge(16);
  } on Exception catch (e) {
    print('Caught exception: $e');
  }
}
```

**Output:**

```
Caught exception: Exception: Age must be at least 18.
```

### 7.4 Creating Custom Exceptions

For more specific error handling, you can define custom exception classes by implementing the `Exception` interface.

**Example:**

```dart
class InvalidAgeException implements Exception {
  final String message;
  InvalidAgeException(this.message);

  @override
  String toString() => 'InvalidAgeException: $message';
}

void checkAge(int age) {
  if (age < 18) {
    throw InvalidAgeException('Age must be at least 18.');
  }
  print('Access granted.');
}
```

**Usage:**

```dart
void main() {
  try {
    checkAge(16);
  } on InvalidAgeException catch (e) {
    print('Caught exception: $e');
  }
}
```

**Output:**

```
Caught exception: InvalidAgeException: Age must be at least 18.
```

---

## 7.5 Using Exceptions in Abstract Classes

Abstract classes can utilize exceptions to enforce certain constraints or validations during object construction or method execution.

**Example:**

```dart
abstract class Animal {
  String name;

  Animal(this.name) {
    if (name.isEmpty) {
      throw Exception('Name cannot be empty!');
    }
    print('Animal initialized');
  }

  void makeSound();
}

class Dog extends Animal {
  Dog(String name) : super(name);

  @override
  void makeSound() {
    print('$name barks!');
  }
}

void main() {
  try {
    Dog dog1 = Dog('Tommy');
    dog1.makeSound();

    Dog dog2 = Dog(''); // This will throw an exception
  } catch (e) {
    print('Caught: $e');
  }
}
```

**Output:**

```
Animal initialized
Tommy barks!
Caught: Exception: Name cannot be empty!
```

**Explanation:**

- The `Animal` abstract class has a constructor that throws an exception if the `name` is empty.
- The `Dog` class extends `Animal` and passes the `name` to the superclass constructor.
- In `main()`, creating a `Dog` with an empty name triggers the exception, which is caught and handled gracefully.

---

**Key Takeaways:**

- Dart's exception handling is flexible, allowing for robust error management.
- Utilizing exceptions in abstract classes helps enforce constraints and ensures that subclasses adhere to specific rules or validations.
---

## 8. Rules for Creating Objects with Abstract Classes

| Statement                 | Valid? | Reason                                           |
|---------------------------|--------|--------------------------------------------------|
| `Animal a = Animal();`    | ❌     | Cannot instantiate an abstract class             |
| `Animal a = Dog();`       | ✅     | Valid: `Dog` is a subclass of `Animal`           |
| `Dog d = Dog();`          | ✅     | Valid: `Dog` is a concrete class                 |
| `Dog d = Animal();`       | ❌     | Invalid: Cannot assign abstract class to subclass |

---

## 9. Analysis of Given Program

**Code:**

```dart
abstract class Animal {
  void sound();
}

class Dog extends Animal {
  void sound(){
    print("Dog...");
  }
}

void main(){
  Animal a = new Animal();   // ❌ Error
  Animal a = new Dog();      // ✅ Valid
  Dog d = new Dog();         // ✅ Valid
  Dog d = new Animal();      // ❌ Error

  d.sound();
}
```

**Explanation:**

- `Animal a = new Animal();` → ❌ Error: Cannot instantiate abstract class.
- `Animal a = new Dog();` → ✅ Valid: `Dog` is a subclass of `Animal`.
- `Dog d = new Dog();` → ✅ Valid: `Dog` is a concrete class.
- `Dog d = new Animal();` → ❌ Error: Cannot assign abstract class to subclass.

---

Great idea! Let’s expand your notes with **Point 11** covering all aspects of **constructors and methods in abstract classes**.

---

## **10. Constructors and Methods in Abstract Classes (In-Depth)**

### ✅ **Can Abstract Classes Have Constructors?**
Yes, **abstract classes in Dart can have constructors**. These constructors are used to **initialize properties** of the abstract class and are **called by subclasses using `super()`**.

### ✅ **Why Use Constructors in Abstract Classes?**
- To **initialize common fields** (like `name`, `id`, `type`).
- To **validate or check conditions** before allowing a subclass to proceed (using `throw Exception()`).
- To avoid **code duplication** in subclasses.

---

### 🔷 **Example: Abstract Class with Constructor**

```dart
abstract class Animal {
  String name;

  Animal(this.name) {
    if (name.isEmpty) {
      throw Exception("Animal name can't be empty!");
    }
    print('Animal constructor: $name created');
  }

  void sound(); // Abstract method
}
```

### 🔷 **Subclass Calling the Abstract Constructor**

```dart
class Dog extends Animal {
  Dog(String name) : super(name); // Calls Animal constructor

  @override
  void sound() {
    print('$name says Woof!');
  }
}

void main() {
  try {
    Dog d1 = Dog('Bruno'); // ✔️ Valid
    d1.sound();

    Dog d2 = Dog(''); // ❌ Throws Exception
  } catch (e) {
    print('Caught: $e');
  }
}
```

### 🔷 **Output:**

```
Animal constructor: Bruno created
Bruno says Woof!
Caught: Exception: Animal name can't be empty!
```

---

### ✅ **Can Abstract Classes Have Methods?**
Yes. There are **two types of methods** in abstract classes:

1. **Abstract Methods**  
   - Declared without a body using `;`.
   - Must be overridden in subclasses.

   ```dart
   void run(); // abstract method
   ```

2. **Concrete (Implemented) Methods**  
   - Provide common behavior that can be **inherited** by subclasses.
   - Subclasses can **override** if needed.

   ```dart
   void sleep() {
     print('Sleeping...');
   }
   ```

---

### 🔷 **Example with Both Types of Methods**

```dart
abstract class Vehicle {
  void start(); // abstract
  void stop() => print('Vehicle stopped'); // concrete
}

class Car extends Vehicle {
  @override
  void start() => print('Car started');
}

void main() {
  Car c = Car();
  c.start(); // Car started
  c.stop();  // Vehicle stopped
}
```

### 🔷 **Output:**

```
Car started
Vehicle stopped
```

---

### ✅ Summary Table:

| Feature                          | Abstract Class Support? | Notes                                            |
|----------------------------------|--------------------------|--------------------------------------------------|
| Constructors                     | ✅ Yes                   | Called using `super()` from subclass             |
| Abstract Methods (`void f();`)   | ✅ Yes                   | Must be overridden in subclass                   |
| Concrete Methods (`void f() {}`) | ✅ Yes                   | Inherited or optionally overridden               |
| Fields / Properties              | ✅ Yes                   | Can be initialized in constructor                |
| Object Creation (`new Animal()`) | ❌ No                    | Abstract class cannot be directly instantiated   |

---

Let me know if you’d like this in a printable format or added to a study sheet!

## 11. Questions and Answers on Abstract Classes

**Q1 : Can an abstract class have constructors?**

**A:** Yes, abstract classes can have constructors. These constructors can be called from subclasses using `super()`.

**Q2 : Can an abstract class have fields and concrete methods?**

**A:** Yes, abstract classes can have fields and concrete methods. Subclasses inherit these members.

**Q3 : When should you use an abstract class?**

**A:** Use an abstract class when you want to define a common interface for a group of related classes and enforce the implementation of certain methods.

**Q4 : How does polymorphism relate to abstract classes?**

**A:** Abstract classes enable polymorphism by allowing you to write code that works with objects of different classes that share a common interface.

**Q5 : Can you provide a real-world scenario where abstract classes are useful?**

**A:** In a payment processing system, you can define an abstract class `PaymentMethod` with a method `pay()`. Subclasses like `CreditCard`, `DebitCard`, and `PayPal` implement the `pay()` method differently, allowing for flexible and extensible payment processing.

<br><br><br><br><br><br>


---
# ⚱️ As

## ✅ **1. What is `as` (Definition)?**

In Dart, **`as`** is a **type cast operator** used to:
- Explicitly convert an object from one type to another.
- Access members (methods/properties) of a specific type safely.
- Avoid ambiguity in dynamic/complex object hierarchies.

It is also used for **prefixing imports** in Dart packages.

---

## ✅ **2. Why Use `as`?**

We use `as` to:

- **Type cast safely** when we know the object’s type at runtime.
- **Avoid errors** when working with dynamic types or base class references.
- **Access subclass-specific properties/methods** that aren't available on the superclass or dynamic reference.
- **Disambiguate import names** when importing multiple libraries with the same class or function names.

---

## ✅ **3. How to Use `as`?**

There are two main ways to use `as` in Dart:

### 🔸 Type Cast Operator
```dart
Child c = (obj as Child);  // Convert obj to Child type
```

### 🔸 Import Alias
```dart
import 'dart:math' as math;

void main() {
  print(math.sqrt(25));
}
```

---

## ✅ **4. How `as` Works?**

- **At runtime**, Dart checks if the object **can be cast** to the target type.
- If it **can**, it proceeds and allows access to that type’s members.
- If not, it throws a **`TypeError`**.

> `as` is a **runtime** type cast, unlike statically typed languages like C++.

---

## ✅ **5. Example with Output (Type Cast)**

```dart
class Animal {
  void breathe() => print("Breathing...");
}

class Dog extends Animal {
  void bark() => print("Barking...");
}

void main() {
  Animal a = Dog();     // Upcasting
  (a as Dog).bark();    // Downcasting using 'as'
}
```

### 🔷 Output:
```
Barking...
```

**Short Explanation:**
- `a` is an `Animal` reference to a `Dog` object.
- `as Dog` casts it to `Dog` so we can use `bark()`.
- Without casting, calling `bark()` would give an error.

---

## ✅ **6. Real World Example with Output**

### 🛒 Shopping System

```dart
class Product {
  void details() => print("General product details");
}

class Mobile extends Product {
  void mobileFeature() => print("Mobile: 8GB RAM, 128GB storage");
}

void showProduct(Product p) {
  p.details();
  if (p is Mobile) {
    (p as Mobile).mobileFeature(); // Downcasting with `as`
  }
}

void main() {
  Product p1 = Mobile();
  showProduct(p1);
}
```

### 🔷 Output:
```
General product details
Mobile: 8GB RAM, 128GB storage
```

**Short Explanation:**
- `showProduct()` takes a base `Product`.
- Inside, we check and cast to `Mobile` using `as`.
- Access mobile-specific feature safely.

---

## ✅ **7. Rules of Using `as` in Programs**

| Rule | Description |
|------|-------------|
| ✅ Must use when accessing **child-specific** members from a base type |
| ❌ Throws `TypeError` if the cast is invalid at runtime |
| ✅ Use **`is`** before `as` to avoid exceptions (`if (obj is Type)`) |
| ✅ Use `as` for **import aliasing** to avoid name conflicts |
| ❌ Do not use on unrelated types (e.g., casting a String to an int) |

---

## ✅ **8. Questions and Answers for Real World and Practical Use**

### Q1: Can I access a subclass method from a superclass object?
> **Yes**, but you must use `as` to downcast:
```dart
(animal as Dog).bark();
```

---

### Q2: What happens if `as` fails to cast?
> A **TypeError** occurs at runtime.

---

### Q3: How to avoid `TypeError` when casting?
> Use `is` before `as`:
```dart
if (a is Dog) {
  (a as Dog).bark();
}
```

---

### Q4: When should I use `as` for imports?
> When two or more libraries have same class names, e.g.:

```dart
import 'dart:math' as math;
import 'package:my_app/math.dart' as mymath;
```

---

### Q5: Can I cast dynamic types using `as`?
> Yes, but only if the object is of the right type:
```dart
dynamic x = Dog();
(x as Dog).bark();
```

---

## ✅ **9. `as` with Constructors and Methods**

### **Can `as` Be Used with Constructors?**
No, `as` is primarily used for **type casting** objects from one type to another at runtime, but **it cannot be used directly with constructors**. 

However, **you can use `as`** to cast objects that were created using a constructor, provided that the cast is valid.

### **Example of `as` with Methods**

When you use `as` to cast an object, you can access the methods specific to the target class after casting the object. This is particularly useful when you need to work with methods that are defined in subclasses but not in the base class.

**Example:**

```dart
class Animal {
  void eat() {
    print("Eating...");
  }
}

class Dog extends Animal {
  void bark() {
    print("Barking...");
  }
}

void main() {
  Animal animal = Dog(); // Upcasting
  (animal as Dog).bark(); // Downcasting with 'as' and accessing Dog's method
}
```

### 🔷 **Output:**

```
Barking...
```

**Explanation:**
- `animal` is initially an `Animal` reference to a `Dog` object.
- `as Dog` is used to downcast `animal` to `Dog`, which allows us to call the `bark()` method of the `Dog` class.

---

### **Can `as` Be Used to Call Methods of a Casted Object?**

Yes! After casting an object to a specific type using `as`, you can freely call methods from that type, including **overridden methods** and methods exclusive to that type.

### **Example: Using `as` with Methods After Casting**

```dart
class Shape {
  void draw() {
    print("Drawing a shape...");
  }
}

class Circle extends Shape {
  void draw() {
    print("Drawing a circle...");
  }
  
  void area() {
    print("Calculating area of the circle...");
  }
}

void main() {
  Shape shape = Circle();  // Upcasting
  (shape as Circle).draw(); // Calls Circle's draw method
  (shape as Circle).area(); // Calls Circle's specific method
}
```

### 🔷 **Output:**

```
Drawing a circle...
Calculating area of the circle...
```

**Explanation:**
- The `shape` object is of type `Shape` but points to a `Circle`.
- The `as Circle` cast allows access to methods specific to the `Circle` class, such as `draw()` and `area()`.

---

### **What Happens When Using `as` with Constructors?**

Since **constructors** are invoked when creating an object, **`as` is used after the object is created** and cannot directly invoke constructors. If you want to use constructors from a subclass, you would do so like this:

```dart
class Animal {
  Animal() {
    print("Animal created");
  }

  void eat() => print("Eating...");
}

class Dog extends Animal {
  Dog() : super() {
    print("Dog created");
  }

  void bark() => print("Barking...");
}

void main() {
  Animal animal = Dog(); // Dog constructor called
  (animal as Dog).bark(); // Access Dog-specific method after casting
}
```

### 🔷 **Output:**

```
Animal created
Dog created
Barking...
```

**Explanation:**
- The constructor of `Dog` is called, which first invokes the `Animal` constructor via `super()`.
- After casting `animal` to `Dog` using `as`, we can call the `bark()` method, which is specific to the `Dog` class.

---

### **In Summary**:

1. **`as`** is used to **cast an object to a specific type**, enabling access to methods and properties of the target class.
2. **Constructors** are invoked during object creation and cannot be directly used with `as`, but `as` can allow access to methods or properties that are unique to the subclass.
3. When casting, you must ensure the object **can safely be cast** to the target type to avoid `TypeError`.
4. **Methods** in a subclass can be accessed after casting, enabling powerful type-specific behavior.

---



<br><br><br><br><br><br>

# 🛡️🔍 Assert

---

## 🔷 1. What is `assert` in Dart? (Definition)

In Dart, `*assert*` is a **debug-time statement** used to test whether a condition is true. If the condition is false, it throws an `AssertionError` and halts the program (in debug mode only).

> ✅ It’s mainly used for **development and debugging**, not in production.

> 📌 It helps in **debugging and validating logic** during development.

---

## 🔷 2. Why use `assert`?

You use `assert` to:
- Catch logical errors early during development.
- Catch programming errors early.
- Validate assumptions (e.g., inputs, states, conditions).
- Prevent misuse of methods or incorrect data.
- Ensure that variables hold valid values.
- Prevent invalid input from being processed.
- Enforce correct assumptions during code execution.

🔎 It acts like a "checkpoint" to validate logic during development.

> ⚠️ Assertions are **disabled in production** mode, so don’t rely on them for critical application logic.

---

## 🔷 3. How to use `assert`?

### 🔸 Syntax:

```dart
assert(condition);
assert(condition, "Custom error message");
```

- `condition` is a boolean expression.
- `"Custom error message"` is optional.

### 📌 Example:

```dart
int age = 25;
assert(age >= 18, "Age must be 18 or above");
```

---

## 🔷 4. How does `assert` work?

1. Dart checks the condition inside `assert()`.
2. If it's `true`, the program continues.
3. If it's `false`, it throws an `AssertionError`.
4. The error **only appears in debug mode**. In release mode, Dart skips all assert statements.

> ❌ In production (release) mode: Dart **ignores all assert statements**.

---

## 🔷 5. Example with output + short explanation

### 📌 Code:
```dart
void main() {
  int age = 17;
  assert(age >= 18, "Age must be at least 18");
  print("Access granted");
}
```

### ▶️ Output (debug mode):
```
Unhandled exception:
Assertion failed: "Age must be at least 18"
```

### 🧠 Explanation:
- Checks if `age >= 18`.
- Since age is `17`, the assertion fails and throws an error.
- `print("Access granted");` is **not executed**.

---

## 🔷 6. Real-world example with output + short explanation

### 🔸 Example: Validating constructor input Code:
```dart
class BankAccount {
  double balance;

  BankAccount(this.balance) {
    assert(balance >= 0, "Initial balance must be non-negative");
  }
  //also define like this 
  //assert(balance >= 0, "Initial balance must be non-negative");

  void withdraw(double amount) {
    assert(amount <= balance, "Insufficient funds");
    balance -= amount;
    print("Withdrawn: \$${amount}");
  }
}

void main() {
  var account = BankAccount(500);
  account.withdraw(100);   // ✅
  account.withdraw(600);   // ❌ Assertion fails
}
```

### ▶️ Output (debug mode):
```
Withdrawn: $100
Unhandled exception:
Assertion failed: "Insufficient funds"
```

### 🧠 Explanation:
- First withdrawal is okay.
- Second withdrawal tries to take out more than balance ⇒ assertion fails.

---

## 🔷 7. Rules of using `assert`

| Rule | Explanation |
|------|-------------|
| ✅ Only use in debug mode | Use for development-time checks. |
| ✅ Should not affect program logic | Assertions are **removed** in production. |
| ✅ Use for developer errors | Like invalid input or illegal method usage. |
| ❌ Don’t use for user-facing validation | Use exceptions or error handling instead. |
| ✅ Use with custom messages | Helps identify what went wrong. |

1. Only use for **debug-time checks**, not for user-facing error handling.
2. Avoid using `assert` in production logic.
3. Can be disabled in release mode (they’re skipped).
4. Only works if conditions are boolean expressions.
5. Can include a custom error message for clarity.

---

## 📘 8. Q&A (Knowledge + Real-world Practical Use)

###  **Q1: What type of error does `assert` throw?**  
**A:** `AssertionError`.

###  **Q2:** What happens if an assertion fails?
**A:** Dart throws an `AssertionError` and stops further execution (in debug mode).

---

###  **Q3: Will `assert` run in production?**  
**A:** No. It is ignored in production mode.
       Technically yes, but it's **ignored** in production builds. So **don't use it for critical logic.**

---

###  **Q4: Can `assert` be used in constructors?**  
**A:** Yes. Example:
```dart
Person(String name) : assert(name.isNotEmpty);
```

---

###  **Q5: Should I validate user input using `assert`?**  
**A:** ❌ No. Use `if` statements or exceptions for user input.

---

###  **Q6: How to enable assert in Dart CLI?**  
**A:** Use:
```bash
dart --enable-asserts your_program.dart
```

---

###  **Q7: Real-world case — When do developers often use `assert`?**  
**A:** In:
- Class constructors to validate object state.
- Internal method checks (e.g., balance check).
- Testing APIs or debug assumptions in logic.
- Constructors to validate input
- Ensuring API responses have valid data
- Debugging complex functions
- Validating test cases

---

###  **Q8:** What's the difference between `if` and `assert`?
| Feature | `if` | `assert` |
|--------|------|----------|
| Runs in production? | ✅ Yes | ❌ No |
| Used for error handling? | ✅ Yes | 🚫 Debugging only |
| Throws error automatically? | ❌ No | ✅ Yes (on false) |

---
<br><br><br><br><br><br>

# ⏱️Async & Await 


<br><br><br><br><br><br>
# 🏹 Switch
In Dart, both `switch` and `if-else` statements are used for conditional branching, but they serve different purposes and have distinct characteristics. Here's a comparison to help you decide which to use:

---

### 🔄 `switch` Statement

**Best suited for:**
- Comparing a single variable against multiple constant values (e.g., enums, integers, strings).
- Scenarios where each case represents a distinct, fixed value.

**Advantages:**
- **Readability:** Cleaner and more organized when handling numerous discrete cases.
- **Performance:** Can be more efficient than multiple `if-else` statements, especially when dealing with many cases. This is because compilers often implement `switch` statements using jump tables or binary search, leading to faster execution. 
- **Maintainability:** Easier to add or remove cases without affecting other parts of the code.

**Limitations:**
- Only supports equality checks.
- Cannot evaluate complex conditions or ranges.

---

### ❓ `if-else` Statement

**Best suited for:**
- Evaluating complex conditions, including ranges, inequalities, or multiple variables.
- Situations where conditions are not based solely on a single variable's value.

**Advantages:**
- **Flexibility:** Capable of handling a wide variety of conditions, including complex logical expressions.
- **Universality:** Applicable in scenarios where `switch` statements are not suitable.

**Limitations:**
- **Readability:** Can become cumbersome and harder to read with many nested conditions.
- **Performance:** May be less efficient than `switch` statements when dealing with numerous discrete cases, as each condition is evaluated sequentially. 

---

### 🧠 Choosing Between `switch` and `if-else`

- **Use `switch` when:**
  - You're checking a single variable against multiple known constant values.
  - You have a large number of discrete cases, and performance is a concern.
  - You want cleaner and more maintainable code for such scenarios.

- **Use `if-else` when:**
  - Conditions involve ranges, inequalities, or multiple variables.
  - You need to evaluate complex logical expressions.
  - The number of conditions is small, and readability is not compromised.

**which one is better ?**<br>
Ans. **`switch`**

**Reason:**

In Dart, when comparing a single variable against multiple constant values (like enums, integers, or strings), `switch` statements are generally more readable and maintainable than multiple `if-else` statements. They provide a clear structure for handling various cases and make it easier to add or modify conditions in the future.

**Use Case:**

Use `switch` when you have a single variable that can take on multiple known constant values, and you want to execute different code blocks based on those values. This approach enhances code clarity and organization, especially when dealing with numerous discrete cases.

Certainly! Here's a medium-level real-world example in Dart that demonstrates both `if-else` and `switch` statements to determine the shipping cost based on the weight of a package.

---

### 📦 Scenario: Calculating Shipping Cost Based on Package Weight

#### ✅ Using `if-else` Statement

```dart
void main() {
  double weight = 3.5; // in kilograms
  double cost;

  if (weight <= 1) {
    cost = 5.0;
  } else if (weight <= 5) {
    cost = 10.0;
  } else if (weight <= 10) {
    cost = 15.0;
  } else {
    cost = 20.0;
  }

  print('Shipping cost: \$${cost.toStringAsFixed(2)}');
}
```

**Output:**
```
Shipping cost: $10.00
```

You're correct. In Dart, prior to version 3.0, `switch` statements were limited to matching exact constant values. However, starting with Dart 3.0, the language introduced **pattern matching**, allowing more expressive and flexible `switch` statements, including the use of conditions and ranges directly within case clauses.

---

### ✅ Using Conditions in `switch` (Dart 3.0+)

Here's how you can use conditional patterns in a `switch` statement to categorize a number:

```dart
void main() {
  int number = 42;

  switch (number) {
    case >= 0 && <= 10:
      print('Between 0 and 10');
      break;
    case > 10 && <= 50:
      print('Between 11 and 50');
      break;
    case > 50:
      print('Greater than 50');
      break;
    default:
      print('Negative number');
  }
}
```

**Output:**
```
Between 11 and 50
```


In this example, the `switch` statement uses range conditions directly within the `case` clauses, thanks to Dart 3.0's pattern matching capabilities.

---

### ⚠️ Important Considerations

- **Language Version:** Ensure that your project is using Dart 3.0 or later to utilize these features.
- **Tool Support:** Some development tools or environments may require updates to fully support Dart 3.0 syntax.
- **Alternative for Earlier Versions:** If you're using a Dart version earlier than 3.0, you'll need to use `if-else` statements for range-based conditions.

---

If you need assistance updating your Dart version or refactoring your code to use these new features, feel free to ask! 

Great — you're starting with **control flow** in Dart: `if`, `else`, `switch`, and `case`.

---
<br><br>
# 🔍  `if`, `else`, `switch`, and `case`



### 1. **What Are They in Dart?**

### ✅ `if` / `else`

`if` and `else` are **conditional control flow statements**. They allow Dart to execute code based on whether a condition is `true` or `false`.

### ✅ `switch` / `case`

`switch` and `case` offer a **multi-branch conditional** structure, best used when checking against **discrete constant values** (like enums, integers, or strings).



### 2. **Why Use Them?**

#### `if` / `else`

* Best when **evaluating complex boolean expressions**.
* Can handle ranges, compound conditions, and functions returning boolean.

#### `switch` / `case`

* Ideal when comparing **one variable** against **multiple known constant values**.
* Improves **readability** and **performance** when there are many `else if` branches.
* Works well with **enums** in Dart (especially with `sealed` types or exhaustive checking).



### 3. **How to Use Them (Syntax + Examples)**

#### 🔹 `if / else` Syntax

```dart
void main() {
  int age = 18;

  if (age >= 18) {
    print('You are an adult.');
  } else if (age >= 13) {
    print('You are a teenager.');
  } else {
    print('You are a child.');
  }
}
```

#### 🔹 `switch / case` Syntax

```dart
void main() {
  String role = 'admin';

  switch (role) {
    case 'admin':
      print('You have full access.');
      break;
    case 'user':
      print('You have limited access.');
      break;
    default:
      print('Role not recognized.');
  }
}
```

#### ❗ Dart `switch` requires:

* Each `case` to be terminated with `break`, `continue`, `return`, or `throw`.
* Constant expressions only.
* **Dart 3** adds enhanced `switch` support for pattern matching, sealed classes, etc.



### 4. **How Do They Work Internally?**

#### `if / else`

* Evaluated **sequentially**.
* Each condition is checked **top to bottom**.
* Stops at the first matching condition.

#### `switch / case`

* Compiled into a **jump table** or **optimized branch**, depending on the case type.
* Slightly faster than long chains of `else if`, **especially with many constant cases**.



### 5. **Step-by-Step Code Example with Output**

#### Example: `if / else`

```dart
int score = 75;

if (score >= 90) {
  print('A grade');
} else if (score >= 80) {
  print('B grade');
} else if (score >= 70) {
  print('C grade');
} else {
  print('Fail');
}
```

🔸 Output:

```
C grade
```

#### Example: `switch / case`

```dart
String weather = 'rainy';

switch (weather) {
  case 'sunny':
    print('Wear sunglasses');
    break;
  case 'rainy':
    print('Take an umbrella');
    break;
  default:
    print('Check the forecast');
}
```

🔸 Output:

```
Take an umbrella
```



### 6. **Real-World Use Case**

#### 🔹 Flutter Button Action Example

```dart
void onButtonPressed(String action) {
  switch (action) {
    case 'save':
      print('Saving...');
      break;
    case 'delete':
      print('Deleting...');
      break;
    default:
      print('Unknown action');
  }
}
```

You would call it like:

```dart
onButtonPressed('save'); // => Saving...
```



### 7. **Comparison Table**

| Feature          | `if / else`               | `switch / case`                         |
| ---------------- | ------------------------- | --------------------------------------- |
| Condition types  | Booleans, expressions     | Constants only (strings, enums, etc.)   |
| Flexible logic   | ✅ Complex checks          | ❌ Only direct matches                   |
| Enum support     | ✅ (with `.name`)          | ✅ Native enum pattern matching (Dart 3) |
| Speed            | Slower with many branches | Faster for large, constant match sets   |
| Pattern matching | ❌ (basic only)            | ✅ Dart 3 adds powerful matching         |
| Readability      | OK with few cases         | Best with many simple branches          |

---

### 8. **Which One is Better?**

>### Use `if / else` when:

* You need **boolean logic**, ranges (`x > 10`), or compound conditions (`a && b`).
* You’re checking multiple unrelated conditions.

>### Use `switch / case` when:

* You're comparing **a single variable** to **many constant values** (like strings or enums).
* You want **cleaner, more readable code**.
* You're using Dart 3 and want **pattern matching** (e.g., destructuring, sealed types).




### 9. **Extra: Dart 3 Enhanced Switch (Pattern Matching)**

```dart
Object input = 'hello';

switch (input) {
  case int i when i > 0:
    print('Positive integer: $i');
    break;
  case String s:
    print('It is a string: $s');
    break;
  default:
    print('Unknown');
}
```

---
## *Pattern Matching in ******`switch`******: Enums, Sealed Classes, and Power-Up Control Flow*


# 🧠 1. **What Is Dart Pattern Matching in ************************`switch`************************?**

Pattern matching is an **enhanced control flow feature** introduced in Dart 3 that allows `switch` statements (and expressions) to destructure and test values with **more precision**, like types, object structure, values, and conditions.

✅ **Think:** `switch` meets smart `if`, but with **exhaustive safety**, **type checking**, and **clean syntax**.



### 🔧 2. **Why Use Pattern Matching?**

* Cleaner, **readable** branching.
* Safer: compiler enforces **exhaustive handling** of enums and sealed types.
* Flexible: match **type**, **value**, **object structure**, and **conditions** in a single block.
* Ideal for **Flutter state handling**, domain logic, and when working with **sealed unions**.



### 🧪 3. How to Use It (Syntax + Dart Features)



#### ✅ Example 1: Switch with `enum` (Exhaustive Match)

```dart
enum UserRole { admin, user, guest }

void checkPermission(UserRole role) {
  switch (role) {
    case UserRole.admin:
      print('Full access');
      break;
    case UserRole.user:
      print('Limited access');
      break;
    case UserRole.guest:
      print('Read-only access');
  }
}
```

🔸 Output (if role = `UserRole.user`):

```
Limited access
```

✅ Dart ensures **all enum values are covered**, no `default` needed.



#### ✅ Example 2: Pattern Matching with Type + Guard (`when`)

```dart
void describeValue(Object input) {
  switch (input) {
    case int i when i > 0:
      print('Positive integer: $i');
      break;
    case int i:
      print('Non-positive integer: $i');
      break;
    case String s:
      print('String value: $s');
      break;
    default:
      print('Unknown type');
  }
}
```

📌 Matches by **type** and **custom condition**.



#### ✅ Example 3: Destructuring with Records

```dart
void checkPoint((int x, int y) point) {
  switch (point) {
    case (0, 0):
      print('Origin');
      break;
    case (int x, 0):
      print('On X-axis at x=$x');
      break;
    case (0, int y):
      print('On Y-axis at y=$y');
      break;
    case (int x, int y):
      print('Point at ($x, $y)');
  }
}
```

📌 `switch` unpacks a **tuple-like record**.



#### ✅ Example 4: Pattern Matching with Sealed Classes

#### 🔹 Step 1: Create a `sealed` base type

```dart
sealed class Shape {}

class Circle extends Shape {
  final double radius;
  Circle(this.radius);
}

class Square extends Shape {
  final double side;
  Square(this.side);
}
```

#### 🔹 Step 2: Use enhanced `switch`

```dart
void area(Shape shape) {
  switch (shape) {
    case Circle(:var radius):
      print('Circle area: ${3.14 * radius * radius}');
      break;
    case Square(:var side):
      print('Square area: ${side * side}');
  }
}
```

📌 `:var radius` destructures the field **by name**, avoiding boilerplate.



### ⚙️ 4. How It Works Internally

* The Dart analyzer ensures all **`sealed`********/************\*\*\*\*************\*\*\*\*****\*\*\*\*`enum`**\*\* cases are covered\*\*.
* Switches can **narrow types** (type promotion).
* Pattern matching allows for **static analysis and faster dispatching**.
* Behind the scenes, `switch` becomes optimized lookup tables or if-chains depending on the case type and number.



### ✅ 5. Real-World Flutter Example (State Handling)

```dart
sealed class AuthState {}

class LoggedIn extends AuthState {
  final String username;
  LoggedIn(this.username);
}

class LoggedOut extends AuthState {}

void renderScreen(AuthState state) {
  switch (state) {
    case LoggedIn(:var username):
      print('Welcome, $username!');
      break;
    case LoggedOut():
      print('Please log in');
  }
}
```

This is ideal for state management with **Riverpod**, **Bloc**, or **sealed models**.



### 📏 6. Summary: When to Use Pattern Matching in Dart

| Use Case                          | Pattern Matching?          |
| --------------------------------- | -------------------------- |
| Matching against enums            | ✅ Best choice              |
| Matching types (e.g., int/String) | ✅ Cleaner than `is` + `as` |
| Matching complex conditions       | ✅ `when` clause            |
| Multiple `if/else if` blocks      | ✅ Better with `switch`     |
| Unstructured logic                | ❌ Stick with `if`          |






<br><br><br><br><br><br>




# 🥇 var

## ✅ 1. What is `var` in Dart?

In Dart, `var` is a **type inference keyword** used to declare variables when the **type can be inferred** from the right-hand side expression.

### 🔹 Formal Definition:
> `var` is a keyword in Dart used for **type-inferred variable declaration**. The Dart analyzer determines the type at compile time based on the value assigned during initialization.

```dart
var name = 'Alice';  // Compiler infers: String
```

### 🔹 Dart-Specific Context:
- Dart is statically typed, but allows **type inference** to reduce boilerplate.
- Once a `var` variable is assigned, its type is **locked** — it's **not dynamic**.
- Not to be confused with `dynamic`, which is resolved at **runtime**, not compile time.

---

## ✅ 2. Why Use `var` in Dart?

### 🛠️ Real-World Utility:
- Makes code more **concise** without sacrificing type safety.
- Preferred when the type is **obvious from context**.
- Helps focus on logic rather than verbose type annotations.

### ⚡ Performance & Readability:
- Cleaner declarations in Flutter widgets:
  ```dart
  var title = Text('Hello');
  ```
- Maintains **compile-time safety** — mistakes are caught early.

### ✅ When to Use:
- When the initializer is clear and explicit.
- For **readable** and **shorter** code.

### ⚠️ When *Not* to Use:
- When clarity suffers:
  ```dart
  var a = something(); // What type is `a`?
  ```
  Prefer:
  ```dart
  String a = something();
  ```

---

## ✅ 3. How to Use `var` in Dart?

### 🔸 Syntax:
```dart
var variableName = value;
```

### 📌 Dart's Type System & Null Safety:
- **Required initializer**: You **must** initialize `var` when declaring it.
- Once initialized, its **type is fixed**.

```dart
var age = 30;      // int
age = 'thirty';    // ❌ Error: String not assignable to int
```

### 💡 Idiomatic Dart Tips:
- Use `var` for **locals** inside functions/methods.
- Use **explicit types** for class fields and public APIs.

---

## ✅ 4. How Does It Work Internally?

### ⚙️ Dart Compiler Behavior:
- During compilation, the **analyzer infers the type** from the initializer.
- Once inferred, the compiler **treats it as a strongly typed variable**.

```dart
var count = 5;
// Internally becomes:
int count = 5;
```

### 🧠 Memory & Type:
- Stored in memory just like explicitly typed variables.
- In Dart VM or AOT, type info is retained for optimizations.

### 🔄 JIT & AOT:
- In JIT (development), type checks help debugging.
- In AOT (production), inferred types help generate optimized machine code.

---

## ✅ 5. Example with Output: Step-by-Step Code

```dart
void main() {
  var name = 'Dart';
  var version = 3.2;
  print('Language: $name, Version: $version');
}
```

### 🔍 Explanation:
- `name` → `String`
- `version` → `double`
- Compiler treats both as strongly typed.
- ✅ Output:
```
Language: Dart, Version: 3.2
```

---

## ✅ 6. Real-World Example in Flutter

```dart
Widget build(BuildContext context) {
  var title = 'Welcome';
  return Scaffold(
    appBar: AppBar(
      title: Text(title),
    ),
    body: Center(child: Text('Hello, Flutter')),
  );
}
```

### 🔍 Explanation:
- `title` is inferred as `String`.
- Helps keep UI code clean and expressive.

---

## ✅ 7. Constructors and Methods (If Applicable)

`var` **is not used in constructor declarations** or method signatures. Use explicit types there.

```dart
class Person {
  String name;

  Person(this.name); // Not: Person(var name)
}
```

But inside methods:

```dart
void greet() {
  var message = 'Hello';
  print(message);
}
```

---

## ✅ 8. Anything Left to Explain

### 🔹 `var` vs `dynamic` vs `Object` vs explicit type

| Keyword  | Type Inferred | Runtime Safety | Reassign Type | When to Use             |
|----------|----------------|----------------|---------------|--------------------------|
| `var`    | ✅ Yes          | ✅ Safe         | ❌ No          | When the type is obvious |
| `dynamic`| ❌ No           | ❌ Unsafe       | ✅ Yes         | Rare, for dynamic inputs |
| `Object` | ❌ No           | ✅ Semi-safe    | ❌ No          | For flexible types       |
| `String` | ❌ No           | ✅ Safe         | ❌ No          | When you want clarity    |

---

## ✅ 9. Rules of `var` and Use

### 🧭 Best Practices:
- ✔️ Use `var` for local variables where type is obvious.
- ❌ Don’t overuse it in APIs or class members.
- ❌ Don’t use `var` without initializer — it's invalid:
  ```dart
  var x; // In Dart null safety, this is inferred as `dynamic`!
  ```

### ⚠️ Common Mistake:
```dart
var x;
x = 5;
x = 'hello'; // Allowed: type is dynamic!
```
To **enforce a type**, always initialize:

```dart
var x = 5; // Type is `int` — now fixed
```

---

## ✅ 10. Knowledge Application: Real-World Scenarios with Q&A

### ❓ Question:
What happens here?

```dart
var data;
data = 10;
data = 'hello';
print(data.runtimeType);
```

🔍 **Answer:**
- Since no initializer: `data` is treated as **dynamic**.
- Type is not fixed.
- ✅ Output:
```
String
```

---

### 🧰 Bonus Utility Example: Typed vs Untyped Input Handler

```dart
void handleInput(dynamic input) {
  var result = input.toString().toUpperCase();
  print(result);
}
```

Improved version:

```dart
void handleInput(String input) {
  var result = input.toUpperCase();
  print(result);
}
```

Using `var` keeps the body clean, but the signature uses a **clear, explicit type**.

---

Great! Let’s break down the **"🧰 Bonus Utility Example: Typed vs Untyped Input Handler"**, where we compare using `dynamic` + `var` vs using a proper type annotation in a function.

---

### 🔍 **The Untyped Version**
```dart
void handleInput(dynamic input) {
  var result = input.toString().toUpperCase();
  print(result);
}
```

#### ✅ What’s happening:
- `input` is declared as `dynamic`: Dart doesn’t know its type at compile time.
- Inside the function, we assume `input` has a `.toString()` method and that the result supports `.toUpperCase()` — this **assumes input is something string-like**.
- `var result = ...` lets the compiler infer the result is a `String`.

#### ⚠️ Risks:
- You lose **compile-time safety**.
- If `input` is `null`, `int`, `bool`, or a class without expected methods, it might throw **runtime errors**.
- Example failure:
  ```dart
  handleInput(123); // Output: 123 → OK
  handleInput(null); // Error: NoSuchMethodError
  ```

---

### ✅ **The Typed Version**
```dart
void handleInput(String input) {
  var result = input.toUpperCase();
  print(result);
}
```

#### ✅ Why this is better:
- You **explicitly require** `input` to be a `String`.
- Dart performs **compile-time checks** — you can’t pass a `bool`, `int`, or `null` without errors.
- Inside the function, `input.toUpperCase()` is safe and doesn't need conversion.
- `var result` is inferred as `String` — safe and clean.

---

### 💡 Summary of the Key Difference:

| Aspect               | `dynamic input` version               | `String input` version                  |
|----------------------|----------------------------------------|------------------------------------------|
| Type safety          | ❌ No (runtime errors possible)         | ✅ Yes (compile-time checks)             |
| Readability          | ⚠️ Implicit assumptions                | ✅ Clear intent                         |
| Maintainability      | ❌ Risky for future changes             | ✅ Stable and self-documenting          |
| Compiler Optimization| ❌ Slower (uses dynamic dispatch)       | ✅ Faster (static dispatch + JIT/AOT)   |

---

### 🧪 Example of Error Caught at Compile Time (Typed Version):

```dart
handleInput(123); // ❌ Error: int is not assignable to String
```

### 🧪 Example of Silent Failure (Untyped Version):

```dart
handleInput(true); 
// Output: TRUE — okay, but may not be desired or safe
```

---

So in summary:
- Prefer **typed parameters** (`String`, `int`, etc.) over `dynamic` when the type is known.
- Use `var` for **local variable declarations** when the type is obvious, but keep function signatures explicit.

<br><br><br><br><br><br>

# final
[![final in variable](https://img.shields.io/badge/final%20in%20variable-blue.svg)](https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Const%20%26%20final#-final-and-const-in-dart)


<br><br><br><br><br><br>