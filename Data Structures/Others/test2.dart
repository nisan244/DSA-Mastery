// import 'dart:io';

// void main(List<String> args) {
//   print("Nisan");
//   print("Hossain");
//   print("Enter any number : ");
//   int x = int.parse(stdin.readLineSync()!);

//   print("Years: $x");
// }

// void main(List<String> args) {
//   int n = 25;
//   print(n);
//   double a = 5;
//   print(a);
//   String b = "Nisan Hossain";
//   print(b);

//   bool flag = true;
//   print(flag);

//   var son = student();
//   son.methodOne();
// }

// class student {
//   int a = 2;
//   int b = 5;
//   methodOne() {
//     print(a);
//   }

//   methodTwo() {
//     print(b);
//   }
// }

// class teachar extends student {
//   String name = "Nisan";
// }

void main(List<String> args) {
  var list = [1, 2, 3, 4, 5];

  // for (var element in list) {
  //   print(element);
  // }

  list.forEach((element) => printNum(element));
}

void printNum(num) {
  print(num);
}
