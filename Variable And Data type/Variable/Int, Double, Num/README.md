# <b><i >index </i></b> 

- [Intro](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#int--double)
- [Declaring Variables](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#declaring-variables)
- Operators<br>
       |--[1. Arithmetic Operators](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#1-arithmetic-operators)<br>
       |--[2. Relational Operators](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#2-relational-operators)<br>
       |--[3. Logical Operators](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#3-logical-operators)<br>
       |--[4. Bitwise and Shift Operators](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#4-bitwise-and-shift-operators)<br>
       |--[5. Assignment Operators](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#5-assignment-operators)<br>
       |--[6. Conditional Operator (? :)](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#6-conditional-operator--)<br>
       |--[7. Cascade Notation (.. and ?..)](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#7-cascade-notation--and-)<br>
       |--[Summary Table of Operators](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#8-summary-table-of-operators)<br>
       
- Int - Methods and Properties<br>
    |-- [Method](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#int-method-and-properties)<br>
    \ [Class Constructors](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#dart-int-class-constructors-and-methods)<br>


- Double - Methods and Properties<br> 
    |--[Method](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#double-class-in-dart---methods-and-properties-with-examples)<br>
    \ [Class Constructors](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#double-class-in-dart---detailed-explanation-with-examples)

- Num - Methods and Properties<br> 
   |-- [Methods](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#dart-num-class---methods-with-examples)<br>
    \ [Class Constructors](https://github.com/MANAV-PATEL13/DART/tree/main/Variable%20And%20Data%20type/Variable/Int%2C%20Double%2C%20Num#num-class-in-dart)

# int & double
##  **`int` Class**
- Represents integer numeric values.
- A subclass of `num`, which includes both `int` and `double`.
- Provides methods for arithmetic operations, bitwise manipulations, and comparisons.
- Cannot be extended, implemented, or mixed in by other classes.
##  **`double` Class**
- `double` represents **64-bit floating-point numbers** (IEEE 754 standard).
- It is **abstract** and **final**, meaning:
  - You cannot extend or implement it.
  - It acts as a predefined **numeric type** in Dart.
- Used for **decimal and floating-point arithmetic**.
### **Hierarchy**
```
Object
 └── num
      ├── int
      └── double
```
---
## Declaring Variables
### int
```dart
void main() {
  int number = 10;
  print('The number is: \$number');
  print('Is the number even? \$\{number.isEven\}');
  print('Absolute value: \$\{number.abs()\}');
}
```
```
The number is: 10
Is the number even? true
Absolute value: 10
```
### double
```dart
void main() {
  double pi = 3.14159;
  double height = 5.8;
  num value = 10; // Can be int or double
  num temperature = 36.6; // Can hold decimal values

  print(pi); 
  print(height);
  print(value);
  print(temperature);
}
```
```
3.14159
5.8
10
36.6
```
---
### **Dart Operators: Detailed Explanation with Examples**

Dart provides a variety of operators to perform arithmetic, relational, logical, and bitwise operations. Below is a detailed breakdown of each category of operators with examples and their outputs.


## **1. Arithmetic Operators**

These operators perform basic mathematical calculations.

| Operator | Name | Description |
|----------|------|-------------|
| `+` | Addition | Adds two numbers |
| `-` | Subtraction | Subtracts the second number from the first |
| `*` | Multiplication | Multiplies two numbers |
| `/` | Division | Divides the first number by the second, returning a double |
| `~/` | Integer Division | Divides and returns an integer |
| `%` | Modulus | Returns the remainder of the division |

**Example:**
```dart
void main() {
  int a = 10, b = 3;
  print('Addition: \${a + b}');
  print('Subtraction: \${a - b}');
  print('Multiplication: \${a * b}');
  print('Division: \${a / b}');
  print('Integer Division: \${a ~/ b}');
  print('Modulus: \${a % b}');
}
```
**Output:**
```
Addition: 13
Subtraction: 7
Multiplication: 30
Division: 3.3333333333333335
Integer Division: 3
Modulus: 1
```

---

## **2. Relational Operators**

These operators compare two values and return a boolean result.

| Operator | Name | Description |
|----------|------|-------------|
| `==` | Equal to | Checks if two values are equal |
| `!=` | Not equal to | Checks if two values are not equal |
| `>` | Greater than | Checks if the first value is greater |
| `<` | Less than | Checks if the first value is smaller |
| `>=` | Greater than or equal to | Checks if the first value is greater or equal |
| `<=` | Less than or equal to | Checks if the first value is smaller or equal |

**Example:**
```dart
void main() {
  int x = 5, y = 10;
  print(x == y); // false
  print(x != y); // true
  print(x > y);  // false
  print(x < y);  // true
  print(x >= y); // false
  print(x <= y); // true
}
```
**Output:**
```
false
true
false
true
false
true
```

---

## **3. Logical Operators**

Used for logical operations, often in conditional statements.

| Operator | Name         | Description                           |
|----------|-------------|---------------------------------------|
| `&&`     | Logical AND | Returns `true` if both conditions are true |
| `\\ `     | Logical OR  | Returns `true` if at least one condition is true |
| `!`      | Logical NOT | Reverses the boolean value |

**Note:** `\\` is used here as a placeholder for `||` (Logical OR).

**Example:**
```dart
void main() {
  bool a = true, b = false;
  print(a && b); // false
  print(a || b); // true
  print(!a);     // false
}
```
**Output:**
```
false
true
false
```

---

## **4. Bitwise and Shift Operators**

Used for bit manipulation.

| Operator | Name | Description |
|----------|------|-------------|
| `&` | AND | Bitwise AND |
| `\` | OR | Bitwise OR |
| `^` | XOR | Bitwise exclusive OR |
| `~` | NOT | Bitwise complement |
| `<<` | Left Shift | Shifts bits left |
| `>>` | Right Shift | Shifts bits right |
| `>>>` | Unsigned Right Shift | Shifts bits right without sign extension |

**Note:** `\\` is used here as a placeholder for `||` (Logical OR).
**Example:**
```dart
void main() {
  int a = 5, b = 3;
  print(a & b); // 1
  print(a | b); // 7
  print(a ^ b); // 6
  print(~a);    // -6
  print(a << 1); // 10
  print(a >> 1); // 2
}
```
**Output:**
```
1
7
6
-6
10
2
```

---

## **5. Assignment Operators**

Used to assign values to variables.

| Operator | Name | Description |
|----------|------|-------------|
| `=` | Assignment | Assigns a value |
| `+=` | Add and Assign | Adds and assigns |
| `-=` | Subtract and Assign | Subtracts and assigns |
| `*=` | Multiply and Assign | Multiplies and assigns |
| `/=` | Divide and Assign | Divides and assigns |
| `~/=` | Integer Divide and Assign | Integer divides and assigns |
| `%=` | Modulus and Assign | Gets remainder and assigns |

**Example:**
```dart
void main() {
  int a = 10;
  a += 5;
  print(a); // 15
  a -= 3;
  print(a); // 12
  a *= 2;
  print(a); // 24
}
```
**Output:**
```
15
12
24
```

---

## **6. Conditional Operator (`? :`)**

This operator works as a shorthand for `if-else` statements.

**Example:**
```dart
void main() {
  int num = 10;
  String result = (num % 2 == 0) ? 'Even' : 'Odd';
  print(result);
}
```
**Output:**
```
Even
```

---

## **7. Cascade Notation (`..` and `?..`)**

Used to perform multiple operations on the same object.

**Example:**
```dart
class Person {
  String name = '';
  int age = 0;
  void show() => print('Name: \$name, Age: \$age');
}

void main() {
  Person()
    ..name = 'Alice'
    ..age = 25
    ..show();
}
```
**Output:**
```
Name: Alice, Age: 25
```

---

## **8. Summary Table of Operators**

| Category | Operator | Example |
|----------|---------|---------|
| Arithmetic | `+` `-` `*` `/` `%` `~/` | `a + b` |
| Relational | `==` `!=` `>` `<` `>=` `<=` | `a > b` |
| Logical | `&&` `\\` `!` | `a && b` |
| Bitwise | `&` `|` `^` `~` `<<` `>>` | `a & b` |
| Assignment | `=` `+=` `-=` `*=` `/=` | `a += b` |
| Conditional | `? :` | `(a > b) ? x : y` |
| Cascade | `..` `?..` | `obj..method()` |


**Note:** in logical`\\` is used here as a placeholder for `||` (Logical OR).

---
## **Int method and properties**

### Dart `int` Methods with Examples

| #  | Method | Description | Example |
|----|--------|-------------|---------|
| 1  | `bitLength` | Number of bits required to represent the absolute value in binary. | `10.bitLength // 4` |
| 2  | `isEven` | Checks if the integer is even. | `10.isEven // true` |
| 3  | `isOdd` | Checks if the integer is odd. | `11.isOdd // true` |
| 4  | `sign` | Returns -1 for negative, 0 for zero, and 1 for positive numbers. | `(-5).sign // -1` |
| 5  | `hashCode` | Returns a hash code for the integer. | `42.hashCode` |
| 6  | `isFinite` | Always returns `true` for `int`. | `100.isFinite // true` |
| 7  | `isInfinite` | Always returns `false` for `int`. | `100.isInfinite // false` |
| 8  | `isNaN` | Always returns `false` for `int`. | `100.isNaN // false` |
| 9  | `isNegative` | Checks if the number is negative. | `(-10).isNegative // true` |
| 10 | `runtimeType` | Returns the type of the variable. | `42.runtimeType // int` |
| 11 | `abs()` | Returns the absolute value. | `(-10).abs() // 10` |
| 12 | `ceil()` | Rounds the number up. | `10.3.ceil() // 11` |
| 13 | `ceilToDouble()` | Rounds up and returns as a double. | `10.3.ceilToDouble() // 11.0` |
| 14 | `clamp(lower, upper)` | Restricts the number within a range. | `15.clamp(10, 12) // 12` |
| 15 | `compareTo()` | Compares this number to another. | `10.compareTo(15) // -1` |
| 16 | `floor()` | Rounds the number down. | `10.9.floor() // 10` |
| 17 | `floorToDouble()` | Rounds down and returns as a double. | `10.9.floorToDouble() // 10.0` |
| 18 | `gcd()` | Finds the greatest common divisor. | `48.gcd(18) // 6` |
| 19 | `modInverse()` | Finds the modular inverse. | `3.modInverse(7) // 5` |
| 20 | `modPow()` | Computes `(this^exp) % mod`. | `2.modPow(5, 13) // 6` |
| 21 | `remainder()` | Returns the remainder of division. | `10.remainder(3) // 1` |
| 22 | `round()` | Rounds to the nearest integer. | `10.5.round() // 11` |
| 23 | `roundToDouble()` | Rounds to the nearest double. | `10.5.roundToDouble() // 11.0` |
| 24 | `toDouble()` | Converts to double. | `10.toDouble() // 10.0` |
| 25 | `toInt()` | Converts to int. | `10.9.toInt() // 10` |
| 26 | `toRadixString()` | Converts to a string in a given base. | `10.toRadixString(2) // "1010"` |
| 27 | `toSigned()` | Sign extends an integer. | `255.toSigned(8) // -1` |
| 28 | `toString()` | Converts to a string. | `10.toString() // "10"` |
| 29 | `toStringAsExponential()` | Converts to exponential notation. | `1234.toStringAsExponential(2) // "1.23e+3"` |
| 30 | `toStringAsFixed()` | Converts to fixed-point notation. | `10.567.toStringAsFixed(2) // "10.57"` |
| 31 | `toStringAsPrecision()` | Converts to a string with given precision. | `123.456.toStringAsPrecision(4) // "123.5"` |
| 32 | `toUnsigned()` | Converts to an unsigned value. | `255.toUnsigned(8) // 255` |
| 33 | `truncate()` | Removes the decimal part. | `10.9.truncate() // 10` |
| 34 | `truncateToDouble()` | Returns the integer part as a double. | `10.9.truncateToDouble() // 10.0` |
| 35 | `noSuchMethod()` | Handles undefined method calls. | `class Test { @override void noSuchMethod(Invocation invocation) { print("Method not found"); } }` |

### Dart `int` Methods with Examples

#### 1. `bitLength`
Returns the number of bits required to represent the absolute value of the integer in binary.
```dart
void main() {
  int num = 10;
  print(num.bitLength); // Output: 4
}
```

#### 2. `isEven`
Checks if the integer is even.
```dart
void main() {
  int num = 10;
  print(num.isEven); // Output: true
}
```

#### 3. `isOdd`
Checks if the integer is odd.
```dart
void main() {
  int num = 11;
  print(num.isOdd); // Output: true
}
```

#### 4. `sign`
Returns -1 for negative numbers, 0 for zero, and 1 for positive numbers.
```dart
void main() {
  int num = -5;
  print(num.sign); // Output: -1
}
```

#### 5. `hashCode`
Returns a hash code for the integer.
```dart
void main() {
  int num = 42;
  print(num.hashCode);
}
```

#### 6. `isFinite`
Always returns `true` for `int` since integers are always finite.
```dart
void main() {
  int num = 100;
  print(num.isFinite); // Output: true
}
```

#### 7. `isInfinite`
Always returns `false` for `int`.
```dart
void main() {
  int num = 100;
  print(num.isInfinite); // Output: false
}
```

#### 8. `isNaN`
Always returns `false` for `int` since integers are never NaN.
```dart
void main() {
  int num = 100;
  print(num.isNaN); // Output: false
}
```

#### 9. `isNegative`
Checks if the number is negative.
```dart
void main() {
  int num = -10;
  print(num.isNegative); // Output: true
}
```

#### 10. `runtimeType`
Returns the type of the variable.
```dart
void main() {
  int num = 42;
  print(num.runtimeType); // Output: int
}
```

#### 11. `abs()`
Returns the absolute value of the number.
```dart
void main() {
  int num = -10;
  print(num.abs()); // Output: 10
}
```

#### 12. `ceil()`
Rounds the number up.
```dart
void main() {
  double num = 10.3;
  print(num.ceil()); // Output: 11
}
```

#### 13. `ceilToDouble()`
Returns the smallest integer greater than or equal to this number as a double.
```dart
void main() {
  double num = 10.3;
  print(num.ceilToDouble()); // Output: 11.0
}
```

#### 14. `clamp(lower, upper)`
Restricts the number within a range.
```dart
void main() {
  int num = 15;
  print(num.clamp(10, 12)); // Output: 12
}
```

#### 15. `compareTo()`
Compares this number to another.
```dart
void main() {
  int num = 10;
  print(num.compareTo(15)); // Output: -1
}
```

#### 16. `floor()`
Rounds the number down.
```dart
void main() {
  double num = 10.9;
  print(num.floor()); // Output: 10
}
```

#### 17. `floorToDouble()`
Returns the greatest integer less than or equal to this number as a double.
```dart
void main() {
  double num = 10.9;
  print(num.floorToDouble()); // Output: 10.0
}
```

#### 18. `gcd()`
Finds the greatest common divisor.
```dart
void main() {
  print(48.gcd(18)); // Output: 6
}
```

#### 19. `modInverse()`
Finds the modular inverse.
```dart
void main() {
  print(3.modInverse(7)); // Output: 5
}
```

#### 20. `modPow()`
Computes `(this^exp) % mod`.
```dart
void main() {
  print(2.modPow(5, 13)); // Output: 6
}
```

#### 21. `remainder()`
Returns the remainder of division.
```dart
void main() {
  print(10.remainder(3)); // Output: 1
}
```

#### 22. `round()`
Rounds to the nearest integer.
```dart
void main() {
  print(10.5.round()); // Output: 11
}
```

#### 23. `roundToDouble()`
Rounds to the nearest double.
```dart
void main() {
  print(10.5.roundToDouble()); // Output: 11.0
}
```

#### 24. `toDouble()`
Converts to double.
```dart
void main() {
  print(10.toDouble()); // Output: 10.0
}
```

#### 25. `toInt()`
Converts to int.
```dart
void main() {
  print(10.9.toInt()); // Output: 10
}
```

#### 26. `toRadixString()`
Converts to a string in a given base.
```dart
void main() {
  print(10.toRadixString(2)); // Output: 1010
}
```

#### 27. `toSigned()`
Sign extends an integer.
```dart
void main() {
  print(255.toSigned(8)); // Output: -1
}
```

#### 28. `toString()`
Converts to a string.
```dart
void main() {
  print(10.toString()); // Output: "10"
}
```

#### 29. `toStringAsExponential()`
Converts to exponential notation.
```dart
void main() {
  print(1234.toStringAsExponential(2)); // Output: 1.23e+3
}
```

#### 30. `toStringAsFixed()`
Converts to a fixed-point notation.
```dart
void main() {
  print(10.567.toStringAsFixed(2)); // Output: 10.57
}
```

#### 31. `toStringAsPrecision()`
Converts to a string with given precision.
```dart
void main() {
  print(123.456.toStringAsPrecision(4)); // Output: 123.5
}
```

#### 32. `toUnsigned()`
Converts to an unsigned value.
```dart
void main() {
  print(255.toUnsigned(8)); // Output: 255
}
```

#### 33. `truncate()`
Removes the decimal part.
```dart
void main() {
  print(10.9.truncate()); // Output: 10
}
```

#### 34. `truncateToDouble()`
Returns the integer part as a double.
```dart
void main() {
  print(10.9.truncateToDouble()); // Output: 10.0
}
```

#### 35. `noSuchMethod()`
Handles undefined method calls.
```dart
class Test {
  @override
  void noSuchMethod(Invocation invocation) {
    print("Method not found");
  }
}

void main() {
  var obj = Test();
  obj.someMethod(); // Output: Method not found
}
```
# Dart int Class Constructors and Methods

## 1. `fromEnvironment()` Constructor

The `fromEnvironment` constructor is used to retrieve integer values from environment variables during compilation. This is mainly used in Flutter and Dart applications to define configuration settings.

### Syntax:
```dart
int.fromEnvironment(String name, {int defaultValue})
```

### Example:
```dart
void main() {
  int debugLevel = int.fromEnvironment("DEBUG_LEVEL", defaultValue: 1);
  print("Debug Level: \$debugLevel");
}
```

#### Explanation:
- If the `DEBUG_LEVEL` environment variable is set at compile-time, it will use that value.
- Otherwise, it falls back to `defaultValue`, which is `1` in this case.

---

## 2. `parse()` Method

The `parse()` method is used to convert a string representation of an integer into an actual integer.

### Syntax:
```dart
int.parse(String input)
```

### Example:
```dart
void main() {
  String numberStr = "123";
  int number = int.parse(numberStr);
  print("Parsed Integer: \$number");
}
```

#### Explanation:
- The string "123" is converted into an integer `123`.
- If the string cannot be parsed into an integer, it throws a `FormatException`.

---

## 3. `tryParse()` Method

The `tryParse()` method works like `parse()`, but instead of throwing an error, it returns `null` when parsing fails.

### Syntax:
```dart
int.tryParse(String input)
```

### Example:
```dart
void main() {
  String validNumber = "456";
  String invalidNumber = "abc";
  
  int? parsedValid = int.tryParse(validNumber);
  int? parsedInvalid = int.tryParse(invalidNumber);
  
  print("Parsed Valid Integer: \$parsedValid");
  print("Parsed Invalid Integer: \$parsedInvalid");
}
```

#### Explanation:
- `tryParse("456")` returns `456`.
- `tryParse("abc")` returns `null` instead of throwing an error.

---
# `Double` Class in Dart - Methods and Properties with Examples

## Overview
Dart's `double` class provides numerous methods and properties for mathematical operations, comparisons, and data transformations.

#### Table of Methods and Properties with Examples

| No. | Method/Property | Description | Example | Output |
|----|----------------|-------------|---------|--------|
| 1  | `sign` | Returns -1, 0, or 1 depending on the sign of the number. | `print((-3.4).sign);` | `-1.0` |
| 2  | `hashCode` | Returns a hash code for the double value. | `print(3.14.hashCode);` | Unique integer |
| 3  | `isFinite` | Checks if the number is finite. | `print(3.14.isFinite);` | `true` |
| 4  | `isInfinite` | Checks if the number is infinite. | `print(double.infinity.isInfinite);` | `true` |
| 5  | `isNaN` | Checks if the number is NaN (Not a Number). | `print(double.nan.isNaN);` | `true` |
| 6  | `isNegative` | Checks if the number is negative. | `print((-5.6).isNegative);` | `true` |
| 7  | `runtimeType` | Returns the runtime type of the object. | `print(3.14.runtimeType);` | `double` |
| 8  | `abs()` | Returns the absolute value. | `print((-3.4).abs());` | `3.4` |
| 9  | `ceil()` | Returns the smallest integer greater than or equal to the number. | `print(3.2.ceil());` | `4` |
| 10 | `ceilToDouble()` | Converts `ceil()` result to double. | `print(3.2.ceilToDouble());` | `4.0` |
| 11 | `clamp(min, max)` | Restricts value within a given range. | `print(5.6.clamp(3.0, 5.0));` | `5.0` |
| 12 | `compareTo(other)` | Compares two doubles. | `print(3.4.compareTo(3.4));` | `0` |
| 13 | `floor()` | Returns the largest integer less than or equal to the number. | `print(3.9.floor());` | `3` |
| 14 | `floorToDouble()` | Converts `floor()` result to double. | `print(3.9.floorToDouble());` | `3.0` |
| 15 | `remainder(other)` | Returns the remainder of division. | `print(7.0.remainder(3.0));` | `1.0` |
| 16 | `round()` | Rounds to the nearest integer. | `print(3.5.round());` | `4` |
| 17 | `roundToDouble()` | Converts `round()` result to double. | `print(3.5.roundToDouble());` | `4.0` |
| 18 | `toDouble()` | Converts to double. | `print(3.toDouble());` | `3.0` |
| 19 | `toInt()` | Converts to integer. | `print(3.9.toInt());` | `3` |
| 20 | `toString()` | Converts to a string. | `print(3.14.toString());` | `'3.14'` |
| 21 | `toStringAsExponential()` | Converts to exponential notation. | `print(3.14.toStringAsExponential(2));` | `'3.14e+0'` |
| 22 | `toStringAsFixed()` | Converts to a fixed-point notation. | `print(3.14159.toStringAsFixed(2));` | `'3.14'` |
| 23 | `toStringAsPrecision()` | Converts to precision notation. | `print(3.14159.toStringAsPrecision(3));` | `'3.14'` |
| 24 | `truncate()` | Removes fractional part. | `print(3.9.truncate());` | `3` |
| 25 | `truncateToDouble()` | Converts `truncate()` result to double. | `print(3.9.truncateToDouble());` | `3.0` |
| 26 | `noSuchMethod(invocation)` | Called when an undefined method is used. | Custom implementation required | - |

This document provides a structured reference for the `double` class, including examples and expected outputs for each method and property.

#### 1. `sign`
Returns -1.0, 0.0, or 1.0 depending on the sign of the number.
```dart
void main() {
  double num1 = -42.5;
  print(num1.sign); // Output: -1.0
}
```

#### 2. `hashCode`
Returns the hash code of the double value.
```dart
void main() {
  double num = 42.5;
  print(num.hashCode); // Output: Hash value
}
```

#### 3. `isFinite`
Checks whether the value is finite.
```dart
void main() {
  print((42.5).isFinite); // Output: true
  print(double.infinity.isFinite); // Output: false
}
```

#### 4. `isInfinite`
Checks whether the value is infinite.
```dart
void main() {
  print(double.infinity.isInfinite); // Output: true
}
```

#### 5. `isNaN`
Checks if the value is NaN (Not a Number).
```dart
void main() {
  print((0.0 / 0.0).isNaN); // Output: true
}
```

#### 6. `isNegative`
Checks if the value is negative.
```dart
void main() {
  print((-42.5).isNegative); // Output: true
}
```

#### 7. `runtimeType`
Returns the runtime type of the object.
```dart
void main() {
  print((42.5).runtimeType); // Output: double
}
```

#### 8. `abs()`
Returns the absolute value.
```dart
void main() {
  print((-42.5).abs()); // Output: 42.5
}
```

#### 9. `ceil()`
Rounds up to the nearest integer.
```dart
void main() {
  print((42.3).ceil()); // Output: 43
}
```

#### 10. `ceilToDouble()`
Rounds up and returns as a double.
```dart
void main() {
  print((42.3).ceilToDouble()); // Output: 43.0
}
```

#### 11. `clamp()`
Restricts the value within a range.
```dart
void main() {
  print((42.3).clamp(40.0, 42.0)); // Output: 42.0
}
```

#### 12. `compareTo()`
Compares two doubles.
```dart
void main() {
  print((42.5).compareTo(50.0)); // Output: -1
}
```

#### 13. `floor()`
Rounds down to the nearest integer.
```dart
void main() {
  print((42.7).floor()); // Output: 42
}
```

#### 14. `floorToDouble()`
Rounds down and returns as a double.
```dart
void main() {
  print((42.7).floorToDouble()); // Output: 42.0
}
```

#### 15. `remainder()`
Returns the remainder of division.
```dart
void main() {
  print((42.7).remainder(10)); // Output: 2.7
}
```

#### 16. `round()`
Rounds to the nearest integer.
```dart
void main() {
  print((42.5).round()); // Output: 43
}
```

#### 17. `roundToDouble()`
Rounds and returns as a double.
```dart
void main() {
  print((42.5).roundToDouble()); // Output: 43.0
}
```

#### 18. `toDouble()`
Converts to double.
```dart
void main() {
  print((42).toDouble()); // Output: 42.0
}
```

#### 19. `toInt()`
Converts to int.
```dart
void main() {
  print((42.7).toInt()); // Output: 42
}
```

#### 20. `toString()`
Converts to a string.
```dart
void main() {
  print((42.7).toString()); // Output: "42.7"
}
```

#### 21. `toStringAsExponential()`
Returns an exponential representation.
```dart
void main() {
  print((42.7).toStringAsExponential(2)); // Output: "4.27e+1"
}
```

#### 22. `toStringAsFixed()`
Returns a fixed-point representation.
```dart
void main() {
  print((42.7).toStringAsFixed(2)); // Output: "42.70"
}
```

#### 23. `toStringAsPrecision()`
Returns a string with given precision.
```dart
void main() {
  print((42.7).toStringAsPrecision(3)); // Output: "42.7"
}
```

#### 24. `truncate()`
Removes the fractional part.
```dart
void main() {
  print((42.7).truncate()); // Output: 42
}
```

#### 25. `truncateToDouble()`
Removes the fractional part and returns as double.
```dart
void main() {
  print((42.7).truncateToDouble()); // Output: 42.0
}
```

#### 26. `noSuchMethod()`
Handles calls to undefined methods.
```dart
class MyClass {
  @override
  void noSuchMethod(Invocation invocation) {
    print("Method not found: \${invocation.memberName}");
  }
}

void main() {
  MyClass obj = MyClass();
  obj.someUndefinedMethod();
  // Output: Method not found: Symbol("someUndefinedMethod")
}
```

# Double Class in Dart - Detailed Explanation with Examples

## Overview
Dart's `double` class represents a 64-bit floating-point number, following the IEEE 754 standard. This class provides numerous methods and properties to perform mathematical operations, comparisons, and formatting.

## Table of Methods and Properties

| No. | Method/Property | Description |
|----|---------------|-------------|
| 1  | `infinity` | Represents positive infinity. |
| 2  | `maxFinite` | The largest finite `double` value. |
| 3  | `minPositive` | The smallest positive nonzero `double` value. |
| 4  | `nan` | Represents "Not a Number" (NaN). |
| 5  | `negativeInfinity` | Represents negative infinity. |
| 6  | `parse(String source)` | Parses a `String` into a `double`. |
| 7  | `tryParse(String source)` | Attempts to parse a `String` into a `double`, returns `null` on failure. |

---

## Detailed Explanations with Examples

### 1. `infinity`
This property represents positive infinity.
```dart
void main() {
  double inf = double.infinity;
  print(inf); // Output: Infinity
}
```
Explanation: When a number exceeds the largest possible value, it results in `Infinity`.

### 2. `maxFinite`
This property holds the largest finite value a `double` can store.
```dart
void main() {
  print(double.maxFinite);
}
```
Output:
```
1.7976931348623157e+308
```
Explanation: This is the highest finite value before reaching `Infinity`.

### 3. `minPositive`
The smallest positive nonzero number that `double` can store.
```dart
void main() {
  print(double.minPositive);
}
```
Output:
```
5e-324
```
Explanation: This is the smallest nonzero number that is still positive.

### 4. `nan`
Represents "Not a Number" (NaN).
```dart
void main() {
  double nanValue = double.nan;
  print(nanValue); // Output: NaN
  print(nanValue == nanValue); // Output: false
}
```
Explanation: `NaN` is unique in that it is not equal to itself.

### 5. `negativeInfinity`
Represents negative infinity.
```dart
void main() {
  print(double.negativeInfinity);
}
```
Output:
```
-Infinity
```
Explanation: When a number goes below the smallest possible negative value, it results in `-Infinity`.

### 6. `parse(String source)`
Converts a string representation of a number into a `double`.
```dart
void main() {
  print(double.parse("3.14")); // Output: 3.14
  print(double.parse("-1.5")); // Output: -1.5
}
```
Explanation: This method throws an error if the input is not a valid number.

### 7. `tryParse(String source)`
Safely converts a string into a `double`, returning `null` if conversion fails.
```dart
void main() {
  print(double.tryParse("3.14")); // Output: 3.14
  print(double.tryParse("xyz")); // Output: null
}
```
Explanation: Unlike `parse()`, `tryParse()` returns `null` instead of throwing an error if the input is invalid.

---
This document provides a detailed explanation of the `double` class in Dart, covering essential properties and methods along with illustrative ex

# Dart `num` Class - Methods with Examples

## Overview
The `num` class in Dart is the base class for both `int` and `double`. It provides various methods to perform mathematical operations, comparisons, and type conversions.

## Table of Methods

| **No.** | **Method**                 | **Description**                            | **Example**                                | **Output**           |
| ------- | -------------------------- | ------------------------------------------ | ------------------------------------------ | -------------------- |
| 1.      | `hashCode`                 | Returns the hash code of the number        | `print(10.hashCode);`                      | `10` (May vary)      |
| 2.      | `isFinite`                 | Checks if the number is finite             | `print(10.5.isFinite);`                    | `true`               |
| 3.      | `isInfinite`               | Checks if the number is infinite           | `print(double.infinity.isInfinite);`       | `true`               |
| 4.      | `isNaN`                    | Checks if the number is Not-a-Number (NaN) | `print((0.0/0.0).isNaN);`                  | `true`               |
| 5.      | `isNegative`               | Checks if the number is negative           | `print((-5).isNegative);`                  | `true`               |
| 6.      | `sign`                     | Returns -1, 0, or 1 based on sign          | `print((-10).sign);`                       | `-1`                 |
| 7.      | `runtimeType`              | Returns the type of number                 | `print(10.runtimeType);`                   | `int`                |
| 8.      | `abs()`                    | Returns absolute value                     | `print((-10).abs());`                      | `10`                 |
| 9.      | `ceil()`                   | Rounds up to the nearest integer           | `print(4.2.ceil());`                       | `5`                  |
| 10.     | `ceilToDouble()`           | Rounds up to the nearest double            | `print(4.2.ceilToDouble());`               | `5.0`                |
| 11.     | `clamp(lower, upper)`      | Clamps value within a range                | `print(10.clamp(5, 8));`                   | `8`                  |
| 12.     | `compareTo(other)`         | Compares two numbers                       | `print(10.compareTo(15));`                 | `-1`                 |
| 13.     | `floor()`                  | Rounds down to the nearest integer         | `print(4.9.floor());`                      | `4`                  |
| 14.     | `floorToDouble()`          | Rounds down to the nearest double          | `print(4.9.floorToDouble());`              | `4.0`                |
| 15.     | `remainder(divisor)`       | Returns remainder after division           | `print(10.remainder(4));`                  | `2.0`                |
| 16.     | `round()`                  | Rounds to the nearest integer              | `print(4.6.round());`                      | `5`                  |
| 17.     | `roundToDouble()`          | Rounds to the nearest double               | `print(4.6.roundToDouble());`              | `5.0`                |
| 18.     | `toDouble()`               | Converts to double                         | `print(5.toDouble());`                     | `5.0`                |
| 19.     | `toInt()`                  | Converts to integer                        | `print(5.9.toInt());`                      | `5`                  |
| 20.     | `toString()`               | Converts to string                         | `print(10.toString());`                    | `"10"`               |
| 21.     | `toStringAsExponential(n)` | Converts to exponential notation           | `print(1234.toStringAsExponential(2));`    | `"1.23e+3"`          |
| 22.     | `toStringAsFixed(n)`       | Formats to `n` decimal places              | `print(10.123456.toStringAsFixed(2));`     | `"10.12"`            |
| 23.     | `toStringAsPrecision(n)`   | Formats to `n` significant figures         | `print(10.123456.toStringAsPrecision(3));` | `"10.1"`             |
| 24.     | `truncate()`               | Removes decimal part and returns integer   | `print(5.9.truncate());`                   | `5`                  |
| 25.     | `truncateToDouble()`       | Removes decimal part and returns double    | `print(5.9.truncateToDouble());`           | `5.0`                |
| 26.     | `noSuchMethod()`           | Handles calls to undefined methods         | `print(obj.undefinedMethod());`            | `"Method not found"` |



Here’s a detailed explanation of each `num` method in Dart, along with examples and expected outputs:

---

### 1. **`hashCode`**
Returns the hash code for the number.

```dart
void main() {
  int num1 = 10;
  print(num1.hashCode);
}
```
**Output:**  
`10` (HashCode might vary depending on Dart implementation)

---

### 2. **`isFinite`**
Checks if the number is finite.

```dart
void main() {
  double num1 = 10.5;
  print(num1.isFinite); 
}
```
**Output:**  
`true`

---

### 3. **`isInfinite`**
Checks if the number is infinite.

```dart
void main() {
  double num1 = double.infinity;
  print(num1.isInfinite);
}
```
**Output:**  
`true`

---

### 4. **`isNaN`**
Checks if the number is Not-a-Number (NaN).

```dart
void main() {
  double num1 = 0.0 / 0.0; // NaN
  print(num1.isNaN);
}
```
**Output:**  
`true`

---

### 5. **`isNegative`**
Checks if the number is negative.

```dart
void main() {
  int num1 = -5;
  print(num1.isNegative);
}
```
**Output:**  
`true`

---

### 6. **`sign`**
Returns `-1`, `0`, or `1` depending on whether the number is negative, zero, or positive.

```dart
void main() {
  print((-10).sign); // -1
  print((0).sign);   // 0
  print((10).sign);  // 1
}
```
**Output:**  
```
-1
0
1
```

---

### 7. **`runtimeType`**
Returns the runtime type of the number.

```dart
void main() {
  print(10.runtimeType);
  print(10.5.runtimeType);
}
```
**Output:**  
```
int
double
```

---

### 8. **`abs()`**
Returns the absolute value of the number.

```dart
void main() {
  print((-10).abs()); 
}
```
**Output:**  
`10`

---

### 9. **`ceil()`**
Returns the smallest integer greater than or equal to the number.

```dart
void main() {
  print(4.2.ceil());
}
```
**Output:**  
`5`

---

### 10. **`ceilToDouble()`**
Returns the smallest double greater than or equal to the number.

```dart
void main() {
  print(4.2.ceilToDouble());
}
```
**Output:**  
`5.0`

---

### 11. **`clamp()`**
Restricts the number within a given range.

```dart
void main() {
  print(10.clamp(5, 8));
}
```
**Output:**  
`8`

---

### 12. **`compareTo()`**
Compares two numbers.

```dart
void main() {
  print(10.compareTo(15)); // -1
  print(10.compareTo(10)); // 0
  print(15.compareTo(10)); // 1
}
```
**Output:**  
```
-1
0
1
```

---

### 13. **`floor()`**
Returns the largest integer less than or equal to the number.

```dart
void main() {
  print(4.9.floor());
}
```
**Output:**  
`4`

---

### 14. **`floorToDouble()`**
Returns the largest double less than or equal to the number.

```dart
void main() {
  print(4.9.floorToDouble());
}
```
**Output:**  
`4.0`

---

### 15. **`remainder()`**
Returns the remainder of division.

```dart
void main() {
  print(10.remainder(4));
}
```
**Output:**  
`2.0`

---

### 16. **`round()`**
Rounds the number to the nearest integer.

```dart
void main() {
  print(4.6.round());
}
```
**Output:**  
`5`

---

### 17. **`roundToDouble()`**
Rounds the number to the nearest double.

```dart
void main() {
  print(4.6.roundToDouble());
}
```
**Output:**  
`5.0`

---

### 18. **`toDouble()`**
Converts the number to a double.

```dart
void main() {
  print(5.toDouble());
}
```
**Output:**  
`5.0`

---

### 19. **`toInt()`**
Converts the number to an integer.

```dart
void main() {
  print(5.9.toInt());
}
```
**Output:**  
`5`

---

### 20. **`toString()`**
Converts the number to a string.

```dart
void main() {
  print(10.toString());
}
```
**Output:**  
`"10"`

---

### 21. **`toStringAsExponential()`**
Converts the number to a string in exponential notation.

```dart
void main() {
  print(1234.toStringAsExponential(2));
}
```
**Output:**  
`"1.23e+3"`

---

### 22. **`toStringAsFixed()`**
Formats the number to a fixed decimal place.

```dart
void main() {
  print(10.123456.toStringAsFixed(2));
}
```
**Output:**  
`"10.12"`

---

### 23. **`toStringAsPrecision()`**
Formats the number with a specified precision.

```dart
void main() {
  print(10.123456.toStringAsPrecision(3));
}
```
**Output:**  
`"10.1"`

---

### 24. **`truncate()`**
Removes the fractional part and returns an integer.

```dart
void main() {
  print(5.9.truncate());
}
```
**Output:**  
`5`

---

### 25. **`truncateToDouble()`**
Removes the fractional part and returns a double.

```dart
void main() {
  print(5.9.truncateToDouble());
}
```
**Output:**  
`5.0`

---

### 26. **`noSuchMethod()`**
Called when an undefined method is accessed. Needs `@override`.

```dart
class MyClass {
  @override
  dynamic noSuchMethod(Invocation invocation) {
    return 'Method not found';
  }
}

void main() {
  var obj = MyClass();
  print(obj.someUndefinedMethod());
}
```
**Output:**  
`"Method not found"`

---

That covers all the `num` methods with examples! 🚀 Let me know if you need more details! 😊

*Explanation:* Converts a double to an integer.

---

#  `num` Class in Dart  
The `num` class is a superclass for numeric types in Dart, specifically `int` and `double`. It provides common methods for numerical operations.

Dart provides two methods to convert strings to numbers safely:
1. **`num.parse()`** → Throws an error if parsing fails.
2. **`num.tryParse()`** → Returns `null` if parsing fails.

---

### **1. `num.parse(String input)`**
- Converts a string to either an `int` or `double` automatically.
- Throws a `FormatException` if the string cannot be parsed.

#### Example:
```dart
void main() {
  String intString = "42";
  String doubleString = "42.5";
  String invalidString = "abc";

  num intNumber = num.parse(intString);
  num doubleNumber = num.parse(doubleString);
  
  print(intNumber);  // Output: 42
  print(doubleNumber);  // Output: 42.5

  // This will cause an error
  // num invalidNumber = num.parse(invalidString);
}
```
#### Output:
```
42
42.5
```
If `num.parse("abc")` is attempted, it will throw:
```
Unhandled exception: FormatException: Invalid number (at character 1)
abc
^
```

---

### **2. `num.tryParse(String input)`**
- Similar to `parse()`, but **returns `null` instead of throwing an error** when parsing fails.
- Useful to prevent runtime exceptions.

#### Example:
```dart
void main() {
  String intString = "42";
  String doubleString = "42.5";
  String invalidString = "abc";

  num? intNumber = num.tryParse(intString);
  num? doubleNumber = num.tryParse(doubleString);
  num? invalidNumber = num.tryParse(invalidString); // Returns null

  print(intNumber);  // Output: 42
  print(doubleNumber);  // Output: 42.5
  print(invalidNumber);  // Output: null
}
```
#### Output:
```
42
42.5
null
```

---

### **Key Differences Between `parse()` and `tryParse()`**
| Feature           | `num.parse()` | `num.tryParse()` |
|------------------|-------------|----------------|
| Returns on success | `int` or `double` | `int` or `double` |
| Returns on failure | Throws `FormatException` | Returns `null` |
| Use case | When sure the input is valid | When input might be invalid |

#### **When to Use?**
- Use `parse()` when you are confident the input is valid.
- Use `tryParse()` when handling user input or untrusted data.

Would you like more examples or explanations? 🚀





---
<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART-NOTE/blob/main/Variable%20And%20Data%20type/README.md#-data-type-" style="float: left;">⬅️ Previous</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART-NOTE/blob/main/Variable%20And%20Data%20type/README.md#-data-type-">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART-NOTE/tree/main/Variable%20And%20Data%20type/Variable/Double#double" style="float: right;">Next ➡️</a>
</p>



