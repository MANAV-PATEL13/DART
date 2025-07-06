## ✅ `break` in Dart

### ➤ Purpose:
Exits a loop or `switch` statement **immediately**.

### 🔹 Used In:
- `for`, `while`, `do-while` loops
- `switch` statements

### 🔸 Example:

```dart
void main() {
  for (var i = 0; i < 5; i++) {
    if (i == 3) break;
    print(i);
  }
}
```

### 🔸 Output:
```
0
1
2
```

---

## ✅ `continue` in Dart

### ➤ Purpose:
Skips the **rest of the current iteration** and goes to the **next loop iteration**.

### 🔹 Used In:
- `for`, `while`, `do-while` loops

### 🔸 Example:

```dart
void main() {
  for (var i = 0; i < 5; i++) {
    if (i == 2) continue;
    print(i);
  }
}
```

### 🔸 Output:
```
0
1
3
4
```

> Skips `2`, continues to `3`.

---

## ✅ `return` in Dart

### ➤ Purpose:
- Exits a **function or method**.
- Optionally returns a value.

### 🔸 Example (with value):

```dart
int square(int x) {
  return x * x;
}

void main() {
  print(square(4));
}
```

### 🔸 Output:
```
16
```

### 🔸 Example (without value):

```dart
void sayHello() {
  print('Hello');
  return;
  print('This will not run');
}
```

### 🔸 Output:
```
Hello
```

> Code after `return` is ignored.

---

## 🧠 Summary Table

| Keyword   | Purpose                             | Works In                     | Behavior                                |
|-----------|-------------------------------------|------------------------------|------------------------------------------|
| `break`   | Exit loop or switch                 | Loops, `switch`              | Terminates loop or switch immediately    |
| `continue`| Skip rest of loop iteration         | Loops                        | Skips to the next iteration              |
| `return`  | Exit a function, optionally return  | Functions/methods            | Exits current function, may return value |

---