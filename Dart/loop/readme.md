### 1. **`for` loop**

#### ✅ **Definition**:
A `for` loop is used when the number of iterations is known.

#### 📘 **Syntax**:
```dart
for (initialization; condition; increment) {
  // code to execute
}
```

#### 🧪 **Example**:
```dart
void main() {
  for (int i = 1; i <= 5; i++) {
    print("For loop iteration: $i");
  }
}
```

#### 💡 **Output**:
```
For loop iteration: 1
For loop iteration: 2
For loop iteration: 3
For loop iteration: 4
For loop iteration: 5
```

---

### 2. **`while` loop**

#### ✅ **Definition**:
A `while` loop runs **as long as the condition is true**. The condition is checked **before** each iteration.

#### 📘 **Syntax**:
```dart
while (condition) {
  // code to execute
}
```

#### 🧪 **Example**:
```dart
void main() {
  int i = 1;
  while (i <= 3) {
    print("While loop iteration: $i");
    i++;
  }
}
```

#### 💡 **Output**:
```
While loop iteration: 1
While loop iteration: 2
While loop iteration: 3
```

---

### 3. **`do while` loop**

#### ✅ **Definition**:
A `do while` loop runs the block **at least once**, and checks the condition **after** the first iteration.

#### 📘 **Syntax**:
```dart
do {
  // code to execute
} while (condition);
```

#### 🧪 **Example**:
```dart
void main() {
  int i = 1;
  do {
    print("Do-While loop iteration: $i");
    i++;
  } while (i <= 2);
}
```

#### 💡 **Output**:
```
Do-While loop iteration: 1
Do-While loop iteration: 2
```

---

### 4. **`for-in` loop**

#### ✅ **Definition**:
Used to iterate over elements in a collection like a `List`, `Set`, or `Map`.

#### 📘 **Syntax**:
```dart
for (var item in collection) {
  // code to execute
}
```

#### 🧪 **Example**:
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Mango'];
  for (var fruit in fruits) {
    print("Fruit: $fruit");
  }
}
```

#### 💡 **Output**:
```
Fruit: Apple
Fruit: Banana
Fruit: Mango
```

---

### ✅ Summary Table:

| Loop Type    | Use Case                             | Condition Check | Runs At Least Once? |
|--------------|--------------------------------------|------------------|----------------------|
| `for`        | Known iterations                     | Before loop      | ❌                   |
| `while`      | Unknown, condition-based loop        | Before loop      | ❌                   |
| `do while`   | Condition-based, but must run once   | After loop       | ✅                   |
| `for-in`     | Iterating over collections           | Implicit         | ❌                   |

---