
---
# Late Variables

The `late` modifier is a key part of Dart’s null safety, and it addresses two main scenarios:

## Deferred (Postponed) Initialization

Sometimes you know that a variable will be assigned a non-null value—but not at the point of declaration. For example, when you have a non-nullable instance variable that will be set later (perhaps in a method or during runtime logic), you can mark it as `late`:

```dart
late String description;

void main() {
  description = 'Feijoada!';
  print(description);
}
```

This tells Dart, “Trust me, I’ll set this variable before I use it.” However, if you try to read a `late` variable before it has been given a value, Dart will throw a runtime error. This adds a layer of safety by ensuring that a non-nullable variable is indeed non-null when accessed.

## Lazy Initialization

If you provide an initializer along with the `late` keyword, that initializer doesn’t run immediately. Instead, it executes the first time the variable is used. This is very useful when the initialization is expensive or when the variable might not be needed during every execution path:

```dart
late String temperature = readThermometer();
```

Here, the function `readThermometer()` is called only if—and when—the variable `temperature` is accessed for the first time.


<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Const%20%26%20final" style="float: left;">⬅️ Const & Final</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/README.md">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/Variable/Null/Readme.md" style="float: right;">  Null ➡️</a>
</p>

