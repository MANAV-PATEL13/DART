//start to read from bottam

void main() {
  Map<String, dynamic> book = {
    'title': '1984',
    'author': 'George Orwell',
  };

  // 1. Add a key 'pages' with value 328
  // 2. Update 'author' to 'G. Orwell'
  // 3. Remove the key 'title'
  book['pages'] = 328;
  book ['author'] = 'G. Orwell';
  book.remove('title');
  
  print(book);
}



// void main() {
//   Map<String, Map<String, int>> book = Map();
//   book['C with anscii'] = {'Manav': 14};
//   print(book['C with anscii']);

//           {C with anscii: {Manav: 14}}
//           {Manav: 14}


// }

// void main() {

// // / Can a Map have duplicate keys?
// // / If you try to assign a new value to an existing key, what do you think happens?
// // / Why might a Map be better than a List when storing named data like user info?

//   Map<String, int> ids = Map();
//   ids['Manav'] = 18;
//   ids['Manav'] = 120;
//   ids['Manav'] = 190;
//   print(ids);
// {Manav: 190}


// }


// void main() {
//   var original = {'apple': 1, 'banana': 2};
//   var copy = Map<int, int>.of(original);//not working , Map<int, int> is not a type of Map 
// // var copy = Map<String, int>.of(original);   
//   print(copy);
//   original.addAll({'banana': 3, 'grahps': 4});
//   print(original);
//   print(copy);
// }

// void main() {
//   Map<String, int> name = Map();
//   name['manav'] = 18;
//   name['dev'] = 17;
//   var copy = Map<String, int>.from(name);
//   print(copy);

//   name['tirth'] = 18;
//   print(name);
//   print(copy);
//   /*
//   {manav: 18, dev: 17}
// {manav: 18, dev: 17, tirth: 18}
// {manav: 18, dev: 17}
//   */
// }
