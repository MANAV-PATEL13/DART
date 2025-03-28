# <b> Data type </b>

## <i>Index</i>

 Variable       
  |---  [int](https://github.com/MANAV-PATEL13/DART-NOTE/tree/main/Variable%20And%20Data%20type#int)












# Dart Basics: Printing "Hello, World!"

- ###  Introduction to Dart
Dart is a programming language developed by Google.It is optimized for building fast applications on multiple platforms.Commonly used for Flutter (mobile, web, and desktop app development).

- ### Writing Your First Dart Program

Open your Dart environment (DartPad, VS Code, etc.).<br>
Create a new Dart file (main.dart).<br>
Write the following code:
```dartw
void main() {          
  print('Hello, World!');
}
```

- ### Explanation of the Code

void main() → The entry point of a Dart program.

print('Hello, World!'); → Outputs text to the console.

Semicolons (;) are required at the end of statements.

---

# Variable
- int
- double
- bool
- String
- List
- Map
- Set
---
---
## int


### **Notes on `int` in Dart**

#### **1. Introduction to `int` in Dart**
- **Definition:** The `int` type in Dart represents whole numbers (i.e., numbers without decimal points).
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

#### **4. Converting `String` to `int`**
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

---

#### **5. Converting `int` to `String`**
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