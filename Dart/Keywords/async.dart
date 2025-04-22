// Future<String> task1() async {
//   await Future.delayed(Duration(seconds: 2));
//   await Future.
//   return "Task 1";
// }

// Future<String> task2() async {
//   await Future.delayed(Duration(seconds: 2));
//   return "Task 2 ";
// }

// void main() async {
//   var result = await Future.any([task1(), task2()]);
//   print("Starting parallel tasks...");
//   print(result);
//   // var a = await task1();
//   // print(a);
//   // var b = await task2();
//   // print(b);
//   print("Both tasks completed in parallel.");
// }

//delay
// Future<void> main() async {
//   Future<String> delayedFuture = Future.delayed(
//     Duration(seconds: 2),
//     () => 'Done after 2 seconds',
//   );

//   print('Waiting...');
//   String result = await delayedFuture;
//   print(result);
//   print("hello");
// }

//dowhile
// int count = 0;

// Future<void> main() async {
//   await Future.doWhile(() async {
//     print('Count: $count');
//     await Future.delayed(Duration(seconds: 2));
//     print("hello");
//     count++;
//     return count < 3;
//   });

//   print('Done looping');
// }

// //error
// Future<void> main() async {
//   try {
//     await Future.error('Something wrong!');
//   } catch (e) {
//     print('Caught error: $e');
//   }
// }

//foreach
// Future<void> main() async {
//   List<int> numbers = [1, 2, 4, 3];

//   await Future.forEach(numbers, (num) async {
//     await Future.delayed(Duration(milliseconds: 1000));
//     print('Number: $num');
//   });

//   print('Done iterating');
// }

