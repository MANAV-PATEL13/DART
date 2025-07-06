## ✅ `when` **is** a keyword in Dart (as of Dart 3)

According to the [Dart language guide](https://dart.dev/language/branches#when), the `when` keyword is used to define **guard clauses** in control flow constructs like:

* `switch` statements
* `switch` expressions
* `if-case` statements

---

### 🔍 What is a Guard Clause?

A **guard clause** is an additional condition that must be met **after a pattern matches** for the case to execute.

---

### ✅ Syntax Examples

#### 1. **Switch Statement** with `when`:

```dart
switch (something) {
  case SomeType(value: var v) when v > 10:
    print('Value is greater than 10');
    break;
}
```

#### 2. **Switch Expression** with `when`:

```dart
var result = switch (something) {
  SomeType(value: var v) when v > 10 => 'Big',
  _ => 'Small',
};
```

#### 3. **If-case Statement** with `when`:

```dart
if (something case SomeType(value: var v) when v > 10) {
  print('Matched and passed the guard');
}
```

---

### ℹ️ Notes from Keyword Table

From your second screenshot (the keywords table), `when` has a superscript `3`, which refers to:

> This keyword can be used as an identifier **without restriction**.

So it’s a **soft keyword**, meaning:

* It's treated as a keyword **only in specific contexts** (like guards).
* You **can still use it as a variable name** elsewhere.

---

### ✅ Final Answer

* ✅ `when` is a **soft keyword** introduced in Dart 3.
* ✅ It's used in `case` clauses to apply **guard conditions**.
* ✅ It's **not reserved** globally, so it can be used as a variable or method name in other contexts.

---

### ✅ 1. `switch` Statement with `when`

#### Example:

```dart
void main() {
  var number = 15;

  switch (number) {
    case var n when n > 10:
      print('Number is greater than 10');
      break;
    case var n when n == 10:
      print('Number is exactly 10');
      break;
    default:
      print('Number is less than 10');
  }
}
```

#### Output:
```
Number is greater than 10
```

---

### ✅ 2. `switch` Expression with `when`

#### Example:

```dart
void main() {
  var age = 18;

  var status = switch (age) {
    var a when a < 13 => 'Child',
    var a when a < 18 => 'Teen',
    var a when a < 65 => 'Adult',
    _ => 'Senior'
  };

  print(status);
}
```

#### Output:
```
Adult
```

---

### ✅ 3. `if-case` Statement with `when`

#### Example:

```dart
void main() {
  var data = {'value': 42};

  if (data case {'value': var v} when v > 30) {
    print('Value is greater than 30');
  } else {
    print('Value is 30 or less');
  }
}
```

#### Output:
```
Value is greater than 30
```

---

### ✅ 4. Pattern Matching with `Record` and Guard Clause

```dart
void main() {
  var person = ('Alice', 25);

  switch (person) {
    case (String name, int age) when age > 18:
      print('$name is an adult');
      break;
    default:
      print('Minor or no match');
  }
}
```

#### Output:
```
Alice is an adult
```

---

#### 🔄 Recap of Use Cases for `when` in Dart:
| Use Case              | Syntax                                    |
|-----------------------|--------------------------------------------|
| `switch` statement    | `case pattern when condition:`             |
| `switch` expression   | `pattern when condition => result`         |
| `if-case` statement   | `if (value case pattern when condition)`   |

---