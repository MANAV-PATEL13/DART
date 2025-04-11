/// A really great test library.

  @deprecated
class TestLibrary {
  void oldFunction() {
    print('This function is deprecated.');
  }
}

void main() {
  TestLibrary testLibrary = TestLibrary();
  testLibrary.oldFunction();
}