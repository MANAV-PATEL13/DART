In Dart, a **Map** is an unordered collection of key-value pairs where each key is unique. Maps are one of Dart’s core collection types and are widely used for managing structured data. Below is an overview of their features and common usage patterns.

---

## 1. Basic Concepts

- **Key-Value Pairs:** Every element in a Map is a key/value pair. Keys must be unique, while values can be duplicated.
- **Unordered Collection:** By default, a Dart Map is unordered (unless you use a specific implementation like [LinkedHashMap](https://api.dart.dev/stable/dart-collection/LinkedHashMap-class.html) which preserves insertion order).
- **Dynamic vs. Typed Maps:** While you can create a Map with dynamic types, it’s considered best practice to use generics to define the types for keys and values for improved type safety and clarity.

---

## 2. Creating Maps

In Dart, you can declare and initialize a `Map` in several ways, each serving different use cases:

#### 1. **Using Map Literals:**
   This is the most straightforward method, where you define key-value pairs within curly braces `{}`.

   ```dart
   var fruits = {
     'apple': 1,
     'banana': 2,
     'orange': 3,
   };
   ```
   ```dart
void main() {
  var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
  print(fruits);
}
```
**Output:**
```
{apple: 1, banana: 2, orange: 3}
```



   Here, `fruits` is a `Map` with `String` keys and `int` values.

#### 2. **Using the Default Map Constructor:**
   You can create an empty `Map` using the `Map()` constructor and then add entries to it.

   ```dart
void main() {
  Map<String, int> fruits = Map();
  fruits['apple'] = 1;
  fruits['banana'] = 2;
  fruits['orange'] = 3;
  print(fruits);
}
```
**Output:**
```
{apple: 1, banana: 2, orange: 3}
```
   This approach is useful when you need to initialize an empty `Map` and populate it dynamically.
   

#### 3. **Using the `Map.from()` Constructor:**
   This constructor creates a new `Map` by copying all key-value pairs from an existing `Map`.

   ```dart
   var original = {'apple': 1, 'banana': 2};
   var copy = Map<String, int>.from(original);
   ```

   Changes to `original` will not affect `copy`, and vice versa.

#### 4. **Using the `Map.of()` Constructor:**
   Similar to `Map.from()`, this constructor creates a new `Map` from another `Map`.
```dart
void main() {
  var original = {'apple': 1, 'banana': 2};
  var copy = Map<String, int>.of(original);
  print(copy);
}
```
**Output:**
```
{apple: 1, banana: 2}
```
   This also results in a separate copy of the original `Map`.

---
Sure! Here's an improved table with better examples to clearly show the difference between `Map.of()` and `Map.from()` in Dart:

### ✅ Difference Between `Map.of()` and `Map.from()` in Dart

| Feature         | `Map.of()` – **Strict Type Copy**                  | `Map.from()` – **Flexible Type Conversion**            |
|----------------|-----------------------------------------------------|---------------------------------------------------------|
| ✅ Purpose      | Copies map **with exact same types**                | Copies map **even with different types** (tries to cast) |
| ✅ Type Safety  | Very strict (types must match exactly)              | Tries to convert types (can fail at runtime)            |
| ✅ Works With   | `Map<String, int>` → `Map<String, int>`             | `Map<dynamic, dynamic>` → `Map<String, int>`            |
| ✅ Example      | ```dart<br>Map<String, int> a = {'x': 1};<br>Map<String, int> b = Map.of(a);<br>``` | ```dart<br>Map<dynamic, dynamic> a = {'x': 1};<br>Map<String, int> b = Map.from(a);<br>``` |
| ❌ Fails With   | ```dart<br>Map<dynamic, dynamic> a = {'x': 1};<br>Map<String, int> b = Map.of(a); // Error!<br>``` | ```dart<br>Map<dynamic, dynamic> a = {'x': 'oops'};<br>Map<String, int> b = Map.from(a); // Error!<br>``` |
| ✅ When to Use  | When you're sure the types **already match**        | When copying from **dynamic or unknown typed maps**     |

-  **difference between `.of` and `.from` in Dart Maps** in a simple way with examples:

---

#### 🔹 `Map.of()` – **Same type copy**
- It **copies a map**, but **only if the types match exactly**.

#### ✅ Example:
```dart
Map<String, int> original = {'a': 1, 'b': 2};
Map<String, int> copy = Map.of(original);
print(copy); // Output: {a: 1, b: 2}
```
✅ Works perfectly because types match: `String` keys and `int` values.

#### ❌ Example (won't work):
```dart
Map<dynamic, dynamic> original = {'a': 1, 'b': 2};
Map<String, int> copy = Map.of(original); // ❌ Error!
```
❌ It gives a **runtime error** because the types don’t match exactly.



### 🔹 `Map.from()` – **Allows type conversion**
- It copies a map even if the types are **not exactly the same**.
- It tries to **convert types** at runtime.

#### ✅ Example:
```dart
Map<dynamic, dynamic> original = {'a': 1, 'b': 2};
Map<String, int> copy = Map.from(original);
print(copy); // Output: {a: 1, b: 2}
```
✅ Works if it can safely convert types to `String` and `int`.

---




### 5. **Using the `Map.fromIterables()` Constructor:**
   This constructor creates a `Map` by associating the elements of two `Iterable` collections as keys and values, respectively.

  ```dart
void main() {
  var keys = ['apple', 'banana', 'orange'];
  var values = [1, 2, 3];
  var fruits = Map<String, int>.fromIterables(keys, values);
  print(fruits);
}
```
**Output:**
```
{apple: 1, banana: 2, orange: 3}
```
   Here, `fruits` will be `{'apple': 1, 'banana': 2, 'orange': 3}`.


#### 6. **Using the `Map.unmodifiable()` Constructor:**
   This constructor creates an unmodifiable `Map`, meaning its contents cannot be changed after creation.
```dart
void main() {
  var fruits = Map<String, int>.unmodifiable({
    'apple': 1,
    'banana': 2,
    'orange': 3,
  });
  print(fruits);
}
```
**Output:**
```
{apple: 1, banana: 2, orange: 3}
```

> 🔒 Note: If you try to modify `fruits` (e.g., `fruits['apple'] = 5;`), it will throw an error at runtime.



   Attempting to modify `fruits` will result in an error.


Each of these methods provides flexibility in creating and managing `Map` objects in Dart, allowing you to choose the most suitable approach based on your specific requirements. 
---

## 3. **multiple ways to print a `Map`**

### 📝 Summary Table

| Method                         | Output Style                          |
|-------------------------------|----------------------------------------|
| `print(map)`                  | Full map with braces                  |
| `forEach()`                   | Line-by-line key-value                 |
| `for-in on entries`           | Same as above, more readable           |
| `map.keys` / `map.values`     | Only keys or only values               |
| `jsonEncode(map)`             | JSON-style string                      |
| `map.toString()`              | Same as direct print                   |
| `Custom loop`                 | Any format you like                    |

### ✅ Sample Map Used in All Examples:
```dart
var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
```


### **1. Print the Entire Map Directly**
```dart
void main() {
  var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
  print(fruits);
}
```
**Output:**
```
{apple: 1, banana: 2, orange: 3}
```



### **2. Print Using `forEach()`**
```dart
void main() {
  var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
  fruits.forEach((key, value) {
    print('$key: $value');
  });
}
```
**Output:**
```
apple: 1
banana: 2
orange: 3
```

### **3. Print Using `for-in` Loop Over `entries`**
```dart
void main() {
  var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
  for (var entry in fruits.entries) {
    print('${entry.key}: ${entry.value}');
  }
}
```
**Output:**
```
apple: 1
banana: 2
orange: 3
```

### **4. Print Keys and Values Separately**
#### A. Print Only Keys
```dart
void main() {
  var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
  print(fruits.keys);
}
```
**Output:**
```
(apple, banana, orange)
```

#### B. Print Only Values
```dart
void main() {
  var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
  print(fruits.values);
}
```
**Output:**
```
(1, 2, 3)
```

### **5. Convert Map to JSON String (Pretty Print)**
```dart
import 'dart:convert';

void main() {
  var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
  String jsonString = jsonEncode(fruits);
  print(jsonString);
}
```
**Output:**
```
{"apple":1,"banana":2,"orange":3}
```


### **6. Print Using `toString()` Method**
```dart
void main() {
  var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
  print(fruits.toString());
}
```
**Output:**
```
{apple: 1, banana: 2, orange: 3}
```

### **7. Custom Format in Loop**
```dart
void main() {
  var fruits = {'apple': 1, 'banana': 2, 'orange': 3};
  for (var key in fruits.keys) {
    print('Fruit: $key, Quantity: ${fruits[key]}');
  }
}
```
**Output:**
```
Fruit: apple, Quantity: 1
Fruit: banana, Quantity: 2
Fruit: orange, Quantity: 3
```


## 4. Methods and Properties

Awesome! Here's a detailed explanation of all the **Map methods and properties** you listed in Dart, with:

- ✅ Description  
- 🧪 Example code  
- 📤 Expected output  



#### 🔧 **Map Methods and Properties in Dart**


Here’s a 🔥 **full summary table** of **Map methods and properties in Dart** — with quick **examples** and **expected output** for each!



## 🧾 Dart Map Methods & Properties — Summary with Examples

| # | Name               | Type       | Example Code Snippet                                       | Output / Behavior                      |
|---|--------------------|------------|-------------------------------------------------------------|----------------------------------------|
| 1 | `addAll()`         | Method     | `m.addAll({'b': 2})`                                       | `{a: 1, b: 2}`                         |
| 2 | `addEntries()`     | Method     | `m.addEntries([MapEntry('x', 99)])`                        | `{x: 99}`                              |
| 3 | `cast()`           | Method     | `m.cast<String, int>()`                                   | Casts map to `<String, int>`           |
| 4 | `clear()`          | Method     | `m.clear()`                                                | `{}`                                   |
| 5 | `containsKey()`    | Method     | `m.containsKey('a')`                                      | `true` or `false`                      |
| 6 | `containsValue()`  | Method     | `m.containsValue(1)`                                      | `true` or `false`                      |
| 7 | `entries`          | Property   | `m.entries`                                               | Iterable of `MapEntry`                 |
| 8 | `forEach()`        | Method     | `m.forEach((k, v) => print('$k → $v'))`                   | Prints each pair                       |
| 9 | `hashCode`         | Property   | `print(m.hashCode)`                                       | Unique int for map object              |
|10 | `isEmpty`          | Property   | `m.isEmpty`                                               | `true` if empty                        |
|11 | `isNotEmpty`       | Property   | `m.isNotEmpty`                                            | `true` if not empty                    |
|12 | `keys`             | Property   | `m.keys`                                                  | `(a, b, c)`                            |
|13 | `length`           | Property   | `m.length`                                                | Number of entries                      |
|14 | `map()`            | Method     | `m.map((k, v) => MapEntry(k, v * 2))`                     | `{a: 2, b: 4}`                         |
|15 | `putIfAbsent()`    | Method     | `m.putIfAbsent('x', () => 99)`                           | Adds if key not present                |
|16 | `remove()`         | Method     | `m.remove('a')`                                           | Removes entry                          |
|17 | `removeWhere()`    | Method     | `m.removeWhere((k, v) => v > 1)`                          | Removes matching entries               |
|18 | `runtimeType`      | Property   | `m.runtimeType`                                           | Shows internal type                    |
|19 | `toString()`       | Method     | `print(m.toString())`                                     | `'{'a': 1, 'b': 2}'`                    |
|20 | `update()`         | Method     | `m.update('a', (v) => v + 1)`                             | Updates a single value                 |
|21 | `updateAll()`      | Method     | `m.updateAll((k, v) => v * 10)`                           | Updates all values                     |
|22 | `values`           | Property   | `m.values`                                                | `(1, 2, 3)`                            |
|23 | `noSuchMethod()`   | Method     | Custom override for invalid method                       | Used in custom class                   |




### ✅ 1. `addAll()`
**Adds all key-value pairs from another map.**
```dart
void main() {
  var m1 = {'a': 1};
  m1.addAll({'b': 2, 'c': 3});
  print(m1);
}
```
📤 Output:
```
{a: 1, b: 2, c: 3}
```



### ✅ 2. `addEntries()`
**Adds entries from an iterable of MapEntry.**
```dart
void main() {
  var m = {'a': 1};
  m.addEntries([MapEntry('b', 2), MapEntry('c', 3)]);
  print(m);
}
```
📤 Output:
```
{a: 1, b: 2, c: 3}
```



### ✅ 3. `cast<K2, V2>()`
**Casts map to a different type.**
```dart
void main() {
  var m = <dynamic, dynamic>{'a': 1, 'b': 2};
  var casted = m.cast<String, int>();
  print(casted);
}
```
📤 Output:
```
{a: 1, b: 2}
```


### ✅ 4. `clear()`
**Removes all entries.**
```dart
void main() {
  var m = {'a': 1, 'b': 2};
  m.clear();
  print(m);
}
```
📤 Output:
```
{}
```


### ✅ 5. `containsKey(key)`
**Checks if a key exists.**
```dart
void main() {
  var m = {'a': 1};
  print(m.containsKey('a'));
}
```
📤 Output:
```
true
```


### ✅ 6. `containsValue(value)`
**Checks if a value exists.**
```dart
void main() {
  var m = {'a': 1};
  print(m.containsValue(1));
}
```
📤 Output:
```
true
```


### ✅ 7. `entries`
**Returns all key-value pairs as MapEntry objects.**
```dart
void main() {
  var m = {'x': 10, 'y': 20};
  for (var e in m.entries) {
    print('${e.key} → ${e.value}');
  }
}
```
📤 Output:
```
x → 10
y → 20
```


### ✅ 8. `forEach()`
**Iterates through each key-value pair.**
```dart
void main() {
  var m = {'a': 1, 'b': 2};
  m.forEach((k, v) => print('$k → $v'));
}
```
📤 Output:
```
a → 1
b → 2
```


### ✅ 9. `hashCode`
**Returns hash code for the map.**
```dart
void main() {
  var m = {'a': 1};
  print(m.hashCode);
}
```
📤 Output: (Number may vary)
```
123456789 (example)
```


### ✅ 10. `isEmpty`
**Checks if the map is empty.**
```dart
void main() {
  var m = {};
  print(m.isEmpty);
}
```
📤 Output:
```
true
```


### ✅ 11. `isNotEmpty`
**Checks if the map is not empty.**
```dart
void main() {
  var m = {'a': 1};
  print(m.isNotEmpty);
}
```
📤 Output:
```
true
```


### ✅ 12. `keys`
**Returns all keys.**
```dart
void main() {
  var m = {'a': 1, 'b': 2};
  print(m.keys);
}
```
📤 Output:
```
(a, b)
```


### ✅ 13. `length`
**Returns number of key-value pairs.**
```dart
void main() {
  var m = {'a': 1, 'b': 2};
  print(m.length);
}
```
📤 Output:
```
2
```


### ✅ 14. `map()`
**Transforms each entry into a new map.**
```dart
void main() {
  var m = {'a': 1, 'b': 2};
  var newMap = m.map((k, v) => MapEntry(k, v * 10));
  print(newMap);
}
```
📤 Output:
```
{a: 10, b: 20}
```


### ✅ 15. `putIfAbsent()`
**Adds a key with a value if it doesn’t exist.**
```dart
void main() {
  var m = {'a': 1};
  m.putIfAbsent('b', () => 100);
  print(m);
}
```
📤 Output:
```
{a: 1, b: 100}
```


### ✅ 16. `remove()`
**Removes a key and its value.**
```dart
void main() {
  var m = {'a': 1, 'b': 2};
  m.remove('a');
  print(m);
}
```
📤 Output:
```
{b: 2}
```


### ✅ 17. `removeWhere()`
**Removes all entries that match a condition.**
```dart
void main() {
  var m = {'a': 1, 'b': 2, 'c': 3};
  m.removeWhere((k, v) => v > 1);
  print(m);
}
```
📤 Output:
```
{a: 1}
```


### ✅ 18. `runtimeType`
**Returns the runtime type of the object.**
```dart
void main() {
  var m = {'a': 1};
  print(m.runtimeType);
}
```
📤 Output:
```
_InternalLinkedHashMap<String, int>
```


### ✅ 19. `toString()`
**Returns a string representation.**
```dart
void main() {
  var m = {'a': 1, 'b': 2};
  print(m.toString());
}
```
📤 Output:
```
{a: 1, b: 2}
```


### ✅ 20. `update()`
**Updates an existing key’s value.**
```dart
void main() {
  var m = {'a': 1};
  m.update('a', (value) => value + 10);
  print(m);
}
```
📤 Output:
```
{a: 11}
```


### ✅ 21. `updateAll()`
**Updates all values in the map.**
```dart
void main() {
  var m = {'a': 1, 'b': 2};
  m.updateAll((k, v) => v * 5);
  print(m);
}
```
📤 Output:
```
{a: 5, b: 10}
```


### ✅ 22. `values`
**Returns all the values.**
```dart
void main() {
  var m = {'a': 1, 'b': 2};
  print(m.values);
}
```
📤 Output:
```
(1, 2)
```


### ✅ 23. `noSuchMethod()`
**Handles calls to undefined methods (advanced usage).**
```dart
class MyMap extends MapBase<String, int> {
  final _data = <String, int>{};

  @override
  operator [](Object? key) => _data[key];

  @override
  void operator []=(String key, int value) => _data[key] = value;

  @override
  void clear() => _data.clear();

  @override
  Iterable<String> get keys => _data.keys;

  @override
  int? remove(Object? key) => _data.remove(key);

  @override
  dynamic noSuchMethod(Invocation invocation) {
    return 'Method not found: ${invocation.memberName}';
  }
}

void main() {
  var m = MyMap();
  print(m.nonExistingMethod()); // Triggers noSuchMethod
}
```
📤 Output:
```
Method not found: Symbol("nonExistingMethod")
```

---


## 5. Constructor
## ✅ All Dart Map Constructors Explained with Example & Output

| **Constructor**                  | **Description**                                 | **Example Code**                                                                                 | **Output**                                      |
|----------------------------------|--------------------------------------------------|--------------------------------------------------------------------------------------------------|--------------------------------------------------|
| Map()                         | Creates an empty map                            | var m = Map(); m['a'] = 1; print(m);                                                           | {a: 1}                                         |
| Map.from(otherMap)            | Creates a copy of another map                   | var a = {'x': 1}; var b = Map.from(a); print(b);                                               | {x: 1}                                         |
| Map.of(otherMap)              | Creates a typed copy from another map           | var a = {'x': 1}; var b = Map<String, int>.of(a); print(b);                                    | {x: 1}                                         |
| Map.unmodifiable(map)         | Creates a read-only (immutable) map             | var a = Map.unmodifiable({'a': 1}); print(a);                                                  | {a: 1}                                         |
| Map.identity()                | Uses identity (===) for key comparison          | var m = Map.identity(); var x = 'a'; m[x] = 1; print(m);                                       | {a: 1} (but key match uses identity)           |
| Map.fromIterable(iterable)    | Builds from a single iterable                   | var m = Map.fromIterable([1, 2, 3], key: (e) => 'k$e', value: (e) => e * 10); print(m);         | {k1: 10, k2: 20, k3: 30}                       |
| Map.fromIterables(keys, vals) | Builds using 2 iterables: one for keys, values  | var m = Map.fromIterables(['a', 'b'], [1, 2]); print(m);                                       | {a: 1, b: 2}                                   |
| Map.fromEntries(entries)      | Builds from a list of MapEntry objects          | var m = Map.fromEntries([MapEntry('a', 1), MapEntry('b', 2)]); print(m);                        | {a: 1, b: 2}                                   |





## ✅ 1. `Map()` — Empty Map
### **Description:** Creates an empty map.
```dart
void main() {
  var m = Map();
  m['a'] = 1;
  print(m);
}
```
📤 **Output:**
```
{a: 1}
```



## ✅ 2. `Map.from()` — Copy from Another Map
### **Description:** Creates a new map by copying another map.
```dart
void main() {
  var original = {'x': 10, 'y': 20};
  var copy = Map.from(original);
  print(copy);
}
```
📤 **Output:**
```
{x: 10, y: 20}
```



## ✅ 3. `Map.of()` — Typed Copy
### **Description:** Creates a typed map copy from another map.
```dart
void main() {
  var original = {'apple': 1, 'banana': 2};
  var typed = Map<String, int>.of(original);
  print(typed);
}
```
📤 **Output:**
```
{apple: 1, banana: 2}
```



## ✅ 4. `Map.unmodifiable()` — Read-Only Map
### **Description:** Creates a map that cannot be changed.
```dart
void main() {
  var readonly = Map.unmodifiable({'one': 1, 'two': 2});
  print(readonly);
}
```
📤 **Output:**
```
{one: 1, two: 2}
```
🛑 If you try `readonly['three'] = 3;`, it will throw a runtime error.



## ✅ 5. `Map.identity()` — Identity-Based Map
### **Description:** Uses `===` (identity) instead of `==` for keys.
```dart
void main() {
  var m = Map.identity();
  var key1 = 'hello';
  var key2 = 'hello';
  m[key1] = 123;
  m[key2] = 456; // Because identity is different, both are stored
  print(m);
}
```
📤 **Output:**
```
{hello: 123, hello: 456}
```
🧠 Note: Although the string values look the same, they are different objects in memory.



## ✅ 6. `Map.fromIterable()` — From One Iterable
### **Description:** Creates a map from a single iterable, using key and value functions.
```dart
void main() {
  var m = Map.fromIterable(
    [1, 2, 3],
    key: (item) => 'key$item',
    value: (item) => item * item,
  );
  print(m);
}
```
📤 **Output:**
```
{key1: 1, key2: 4, key3: 9}
```



## ✅ 7. `Map.fromIterables()` — From Two Iterables
### **Description:** Uses two lists (keys and values) to make a map.
```dart
void main() {
  var keys = ['a', 'b', 'c'];
  var values = [10, 20, 30];
  var m = Map.fromIterables(keys, values);
  print(m);
}
```
📤 **Output:**
```
{a: 10, b: 20, c: 30}
```

---

## ✅ 8. `Map.fromEntries()` — From MapEntry List
### **Description:** Builds a map from a list of `MapEntry` objects.
```dart
void main() {
  var entries = [MapEntry('x', 5), MapEntry('y', 15)];
  var m = Map.fromEntries(entries);
  print(m);
}
```
📤 **Output:**
```
{x: 5, y: 15}
```



## 💡 Summary Table

| Constructor              | Purpose                        | Mutable? |
|--------------------------|--------------------------------|----------|
| `Map()`                 | Empty map                      | ✅ Yes    |
| `Map.from()`            | Clone a map                    | ✅ Yes    |
| `Map.of()`              | Clone with type                | ✅ Yes    |
| `Map.unmodifiable()`    | Read-only map                  | ❌ No     |
| `Map.identity()`        | Identity-based keys            | ✅ Yes    |
| `Map.fromIterable()`    | Create from single iterable    | ✅ Yes    |
| `Map.fromIterables()`   | Keys + Values lists            | ✅ Yes    |
| `Map.fromEntries()`     | From list of MapEntry          | ✅ Yes    |

---

Great question!

---

## 🔁 **What is "Mutable"?**

**Mutable** means **changeable**.  
If something is **mutable**, you can **modify its content** after it's created — like adding, removing, or updating items.

---

### 📦 **In Dart (and most languages):**

| Term         | Meaning                               |
|--------------|----------------------------------------|
| **Mutable**  | You can **change** its content.        |
| **Immutable**| You **cannot change** its content.     |



### ✅ Example of a **Mutable Map**:
```dart
void main() {
  var myMap = {'a': 1, 'b': 2};
  myMap['c'] = 3;        // Adding
  myMap['a'] = 100;      // Updating
  print(myMap);
}
```
**Output:**
```
{a: 100, b: 2, c: 3}
```
👉 This map is mutable — you changed its values.



### 🔒 Example of an **Immutable Map**:
```dart
void main() {
  var myMap = Map.unmodifiable({'x': 1, 'y': 2});
  // myMap['z'] = 3;  ❌ This will throw an error
  print(myMap);
}
```
**Output:**
```
{x: 1, y: 2}
```
🚫 If you try to add or change a value, it crashes:
```
Unsupported operation: Cannot modify an unmodifiable map
```



###  Simple Analogy:
- **Mutable:** Like a **whiteboard** — you can write, erase, and rewrite.
- **Immutable:** Like a **stone carving** — once it’s set, you can’t change it.
---


# 🧠 **Types of Maps in Dart**

| Type               | Description                                   | Example Code                                      | Output / Behavior                        |
|--------------------|-----------------------------------------------|--------------------------------------------------|------------------------------------------|
| Map              | Default growable map (unordered)              | var m = {'a': 1, 'b': 2};                      | Order not guaranteed                     |
| LinkedHashMap    | Maintains insertion order                     | LinkedHashMap.from({'x': 5, 'y': 10})          | Output: {x: 5, y: 10} (in order)       |
| HashMap          | Fast lookup, no order                         | HashMap.from({'b': 2, 'a': 1})                 | Output: Order may vary                   |
| SplayTreeMap     | Sorted automatically by keys                  | SplayTreeMap.from({'b': 2, 'a': 1})            | Output: {a: 1, b: 2}                   |
| UnmodifiableMapView | Read-only view of another map             | UnmodifiableMapView({'m': 100})                | Cannot modify — throws error on changes  |

---

## ✅ Examples for Each Type:



### 1. **Default Map (unordered)**
```dart
void main() {
  var map = {'z': 1, 'a': 2};
  print(map);
}
```
📤 Output:  
```
{z: 1, a: 2} // Order not guaranteed
```

### 2. **LinkedHashMap** (insertion order)
```dart
import 'dart:collection';

void main() {
  var linked = LinkedHashMap.from({'x': 1, 'y': 2});
  print(linked);
}
```
📤 Output:  
```
{x: 1, y: 2}
```

### 3. **HashMap** (unordered, fast)
```dart
import 'dart:collection';

void main() {
  var hash = HashMap.from({'b': 2, 'a': 1});
  print(hash);
}
```
📤 Output:  
```
{a: 1, b: 2} // Or another order
```

### 4. **SplayTreeMap** (sorted by key)
```dart
import 'dart:collection';

void main() {
  var treeMap = SplayTreeMap.from({'b': 2, 'a': 1, 'c': 3});
  print(treeMap);
}
```
📤 Output:
```
{a: 1, b: 2, c: 3}
```


### 5. **UnmodifiableMapView** (read-only)
```dart
import 'dart:collection';

void main() {
  var original = {'m': 100};
  var readOnly = UnmodifiableMapView(original);

  // readOnly['n'] = 200; ❌ This will throw an error
  print(readOnly);
}
```
📤 Output:
```
{m: 100}
```
🚫 Trying to modify it will cause:
```
Unsupported operation: Cannot modify an unmodifiable map
```

<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Sets" style="float: left;">⬅️ Sets </a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/README.md">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/Variable/Symbols/readme.md" style="float: right;"> Symbols ➡️</a>
</p>