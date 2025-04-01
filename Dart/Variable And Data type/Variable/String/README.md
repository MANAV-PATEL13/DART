## Ways to Write Strings in Dart</h1>

Dart offers several ways to create strings:

### <b>• <u>Single-Quoted Strings:</u></b>
Use single quotes for simple strings.

```dart
void main() {
String s1 = 'Hello';
print(s1); // Output: Hello
}
```

### <b>• <u>Double-Quoted Strings:</u></b>
Use double quotes, which work the same as single quotes.

```dart
void main() {
String s2 = "World";
print(s2); // Output: World
}
```

### <b>• <u>Automatic String Literal Concatenation:</u></b>
Dart automatically concatenates adjacent string literals. For example, the following code:

```dart
void main() {
String s3 = 'm' 'a' 'n';
print(s3); // Output: man
}
```
Here, Dart concatenates 'm', 'a', and 'n' into the single string "man".

### <b>• <u>Multi-line Strings with Triple Quotes:</u></b>
Triple quotes allow you to write strings that span multiple lines.

```dart
void main() {
  String multiLine = '''This is a multi-line
string that spans across
multiple lines.''';

  print(multiLine);
}
```

### <b>• <u>Raw Strings:</u></b>
### witout raw string 
```dart 
void main() {
  String rawStr = "Hello \n World";
  print(rawStr);
  /*
  Hello
   World
  */
}
```
### with raw string<br>
Prefix with an `r` to create a raw string where escape sequences are not processed.

Raw strings are used to create strings that contain backslashes without escaping them.

```dart
void main() {
String rawStr = r"Hello \n World";
print(rawStr); // Output: Hello \n World
}
```
---




## Dart `String` Methods and Properties with Examples

| #  | Method/Property | Description | Example |
|----|----------------|-------------|---------|
| 1  | `codeUnits` | Returns a list of UTF-16 code units. | `'Hello'.codeUnits // [72, 101, 108, 108, 111]` |
| 2  | `hashCode` | Returns a hash code for the string. | `'Hello'.hashCode` |
| 3  | `isEmpty` | Checks if the string is empty. | `''.isEmpty // true` |
| 4  | `isNotEmpty` | Checks if the string is not empty. | `'Hello'.isNotEmpty // true` |
| 5  | `length` | Returns the number of characters in the string. | `'Hello'.length // 5` |
| 6  | `runes` | Returns an iterable of Unicode runes. | `'Hello'.runes` |
| 7  | `runtimeType` | Returns the runtime type of the object. | `'Hello'.runtimeType // String` |
| 8  | `allMatches()` | Returns all matches of a pattern. | `'Hello'.allMatches(r'\w+')` |
| 9  | `codeUnitAt()` | Returns the UTF-16 code unit at a given index. | `'Hello'.codeUnitAt(0) // 72` |
| 10 | `compareTo()` | Compares two strings lexicographically. | `'a'.compareTo('b') // -1` |
| 11 | `contains()` | Checks if the string contains a substring. | `'Hello'.contains('ell') // true` |
| 12 | `endsWith()` | Checks if the string ends with a certain suffix. | `'Hello'.endsWith('lo') // true` |
| 13 | `indexOf()` | Finds the first occurrence of a substring. | `'Hello'.indexOf('l') // 2` |
| 14 | `lastIndexOf()` | Finds the last occurrence of a substring. | `'Hello'.lastIndexOf('l') // 3` |
| 15 | `matchAsPrefix()` | Checks if the string starts with a pattern. | `'Hello'.matchAsPrefix('He')` |
| 16 | `padLeft()` | Pads the string from the left. | `'5'.padLeft(3, '0') // '005'` |
| 17 | `padRight()` | Pads the string from the right. | `'5'.padRight(3, '0') // '500'` |
| 18 | `replaceAll()` | Replaces all occurrences of a substring. | `'Hello'.replaceAll('l', 'x') // 'Hexxo'` |
| 19 | `replaceAllMapped()` | Replaces substrings using a function. | `'Hello'.replaceAllMapped(RegExp(r'l'), (m) => 'X') // 'HeXXo'` |
| 20 | `replaceFirst()` | Replaces the first occurrence of a substring. | `'Hello'.replaceFirst('l', 'x') // 'Hexlo'` |
| 21 | `replaceFirstMapped()` | Replaces the first occurrence using a function. | `'Hello'.replaceFirstMapped(RegExp(r'l'), (m) => 'X') // 'Hexlo'` |
| 22 | `replaceRange()` | Replaces a substring within a range. | `'Hello'.replaceRange(1, 3, 'xy') // 'Hxylo'` |
| 23 | `split()` | Splits the string into a list. | `'a,b,c'.split(',') // ['a', 'b', 'c']` |
| 24 | `splitMapJoin()` | Splits the string and applies transformations. | `'Hello'.splitMapJoin(RegExp(r'l'), onMatch: (m) => 'X', onNonMatch: (n) => n) // 'HeXXo'` |
| 25 | `startsWith()` | Checks if the string starts with a prefix. | `'Hello'.startsWith('He') // true` |
| 26 | `substring()` | Extracts a substring from the string. | `'Hello'.substring(1, 3) // 'el'` |
| 27 | `toLowerCase()` | Converts the string to lowercase. | `'Hello'.toLowerCase() // 'hello'` |
| 28 | `toString()` | Returns the string itself. | `'Hello'.toString() // 'Hello'` |
| 29 | `toUpperCase()` | Converts the string to uppercase. | `'Hello'.toUpperCase() // 'HELLO'` |
| 30 | `trim()` | Removes leading and trailing spaces. | `' Hello '.trim() // 'Hello'` |
| 31 | `trimLeft()` | Removes leading spaces. | `' Hello '.trimLeft() // 'Hello '` |
| 32 | `trimRight()` | Removes trailing spaces. | `' Hello '.trimRight() // ' Hello'` |
| 33 | `noSuchMethod()` | Handles undefined method calls. | `class Test { @override void noSuchMethod(Invocation invocation) { print("Method not found"); } }` |

### Example Usages:
In Dart, strings have various properties and methods that allow you to manipulate and retrieve information from them. Below is an explanation of each property and method with examples and expected outputs.

---

### **Properties of String**
#### **1. `codeUnits`**
Returns a list of UTF-16 code units for the string.

```dart
void main() {
  String text = "Hello";
  print(text.codeUnits);
}
```
**Output:**
```
[72, 101, 108, 108, 111]
```

---

#### **2. `hashCode`**
Returns the hash code of the string.

```dart
void main() {
  String text = "Hello";
  print(text.hashCode);
}
```
**Output:** _(Hash code is a unique integer for each string, value may differ)_
```
123456789  // Example
```

---

#### **3. `isEmpty`**
Returns `true` if the string is empty, otherwise `false`.

```dart
void main() {
  String text = "";
  print(text.isEmpty);
}
```
**Output:**
```
true
```

---

#### **4. `isNotEmpty`**
Returns `true` if the string is not empty, otherwise `false`.

```dart
void main() {
  String text = "Dart";
  print(text.isNotEmpty);
}
```
**Output:**
```
true
```

---

#### **5. `length`**
Returns the number of characters in the string.

```dart
void main() {
  String text = "Flutter";
  print(text.length);
}
```
**Output:**
```
7
```

---

#### **6. `runes`**
Returns the runes (Unicode code points) of the string.

```dart
void main() {
  String text = "Hi 👋";
  print(text.runes);
}
```
**Output:**
```
(72, 105, 32, 128075)
```

---

#### **7. `runtimeType`**
Returns the runtime type of the object.

```dart
void main() {
  String text = "Dart";
  print(text.runtimeType);
}
```
**Output:**
```
String
```

---

### **Methods of String**
#### **8. `allMatches()`**
Finds all occurrences of a substring using a regular expression.

```dart
void main() {
  String text = "Dart is awesome and Dart is fun";
  Iterable<Match> matches = "Dart".allMatches(text);
  print(matches.length);
}
```
**Output:**
```
2
```

---

#### **9. `codeUnitAt()`**
Returns the UTF-16 code unit at a given index.

```dart
void main() {
  String text = "Hello";
  print(text.codeUnitAt(1)); // ASCII code of 'e'
}
```
**Output:**
```
101
```

---

#### **10. `compareTo()`**
Compares two strings lexicographically.

```dart
void main() {
  print("apple".compareTo("banana")); // -1 (less than)
  print("banana".compareTo("apple")); // 1 (greater than)
  print("apple".compareTo("apple"));  // 0 (equal)
}
```
**Output:**
```
-1
1
0
```

---

#### **11. `contains()`**
Checks if a string contains another string.

```dart
void main() {
  String text = "Hello, World!";
  print(text.contains("World")); // true
}
```
**Output:**
```
true
```

---

#### **12. `endsWith()`**
Checks if the string ends with a given substring.

```dart
void main() {
  String text = "Dart Programming";
  print(text.endsWith("ing"));
}
```
**Output:**
```
true
```

---

#### **13. `indexOf()`**
Finds the first occurrence of a substring.

```dart
void main() {
  String text = "Hello World";
  print(text.indexOf("o")); 
}
```
**Output:**
```
4
```

---

#### **14. `lastIndexOf()`**
Finds the last occurrence of a substring.

```dart
void main() {
  String text = "Hello World";
  print(text.lastIndexOf("o")); 
}
```
**Output:**
```
7
```

---

#### **15. `matchAsPrefix()`**
Checks if a pattern matches from the beginning.

```dart
void main() {
  RegExp regex = RegExp(r'Hello');
  String text = "Hello, World!";
  print(regex.matchAsPrefix(text)?.group(0)); 
}
```
**Output:**
```
Hello
```

---

#### **16. `padLeft()`**
Pads a string on the left to the specified length.

```dart
void main() {
  String text = "42";
  print(text.padLeft(5, '0'));
}
```
**Output:**
```
00042
```

---

#### **17. `padRight()`**
Pads a string on the right to the specified length.

```dart
void main() {
  String text = "42";
  print(text.padRight(5, '0'));
}
```
**Output:**
```
42000
```

---

#### **18. `replaceAll()`**
Replaces all occurrences of a substring.

```dart
void main() {
  String text = "Hello, Hello!";
  print(text.replaceAll("Hello", "Hi"));
}
```
**Output:**
```
Hi, Hi!
```

---

#### **19. `replaceAllMapped()`**
Replaces all matches using a function.

```dart
void main() {
  String text = "abc123";
  print(text.replaceAllMapped(RegExp(r'\d'), (match) => "*"));
}
```
**Output:**
```
abc***
```

---

#### **20. `replaceFirst()`**
Replaces the first occurrence of a substring.

```dart
void main() {
  String text = "Hello, Hello!";
  print(text.replaceFirst("Hello", "Hi"));
}
```
**Output:**
```
Hi, Hello!
```


---

#### **21. `replaceFirstMapped()`**
Replaces the first match using a function.

```dart
void main() {
  String text = "abc123";
  print(text.replaceFirstMapped(RegExp(r'\d'), (match) => "*"));
}
```
**Output:**
```
abc*23
```

---

#### **22. `replaceRange()`**
Replaces characters in a given range.

```dart
void main() {
  String text = "Hello, World!";
  print(text.replaceRange(7, 12, "Dart"));
}
```
**Output:**
```
Hello, Dart!
```

---

#### **23. `split()`**
Splits the string by a given separator.

```dart
void main() {
  String text = "apple,banana,grape";
  print(text.split(","));
}
```
**Output:**
```
[apple, banana, grape]
```

---

#### **24. `splitMapJoin()`**
Splits the string and processes each part.

```dart
void main() {
  String text = "Hello123World";
  print(text.splitMapJoin(RegExp(r'\d+'), onMatch: (m) => '*', onNonMatch: (n) => n));
}
```
**Output:**
```
Hello*World
```

---

#### **25. `startsWith()`**
Checks if the string starts with a given substring.

```dart
void main() {
  String text = "Dart is fun";
  print(text.startsWith("Dart"));
}
```
**Output:**
```
true
```

---

#### **26. `substring()`**
Extracts a substring.

```dart
void main() {
  String text = "Flutter";
  print(text.substring(2, 5));
}
```
**Output:**
```
utt
```

---

#### **27. `toLowerCase()` and `toUpperCase()`**
```dart
void main() {
  String text = "Dart";
  print(text.toLowerCase());
  print(text.toUpperCase());
}
```
**Output:**
```
dart
DART
```

---

#### **28. `trim()`, `trimLeft()`, `trimRight()`**
```dart
void main() {
  String text = "  Hello  ";
  print(text.trim());
  print(text.trimLeft());
  print(text.trimRight());
}
```
**Output:**
```
Hello
Hello  
  Hello
```

---

#### **29. `noSuchMethod()`**
Only works in classes that extend `Object`.

Here’s an explanation of the methods `fromCharCode()`, `fromCharCodes()`, and `fromEnvironment()` in Dart, along with examples and expected outputs:

---
# String class Constructor
### **1. `fromCharCode()`**

The `String.fromCharCode()` method creates a new string from a single Unicode code point (character). It takes an integer (code point) and returns a string representation of that character.

#### Example:
```dart
void main() {
  print(String.fromCharCode(65)); // Unicode code for 'A'
  print(String.fromCharCode(97)); // Unicode code for 'a'
}
```
**Output:**
```
A
a
```

In this example:
- The Unicode code point `65` corresponds to the character `'A'`.
- The Unicode code point `97` corresponds to the character `'a'`.

---

### **2. `fromCharCodes()`**

The `String.fromCharCodes()` method creates a new string from a list of Unicode code points (character codes). It takes a list of integers (code points) and returns a string where each integer is converted into a character.

#### Example:
```dart
void main() {
  List<int> charCodes = [72, 101, 108, 108, 111]; // Unicode codes for "Hello"
  print(String.fromCharCodes(charCodes)); // Converts the list of codes to "Hello"
}
```
**Output:**
```
Hello
```

In this example:
- The list `[72, 101, 108, 108, 111]` represents the Unicode code points for the characters `H`, `e`, `l`, `l`, `o`, which are then converted into the string `"Hello"`.

---

### **3. `fromEnvironment()`**

The `String.fromEnvironment()` constructor is used to get the value of an environment variable during the execution of a program. This is typically used for compile-time constants, and it can be used to retrieve values passed to the program through the `dart:html` or other environments (like Flutter or command-line apps). It allows you to specify a default value if the environment variable doesn't exist.

#### Example:
```dart
void main() {
  const String greeting = String.fromEnvironment('GREETING', defaultValue: 'Hello, World!');
  print(greeting);
}
```
**Note:** To use `fromEnvironment()`, you'd need to pass the environment variable value at compile-time using a tool like the Dart CLI or Flutter build tools.

If you run this with the environment variable `GREETING` defined, for example as `"Hi there!"`, it would output:

**Output (with the environment variable defined):**
```
Hi there!
```

If the environment variable is not defined, it will use the default value:

**Output (if no environment variable is provided):**
```
Hello, World!
```

---

### Summary of Methods:

- **`fromCharCode()`**: Creates a string from a single Unicode code point.
- **`fromCharCodes()`**: Creates a string from a list of Unicode code points.
- **`fromEnvironment()`**: Retrieves a string value from an environment variable at compile-time.

Let me know if you need further clarification or examples!
