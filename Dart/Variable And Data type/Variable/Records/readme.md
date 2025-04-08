### **Understanding Records in Dart**

In Dart, **Records** were introduced in Dart 3.0, providing a way to group different types of data together. A record is a simple, lightweight way to combine multiple pieces of information into a single structure, without needing to define a full class. Records are a great choice when you need to return multiple values from a function or encapsulate multiple pieces of data without creating a complex class.

### **1. What is a Record?**

A **Record** is a new type in Dart that allows you to group data together. It can contain values of any type, and you don’t need to define a class. You can define a record by grouping data with parentheses.

---

### **2. Creating a Record**

You can create a record by using parentheses `()` and separating the values with commas. Here’s how you can create a record:

```dart
// Record with two values
var record = (42, 'Hello');

print(record); // Output: (42, Hello)
```

In the example above:
- `record` is a record containing two elements: an `int` and a `String`.

---

### **3. Accessing Values in a Record**

You access the elements in a record using **positional access** (via `.$1`, `.$2`, etc.). Here's how:

### 1.
```dart
void main() {
  var record = ('Manav', 18);
  print(record.$1);
  print(record.$2);
}
```
- `record.$1` refers to the first value of the record.
- `record.$2` refers to the second value of the record.
### 2.
```dart
void main(){
var record = ('first', a: 2, b: true, 'last');
print(record.$1); // Prints 'first'
print(record.a); // Prints 2
print(record.b); // Prints true
print(record.$2); // Prints 'last'
}
```
### 3.
```dart
void main() {
  ({String name, int age}) record = (name: 'manav', age: 18);
  print(record.name);  // prints 'manav'
  print(record.age);  // prints '18'
}
```



---

### **4. Named Record Fields**

You can also use **named fields** for records. This improves readability and allows you to access the record’s elements by name instead of by position.

```dart
var record = (id: 123, name: 'Dart', isActive: true);

print(record.id);       // Output: 123
print(record.name);     // Output: Dart
print(record.isActive); // Output: true
```

This approach makes your records much more understandable by providing meaningful names for the fields.

---

### **5. Records in Functions**

You can use records as function return types, which is useful when you want to return multiple values from a function without defining a custom class.

#### Example: Returning Multiple Values from a Function

```dart
// A function that returns a record
(int, String) getUserInfo() {
  return (18, 'Manav');
}

void main() {
  var userInfo = getUserInfo();
  print('Name: ${userInfo.$2}, Age: ${userInfo.$1}');
  // Name: Manav, Age: 18
}
```

In this example, the `getUserInfo` function returns a record containing an integer (`age`) and a string (`name`).

---

### **6. Pattern Matching with Records**

Dart 3.0 introduces **pattern matching** which allows you to destructure records easily. You can use destructuring to extract values from a record directly.

```dart
void main() {
  var record = (42, 'Dart');
  var (age, language) = record;
  
  print(age); // Output: 42
  print(language); // Output: Dart
}

```

Here, we’ve used **destructuring** to assign `42` to `age` and `'Dart'` to `language`.

---

### **7. Comparison and Equality**

Records in Dart are **value types**, meaning two records are considered equal if their corresponding elements are equal.

```dart
void main() {
  final record1 = (42, 'Hello');
  final record2 = (41, 'Hello');

  int n = record1.hashCode;
  int m = record2.hashCode;

  print(record1 == record2); // Output: true
  print(n);
  print(m);
  print(n == m); // Output: true
}

```

In this example, the two records are equal because they contain the same values.

---

### **8. Summary of Record Features**

- **Simple and Lightweight**: You don’t need to define a class to group values together.
- **Flexible**: Records can hold values of different types.
- **Positional and Named Fields**: You can access fields either by position (`item1`, `item2`, etc.) or by name (`fieldName`).
- **Great for Returning Multiple Values**: You can return multiple values from a function without creating a complex class.
- **Pattern Matching**: Dart supports destructuring of records, making it easier to work with them.

---

### **Example: Complete Dart Program with Records**

```dart
void main() {
  // Creating a record
  var person = (name: 'Alice', age: 30, isStudent: true);

  // Accessing named fields
  print('Name: ${person.name}');         // Output: Name: Alice
  print('Age: ${person.age}');           // Output: Age: 30
  print('Is student: ${person.isStudent}'); // Output: Is student: true

  // Destructuring the record
  var (name, age, isStudent) = person;
  print('Name: $name, Age: $age, Student: $isStudent');
  // Output: Name: Alice, Age: 30, Student: true

  // Using records in a function
  var userInfo = getUserInfo();
  print('User Info: Name - ${userInfo.$2}, Age - ${userInfo.$1}');
  // Output: User Info: Name - Manav Patel, Age - 18
}

(int, String) getUserInfo() {
  return (18, 'Manav Patel');
}

```

---

### **Conclusion**

Records in Dart are a powerful and concise way to group multiple values without needing to create a class. They are especially useful for returning multiple values from functions or organizing related data in a simple manner. With features like named fields, pattern matching, and value comparison, records are a great addition to Dart for simplifying your code!

<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/wildcard" style="float: left;">⬅️ wildcard</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/README.md">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Runes" style="float: right;">Runs ➡️</a>
</p>