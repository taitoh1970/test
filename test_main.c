double test_log (double d);
void print_data (double d1, double d2);

int main (int argc, char **argv){
  double d;

  for (d = 1.0; d < 10.1; d += 1.0){
    print_data (d, test_log (d));
  }

  return 0;
}
