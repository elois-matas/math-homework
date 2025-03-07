int main() {
  int num = 5;
  double sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i;
  }
  std::cout << "The sum of the first " << num << " positive integers is: " << sum << "\n";
  return 0;
}
