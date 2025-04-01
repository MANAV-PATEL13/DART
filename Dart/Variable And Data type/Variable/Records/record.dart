void main() {
  final record1 = (42, 'Hello');
  print(record1.$1.isEven);
  print(record1.$1.isOdd);
  print(record1.$1.sign);
  print(record1.$1.hashCode);
  print(record1.$1.runtimeType);
  print(record1.$1.toString());
  String s = record1.$1.toString();
  print(s.isEmpty);
  print(record1.$1.remainder(3));
}
