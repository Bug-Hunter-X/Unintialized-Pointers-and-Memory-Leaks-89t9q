int main() {
  int x = 10;
  int *ptr = &x; // Pointer is initialized
  *ptr = 20; 
  int y = *ptr + 5; 
  printf("%d\n", y); // Added newline for better output 
  return 0;
}