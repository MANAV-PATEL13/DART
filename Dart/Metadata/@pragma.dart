@pragma('vm:never-inline')
int addNoInline(int a, int b) => a + b;

void main() {
  const int iterations = 100000000;

  final stopwatch = Stopwatch()..start();
  int result = 0;
  for (int i = 0; i < iterations; i++) {
    result += addNoInline(i, 1);
  }
  stopwatch.stop();

  print("Not inlined time: ${stopwatch.elapsedMilliseconds} ms");
}
