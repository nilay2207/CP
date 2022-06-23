import "dart:io";

main(){
  stdout.writeln("what is your name");
  var name=stdin.readLineSync();
  print("your name ${name}");
}