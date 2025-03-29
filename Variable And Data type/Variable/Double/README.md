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