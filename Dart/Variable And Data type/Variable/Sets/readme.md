In Dart, a **Set** is an unordered collection of unique items. It's similar to a list, but it doesn’t allow duplicate values. Here's a quick guide to help you get started with sets in Dart:

### 1. Creating a Set
You can create a set using the `Set` constructor or with a set literal.

#### Using the `Set` constructor:
```dart
void main() {
  Set<int> numbers = Set();
  numbers.add(1);
  numbers.add(2);
  numbers.add(3);

  print(numbers);  // Output: {1, 2, 3}
}
```

#### Using a set literal:
```dart
void main() {
  Set<String> fruits = {'Apple', 'Banana', 'Orange'};
  
  print(fruits);  // Output: {Apple, Banana, Orange}
}
```

### 2. Adding Elements
You can add elements to a set using the `add()` method:
```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  numbers.add(4);  // Adding an element
  print(numbers);  // Output: {1, 2, 3, 4}
}
```

### 3. Removing Elements
Use the `remove()` method to remove an element from the set.
```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  numbers.remove(2);  // Removing element 2
  print(numbers);  // Output: {1, 3}
}
```

### 4. Checking if an Element Exists
To check if an element exists in the set, use the `contains()` method.
```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.contains(2));  // Output: true
  print(numbers.contains(4));  // Output: false
}
```

### 5. Iterating Over a Set
You can use a `for` loop or `forEach` to iterate over a set:
```dart
void main() {
  Set<int> numbers = {1, 2, 3, 4};
  
  // Using forEach:
  numbers.forEach((element) {
    print(element);
  });
  
  // Using a for loop:
  for (var number in numbers) {
    print(number);
  }
}
```

### 6. Set Operations
Dart supports common set operations such as union, intersection, and difference.

#### Union (`union`)
```dart
void main() {
  Set<int> set1 = {1, 2, 3};
  Set<int> set2 = {3, 4, 5};
  
  Set<int> result = set1.union(set2);
  print(result);  // Output: {1, 2, 3, 4, 5}
}
```

#### Intersection (`intersection`)
```dart
void main() {
  Set<int> set1 = {1, 2, 3};
  Set<int> set2 = {2, 3, 4};
  
  Set<int> result = set1.intersection(set2);
  print(result);  // Output: {2, 3}
}
```

#### Difference (`difference`)
```dart
void main() {
  Set<int> set1 = {1, 2, 3};
  Set<int> set2 = {2, 3, 4};
  
  Set<int> result = set1.difference(set2);
  print(result);  // Output: {1}
}
```

## Method

Sure! Here’s a table summarizing the Dart Set methods, their examples, and their outputs.

| **No.** | **Method**        | **Example**                                                                                                                                         | **Output**                                    |
|---------|-------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------|
| 1       | `add()`           | `Set<int> numbers = {1, 2}; numbers.add(3); print(numbers);`                                                                                        | `{1, 2, 3}`                                   |
| 2       | `addAll()`        | `Set<int> numbers = {1, 2}; numbers.addAll([3, 4]); print(numbers);`                                                                                | `{1, 2, 3, 4}`                                |
| 3       | `any()`           | `Set<int> numbers = {1, 2, 3}; bool result = numbers.any((num) => num > 2); print(result);`                                                      | `true`                                        |
| 4       | `cast()`          | `Set<Object> mixedSet = {1, 'hello', 2}; Set<String> stringSet = mixedSet.cast<String>(); print(stringSet);`                                       | `{'hello'}`                                   |
| 5       | `clear()`         | `Set<int> numbers = {1, 2, 3}; numbers.clear(); print(numbers);`                                                                                   | `{}`                                          |
| 6       | `contains()`      | `Set<int> numbers = {1, 2, 3}; print(numbers.contains(2));`                                                                                       | `true`                                        |
| 7       | `containsAll()`   | `Set<int> numbers = {1, 2, 3}; print(numbers.containsAll([1, 2]));`                                                                               | `true`                                        |
| 8       | `difference()`    | `Set<int> set1 = {1, 2, 3}; Set<int> set2 = {2, 3, 4}; print(set1.difference(set2));`                                                              | `{1}`                                         |
| 9       | `elementAt()`     | `Set<int> numbers = {1, 2, 3}; print(numbers.elementAt(1));`                                                                                      | `2`                                           |
| 10      | `elementAtOrNull()` | `Set<int> numbers = {1, 2, 3}; print(numbers.elementAtOrNull(5));`                                                                                 | `null`                                        |
| 11      | `every()`         | `Set<int> numbers = {2, 4, 6}; bool result = numbers.every((num) => num.isEven); print(result);`                                                   | `true`                                        |
| 12      | `expand()`        | `Set<int> numbers = {1, 2}; var expanded = numbers.expand((n) => [n, n * 2]); print(expanded.toList());`                                          | `[1, 2, 2, 4]`                               |
| 13      | `first()`         | `Set<int> numbers = {1, 2, 3}; print(numbers.first);`                                                                                             | `1`                                           |
| 14      | `firstOrNull()`   | `Set<int> numbers = {}; print(numbers.firstOrNull);`                                                                                              | `null`                                        |
| 15      | `firstWhere()`    | `Set<int> numbers = {1, 2, 3}; var result = numbers.firstWhere((num) => num > 2); print(result);`                                                 | `3`                                           |
| 16      | `fold()`          | `Set<int> numbers = {1, 2, 3}; int sum = numbers.fold(0, (acc, num) => acc + num); print(sum);`                                                   | `6`                                           |
| 17      | `followedBy()`    | `Set<int> numbers = {1, 2}; var combined = numbers.followedBy([3, 4]); print(combined.toList());`                                                | `[1, 2, 3, 4]`                               |
| 18      | `forEach()`       | `Set<int> numbers = {1, 2, 3}; numbers.forEach((num) => print(num));`                                                                               | `1 2 3` (each on a new line)                  |
| 19      | `hashCode`        | `Set<int> numbers = {1, 2, 3}; print(numbers.hashCode);`                                                                                          | (Some hash value)                            |
| 20      | `indexed()`       | `Set<int> numbers = {1, 2, 3}; var indexed = numbers.indexed(); print(indexed.toList());`                                                        | `[(0, 1), (1, 2), (2, 3)]`                   |
| 21      | `intersection()`  | `Set<int> set1 = {1, 2, 3}; Set<int> set2 = {2, 3, 4}; print(set1.intersection(set2));`                                                            | `{2, 3}`                                     |
| 22      | `isEmpty`         | `Set<int> numbers = {1, 2, 3}; print(numbers.isEmpty);`                                                                                            | `false`                                      |
| 23      | `isNotEmpty`      | `Set<int> numbers = {}; print(numbers.isNotEmpty);`                                                                                                | `false`                                      |
| 24      | `iterator`        | `Set<int> numbers = {1, 2, 3}; var iterator = numbers.iterator; while (iterator.moveNext()) { print(iterator.current); }`                           | `1 2 3` (each on a new line)                  |
| 25      | `join()`          | `Set<String> fruits = {'Apple', 'Banana', 'Orange'}; print(fruits.join(', '));`                                                                    | `Apple, Banana, Orange`                      |
| 26      | `last()`          | `Set<int> numbers = {1, 2, 3}; print(numbers.last);`                                                                                             | `3`                                           |
| 27      | `lastOrNull()`    | `Set<int> numbers = {}; print(numbers.lastOrNull);`                                                                                              | `null`                                        |
| 28      | `lastWhere()`     | `Set<int> numbers = {1, 2, 3}; var result = numbers.lastWhere((num) => num < 3); print(result);`                                                  | `2`                                           |
| 29      | `length`          | `Set<int> numbers = {1, 2, 3}; print(numbers.length);`                                                                                           | `3`                                           |
| 30      | `lookup()`        | `Set<int> numbers = {1, 2, 3}; print(numbers.lookup(2));`                                                                                         | `2`                                           |
| 31      | `map()`           | `Set<int> numbers = {1, 2, 3}; var squared = numbers.map((num) => num * num); print(squared.toList());`                                           | `[1, 4, 9]`                                   |
| 32      | `nonNulls()`      | `Set<int?> numbers = {1, null, 2, null}; var nonNull = numbers.nonNull(); print(nonNull);`                                                         | `{1, 2}`                                      |
| 33      | `reduce()`        | `Set<int> numbers = {1, 2, 3}; int sum = numbers.reduce((a, b) => a + b); print(sum);`                                                             | `6`                                           |
| 34      | `remove()`        | `Set<int> numbers = {1, 2, 3}; numbers.remove(2); print(numbers);`                                                                                 | `{1, 3}`                                     |
| 35      | `removeAll()`     | `Set<int> numbers = {1, 2, 3}; numbers.removeAll([2, 3]); print(numbers);`                                                                          | `{1}`                                         |
| 36      | `removeWhere()`   | `Set<int> numbers = {1, 2, 3, 4}; numbers.removeWhere((num) => num > 2); print(numbers);`                                                          | `{1, 2}`                                     |
| 37      | `retainAll()`     | `Set<int> numbers = {1, 2, 3}; numbers.retainAll([2, 3, 4]); print(numbers);`                                                                      | `{2, 3}`                                     |
| 38      | `retainWhere()`   | `Set<int> numbers = {1, 2, 3}; numbers.retainWhere((num) => num > 1); print(numbers);`                                                              | `{2, 3}`                                     |
| 39      | `runtimeType`     | `Set<int> numbers = {1, 2, 3}; print(numbers.runtimeType);`                                                                                        | `_CompactLinkedHashSet<int>`                 |
| 40      | `single()`        | `Set<int> numbers = {1}; print(numbers.single);`                                                                                                  | `1`                                           |
| 41      | `singleOrNull()`  | `Set<int> numbers = {1}; print(numbers.singleOrNull);`                                                                                             | `1`                                           |
| 42      | `singleWhere()`   | `Set<int> numbers = {1, 2, 3}; var result = numbers.singleWhere((num) => num == 2); print(result);`                                                 | `2`                                           |
| 43      | `skip()`          | `Set<int> numbers = {1, 2, 3, 4}; var skipped = numbers.skip(2); print(skipped.toList());`                                                          | `[3, 4]`                                     |
| 44      | `skipWhile()`     | `Set<int> numbers = {1, 2, 3, 4}; var skipped = numbers.skipWhile((num) => num < 3); print(skipped.toList());`                                      | `[3, 4]`                                     |
| 45      | `take()`          | `Set<int> numbers = {1, 2, 3, 4}; var taken = numbers.take(2); print(taken.toList());`                                                              | `[1, 2]`                                     |
| 46      | `takeWhile()`     | `Set<int> numbers = {1, 2, 3, 4}; var taken = numbers.takeWhile((num) => num < 3); print(taken.toList());`                                          | `[1, 2]`                                     |
| 47      | `toList()`        | `Set<int> numbers = {1, 2, 3}; print(numbers.toList());`                                                                                           | `[1, 2, 3]`                                  |
| 49      | `toSet()`         | `List<int> numbers = [1, 2, 3, 4]; Set<int> numberSet = numbers.toSet(); print(numberSet);`                                                         | `{1, 2, 3, 4}`                                |
| 50      | `toString()`      | `Set<int> numbers = {1, 2, 3}; print(numbers.toString());`                                                                                        | `{1, 2, 3}`                                   |
| 51      | `union()`         | `Set<int> set1 = {1, 2, 3}; Set<int> set2 = {3, 4, 5}; print(set1.union(set2));`                                                                    | `{1, 2, 3, 4, 5}`                             |
| 52      | `where()`         | `Set<int> numbers = {1, 2, 3, 4}; var evenNumbers = numbers.where((num) => num.isEven); print(evenNumbers.toList());`                              | `[2, 4]`                                      |
| 53      | `whereType()`     | `Set<Object> mixedSet = {1, 'hello', 2, 3.5}; var intSet = mixedSet.whereType<int>(); print(intSet.toList());`                                      | `[1, 2]`                                      |

Let me know if you need any further explanation!

Here's an explanation of various **Set** methods in Dart with examples and expected outputs. This list includes a wide range of operations that you can perform on a Dart `Set`.

### 1. `add()`
Adds a single element to the set if it is not already present.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  numbers.add(4);
  print(numbers);  // Output: {1, 2, 3, 4}
}
```

### 2. `addAll()`
Adds multiple elements to the set.

```dart
void main() {
  Set<int> numbers = {1, 2};
  numbers.addAll([3, 4]);
  print(numbers);  // Output: {1, 2, 3, 4}
}
```

### 3. `any()`
Returns `true` if at least one element in the set satisfies the provided condition.

```dart
void main() {
  Set<int> numbers = {1, 2, 3, 4};
  bool result = numbers.any((num) => num > 2);
  print(result);  // Output: true
}
```

### 4. `cast()`
Casts the set to another type (e.g., from `Set<Object>` to `Set<String>`).

```dart
void main() {
  Set<Object> mixedSet = {1, 'hello', 2};
  Set<String> stringSet = mixedSet.cast<String>();
  print(stringSet);  // Output: {'hello'}
}
```

### 5. `clear()`
Removes all elements from the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  numbers.clear();
  print(numbers);  // Output: {}
}
```

### 6. `contains()`
Checks if the set contains a specific element.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.contains(2));  // Output: true
}
```

### 7. `containsAll()`
Checks if all elements of another collection are present in the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.containsAll([1, 2]));  // Output: true
}
```

### 8. `difference()`
Returns a new set with the elements that are in the set but not in the provided set.

```dart
void main() {
  Set<int> set1 = {1, 2, 3};
  Set<int> set2 = {2, 3, 4};
  print(set1.difference(set2));  // Output: {1}
}
```

### 9. `elementAt()`
Returns the element at the specified index. Note: Sets are unordered, so the order of elements may not be the same each time.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.elementAt(1));  // Output: 2 (or another value depending on the set's internal order)
}
```

### 10. `elementAtOrNull()`
Returns the element at the specified index or `null` if the index is out of range.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.elementAtOrNull(5));  // Output: null
}
```

### 11. `every()`
Returns `true` if every element in the set satisfies the provided condition.

```dart
void main() {
  Set<int> numbers = {2, 4, 6};
  bool result = numbers.every((num) => num.isEven);
  print(result);  // Output: true
}
```

### 12. `expand()`
Transforms each element into an iterable and flattens the result.

```dart
void main() {
  Set<int> numbers = {1, 2};
  var expanded = numbers.expand((n) => [n, n * 2]);
  print(expanded.toList());  // Output: [1, 2, 2, 4]
}
```

### 13. `first()`
Returns the first element in the set (sets are unordered).

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.first);  // Output: 1 (or another value depending on internal order)
}
```

### 14. `firstOrNull()`
Returns the first element or `null` if the set is empty.

```dart
void main() {
  Set<int> numbers = {};
  print(numbers.firstOrNull);  // Output: null
}
```

### 15. `firstWhere()`
Returns the first element that satisfies the condition.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  var result = numbers.firstWhere((num) => num > 2);
  print(result);  // Output: 3
}
```

### 16. `fold()`
Combines all elements in the set using a function that accumulates a result.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  int sum = numbers.fold(0, (acc, num) => acc + num);
  print(sum);  // Output: 6
}
```

### 17. `followedBy()`
Returns a new iterable that concatenates the set with another iterable.

```dart
void main() {
  Set<int> numbers = {1, 2};
  var combined = numbers.followedBy([3, 4]);
  print(combined.toList());  // Output: [1, 2, 3, 4]
}
```

### 18. `forEach()`
Executes a function for each element in the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  numbers.forEach((num) {
    print(num);
  });
  // Output:
  // 1
  // 2
  // 3
}
```

### 19. `hashCode`
Returns a hash code for the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.hashCode);  // Output: a hash code number
}
```

### 20. `indexed()`
Returns an iterable that provides index-value pairs for each element.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  var indexed = numbers.indexed();
  print(indexed.toList());  // Output: [(0, 1), (1, 2), (2, 3)]
}
```

### 21. `intersection()`
Returns a new set with elements common to both sets.

```dart
void main() {
  Set<int> set1 = {1, 2, 3};
  Set<int> set2 = {2, 3, 4};
  print(set1.intersection(set2));  // Output: {2, 3}
}
```

### 22. `isEmpty`
Returns `true` if the set has no elements.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.isEmpty);  // Output: false
}
```

### 23. `isNotEmpty`
Returns `true` if the set has one or more elements.

```dart
void main() {
  Set<int> numbers = {};
  print(numbers.isNotEmpty);  // Output: false
}
```

### 24. `iterator`
Returns an iterator for iterating over the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  var iterator = numbers.iterator;
  while (iterator.moveNext()) {
    print(iterator.current);
  }
  // Output:
  // 1
  // 2
  // 3
}
```

### 25. `join()`
Concatenates all elements into a single string with a separator.

```dart
void main() {
  Set<String> fruits = {'Apple', 'Banana', 'Orange'};
  print(fruits.join(', '));  // Output: Apple, Banana, Orange
}
```

### 26. `last()`
Returns the last element in the set (sets are unordered).

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.last);  // Output: 3 (or another value depending on internal order)
}
```

### 27. `lastOrNull()`
Returns the last element or `null` if the set is empty.

```dart
void main() {
  Set<int> numbers = {};
  print(numbers.lastOrNull);  // Output: null
}
```

### 28. `lastWhere()`
Returns the last element that satisfies the condition.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  var result = numbers.lastWhere((num) => num < 3);
  print(result);  // Output: 2
}
```

### 29. `length`
Returns the number of elements in the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.length);  // Output: 3
}
```

### 30. `lookup()`
Returns the element that matches the provided value or `null` if not found.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.lookup(2));  // Output: 2
}
```

### 31. `map()`
Transforms each element of the set using a provided function.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  var squared = numbers.map((num) => num * num);
  print(squared.toList());  // Output: [1, 4, 9]
}
```

### 32. `nonNulls()`
Filters out `null` values from the set.

```dart
void main() {
  Set<int?> numbers = {1, null, 2, null};
  var nonNull = numbers.nonNull();
  print(nonNull);  // Output: {1, 2}
}
```

### 33. `reduce()`
Combines all elements in the set using a function, and returns a single value.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  int sum = numbers.reduce((a, b) => a + b);
  print(sum);  // Output: 6
}
```

### 34. `remove()`
Removes a specific element from the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  numbers.remove(2);
  print(numbers);  // Output: {1, 3}
}
```

### 35. `removeAll()`
Removes all elements in the provided collection from the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  numbers.removeAll([2, 3]);
  print(numbers);  // Output: {1}
}
```

### 36. `removeWhere()`
Removes elements that satisfy the given condition.

```dart
void main() {
  Set<int> numbers = {1, 2, 3, 4};
  numbers.removeWhere((num) => num > 2);
  print(numbers);  // Output: {1, 2}
}
```

### 37. `retainAll()`
Retains only the elements that are also in the provided collection.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  numbers.retainAll([2, 3, 4]);
  print(numbers);  // Output: {2, 3}
}
```

### 38. `retainWhere()`
Retains only the elements that satisfy the given condition.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  numbers.retainWhere((num) => num > 1);
  print(numbers);  // Output: {2, 3}
}
```

### 39. `runtimeType`
Returns the runtime type of the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.runtimeType);  // Output: _CompactLinkedHashSet<int>
}
```

### 40. `single()`
Returns the only element in the set. Throws an error if there are multiple or no elements.

```dart
void main() {
  Set<int> numbers = {1};
  print(numbers.single);  // Output: 1
}
```

### 41. `singleOrNull()`
Returns the only element or `null` if the set is empty.

```dart
void main() {
  Set<int> numbers = {1};
  print(numbers.singleOrNull);  // Output: 1
}
```

### 42. `singleWhere()`
Returns the only element that satisfies the condition.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  var result = numbers.singleWhere((num) => num == 2);
  print(result);  // Output: 2
}
```

### 43. `skip()`
Skips the first `n` elements.

```dart
void main() {
  Set<int> numbers = {1, 2, 3, 4};
  var skipped = numbers.skip(2);
  print(skipped.toList());  // Output: [3, 4]
}
```

### 44. `skipWhile()`
Skips elements while the condition is `true`.

```dart
void main() {
  Set<int> numbers = {1, 2, 3, 4};
  var skipped = numbers.skipWhile((num) => num < 3);
  print(skipped.toList());  // Output: [3, 4]
}
```

### 45. `take()`
Takes the first `n` elements.

```dart
void main() {
  Set<int> numbers = {1, 2, 3, 4};
  var taken = numbers.take(2);
  print(taken.toList());  // Output: [1, 2]
}
```

### 46. `takeWhile()`
Takes elements while the condition is `true`.

```dart
void main() {
  Set<int> numbers = {1, 2, 3, 4};
  var taken = numbers.takeWhile((num) => num < 3);
  print(taken.toList());  // Output: [1, 2]
}
```

### 47. `toList()`
Converts the set to a list.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.toList());  // Output: [1, 2, 3]
}
```

### 48. `toSet()`
Converts the iterable to a set.

```dart
void main() {
  List<int> numbers = [1, 2, 3, 1];
  var set = numbers.toSet();
  print(set);  // Output: {1, 2, 3}
}
```

### 49. `toString()`
Returns a string representation of the set.

```dart
void main() {
  Set<int> numbers = {1, 2, 3};
  print(numbers.toString());  // Output: {1, 2, 3}
}
```

### 50. `union()`
Returns a new set that is the union of the set and another set.

```dart
void main() {
  Set<int> set1 = {1, 2};
  Set<int> set2 = {2, 3};
  print(set1.union(set2));  // Output: {1, 2, 3}
}
```

### 51. `where()`
Returns the elements that satisfy a condition.

```dart
void main() {
  Set<int> numbers = {1, 2, 3, 4};
  var result = numbers.where((num) => num > 2);
  print(result.toList());  // Output: [3, 4]
}
```

### 52. `whereType()`
Filters the set to include only elements of a specific type.

```dart
void main() {
  Set<Object> mixed = {1, 'hello', 3};
  var numbers = mixed.whereType<int>();
  print(numbers.toList());  // Output: [1, 3]
}
```

### 53. `noSuchMethod()`
Handles any methods that aren’t defined for the object. Typically used for dynamic method calls.

```dart
void main() {
  Set<int> numbers = {1, 2};
  try {
    numbers.noSuchMethod(Invocation.method(#add, [4]));
  } catch (e) {
    print(e);  // Output: Method not found
  }
}
```

<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/List" style="float: left;">⬅️ Lists </a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/README.md">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Map" style="float: right;"> Map ➡️</a>
</p>