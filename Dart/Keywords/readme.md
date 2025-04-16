

#  Dart Keywords Summary Table 

| No. | Keyword   | Category / Purpose           | Example                                           | Explanation |
|-----|-----------|------------------------------|---------------------------------------------------|-------------|
| 1   | `abstract`| OOP (Classes & Interfaces)   | abstract class Shape { void draw(); }           | Defines an abstract class that cannot be instantiated. Used as a base class. |
| 2   | `as`      | Typecasting / Aliasing       | var str = '123' as String;                      | Used for type casting or import aliasing (`import 'x.dart' as x`). |
| 3   | `assert`  | Debug / Error checking        | assert(age > 0);`                                | Ensures a condition is true during development; throws error if false. |
| 4   | `async`   | Asynchronous programming      | Future<void> fetch() async {}`                   | Marks a function as asynchronous. |
| 5   | `await`   | Asynchronous programming      | await fetchData();`                              | Pauses execution until an async function completes. |
| 6   | `base`    | OOP (Class Modifiers)         | base class Animal {}`                            | Marks a class as base, meant only to be extended. Introduced in Dart 3.0. |
| 7   | `break`   | Control flow (loops/switch)   | if (x > 10) break;`                              | Exits from a loop or switch block early. |
| 8   | `case`    | Switch statement              | case 1: print('One'); break;`                    | Matches values in a switch block. |
| 9   | `catch`   | Error handling                | catch (e) { print(e); }`                         | Handles exceptions in try blocks. |
| 10  | `class`   | OOP (Class definition)        | class Car {}`                                    | Declares a new class.
-





### Reserved Words

These keywords have special meanings in Dart and cannot be used as identifiers.

| Keyword   | Description                                | Example                                      |
|-----------|--------------------------------------------|----------------------------------------------|
| abstract| Declares an abstract class or method.      | abstract class Animal { void makeSound(); }|
| as      | Provides a type cast.                      | var emp = person as Employee;              |
| assert  | Checks a condition during development.     | assert(age >= 0);                          |
| async   | Marks a function as asynchronous.          | Future<void> fetchData() async { ... }     |
| await   | Waits for a Future to complete.            | await fetchData();                         |
| break   | Exits a loop or switch case.               | break;                                     |
| case    | Defines a case in a switch statement.      | case 1: print('One'); break;               |
| catch   | Catches exceptions.                        | catch (e) { print(e); }                    |
| class   | Declares a class.                          | class Person { ... }                       |
| const   | Defines a compile-time constant.           | const pi = 3.14;                           |
| continue| Skips to the next iteration of a loop.     | continue;                                  |
| default | Defines the default case in switch.        | default: print('Default');                 |
| do      | Starts a do-while loop.                    | do { ... } while (condition);              |
| else    | Defines an alternative branch.             | else { print('No'); }                      |
| enum    | Declares an enumeration.                   | enum Color { red, green, blue }            |
| extends | Indicates inheritance.                     | class Dog extends Animal { ... }           |
| false   | Boolean false value.                       | bool isOpen = false;                       |
| final   | Declares a final variable.                 | final name = 'John';                       |
| finally | Executes code after try/catch.             | finally { cleanUp(); }                     |
| for     | Starts a for loop.                         | for (var i = 0; i < 5; i++) { ... }        |
| if      | Starts a conditional branch.               | if (x > 0) { print('Positive'); }          |
| in      | Iterates over elements.                    | for (var item in items) { ... }            |
| is      | Checks type at runtime.                    | if (x is String) { ... }                   |
| new     | Creates a new instance.                    | var p = new Person();                      |
| null    | Represents a null value.                   | String? name = null;                       |
| rethrow | Rethrows a caught exception.               | rethrow;                                   |
| return  | Returns a value from a function.           | return x + y;                              |
| super   | Refers to superclass.                      | super.toString();                          |
| switch  | Starts a switch statement.                 | switch (value) { ... }                     |
| this    | Refers to the current instance.            | this.name = name;                          |
| throw   | Throws an exception.                       | throw FormatException('Invalid');          |
| true    | Boolean true value.                        | bool isOpen = true;                        |
| try     | Starts a try block for exceptions.         | try { ... } catch (e) { ... }              |
| var     | Declares a variable.                       | var age = 30;                              |
| void    | Indicates no return value.                 | void greet() { print('Hello'); }           |
| while   | Starts a while loop.                       | while (x < 10) { x++; }                    |
| with    | Applies mixins to a class.                 | class C with MixinA, MixinB { ... }        |

### Contextual Keywords

These keywords have special meaning in specific contexts but can be used as identifiers elsewhere.

| Keyword   | Description                                | Example                                      |
|-----------|--------------------------------------------|----------------------------------------------|
| async   | Marks a function as asynchronous.          | Future<void> fetch() async { ... }         |
| await   | Waits for a Future to complete.            | await fetch();                             |
| hide    | Hides names when importing libraries.      | import 'lib.dart' hide foo;                |
| on      | Specifies the superclass constraint for a mixin. | mixin M on A { ... }                   |
| show    | Shows specific names when importing.       | import 'lib.dart' show foo;                |
| sync    | Marks a generator function.                | Iterable<int> count() sync* { ... }        |
| required| Marks named parameters as required.        | void greet({required String name}) { ... } |

### Built-in Identifiers

These identifiers are used by the Dart language but can be used as identifiers in certain contexts.

| Identifier | Description                                | Example                                      |
|------------|--------------------------------------------|----------------------------------------------|
| Function | Represents a function type.                | Function f = print;                        |
| Object   | The base class for all Dart objects.       | Object o = 'Hello';                        |
| dynamic  | Indicates a variable can be any type.      | dynamic x = 10; x = 'Hello';               |

