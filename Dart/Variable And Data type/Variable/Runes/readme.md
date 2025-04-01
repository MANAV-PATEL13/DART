In Dart, the `Runes` class is used to work with Unicode characters in strings. It represents a sequence of UTF-16 code units, allowing developers to access characters that might be represented by more than one code unit.

### **Runes Methods with Examples**
Here’s a detailed explanation of all `Runes` methods, along with examples and outputs.

---

### **1. iterator**
- **Description**: Returns an iterator that allows traversal of the `Runes` collection.

```dart
void main() {
  Runes runes = Runes('👋😊');
  Iterator<int> it = runes.iterator;

  while (it.moveNext()) {
    print(it.current); // Unicode code points
  }
}
```
**Output:**
```
128075
128522
```

---

### **2. last**
- **Description**: Returns the last element of the collection.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.last);
}
```
**Output:**
```
111  // Unicode for 'o'
```

---

### **3. string**
- **Description**: Converts the runes back into a `String`.

```dart
void main() {
  Runes runes = Runes('😊');
  print(String.fromCharCodes(runes));
}
```
**Output:**
```
😊
```

---

### **4. first**
- **Description**: Returns the first rune in the sequence.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.first);
}
```
**Output:**
```
72  // Unicode for 'H'
```

---

### **5. isEmpty**
- **Description**: Checks if the runes collection is empty.

```dart
void main() {
  Runes runes = Runes('');
  print(runes.isEmpty);
}
```
**Output:**
```
true
```

---

### **6. isNotEmpty**
- **Description**: Returns `true` if the collection is not empty.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.isNotEmpty);
}
```
**Output:**
```
true
```

---

### **7. length**
- **Description**: Returns the number of runes.

```dart
void main() {
  Runes runes = Runes('👋😊');
  print(runes.length);
}
```
**Output:**
```
2
```

---

### **8. single**
- **Description**: Returns the only element if the collection has exactly one element.

```dart
void main() {
  Runes runes = Runes('A');
  print(runes.single);
}
```
**Output:**
```
65 // Unicode for 'A'
```

---

### **9. hashCode**
- **Description**: Returns the hash code of the collection.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.hashCode);
}
```
**Output:**
```
Some integer value
```

---

### **10. runtimeType**
- **Description**: Returns the runtime type of the object.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.runtimeType);
}
```
**Output:**
```
Runes
```

---

### **11. firstOrNull**
- **Description**: Returns the first element or `null` if the collection is empty.

```dart
void main() {
  Runes runes = Runes('');
  print(runes.firstOrNull);
}
```
**Output:**
```
null
```

---

### **12. indexed**
- **Description**: Returns an iterable that pairs each element with its index.

```dart
void main() {
  Runes runes = Runes('Hi');
  print(runes.indexed.toList());
}
```
**Output:**
```
[(0, 72), (1, 105)]
```

---

### **13. lastOrNull**
- **Description**: Returns the last element or `null` if empty.

```dart
void main() {
  Runes runes = Runes('');
  print(runes.lastOrNull);
}
```
**Output:**
```
null
```

---

### **14. nonNulls**
- **Description**: Returns an iterable that removes `null` values.

```dart
void main() {
  Runes? runes = null;
  print(runes?.nonNulls);
}
```
**Output:**
```
null
```

---

### **15. singleOrNull**
- **Description**: Returns the single element or `null`.

```dart
void main() {
  Runes runes = Runes('');
  print(runes.singleOrNull);
}
```
**Output:**
```
null
```

---

### **16. any()**
- **Description**: Checks if any element satisfies a condition.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.any((rune) => rune == 101)); // Checks for 'e'
}
```
**Output:**
```
true
```

---

### **17. cast()**
- **Description**: Casts the elements to another type.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.cast<int>().toList());
}
```
**Output:**
```
[72, 101, 108, 108, 111]
```

---

### **18. contains()**
- **Description**: Checks if a rune is present.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.contains(101)); // Unicode for 'e'
}
```
**Output:**
```
true
```

---

### **19. elementAt()**
- **Description**: Gets the rune at a specific index.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.elementAt(1)); // Unicode for 'e'
}
```
**Output:**
```
101
```

---

### **20. elementAtOrNull()**
- **Description**: Gets the rune at an index or `null`.

```dart
void main() {
  Runes runes = Runes('Hi');
  print(runes.elementAtOrNull(3));
}
```
**Output:**
```
null
```

---

### **21. every()**
- **Description**: Checks if all elements satisfy a condition.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.every((rune) => rune > 50));
}
```
**Output:**
```
true
```

---

### **22. expand()**
- **Description**: Expands each element.

```dart
void main() {
  Runes runes = Runes('Hi');
  print(runes.expand((rune) => [rune, rune + 1]).toList());
}
```
**Output:**
```
[72, 73, 105, 106]
```

---

### **23. firstWhere()**
- **Description**: Finds the first element that matches.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.firstWhere((rune) => rune > 100));
}
```
**Output:**
```
101
```

---
Here’s a detailed explanation of all the remaining `Runes` methods (and some already explained earlier) with examples and outputs:

---

### **24. fold()**
- **Description**: Applies a function to each element in the collection, accumulating the result.

```dart
void main() {
  Runes runes = Runes('Hello');
  int sum = runes.fold(0, (prev, rune) => prev + rune);
  print(sum);
}
```
**Output:**
```
500
```

---

### **25. followedBy()**
- **Description**: Concatenates the current collection with another collection.

```dart
void main() {
  Runes runes = Runes('Hi');
  Runes result = runes.followedBy(Runes(' there')).toList();
  print(String.fromCharCodes(result));
}
```
**Output:**
```
Hi there
```

---

### **26. forEach()**
- **Description**: Applies a function to each element.

```dart
void main() {
  Runes runes = Runes('Hello');
  runes.forEach((rune) => print(rune));
}
```
**Output:**
```
72
101
108
108
111
```

---

### **27. join()**
- **Description**: Joins the elements with a separator.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.join('-'));
}
```
**Output:**
```
72-101-108-108-111
```

---

### **28. lastWhere()**
- **Description**: Finds the last element that matches a condition.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.lastWhere((rune) => rune == 108)); // 'l' 
}
```
**Output:**
```
108
```

---

### **29. map()**
- **Description**: Transforms each element in the collection.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.map((rune) => rune + 1).toList());
}
```
**Output:**
```
[73, 102, 109, 109, 112]
```

---

### **30. reduce()**
- **Description**: Combines all elements into a single value.

```dart
void main() {
  Runes runes = Runes('Hello');
  int result = runes.reduce((prev, rune) => prev + rune);
  print(result);
}
```
**Output:**
```
500
```

---

### **31. singleWhere()**
- **Description**: Finds the single element that matches the condition, throws an exception if there’s no match or more than one match.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.singleWhere((rune) => rune == 108)); // 'l'
}
```
**Output:**
```
108
```

---

### **32. skip()**
- **Description**: Skips the first `n` elements.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.skip(2).toList());
}
```
**Output:**
```
[108, 108, 111]
```

---

### **33. skipWhile()**
- **Description**: Skips elements while a condition is true.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.skipWhile((rune) => rune != 108).toList());
}
```
**Output:**
```
[108, 108, 111]
```

---

### **34. take()**
- **Description**: Takes the first `n` elements.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.take(3).toList());
}
```
**Output:**
```
[72, 101, 108]
```

---

### **35. takeWhile()**
- **Description**: Takes elements while a condition is true.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.takeWhile((rune) => rune != 108).toList());
}
```
**Output:**
```
[72, 101]
```

---

### **36. toList()**
- **Description**: Converts the collection to a list.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.toList());
}
```
**Output:**
```
[72, 101, 108, 108, 111]
```

---

### **37. toSet()**
- **Description**: Converts the collection to a set.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.toSet());
}
```
**Output:**
```
{72, 101, 108, 111}
```

---

### **38. toString()**
- **Description**: Returns the string representation of the collection.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.toString());
}
```
**Output:**
```
(72, 101, 108, 108, 111)
```

---

### **39. where()**
- **Description**: Filters the collection based on a condition.

```dart
void main() {
  Runes runes = Runes('Hello');
  print(runes.where((rune) => rune == 108).toList());
}
```
**Output:**
```
[108, 108]
```

---

### **40. whereType()**
- **Description**: Filters elements by type.

```dart
void main() {
  List<dynamic> list = [72, 'Hello', 101];
  var runes = list.whereType<int>();
  print(runes);
}
```
**Output:**
```
(72, 101)
```

---

### **41. noSuchMethod()**
- **Description**: Invoked when a method is called that doesn’t exist for the `Runes` class. This method is typically used in the `dynamic` type or when method resolution fails.

```dart
void main() {
  Runes runes = Runes('Hello');
  runes.noSuchMethod(Invocation.method(#nonExistentMethod, []));
}
```
**Output** (error):
```
NoSuchMethodError: The method 'nonExistentMethod' was called on null.
```

---

 Here's a table with numbers as column headers. I'll present an example using some of the methods in `Runes`, showing how each can be used and their results.

| **No.** | **Method**           | **Description**                                                     | **Example**                               | **Output**                           |
|---------|----------------------|---------------------------------------------------------------------|-------------------------------------------|--------------------------------------|
| 1       | `iterator`           | Returns an iterator for iterating over the runes collection.         | `Runes('👋😊').iterator`                   | Iterator for '👋😊'                   |
| 2       | `last`                | Returns the last rune in the collection.                            | `Runes('Hello').last`                     | 111 (Unicode for 'o')                |
| 3       | `string`              | Converts runes back to a string.                                    | `String.fromCharCodes(Runes('😊'))`       | '😊'                                  |
| 4       | `first`               | Returns the first rune in the collection.                           | `Runes('Hello').first`                    | 72 (Unicode for 'H')                 |
| 5       | `isEmpty`             | Checks if the runes collection is empty.                            | `Runes('').isEmpty`                       | true                                 |
| 6       | `isNotEmpty`          | Returns true if the collection is not empty.                        | `Runes('Hello').isNotEmpty`               | true                                 |
| 7       | `length`              | Returns the number of runes.                                        | `Runes('👋😊').length`                     | 2                                    |
| 8       | `single`              | Returns the only element if there is exactly one element.           | `Runes('A').single`                       | 65 (Unicode for 'A')                 |
| 9       | `hashCode`            | Returns the hash code of the collection.                            | `Runes('Hello').hashCode`                 | A hash code value                    |
| 10      | `runtimeType`         | Returns the runtime type of the object.                             | `Runes('Hello').runtimeType`              | Runes                               |
| 11      | `firstOrNull`         | Returns the first element or null if empty.                         | `Runes('').firstOrNull`                   | null                                 |
| 12      | `indexed`             | Returns an iterable of pairs (index, rune).                         | `Runes('Hi').indexed.toList()`            | [(0, 72), (1, 105)]                  |
| 13      | `lastOrNull`          | Returns the last element or null if empty.                          | `Runes('').lastOrNull`                    | null                                 |
| 14      | `nonNulls`            | Returns an iterable that removes nulls.                              | `List<int?>[72, null, 101].nonNulls`      | [72, 101]                            |
| 15      | `singleOrNull`        | Returns the single element or null if empty or more than one.       | `Runes('A').singleOrNull`                 | 65 (Unicode for 'A')                 |
| 16      | `any()`               | Checks if any element satisfies the condition.                      | `Runes('Hello').any((rune) => rune == 101)` | true                               |
| 17      | `cast()`              | Casts elements to another type.                                     | `Runes('Hello').cast<int>().toList()`     | [72, 101, 108, 108, 111]             |
| 18      | `contains()`          | Checks if the collection contains a specific rune.                  | `Runes('Hello').contains(101)`            | true                                 |
| 19      | `elementAt()`         | Gets the rune at a specific index.                                  | `Runes('Hello').elementAt(1)`             | 101 (Unicode for 'e')                |
| 20      | `elementAtOrNull()`   | Gets the rune at a specific index or null if out of bounds.         | `Runes('Hi').elementAtOrNull(3)`          | null                                 |
| 21      | `every()`             | Checks if every element satisfies the condition.                    | `Runes('Hello').every((rune) => rune > 50)` | true                                |
| 22      | `expand()`            | Expands each element into multiple values.                          | `Runes('Hi').expand((rune) => [rune, rune + 1]).toList()` | [72, 73, 105, 106]  |
| 23      | `firstWhere()`        | Finds the first element that matches a condition.                   | `Runes('Hello').firstWhere((rune) => rune > 100)` | 101 (Unicode for 'e')               |
| 24      | `fold()`              | Accumulates the collection into a single result.                    | `Runes('Hello').fold(0, (prev, rune) => prev + rune)` | 500                                  |
| 25      | `followedBy()`        | Concatenates the current collection with another.                   | `Runes('Hi').followedBy(Runes(' there')).toList()` | [72, 105, 32, 116, 104, 101, 114, 101] |
| 26      | `forEach()`           | Applies a function to each element in the collection.               | `Runes('Hello').forEach((rune) => print(rune))` | 72, 101, 108, 108, 111               |
| 27      | `join()`              | Joins the elements with a separator.                                | `Runes('Hello').join('-')`                | 72-101-108-108-111                   |
| 28      | `lastWhere()`         | Finds the last element that matches a condition.                    | `Runes('Hello').lastWhere((rune) => rune == 108)` | 108 (Unicode for 'l')               |
| 29      | `map()`               | Transforms each element into a new form.                            | `Runes('Hello').map((rune) => rune + 1).toList()` | [73, 102, 109, 109, 112]             |
| 30      | `reduce()`            | Combines all elements into a single result.                         | `Runes('Hello').reduce((prev, rune) => prev + rune)` | 500                                  |
| 31      | `singleWhere()`       | Finds the single element that matches a condition.                  | `Runes('Hello').singleWhere((rune) => rune == 108)` | 108 (Unicode for 'l')               |
| 32      | `skip()`              | Skips the first `n` elements.                                       | `Runes('Hello').skip(2).toList()`          | [108, 108, 111]                      |
| 33      | `skipWhile()`         | Skips elements while a condition is true.                           | `Runes('Hello').skipWhile((rune) => rune != 108).toList()` | [108, 108, 111]  |
| 34      | `take()`              | Takes the first `n` elements.                                       | `Runes('Hello').take(3).toList()`          | [72, 101, 108]                       |

---
