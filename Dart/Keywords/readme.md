

#  Dart Keywords Summary Table 

| No. | Keyword   | Category / Purpose           | Example                                           | Explanation |
|-----|-----------|------------------------------|---------------------------------------------------|-------------|
| 1   | `abstract`| OOP (Classes & Interfaces)   | abstract class Shape { void draw(); }           | Defines an abstract class that cannot be instantiated. Used as a base class. |
| 2   | `as`      | Typecasting / Aliasing       | var str = '123' as String;                      | Used for type casting or import aliasing (`import 'x.dart' as x`). |
| 3   | `assert`  | Debug / Error checking        | assert(age > 0);`                                | Ensures a condition is true during development; throws error if false. |
| 4   | `async`   | Asynchronous programming      | Future<void> fetch() async {}`                   | Marks a function as asynchronous. |
| 5   | `await`   | Asynchronous programming      | await fetchData();`                              | Pauses execution until an async function completes. |
| 6   | `base`    | OOP (Class Modifiers)         | base class Animal {}`                            | Marks a class as base, meant only to be extended. Introduced in Dart 3.0. |
| 7   | `break`   | Control flow (loops/switch)   | if (x > 10) break;`                              | Exits from a loop or switch block early. |
| 8   | `case`    | Switch statement              | case 1: print('One'); break;`                    | Matches values in a switch block. |
| 9   | `catch`   | Error handling                | catch (e) { print(e); }`                         | Handles exceptions in try blocks. |
| 10  | `class`   | OOP (Class definition)        | class Car {}`                                    | Declares a new class.

<br><br><br>
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

<br><br><br>

---

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

### 🧠 Conclusion

- **Use `if-else`** when dealing with range-based conditions or complex logical expressions.
- **Use `switch`** when evaluating a single variable against multiple constant values.

In this scenario, `if-else` provides a more straightforward approach for range-based conditions. However, by categorizing the weight into discrete levels, we can effectively use a `switch` statement as well.

---


### Reserved Words

These keywords have special meanings in Dart and cannot be used as identifiers.

| Keyword   | Description                                | Example                                      |
|-----------|--------------------------------------------|----------------------------------------------|
| abstract| Declares an abstract class or method.      | abstract class Animal { void makeSound(); }|
| as      | Provides a type cast.                      | var emp = person as Employee;              |
| assert  | Checks a condition during development.     | assert(age >= 0);                          |
| async   | Marks a function as asynchronous.          | Future<void> fetchData() async { ... }     |
| await   | Waits for a Future to complete.            | await fetchData();                         |
| break   | Exits a loop or switch case.               | break;                                     |
| case    | Defines a case in a switch statement.      | case 1: print('One'); break;               |
| catch   | Catches exceptions.                        | catch (e) { print(e); }                    |
| class   | Declares a class.                          | class Person { ... }                       |
| const   | Defines a compile-time constant.           | const pi = 3.14;                           |
| continue| Skips to the next iteration of a loop.     | continue;                                  |
| default | Defines the default case in switch.        | default: print('Default');                 |
| do      | Starts a do-while loop.                    | do { ... } while (condition);              |
| else    | Defines an alternative branch.             | else { print('No'); }                      |
| enum    | Declares an enumeration.                   | enum Color { red, green, blue }            |
| extends | Indicates inheritance.                     | class Dog extends Animal { ... }           |
| false   | Boolean false value.                       | bool isOpen = false;                       |
| final   | Declares a final variable.                 | final name = 'John';                       |
| finally | Executes code after try/catch.             | finally { cleanUp(); }                     |
| for     | Starts a for loop.                         | for (var i = 0; i < 5; i++) { ... }        |
| if      | Starts a conditional branch.               | if (x > 0) { print('Positive'); }          |
| in      | Iterates over elements.                    | for (var item in items) { ... }            |
| is      | Checks type at runtime.                    | if (x is String) { ... }                   |
| new     | Creates a new instance.                    | var p = new Person();                      |
| null    | Represents a null value.                   | String? name = null;                       |
| rethrow | Rethrows a caught exception.               | rethrow;                                   |
| return  | Returns a value from a function.           | return x + y;                              |
| super   | Refers to superclass.                      | super.toString();                          |
| switch  | Starts a switch statement.                 | switch (value) { ... }                     |
| this    | Refers to the current instance.            | this.name = name;                          |
| throw   | Throws an exception.                       | throw FormatException('Invalid');          |
| true    | Boolean true value.                        | bool isOpen = true;                        |
| try     | Starts a try block for exceptions.         | try { ... } catch (e) { ... }              |
| var     | Declares a variable.                       | var age = 30;                              |
| void    | Indicates no return value.                 | void greet() { print('Hello'); }           |
| while   | Starts a while loop.                       | while (x < 10) { x++; }                    |
| with    | Applies mixins to a class.                 | class C with MixinA, MixinB { ... }        |

### Contextual Keywords

These keywords have special meaning in specific contexts but can be used as identifiers elsewhere.

| Keyword   | Description                                | Example                                      |
|-----------|--------------------------------------------|----------------------------------------------|
| async   | Marks a function as asynchronous.          | Future<void> fetch() async { ... }         |
| await   | Waits for a Future to complete.            | await fetch();                             |
| hide    | Hides names when importing libraries.      | import 'lib.dart' hide foo;                |
| on      | Specifies the superclass constraint for a mixin. | mixin M on A { ... }                   |
| show    | Shows specific names when importing.       | import 'lib.dart' show foo;                |
| sync    | Marks a generator function.                | Iterable<int> count() sync* { ... }        |
| required| Marks named parameters as required.        | void greet({required String name}) { ... } |

### Built-in Identifiers

These identifiers are used by the Dart language but can be used as identifiers in certain contexts.

| Identifier | Description                                | Example                                      |
|------------|--------------------------------------------|----------------------------------------------|
| Function | Represents a function type.                | Function f = print;                        |
| Object   | The base class for all Dart objects.       | Object o = 'Hello';                        |
| dynamic  | Indicates a variable can be any type.      | dynamic x = 10; x = 'Hello';               |

