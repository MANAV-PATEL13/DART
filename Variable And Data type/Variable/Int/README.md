# <b><i >index </i></b> 

- [Defination]()
- []()
- [Number]()

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


This document provides an extensive overview of Dart operators with examples and outputs. Hope this helps! 🚀







---
----
----

# int



### **Notes on `int` in Dart**

#### **1. Introduction to `int` in Dart**
- **Definition:** The `int` type in Dart represents whole numbers (i.e., numbers without decimal points).
- **int** is defined as an abstract final class in Dart that extends the superclass num.
- **Hierarchy:** It is a subclass of the `num` type, which means it shares common numerical operations with `double`.
- **Characteristics:** Integers can be both positive and negative. Dart’s integers are arbitrary-precision, so they can represent very large values without overflow.

---

#### **2. Printing with Statements**
- **Basic Print Statement:** Dart uses the `print()` function to display output. You can print variables, literals, and even expressions.
- **String Interpolation:** When printing, you can include variables within strings using the `$` symbol. This is especially useful for debugging or displaying dynamic values.

**Example:**
```dart
void main() {
  int a = 10;
  int b = -5;
  
  // Simple printing of integer values
  print(a); // Output: 10
  print(b); // Output: -5
  
  // Printing with string interpolation
  print("The value of a is $a and b is $b.");
}
```

**Output:**
```
10
-5
The value of a is 10 and b is -5.
```

---

#### **3. Integer Arithmetic Operations**
- **Operations:** Dart supports basic arithmetic on `int` values:
  - **Addition (`+`)**
  - **Subtraction (`-`)**
  - **Multiplication (`*`)**
  - **Integer Division (`~/`):** This operator divides and discards any remainder.
  - **Modulus (`%`):** Returns the remainder of a division operation.

**Example:**
```dart
void main() {
  int a = 20;
  int b = 6;

  print(a + b);   // Addition: 26
  print(a - b);   // Subtraction: 14
  print(a * b);   // Multiplication: 120
  print(a ~/ b);  // Integer Division: 3
  print(a % b);   // Modulus: 2
}
```

**Output:**
```
26
14
120
3
2
```

---

### **4. Converting `String` to `int` /  5. Converting `int` to `String`**
###  Converting `String` to `int`
- **Basic Conversion:** Use the `int.parse()` method to convert a numeric string into an integer.
- **Error Handling:** If the string contains non-numeric characters (other than an optional leading sign), the conversion will throw a `FormatException`.
- **Advanced Conversion:** For strings that might include extra characters or need validation, you can use error handling with a `try-catch` block.

**Example (Successful Conversion):**
```dart
void main() {
  String numStr = "100";
  int num = int.parse(numStr);
  print("Converted number is: $num");
}
```

**Output:**
```
Converted number is: 100
```

**Example (Handling Non-Numeric Characters):**
```dart
void main() {
  String invalidStr = "123abc";
  try {
    int num = int.parse(invalidStr);
    print(num);
  } catch (e) {
    print("Error: The provided string '$invalidStr' is not a valid integer.");
  }
}
```

**Output:**
```
Error: The provided string '123abc' is not a valid integer.
```

### Converting `int` to `String`
- **Basic Conversion:** Use the `toString()` method to convert an `int` to its string representation.
- **Use Cases:** This is useful when you need to concatenate numbers with strings or display numbers in a user interface.
- **Custom Formatting:** For more control (such as padding or formatting numbers), Dart offers methods like `toStringAsFixed()` or `toStringAsPrecision()`, though these are more often used with doubles.

**Example:**
```dart
void main() {
  int num = 123;
  String numStr = num.toString();
  print("The string representation of the number is: '$numStr'");
}
```

**Output:**
```
The string representation of the number is: '123'
```

---

#### **6. Checking `int` Properties**
- **isEven & isOdd:**
  - `isEven`: Returns `true` if the number is divisible by 2.
  - `isOdd`: Returns `true` if the number is not divisible by 2.
- **sign:** Indicates the sign of the number:
  - Returns `1` if positive, `-1` if negative, and `0` if zero.
- **bitLength:** Represents the minimum number of bits required to represent the integer in binary (excluding the sign bit). This can be useful for understanding memory or optimizing bitwise operations.

**Example:**
```dart
void main() {
  int num = 50;
  
  print("Is $num even? ${num.isEven}");   // true
  print("Is $num odd? ${num.isOdd}");       // false
  print("Sign of $num: ${num.sign}");        // 1 (since it's positive)
  print("Bit length of $num: ${num.bitLength}"); // Number of bits needed
}
```

**Output:**
```
Is 50 even? true
Is 50 odd? false
Sign of 50: 1
Bit length of 50: 6
```

*Explanation:*  
- **isEven & isOdd:** Quickly determine parity.  
- **sign:** Useful in algorithms that need to account for negative numbers.  
- **bitLength:** Helps in low-level optimizations and understanding how numbers are stored.

---

#### **7. Using `int` with the `num` Type**
- **Flexibility:** The `num` type is a common supertype for both `int` and `double`. It allows you to store a numeric value without specifying whether it’s an integer or a floating-point number.
- **Use Case:** This is useful in functions or APIs that can accept any numeric type.

**Example:**
```dart
void main() {
  num x = 42;  // Can hold both int and double
  print("Value of x: $x");
}
```

**Output:**
```
Value of x: 42
```

---

#### **8. Maximum and Minimum Values**
- **Arbitrary-Precision:** Dart’s `int` type does not have a fixed maximum or minimum value like in some other languages (e.g., C or Java). This is because Dart integers are arbitrary-precision, meaning they can grow in size as needed.
- **Practical Limits:** While there is no strict bound, the practical limit is determined by the memory available. Operations on extremely large integers may be slower due to the increased number of digits.
- **Example of a Large Number:**
```dart
void main() {
  // This demonstrates Dart's ability to handle very large integers.
  int largeNumber = int.parse('9223372036854775807');
  print("A very large integer: $largeNumber");
}
```

**Output:**
```
A very large integer: 9223372036854775807
```

*Explanation:*  
- **Arbitrary-precision:** Unlike fixed-width integers, Dart's `int` automatically allocates more memory as needed.
- **Memory Considerations:** While you can work with huge numbers, always consider the memory and performance implications when performing intensive calculations.

---

These enhanced notes should provide you with a deeper understanding of the `int` type in Dart, along with detailed explanations and practical examples to illustrate key concepts.

## Constructor
In Dart, the `int` class has two specialized constructors:

1. **`int.fromEnvironment`**: This constructor retrieves compile-time integer constants from the environment. It's particularly useful for configuring applications with values specified at compile time. If the specified environment variable isn't set or cannot be parsed as an integer, it returns a default value.

   **Syntax:**
   ```dart
   const int.fromEnvironment(
     String name, {
     int defaultValue = 0,
   })
   ```

   - `name`: The name of the environment variable to retrieve.
   - `defaultValue`: The value to use if the environment variable is not set or cannot be parsed as an integer. Defaults to `0`.

   **Example:**
   ```dart
   const int maxConnections = int.fromEnvironment('MAX_CONNECTIONS', defaultValue: 10);
   void main() {
     print('Maximum connections allowed: $maxConnections');
   }
   ```

   In this example, `maxConnections` is set to the value of the `MAX_CONNECTIONS` environment variable if it's defined; otherwise, it defaults to `10`.

2. **`int.parse`**: This method (technically a static method rather than a constructor) converts a string representation of an integer into an actual integer. It's commonly used to parse user input or data from external sources.

   **Syntax:**
   ```dart
   int.parse(String source, {int? radix})
   ```

   - `source`: The string to be parsed.
   - `radix`: The base of the numerical system (optional). For example, a radix of 16 interprets the string as a hexadecimal number.

   **Example:**
   ```dart
   void main() {
     var number = int.parse('42');
     print(number); // Output: 42
   }
   ```

   This converts the string `'42'` into the integer `42`.

It's important to note that while `int` has these specialized constructors and methods, it doesn't have a typical public constructor for direct instantiation like user-defined classes do. Instead, integers are usually created using literals (e.g., `var x = 5;`). 

---
# Double 
Here's an improved and more detailed explanation of the `double` class in Dart, including additional properties, constructors, and examples.



## Dart `double` Class
The `double` class in Dart represents **64-bit floating-point numbers** based on the **IEEE 754 standard**. It is a subtype of `num`, meaning it supports arithmetic operations and numerical methods.

## **Characteristics of `double`**
1. **Immutable**: `double` values cannot be changed after creation.
2. **Supports Arithmetic Operations**: Addition, subtraction, multiplication, division, and modulus.
3. **Floating-Point Precision**: It can represent large and small numbers with decimals but may have rounding errors due to binary representation.
4. **Special Constants**: Includes `NaN`, `infinity`, and `negativeInfinity`.
5. **Can Represent Special Cases**: Such as `-0.0`, which is distinct from `0.0` in some calculations.

### **Example**
```dart
void main() {
  double x = 10.5;
  double y = 2.3;
  
  print("Addition: ${x + y}");  // 12.8
  print("Subtraction: ${x - y}"); // 8.2
  print("Multiplication: ${x * y}"); // 24.15
  print("Division: ${x / y}"); // 4.565217391304348
}
```
```output
Addition: 12.8
Subtraction: 8.2
Multiplication: 24.15
Division: 4.565217391304349
```

---

## **Special Constants in `double`**
| Constant | Description | Example |
|----------|------------|---------|
| `double.nan` | Not-a-Number (`0.0 / 0.0`). | `print(double.nan);` |
| `double.infinity` | Positive Infinity (`1.0 / 0.0`). | `print(double.infinity);` |
| `double.negativeInfinity` | Negative Infinity (`-1.0 / 0.0`). | `print(double.negativeInfinity);` |
| `double.minPositive` | Smallest positive nonzero number (`5e-324`). | `print(double.minPositive);` |
| `double.maxFinite` | Largest finite number (`1.7976931348623157e+308`). | `print(double.maxFinite);` |

### **Example**
```dart
void main() {
  print("NaN: ${double.nan}"); 
  print("Positive Infinity: ${double.infinity}");
  print("Negative Infinity: ${double.negativeInfinity}");
  print("Smallest Positive Value: ${double.minPositive}");
  print("Max Finite Value: ${double.maxFinite}");
}
```
```
NaN: NaN
Positive Infinity: Infinity
Negative Infinity: -Infinity
Smallest Positive Value: 5e-324
Max Finite Value: 1797693134862315708145274237317043567980705675258449965989174768031572607800285387605895586
3276687817154045895351438246423432132688946418276846754670353751698604991057655128207624549009038932894407586
8508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368
```

---

## **Properties of `double`**
| Property | Description | Example |
|----------|------------|---------|
| `isFinite` | Returns `true` if the number is not infinite or NaN. | `print((5.0).isFinite); // true` |
| `isInfinite` | Returns `true` if the number is positive or negative infinity. | `print((double.infinity).isInfinite); // true` |
| `isNaN` | Returns `true` if the number is `NaN`. | `print((0.0 / 0.0).isNaN); // true` |
| `isNegative` | Returns `true` if the number is negative (includes `-0.0`). | `print((-5.0).isNegative); // true` |
| `sign` | Returns `-1.0` for negative, `1.0` for positive, `0.0` for zero. | `print((-5.0).sign); // -1.0` |

### **Example**
```dart
void main() {
  double num1 = -12.5;
  double num2 = double.infinity;
  double num3 = 0.0 / 0.0; // NaN

  print("Is Finite: ${num1.isFinite}"); // true
  print("Is Infinite: ${num2.isInfinite}"); // true
  print("Is NaN: ${num3.isNaN}"); // true
  print("Is Negative: ${num1.isNegative}"); // true
  print("Sign of -12.5: ${num1.sign}"); // -1.0
}
```
```output
Is Finite: true
Is Infinite: true
Is NaN: true
Is Negative: true
Sign of -12.5: -1
```

---

## **Rounding Methods**
### **Integer Rounding**
| Method | Description | Example |
|--------|------------|---------|
| `int round()` | Rounds to the nearest integer. If `x.5`, rounds **away from zero**. | `(3.5).round() → 4` |
| `int floor()` | Rounds **down** to the nearest integer. | `(3.9).floor() → 3` |
| `int ceil()` | Rounds **up** to the nearest integer. | `(3.1).ceil() → 4` |
| `int truncate()` | Removes decimal places without rounding. | `(3.9).truncate() → 3` |

### **Example**
```dart
void main() {
  double value = 3.7;
  
  print("Round: ${value.round()}"); // 4
  print("Floor: ${value.floor()}"); // 3
  print("Ceil: ${value.ceil()}"); // 4
  print("Truncate: ${value.truncate()}"); // 3
}
```
```
Round: 4
Floor: 3
Ceil: 4
Truncate: 3
```

---

## **Class Constructor for `double`**
Dart does **not** allow direct instantiation of `double`. You cannot do:
```dart
double myDouble = new double(3.14); // ❌ Not Allowed
```
Instead, you can **convert a number or string to `double`** using:
1. **Casting** (`toDouble()`)
2. **Parsing** (`double.parse()`, `double.tryParse()`)

### **Example**
```dart
void main() {
  int num1 = 10;
  double converted = num1.toDouble();
  print("Converted Integer to Double: $converted"); // 10.0

  String str = "3.14";
  double parsed = double.parse(str);
  print("Parsed String to Double: $parsed"); // 3.14

  String invalid = "hello";
  double? safeParse = double.tryParse(invalid);
  print("Safe Parsing: $safeParse"); // null
}
```
```
Converted Integer to Double: 10
Parsed String to Double: 3.14
Safe Parsing: null
```

---

## **Conversions & String Operations**
### **Convert to String**
- `toString()` converts `double` to a string.
```dart
void main() {
  double pi = 3.14159;
  print(pi.toString()); // "3.14159"
}
```
```
3.14159
```

### **Convert from String**
- `double.parse()` converts a string to `double`.
- `double.tryParse()` returns `null` if conversion fails.

```dart
void main() {
  print(double.parse("2.718")); // 2.718
  print(double.tryParse("abc")); // null
}
```
```
2.718
null
```

---

## **Summary**
| Feature | Description |
|---------|------------|
| **Basic Operations** | Supports arithmetic operations like `+`, `-`, `*`, `/`, `%`. |
| **Rounding** | Provides `round()`, `floor()`, `ceil()`, and `truncate()`. |
| **Special Constants** | Includes `NaN`, `Infinity`, `-Infinity`, `minPositive`, `maxFinite`. |
| **Properties** | Includes `isFinite`, `isInfinite`, `isNaN`, `sign`, `isNegative`. |
| **Conversions** | Supports `toString()`, `parse()`, `tryParse()`, and `toDouble()`. |
| **Constructor** | `double` cannot be directly instantiated; use conversion methods. |

---



---
<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART-NOTE/blob/main/Variable%20And%20Data%20type/README.md#-data-type-" style="float: left;">⬅️ Previous</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART-NOTE/blob/main/Variable%20And%20Data%20type/README.md#-data-type-">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART-NOTE/tree/main/Variable%20And%20Data%20type/Variable/Double#double" style="float: right;">Next ➡️</a>
</p>
