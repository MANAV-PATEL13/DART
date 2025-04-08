### **Dart `List<T>` – Detailed Notes**

---

### **What is `List<T>`?**
`List<T>` is a collection in Dart that holds ordered data of a single type (`T` can be any type such as `int`, `String`, or custom objects). 

A `List` allows you to store, access, and manipulate data in a sequential manner. The list is **ordered** and can **grow** or **shrink** as needed.

### **Key Characteristics of `List<T>`:**

- **Ordered**: The elements are stored in a specific order, and you can access them via their index (starting from 0).
- **Indexed**: You can access elements using their index (`list[0]` to get the first element).
- **Mutable**: Lists are **changeable** — you can add, modify, or remove elements.
- **Growable**: Dart lists are growable by default. You can add more elements without needing to specify the size beforehand.

---

### **Creating a List**

1. **Empty List**
```dart
void main() {
  List<int> numbers = [];  // Empty list of integers
  print(numbers);  // Output: []
}
```

2. **List with Initial Elements**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  print(fruits);  // Output: [Apple, Banana, Orange]
}
```

3. **Fixed-Length List**
```dart
void main() {
  List<int> fixedList = List.filled(5, 0); // Creates a list with 5 elements, all initialized to 0
  print(fixedList);  // Output: [0, 0, 0, 0, 0]
}
```

---

### **Accessing Elements in a List**

- **Access by Index**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  print(fruits[0]); // Output: Apple
  print(fruits[1]); // Output: Banana
  print(fruits[2]); // Output: Orange
}
```

- **Modifying Elements**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  fruits[1] = 'Mango';  // Change 'Banana' to 'Mango'
  print(fruits);  // Output: [Apple, Mango, Orange]
}
```

---

### **Adding Elements to a List**

1. **Adding a Single Element (`add()`)**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  fruits.add('Grapes');  // Add 'Grapes' to the end
  print(fruits);  // Output: [Apple, Banana, Orange, Grapes]
}
```

2. **Inserting an Element at a Specific Index (`insert()`)**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  fruits.insert(1, 'Pineapple');  // Insert 'Pineapple' at index 1
  print(fruits);  // Output: [Apple, Pineapple, Banana, Orange]
}
```

3. **Adding Multiple Elements (`addAll()`)**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana'];
  fruits.addAll(['Orange', 'Grapes']);  // Add multiple fruits
  print(fruits);  // Output: [Apple, Banana, Orange, Grapes]
}
```

---

### **Removing Elements from a List**

1. **Remove by Value (`remove()`)**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  fruits.remove('Banana');  // Remove 'Banana'
  print(fruits);  // Output: [Apple, Orange]
}
```

2. **Remove by Index (`removeAt()`)**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  fruits.removeAt(1);  // Remove element at index 1 ('Banana')
  print(fruits);  // Output: [Apple, Orange]
}
```

3. **Remove Last Element (`removeLast()`)**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  fruits.removeLast();  // Remove the last element ('Orange')
  print(fruits);  // Output: [Apple, Banana]
}
```

4. **Clear All Elements (`clear()`)**
```dart
void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  fruits.clear();  // Remove all elements
  print(fruits);  // Output: []
}
```

**Dart Notes: Printing List Elements Using Loops**
---

**1. For-in Loop**
```dart
void main(){
List<String> items = ['Apple', 'Banana', 'Cherry'];

for (var item in items) {
  print(item);
}
}
```
- Simplified loop.
- Best for directly accessing elements without using the index.

---

**2. forEach Method**
```dart
void main(){
items.forEach((item) {
  print(item);
});
}
```
- Uses a function to apply an operation to each item.
- Clean and concise.

---

**3. Traditional For Loop**
```dart
void main(){
for (int i = 0; i < items.length; i++) {
  print(items[i]);
}
}
```
- Gives access to the index.
- Useful when you need both index and value.

---

**4. While Loop**
```dart
void main(){
int j = 0;
while (j < items.length) {
  print(items[j]);
  j++;
}
}
```
- Useful for cases when loop continuation depends on conditions.

---

**5. Do-While Loop**
```dart
void main(){
int k = 0;
do {
  print(items[k]);
  k++;
} while (k < items.length);
}
```
- Similar to while loop but guarantees the loop runs at least once.

---

**Summary Table**
| Loop Type         | Index Access | Clean Syntax | Condition Controlled |
|-------------------|--------------|--------------|----------------------|
| For-in Loop       | No           | Yes          | No                   |
| forEach           | No           | Yes          | No                   |
| Traditional For   | Yes          | Medium       | Yes                  |
| While Loop        | Yes          | Medium       | Yes                  |
| Do-While Loop     | Yes          | Medium       | Yes (at least once)  |


---

# List``<T>`` Methods

- `List<T>` is one of the most commonly used collections in Dart.
- It allows you to create, modify, and manipulate ordered data in a very flexible way.
- Dart provides many useful methods and properties for working with lists, such as adding, removing, and checking elements.
- Lists in Dart are growable, mutable, and indexed, making them a powerful tool for handling data.

## Method
Here is the updated table with the outputs added for each `List<T>` method:

| **#** | **Method**     | **Example in Code**                             | **Output**                        |
|-------|----------------|-------------------------------------------------|-----------------------------------|
| 1     | length         | `list.length`                                   | `3`                               |
| 2     | reversed       | `list.reversed.toList()`                        | `[3, 2, 1]`                       |
| 3     | first          | `list.first`                                    | `1`                               |
| 4     | hashCode       | `list.hashCode`                                 | `(Some hash code integer)`       |
| 5     | isEmpty        | `list.isEmpty`                                  | `false`                           |
| 6     | isNotEmpty     | `list.isNotEmpty`                               | `true`                            |
| 7     | iterator       | `var iterator = list.iterator; while (iterator.moveNext()) { print(iterator.current); }` | `1 2 3`                           |
| 8     | last           | `list.last`                                     | `3`                               |
| 9     | runtimeType    | `list.runtimeType`                              | `List<int>`                       |
| 10    | single         | `list.single`                                   | `1` (Note: single list with one element) |
| 11    | firstOrNull    | `list.firstOrNull`                              | `1`                               |
| 12    | indexed        | `list.indexed.forEach((index, value) => print('$index: $value'))` | `0: 1 1: 2 2: 3`                |
| 13    | lastOrNull     | `list.lastOrNull`                               | `3`                               |
| 14    | nonNulls       | `list.nonNulls`                                 | `[1, 2, 3]`                       |
| 15    | singleOrNull   | `list.singleOrNull`                             | `1` (Note: single element list)  |
| 16    | add()          | `list.add(4)`                                   | `list = [1, 2, 3, 4]`            |
| 17    | addAll()       | `list.addAll([5, 6])`                           | `list = [1, 2, 3, 5, 6]`         |
| 18    | any()          | `list.any((e) => e > 2)`                        | `true`                            |
| 19    | asMap()        | `list.asMap()`                                  | `{0: 1, 1: 2, 2: 3}`             |
| 20    | cast()         | `list.cast<double>()`                           | `[1.0, 2.0, 3.0]`                |
| 21    | clear()        | `list.clear()`                                  | `list = []`                       |
| 22    | contains()     | `list.contains(2)`                              | `true`                            |
| 23    | elementAt()    | `list.elementAt(1)`                             | `2`                               |
| 24    | elementAtOrNull() | `list.elementAtOrNull(2)`                    | `3`                               |
| 25    | every()        | `list.every((e) => e > 0)`                      | `true`                            |
| 26    | expand()       | `list.expand((e) => [e, e * 2])`                | `[1, 2, 2, 4, 3, 6]`             |
| 27    | fillRange()    | `list.fillRange(1, 3, 0)`                       | `list = [1, 0, 0]`               |
| 28    | firstWhere()   | `list.firstWhere((e) => e > 1)`                 | `2`                               |
| 29    | fold()         | `list.fold(0, (prev, element) => prev + element)` | `6`                             |
| 30    | followedBy()   | `list.followedBy([4, 5])`                       | `[1, 2, 3, 4, 5]`                |
| 31    | forEach()      | `list.forEach((e) => print(e))`                  | `1 2 3`                           |
| 32    | getRange()     | `list.getRange(1, 3).toList()`                  | `[2, 3]`                          |
| 33    | indexOf()      | `list.indexOf(2)`                               | `1`                               |
| 34    | indexWhere()   | `list.indexWhere((e) => e > 1)`                 | `1`                               |
| 35    | insert()       | `list.insert(1, 4)`                             | `list = [1, 4, 2, 3]`            |
| 36    | insertAll()    | `list.insertAll(1, [5, 6])`                     | `list = [1, 5, 6, 4, 2, 3]`      |
| 37    | join()         | `list.join(', ')`                               | `1, 5, 6, 4, 2, 3`               |
| 38    | lastIndexOf()  | `list.lastIndexOf(2)`                           | `4`                               |
| 39    | lastIndexWhere() | `list.lastIndexWhere((e) => e > 1)`           | `4`                               |
| 40    | lastWhere()    | `list.lastWhere((e) => e > 1)`                  | `3`                               |
| 41    | map()          | `list.map((e) => e * 2).toList()`                | `[2, 10, 12, 8, 4, 6]`           |
| 42    | reduce()       | `list.reduce((a, b) => a + b)`                  | `21`                              |
| 43    | remove()       | `list.remove(2)`                                | `list = [1, 5, 6, 4, 3]`         |
| 44    | removeAt()     | `list.removeAt(1)`                              | `list = [1, 6, 4, 3]`            |
| 45    | removeLast()   | `list.removeLast()`                             | `list = [1, 6, 4]`               |
| 46    | removeRange()  | `list.removeRange(1, 3)`                        | `list = [1]`                     |
| 47    | removeWhere()  | `list.removeWhere((e) => e > 1)`                | `list = []`                      |
| 48    | replaceRange() | `list.replaceRange(0, 0, [8, 9])`                | `list = [8, 9]`                  |
| 49    | retainWhere()  | `list.retainWhere((e) => e > 5)`                | `list = [8, 9]`                  |
| 50    | setAll()       | `list.setAll(1, [10, 11])`                      | `list = [8, 10, 11]`             |
| 51    | setRange()     | `list.setRange(0, 1, [12, 13])`                 | `list = [12, 13, 11]`            |
| 52    | shuffle()      | `list.shuffle()`                                | `list = [randomized list]`       |
| 53    | singleWhere()  | `list.singleWhere((e) => e == 2)`               | `2`                               |
| 54    | skip()         | `list.skip(1).toList()`                         | `[6, 4, 3]`                      |
| 55    | skipWhile()    | `list.skipWhile((e) => e < 6).toList()`          | `[6, 4, 3]`                      |
| 56    | sort()         | `list.sort()`                                   | `list = [1, 2, 3]`               |
| 57    | sublist()      | `list.sublist(1, 3)`                            | `[2, 3]`                         |
| 58    | take()         | `list.take(2).toList()`                         | `[1, 2]`                         |
| 59    | takeWhile()    | `list.takeWhile((e) => e < 3).toList()`          | `[1, 2]`                         |
| 60    | toList()       | `list.toList()`                                 | `[1, 2, 3]`                      |
| 61    | toSet()        | `list.toSet()`                                  | `{1, 2, 3}`                      |
| 62    | toString()     | `list.toString()`                               | `[1, 2, 3]`                      |
| 63    | where()        | `list.where((e) => e > 1).toList()`             | `[2, 3]`                         |
| 64    | whereType()    | `list.whereType<int>().toList()`                | `[1, 2, 3]`                      |

Each method is explained, and the output for the example is provided. If you'd like more detailed examples or variations on any of these, feel free to ask!
Here’s an explanation of each `List<T>` method in Dart, with examples and expected outputs:

### 1. **length**
   Returns the number of elements in the list.
   ```dart
   var list = [1, 2, 3];
   print(list.length);  // Output: 3
   ```

### 2. **reversed**
   Returns an iterable that iterates over the list in reverse order.
   ```dart
   var list = [1, 2, 3];
   print(list.reversed.toList());  // Output: [3, 2, 1]
   ```

### 3. **first**
   Returns the first element of the list.
   ```dart
   var list = [1, 2, 3];
   print(list.first);  // Output: 1
   ```

### 4. **hashCode**
   Returns a hash code for the list.
   ```dart
   var list = [1, 2, 3];
   print(list.hashCode);  // Output: Some integer value (hash code)
   ```

### 5. **isEmpty**
   Returns `true` if the list is empty, otherwise `false`.
   ```dart
   var list = [];
   print(list.isEmpty);  // Output: true
   ```

### 6. **isNotEmpty**
   Returns `true` if the list is not empty, otherwise `false`.
   ```dart
   var list = [1, 2, 3];
   print(list.isNotEmpty);  // Output: true
   ```

### 7. **iterator**
   Returns an iterator that can be used to traverse the list.
   ```dart
   var list = [1, 2, 3];
   var iterator = list.iterator;
   while (iterator.moveNext()) {
     print(iterator.current);  // Output: 1 2 3
   }
   ```

### 8. **last**
   Returns the last element of the list.
   ```dart
   var list = [1, 2, 3];
   print(list.last);  // Output: 3
   ```

### 9. **runtimeType**
   Returns the runtime type of the list.
   ```dart
   var list = [1, 2, 3];
   print(list.runtimeType);  // Output: List<int>
   ```

### 10. **single**
   Returns the only element in the list if the list contains exactly one element, otherwise throws an exception.
   ```dart
   var list = [1];
   print(list.single);  // Output: 1
   ```

### 11. **firstOrNull**
   Returns the first element, or `null` if the list is empty.
   ```dart
   var list = [];
   print(list.firstOrNull);  // Output: null
   ```

### 12. **indexed**
   Returns an iterable of indexed elements (index-value pairs).
   ```dart
   var list = ['a', 'b', 'c'];
   list.indexed.forEach((index, value) {
     print('$index: $value');  // Output: 0: a 1: b 2: c
   });
   ```

### 13. **lastOrNull**
   Returns the last element, or `null` if the list is empty.
   ```dart
   var list = [];
   print(list.lastOrNull);  // Output: null
   ```

### 14. **nonNulls**
   Returns a new list with all null values removed.
   ```dart
   var list = [1, null, 2];
   print(list.nonNulls);  // Output: [1, 2]
   ```

### 15. **singleOrNull**
   Returns the only element if the list contains exactly one element, otherwise returns `null`.
   ```dart
   var list = [1];
   print(list.singleOrNull);  // Output: 1
   ```

### 16. **add()**
   Adds an element to the end of the list.
   ```dart
   var list = [1, 2];
   list.add(3);
   print(list);  // Output: [1, 2, 3]
   ```

### 17. **addAll()**
   Adds all elements from another iterable to the list.
   ```dart
   var list = [1, 2];
   list.addAll([3, 4]);
   print(list);  // Output: [1, 2, 3, 4]
   ```

### 18. **any()**
   Returns `true` if any element satisfies the condition.
   ```dart
   var list = [1, 2, 3];
   print(list.any((e) => e > 2));  // Output: true
   ```

### 19. **asMap()**
   Converts the list into a map with index as the key and element as the value.
   ```dart
   var list = ['a', 'b'];
   print(list.asMap());  // Output: {0: a, 1: b}
   ```

### 20. **cast()**
   Casts the elements of the list to another type.
   ```dart
   var list = [1, 2, 3];
   var castedList = list.cast<double>();
   print(castedList);  // Output: [1.0, 2.0, 3.0]
   ```

### 21. **clear()**
   Removes all elements from the list.
   ```dart
   var list = [1, 2, 3];
   list.clear();
   print(list);  // Output: []
   ```

### 22. **contains()**
   Returns `true` if the list contains the specified element.
   ```dart
   var list = [1, 2, 3];
   print(list.contains(2));  // Output: true
   ```

### 23. **elementAt()**
   Returns the element at the specified index.
   ```dart
   var list = [1, 2, 3];
   print(list.elementAt(1));  // Output: 2
   ```

### 24. **elementAtOrNull()**
   Returns the element at the specified index or `null` if the index is out of range.
   ```dart
   var list = [1, 2, 3];
   print(list.elementAtOrNull(5));  // Output: null
   ```

### 25. **every()**
   Returns `true` if every element satisfies the given condition.
   ```dart
   var list = [2, 4, 6];
   print(list.every((e) => e % 2 == 0));  // Output: true
   ```

### 26. **expand()**
   Expands each element into an iterable of the given elements.
   ```dart
   var list = [1, 2];
   var expandedList = list.expand((e) => [e, e * 2]);
   print(expandedList.toList());  // Output: [1, 2, 2, 4]
   ```

### 27. **fillRange()**
   Fills the list with the given value between the specified range.
   ```dart
   var list = [1, 2, 3];
   list.fillRange(1, 2, 5);
   print(list);  // Output: [1, 5, 3]
   ```

### 28. **firstWhere()**
   Returns the first element that satisfies the condition.
   ```dart
   var list = [1, 2, 3];
   print(list.firstWhere((e) => e > 1));  // Output: 2
   ```

### 29. **fold()**
   Combines the elements by iteratively applying a function.
   ```dart
   var list = [1, 2, 3];
   var result = list.fold(0, (prev, element) => prev + element);
   print(result);  // Output: 6
   ```

### 30. **followedBy()**
   Returns a new iterable by appending another iterable.
   ```dart
   var list = [1, 2];
   var result = list.followedBy([3, 4]);
   print(result.toList());  // Output: [1, 2, 3, 4]
   ```

### 31. **forEach()**
   Executes a function on each element in the list.
   ```dart
   var list = [1, 2, 3];
   list.forEach((e) => print(e));  // Output: 1 2 3
   ```

### 32. **getRange()**
   Returns a list of elements in the specified range.
   ```dart
   var list = [1, 2, 3, 4, 5];
   print(list.getRange(1, 3).toList());  // Output: [2, 3]
   ```

### 33. **indexOf()**
   Returns the index of the first occurrence of an element.
   ```dart
   var list = [1, 2, 3];
   print(list.indexOf(2));  // Output: 1
   ```

### 34. **indexWhere()**
   Returns the index of the first element satisfying the condition.
   ```dart
   var list = [1, 2, 3];
   print(list.indexWhere((e) => e > 1));  // Output: 1
   ```

### 35. **insert()**
   Inserts an element at the specified index.
   ```dart
   var list = [1, 2];
   list.insert(1, 3);
   print(list);  // Output: [1, 3, 2]
   ```

### 36. **insertAll()**
   Inserts all elements from an iterable at the specified index.
   ```dart
   var list = [1, 2];
   list.insertAll(1, [3, 4]);
   print(list);  // Output: [1, 3, 4, 2]
   ```

### 37. **join()**
   Joins the elements of the list into a string.
   ```dart
   var list = ['a', 'b', 'c'];
   print(list.join(', '));  // Output: "a, b, c"
   ```

### 38. **lastIndexOf()**
   Returns the last index of the specified element.
   ```dart
   var list = [1, 2, 2, 3];
   print(list.lastIndexOf(2));  // Output: 2
   ```

### 39. **lastIndexWhere()**
   Returns the index of the last element that satisfies the condition.
   ```dart
   var list = [1, 2, 3];
   print(list.lastIndexWhere((e) => e > 1));  // Output: 2
   ```

### 40. **lastWhere()**
   Returns the last element that satisfies the condition.
   ```dart
   var list = [1, 2, 3];
   print(list.lastWhere((e) => e > 1));  // Output: 3
   ```

### 41. **map()**
   Returns a new iterable by transforming each element using a function.
   ```dart
   var list = [1, 2, 3];
   var mapped = list.map((e) => e * 2);
   print(mapped.toList());  // Output: [2, 4, 6]
   ```

### 42. **reduce()**
   Reduces the list to a single value by combining elements.
   ```dart
   var list = [1, 2, 3];
   var result = list.reduce((a, b) => a + b);
   print(result);  // Output: 6
   ```

### 43. **remove()**
   Removes the first occurrence of the specified element.
   ```dart
   var list = [1, 2, 3];
   list.remove(2);
   print(list);  // Output: [1, 3]
   ```

### 44. **removeAt()**
   Removes the element at the specified index.
   ```dart
   var list = [1, 2, 3];
   list.removeAt(1);
   print(list);  // Output: [1, 3]
   ```

### 45. **removeLast()**
   Removes the last element from the list.
   ```dart
   var list = [1, 2, 3];
   list.removeLast();
   print(list);  // Output: [1, 2]
   ```

### 46. **removeRange()**
   Removes elements in the specified range.
   ```dart
   var list = [1, 2, 3, 4];
   list.removeRange(1, 3);
   print(list);  // Output: [1, 4]
   ```

### 47. **removeWhere()**
   Removes all elements that satisfy the condition.
   ```dart
   var list = [1, 2, 3];
   list.removeWhere((e) => e > 1);
   print(list);  // Output: [1]
   ```

### 48. **replaceRange()**
   Replaces elements in the specified range with the given iterable.
   ```dart
   var list = [1, 2, 3, 4];
   list.replaceRange(1, 3, [5, 6]);
   print(list);  // Output: [1, 5, 6, 4]
   ```

### 49. **retainWhere()**
   Retains only the elements that satisfy the condition.
   ```dart
   var list = [1, 2, 3];
   list.retainWhere((e) => e > 1);
   print(list);  // Output: [2, 3]
   ```

### 50. **setAll()**
   Replaces a range of elements with the corresponding elements from another iterable.
   ```dart
   var list = [1, 2, 3, 4];
   list.setAll(1, [5, 6]);
   print(list);  // Output: [1, 5, 6, 4]
   ```

### 51. **setRange()**
   Replaces elements in a specified range with elements from another iterable.
   ```dart
   var list = [1, 2, 3, 4];
   list.setRange(1, 3, [5, 6]);
   print(list);  // Output: [1, 5, 6, 4]
   ```

### 52. **shuffle()**
   Randomly shuffles the elements of the list.
   ```dart
   var list = [1, 2, 3];
   list.shuffle();
   print(list);  // Output: Randomly shuffled list like [3, 1, 2]
   ```

### 53. **singleWhere()**
   Returns the single element that satisfies the condition.
   ```dart
   var list = [1, 2, 3];
   print(list.singleWhere((e) => e == 2));  // Output: 2
   ```

### 54. **skip()**
   Skips the first `n` elements of the list.
   ```dart
   var list = [1, 2, 3];
   print(list.skip(1).toList());  // Output: [2, 3]
   ```

### 55. **skipWhile()**
   Skips elements as long as they satisfy the condition.
   ```dart
   var list = [1, 2, 3];
   print(list.skipWhile((e) => e < 2).toList());  // Output: [2, 3]
   ```

### 56. **sort()**
   Sorts the list.
   ```dart
   var list = [3, 1, 2];
   list.sort();
   print(list);  // Output: [1, 2, 3]
   ```

### 57. **sublist()**
   Returns a new list containing the elements in the specified range.
   ```dart
   var list = [1, 2, 3, 4];
   print(list.sublist(1, 3));  // Output: [2, 3]
   ```

### 58. **take()**
   Returns the first `n` elements.
   ```dart
   var list = [1, 2, 3];
   print(list.take(2).toList());  // Output: [1, 2]
   ```

### 59. **takeWhile()**
   Takes elements as long as they satisfy the condition.
   ```dart
   var list = [1, 2, 3];
   print(list.takeWhile((e) => e < 3).toList());  // Output: [1, 2]
   ```

### 60. **toList()**
   Converts the iterable into a list.
   ```dart
   var list = [1, 2, 3];
   print(list.toList());  // Output: [1, 2, 3]
   ```

### 61. **toSet()**
   Converts the list into a set, removing duplicates.
   ```dart
   var list = [1, 2, 2, 3];
   print(list.toSet());  // Output: {1, 2, 3}
   ```

### 62. **toString()**
   Returns a string representation of the list.
   ```dart
   var list = [1, 2, 3];
   print(list.toString());  // Output: [1, 2, 3]
   ```

### 63. **where()**
   Filters the list by a condition and returns the elements that satisfy it.
   ```dart
   var list = [1, 2, 3];
   print(list.where((e) => e > 1).toList());  // Output: [2, 3]
   ```

### 64. **whereType()**
   Filters elements by their type.
   ```dart
   var list = [1, 'a', 2];
   print(list.whereType<int>().toList());  // Output: [1, 2]
   ```

### 65. **noSuchMethod()**
   Called when a method that doesn't exist is invoked on a list. Typically used for reflection or debugging.

   This is a special case in Dart and not commonly used with standard lists.

## Class Constructor
Certainly! Let's delve deeper into the methods and constructors of Dart's `List` class that you've mentioned, providing clear explanations and valid examples for each.

---

### 1. `castFrom()`

- **Purpose**: Converts a list of one type to a list of another type, ensuring type safety.
- **Use Case**: When you have a list of a general type and want to treat it as a list of a more specific type.

**Example**:
```dart
void main() {
  List<Object> mixedList = ['Hello', 42, true];
  List<String> stringList = List.castFrom<Object, String>(mixedList);
  print(stringList); // Output: [Hello]
}
```
*Explanation*: Converts `mixedList` to a `List<String>`, filtering out non-`String` elements. 

---

### 2. `copyRange()`

- **Purpose**: Copies a range of elements from one list to another.
- **Use Case**: When you need to duplicate a portion of a list.

**Example**:
```dart
void main() {
  List<int> numbers = [10, 20, 30, 40, 50];
  List<int> subset = List<int>.filled(3, 0);
  List.copyRange(subset, 0, numbers, 1, 4);
  print(subset); // Output: [20, 30, 40]
}
```
*Explanation*: Copies elements from indices 1 to 3 from `numbers` into `subset`. 

---

### 3. `empty()`

- **Purpose**: Creates a new empty list.
- **Use Case**: When you need an empty list that can be modified later.

**Example**:
```dart
void main() {
  List<int> emptyList = List.empty(growable: true);
  emptyList.add(1);
  print(emptyList); // Output: [1]
}
```
*Explanation*: Creates a growable empty list and adds an element to it. 

---

### 4. `filled()`

- **Purpose**: Creates a list of a given length, with all elements initialized to a specified value.
- **Use Case**: When you need a list with a fixed size and default values.

**Example**:
```dart
void main() {
  List<int> zeros = List<int>.filled(5, 0);
  print(zeros); // Output: [0, 0, 0, 0, 0]
}
```
*Explanation*: Creates a list of 5 integers, all set to 0. 

---

### 5. `from()`

- **Purpose**: Creates a list from an existing iterable.
- **Use Case**: To convert any iterable (like a set or another list) into a list.

**Example**:
```dart
void main() {
  Set<int> numberSet = {1, 2, 3};
  List<int> numberList = List<int>.from(numberSet);
  print(numberList); // Output: [1, 2, 3]
}
```
*Explanation*: Converts a set to a list. 

---

### 6. `generate()`

- **Purpose**: Generates a list by computing each element based on its index.
- **Use Case**: When you need a list with elements derived from their positions.

**Example**:
```dart
void main() {
  List<int> squares = List<int>.generate(5, (index) => index * index);
  print(squares); // Output: [0, 1, 4, 9, 16]
}
```
*Explanation*: Creates a list of squares of numbers from 0 to 4.

---

### 7. `of()`

- **Purpose**: Creates a list from an existing iterable.
- **Use Case**: Similar to `from()`, used to convert any iterable into a list.

**Example**:
```dart
void main() {
  Iterable<int> iterableNumbers = [1, 2, 3];
  List<int> numbersList = List<int>.of(iterableNumbers);
  print(numbersList); // Output: [1, 2, 3]
}
```
*Explanation*: Converts an iterable to a list.

---

### 8. `unmodifiable()`

- **Purpose**: Creates an unmodifiable (immutable) view of the list.
- **Use Case**: To prevent modification of the list's contents.

**Example**:
```dart
void main() {
  List<int> numbers = [1, 2, 3];
  var unmodifiableNumbers = List.unmodifiable(numbers);
  print(unmodifiableNumbers); // Output: [1, 2, 3]
  // unmodifiableNumbers.add(4); // This will throw an UnsupportedError
}
```
*Explanation*: Attempts to modify `unmodifiableNumbers` will result in an error.

---

### 9. `writeIterable()`

- **Purpose**: Converts an iterable to a list, allowing for modification.
- **Use Case**: When you need a mutable list from an existing iterable.

**Example**:
```dart
void main() {
  Iterable<int> iterableNumbers = [1, 2, 3];
  List<int> numbersList = List<int>.from(iterableNumbers);
  numbersList.add(4);
  print(numbersList); // Output: [1, 2, 3, 4]
}
```
*Explanation*: Converts an iterable to a mutable list and adds an element.



| **Method**        | **Purpose**                                                                 | **Example**                                                                                                                                      |
|-------------------|-----------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| **`castFrom()`**   | Converts a list of one type to a list of another type.                       | ```dart<br>List<Object> mixedList = ['Hello', 42, true];<br>List<String> stringList = List<String>.from(mixedList.whereType<String>());<br>print(stringList);  // Output: [Hello]``` |
| **`copyRange()`**  | Copies a range of elements from one list to another.                         | ```dart<br>List<int> numbers = [10, 20, 30, 40, 50];<br>List<int> subset = List<int>.filled(3, 0);<br>List.copyRange(subset, 0, numbers, 1, 4);<br>print(subset);  // Output: [20, 30, 40]``` |
| **`empty()`**      | Creates a new empty list.                                                   | ```dart<br>List<int> emptyList = List.empty(growable: true);<br>emptyList.add(1);<br>print(emptyList);  // Output: [1]```  |
| **`filled()`**     | Creates a list of a given length, with all elements initialized to a specified value. | ```dart<br>List<int> zeros = List<int>.filled(5, 0);<br>print(zeros);  // Output: [0, 0, 0, 0, 0]``` |
| **`from()`**       | Creates a list from an existing iterable.                                    | ```dart<br>Set<int> numberSet = {1, 2, 3};<br>List<int> numberList = List<int>.from(numberSet);<br>print(numberList);  // Output: [1, 2, 3]``` |
| **`generate()`**   | Generates a list by computing each element based on its index.              | ```dart<br>List<int> squares = List<int>.generate(5, (index) => index * index);<br>print(squares);  // Output: [0, 1, 4, 9, 16]``` |
| **`of()`**         | Creates a list from an existing iterable.                                    | ```dart<br>Iterable<int> iterableNumbers = [1, 2, 3];<br>List<int> numbersList = List<int>.of(iterableNumbers);<br>print(numbersList);  // Output: [1, 2, 3]``` |
| **`unmodifiable()`** | Creates an unmodifiable (immutable) view of the list.                       | ```dart<br>List<int> numbers = [1, 2, 3];<br>var unmodifiableNumbers = List.unmodifiable(numbers);<br>print(unmodifiableNumbers);  // Output: [1, 2, 3]<br>// unmodifiableNumbers.add(4); // Throws UnsupportedError``` |
| **`writeIterable()`** | Converts an iterable to a mutable list.                                    | ```dart<br>Iterable<int> iterableNumbers = [1, 2, 3];<br>List<int> numbersList = List<int>.from(iterableNumbers);<br>numbersList.add(4);<br>print(numbersList);  // Output: [1, 2, 3, 4]``` |

---
**Additional Notes**:

- **Fixed-Length vs. Growable Lists**:
  - **Fixed-Length Lists**: Cannot change their size after creation.
  - **Growable Lists**: Can have elements added or removed.

- **Common Operations**:
  - **Adding Elements**: Use `add()`, `addAll()`, or `insert()`.
  - **Removing Elements**: Use `remove()`, `removeAt()`, or `clear()`.
  - **Accessing Elements**: Use index notation (`list[index]`).

- **Iteration**:
  - Use `for` loops, `for-in` loops, or the `forEach` method to iterate over list elements.


<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Runes" style="float: left;">⬅️ Runs</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/README.md">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Sets" style="float: right;"> Sets ➡️</a>
</p>