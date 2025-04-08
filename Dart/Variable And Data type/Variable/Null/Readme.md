# Null 
| Operator | Example | Purpose |
|----------|---------|---------|
| **Null-Aware Access (`?.`)** | `name?.length` | Prevents null dereference errors. |
| **Default Value (`??`)** | `name ?? 'No name'` | Provides a fallback if `name` is `null`. |
| **Null Assertion (`!`)** | `name!.length` | Asserts that `name` is non-null (throws an error if it is). |
### What is Null? 
- **Null is a Unique Object:** 
  In Dart, null is the sole instance of the Null class. It represents a lack of value, similar to how "nothing" is represented in other languages.
- **Before Null Safety:** 
  Historically, any variable in Dart could be assigned null, which sometimes led to runtime errors when methods or properties were accessed on a null value.
- **After Null Safety:** 
  With the introduction of sound null safety (starting with Dart 2.12), variables are non-nullable by default. This means a variable cannot hold a null value unless it is explicitly declared as nullable by appending a `?` to its type.

### How Null Works in Dart 
#### Non-nullable Variables:
By default, if you declare a variable without marking it as nullable, Dart expects it to always have a valid, non-null value. 
```dart
void main() {
String name = 'Alice';
// name cannot be assigned null later.
}
```

#### Nullable Variables:
If you want a variable to be able to hold null, you must declare it with a `?`. This tells Dart that the variable might be null at some point. 
```dart
void main(){
String? name;
print(name); // Outputs: null 
name = 'Manav';
print(name); // Outputs: Bob 
}
```

### Null-Aware Operators:
To safely work with nullable variables, Dart provides several null-aware operators: 

#### Null-Aware Access (`?.`): 
Safely access a property or method on an object that might be null.  
```dart
void main(){
String? name;
print(name?.length); // If name is null, this evaluates to null.
}
```
   When you try to access name?.length:  
   - If name is not null: The length property of the string would be accessed, 
  and the length of the string would be printed. <br>
  - If name is null: The ?. operator prevents a NullPointerException and 
  instead evaluates the expression as null. 
  Since name is null in this case, the expression name?.length evaluates to 
  null, and that's what gets printed.

#### Default Value Operator (`??`): 
Provide a default value if an expression is null.  
```dart
void main(){
String? name;
print(name ?? 'No name provided'); // Prints the default message if name is null.
}
```

#### Null Assertion Operator (`!`): 
Assert that a value is non-null (and throw a runtime error if it is null).  
```dart
void main(){
String? name = 'Dart';
print(name!.length); // Asserts name is non-null.
// If name were null, this would throw a runtime error.
}
```

### Why Managing Null is Important 
- **Preventing Runtime Errors:**
  Accessing methods or properties on a null value can lead to crashes (known as null dereference errors).
- **Improving Code Safety:**
  With null safety, many potential bugs are caught at compile time rather than at runtime.
- **Enhanced Code Clarity:**
  Declaring whether a variable can be null makes your code’s intent clearer to both the compiler and other developers.

### Summary 
- Null represents "no value" and is an instance of the Null class.
- With null safety, variables are non-nullable by default unless explicitly declared as nullable (using `?`).
- Null-aware operators (`?.`, `??`, `!`) are essential tools for writing safe code when dealing with nullable values.
- Properly managing null helps prevent runtime errors and makes your code more robust.

<p align="center">
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/Late" style="float: left;">⬅️ Late</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/blob/main/Dart/Variable%20And%20Data%20type/README.md">🏠 Home</a>
  |
  <a href="https://github.com/MANAV-PATEL13/DART/tree/main/Dart/Variable%20And%20Data%20type/Variable/wildcard" style="float: right;">Wildcard ➡️</a>
</p>