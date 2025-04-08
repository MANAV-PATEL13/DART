# Booleans in Dart: Detailed Notes

#### 1. **What is a Boolean?**
   - A **Boolean** represents a data type that can hold one of two values: `true` or `false`.
   - It is commonly used in decision-making structures, such as `if` statements, loops, and conditional expressions.

#### 2. **Declaration and Initialization**
   - To declare a Boolean variable, you use the `bool` keyword followed by the variable name:
     ```dart
     bool isActive = true;
     bool isComplete = false;
     ```

#### 3. **Default Value**
   - In Dart, the default value of a `bool` (when it is not explicitly initialized) is **null** if it is nullable. For non-nullable `bool` variables, it must be assigned a value explicitly.
     ```dart
     bool isActive; // This would be null by default if nullable.
     bool isValid = false; // Default explicitly set.
     ```

#### 4. **Comparison Operators (Resulting in Bool)**
   - You can perform comparison operations which return `true` or `false`:
     - `==` (equal to)
     - `!=` (not equal to)
     - `>` (greater than)
     - `<` (less than)
     - `>=` (greater than or equal to)
     - `<=` (less than or equal to)
     ```dart
     int a = 5;
     int b = 10;

     bool result1 = a == b;  // false
     bool result2 = a < b;   // true
     ```

#### 5. **Logical Operators**
   Dart supports common logical operators, which return `true` or `false`:
   - `&&` (AND) – True if both operands are true.
   - `||` (OR) – True if at least one operand is true.
   - `!` (NOT) – Reverses the logical state of its operand.
   
   **Example**:
   ```dart
   bool isAdult = true;
   bool hasTicket = false;
   
   bool canEnter = isAdult && hasTicket;  // false
   bool canEnterOr = isAdult || hasTicket;  // true
   bool canEnterNot = !isAdult;  // false
   ```

#### 6. **Boolean Expressions**
   - A Boolean expression is any expression that evaluates to a Boolean value (`true` or `false`).
   - You can use conditional expressions to return a Boolean value:
     ```dart
     var age = 18;
     bool isAdult = age >= 18;  // true
     ```

#### 7. **Conditionals with Booleans**
   - **`if` statements**: Booleans are widely used in `if` statements to control the flow of code:
     ```dart
     bool isSunny = true;
     if (isSunny) {
       print('It is a sunny day!');
     } else {
       print('It is not sunny!');
     }
     ```

   - **`while` loop**: The loop continues while the Boolean expression evaluates to `true`:
     ```dart
     int counter = 0;
     while (counter < 5) {
       print(counter);
       counter++;
     }
     ```

#### 8. **Nullability and Boolean**
   - Dart allows you to use nullable types, which means a `bool?` can hold a value of `true`, `false`, or `null`:
     ```dart
     bool? isChecked;
     print(isChecked);  // null
     ```

   - When you try to check a nullable Boolean in a conditional, you should be mindful of null:
     ```dart
     bool? isOnline = null;
     if (isOnline == true) {
       print('User is online');
     } else {
       print('User is offline or undefined');
     }
     ```

#### 9. **Boolean in Ternary Operator**
   The ternary operator is shorthand for an `if` statement and uses a Boolean expression:
   ```dart
   bool isRaining = false;
   String result = isRaining ? "Take an umbrella" : "Enjoy the sun!";
   print(result);  // "Enjoy the sun!"
   ```

#### 10. **Booleans in Assertions**
   - In Dart, assertions are a debugging feature that verifies that a given condition is `true`. If the condition evaluates to `false`, an exception is thrown.
     ```dart
     assert(2 + 2 == 4);  // Passes
     assert(2 + 2 == 5);  // Fails
     ```

#### 11. **Common Pitfalls**
   - **Null checks**: Make sure to handle nullable `bool?` variables to avoid runtime errors.
   - **Booleans in loops**: Avoid infinite loops with logical mistakes in conditional expressions.

## methods


### **1. hashCode**
   - A unique integer identifier for an object.
   - Used for hash-based collections like `Set` and `Map`.

   **Example:**
   ```dart
   void main() {
     bool a = true;
     bool b = false;
     print(a.hashCode); // Output: Varies
     print(b.hashCode); // Output: Varies
   }
   ```
   **Output Example:**
   ```
   1
   0
   ```
   (In Dart, `true.hashCode` is typically `1` and `false.hashCode` is `0`.)

---

### **2. runtimeType**
   - Returns the `Type` of the object at runtime.
   - Useful for debugging and reflection.

   **Example:**
   ```dart
   void main() {
     bool a = true;
     print(a.runtimeType);
   }
   ```
   **Output:**
   ```
   bool
   ```

---

### **3. address (Not a Standard Property)**
   - The term `address` does not exist in Dart’s `Object` class.
   - You might be referring to the memory reference of an object, but Dart does not expose direct memory addresses.
   - Instead, you can use `identityHashCode()` from `dart:core`.

   **Example:**
   ```dart
   import 'dart:core';

   void main() {
     var obj = Object();
     print(identityHashCode(obj));
   }
   ```
   **Output Example:**
   ```
   305382717
   ```
   (This is an arbitrary memory reference-like number.)

---

### **4. toString()**
   - Returns a string representation of the object.
   - For `bool`, `toString()` returns `"true"` or `"false"`.

   **Example:**
   ```dart
   void main() {
     bool a = true;
     print(a.toString());
   }
   ```
   **Output:**
   ```
   true
   ```

---

### **5. noSuchMethod(Invocation invocation)**
   - Called when an undefined method or property is accessed.
   - Only works if the class overrides `noSuchMethod()`, otherwise an error is thrown.

   **Example:**
   ```dart
   class Test {
     @override
     dynamic noSuchMethod(Invocation invocation) {
       print("Attempted to call ${invocation.memberName}");
       return null;
     }
   }

   void main() {
     var obj = Test();
     obj.unknownMethod(); // This method does not exist
   }
   ```
   **Output:**
   ```
   Attempted to call Symbol("unknownMethod")
   ```

---

### **Summary**
| Method | Description | Example Output |
|--------|-------------|---------------|
| `hashCode` | Unique integer identifier | `1` for `true`, `0` for `false` |
| `runtimeType` | Type of the object | `bool` |
| `address` | Not available in Dart (use `identityHashCode`) | `305382717` |
| `toString()` | String representation | `"true"` |
| `noSuchMethod()` | Handles undefined method calls | `"Attempted to call Symbol("unknownMethod")"` |

Would you like a more in-depth explanation of any of these? 🚀


## **Bool Class in Dart**
The `bool` class has some important methods and properties. Here’s a breakdown of the functions shown in your image:

### **1. fromEnvironment(String name, {bool defaultValue = false})**
   - This method is used to retrieve a boolean value from the environment.
   - It checks if a variable is set in the environment and returns its value; otherwise, it returns `defaultValue`.

   **Example:**
   ```dart
   void main() {
     bool isDebug = bool.fromEnvironment('dart.vm.product', defaultValue: false);
     print(isDebug); // false in non-production mode
   }
   ```

### **2. hasEnvironment(String name)**
   - This method checks whether an environment variable with the given name is present.
   - Returns `true` if the environment variable is defined; otherwise, `false`.

   **Example:**
   ```dart
   void main() {
     print(bool.hasEnvironment('MY_VAR')); // false (unless defined)
   }
   ```

### **3. parse(String value)**
   - Converts a string representation of a boolean (`"true"` or `"false"`) into a `bool`.
   - Throws an error if the string is invalid.

   **Example:**
   ```dart
   void main() {
     bool value = bool.parse('true');
     print(value); // true

     // bool invalid = bool.parse('yes'); // This will throw an error!
   }
   ```

### **4. tryParse(String value)**
   - Similar to `parse()`, but it does not throw an error.
   - Instead, it returns `null` if the input is invalid.

   **Example:**
   ```dart
   void main() {
     bool? validValue = bool.tryParse('true');
     print(validValue); // true

     bool? invalidValue = bool.tryParse('yes');
     print(invalidValue); // null
   }
   ```

---

### **Other Useful Boolean Operations in Dart**
The `bool` class supports common logical operations:
```dart
void main() {
  bool a = true;
  bool b = false;

  print(a && b); // false (Logical AND)
  print(a || b); // true  (Logical OR)
  print(!a);     // false (Logical NOT)
}
```

Let me know if you need further explanation! 🚀



#### 12. **Best Practices**
   - Use `bool` for clarity in your code where decisions are made, ensuring the condition reflects a `true`/`false` value.
   - Avoid using Boolean variables with names like `isTrue` or `isFalse`. Use descriptive names like `isValid`, `hasPermission`, or `isLoggedIn`.






#### Summary
Booleans in Dart are simple yet powerful for managing logical decisions in code. They can be used with logical operators, comparison operators, and in flow control mechanisms like `if` statements and loops. Understanding how to work with Booleans effectively is key to building robust and efficient Dart programs.

<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/Variable/String/README.md" style="float: left;">⬅️ String</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/README.md">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Const%20%26%20final" style="float: right;">  Const & Final ➡️</a>
</p>