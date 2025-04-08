

## ✅ **final and const in Dart**

Both final and const are used to create **immutable** variables in Dart — meaning once they are set, their values **cannot be changed**.

---

### 🔹 final Keyword

- A final variable **can only be set once**.
- Its value is determined **at runtime**.
- You can use final when the value is not known at compile time.

#### ✅ Example:

```dart
void main() {
  final currentTime = DateTime.now();
  print('Time: $currentTime');
}
```

📝 Output will vary:
```
Time: 2025-04-08 14:30:00.123456
```

---

### 🔹 `const` Keyword

- A `const` variable is **compile-time constant**.
- Its value must be **known at compile time**.
- It is **implicitly final**, so it cannot be changed.

#### ✅ Example:

```dart
void main() {
  const pi = 3.14159;
  print('Pi: $pi');
}
```

📝 Output:
```
Pi: 3.14159
```

---

## 📊 Differences Between `final` and `const`

| Feature               | `final`                         | `const`                             |
|-----------------------|----------------------------------|--------------------------------------|
| Mutability            | Immutable                        | Immutable                            |
| Set at                | Runtime                          | Compile time                         |
| Value known at        | May be unknown at compile time   | Must be known at compile time        |
| Reassigned?           | ❌ No                            | ❌ No                                |
| Use with dynamic data | ✅ Yes                           | ❌ No                                |
| Common use case       | API response, DateTime, input    | Fixed values like PI, strings, configs |

---

### 🧪 Example Showing Difference

```dart
void main() {
  final name = 'Alice';
  const city = 'New York';

  final now = DateTime.now(); // ✅ Allowed
  // const later = DateTime.now(); ❌ Error: not a const value

  print('Hello $name from $city at $now');
}
```

---

### ⚠️ Nested Const

You can also define **constant values inside collections** using `const`:

```dart
void main() {
  const list = [1, 2, 3]; // Entire list is constant
  final numbers = const [4, 5, 6]; // List is const, but assigned at runtime
  print(list);
  print(numbers);
}
```

---

Let me know if you'd like:
- A quiz or practice tasks
- Visual diagram to explain the differences
- Explanation of `late` vs `final` too

Want to add this into your Dart guide doc as a new section?