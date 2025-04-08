# Wildcard in Dart

## What is a Wildcard (`_`)?

- The underscore (`_`) is a **wildcard variable** in Dart.
- It is used when you **don’t need to use** a variable.
- It helps improve code readability by indicating **unused values**.

## Usage Examples

### 1. Ignoring Values in a Tuple

```dart
void main() {
  var (name, _) = ('Alice', 25); // Ignoring age
  print(name); // Outputs: Alice
}
```

### 2. Ignoring Function Parameters

```dart
void printName(String name, _) {
  print('Name: $name');
}

void main() {
  printName('Alice', 25); // The second parameter is ignored
}
```

### 3. Using `_` in a Loop

```dart
void main() {
  for (var _ in [1, 2, 3]) {
    print('Loop iteration');
  }
}
```

### 4. Private Variable Naming

- `_` is also used to define **private variables** in Dart.
- A variable starting with `_` is **only accessible within the same file**.

```dart
class MyClass {
  int _privateVar = 10; // This cannot be accessed outside this file
}
```

## Summary

| Use Case | Example |
|----------|---------|
| Ignoring values in tuples | `var (_, age) = ('Alice', 25);` |
| Ignoring function parameters | `void myFunc(int x, _) {}` |
| Ignoring loop variables | `for (var _ in list) {}` |
| Private variable naming | `int _hidden = 10;` |

The wildcard `_` is a simple but useful feature to make your Dart code cleaner and more readable!

<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/Variable/Null/Readme.md" style="float: left;">⬅️ Null</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/README.md">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Records" style="float: right;">Record ➡️</a>
</p>