int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20; 
  int y = *ptr + 5; 
  printf("%d", y); 
  return 0;
}