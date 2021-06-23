bool Win (char** data, int n, int m, int prwin) 
{
    
  // Горизонтальные
  for(int i = 0; i < n; i++) {
    int count = 0;
    for(int j = 0; j < m-1; j++) {
      if (data[i][j] != '*' && data[i][j] == data[i][j + 1]) {
        count++;
      } else {
        count = 0;
      }
      if (count == (prwin - 1)) {
        return true;
      }
    }
  }

  // По вертикали
  for(int j = 0; j < m; j++) {
    int count = 0;
    for(int i = 0; i < n-1; i++) {
      if (data[j][i] != '*' && data[j][i] == data[j][i + 1]) {
        count++;
      } else {
        count = 0;
      }
      if (count == (prwin - 1)) {
        return true;
      }
    }
  }
  // По диагонали /

  // По диагонали \

  return false;
}

int main() {
  int n = 10;
  int m = 8;
  char **data = new char*[n];
    
  for(int i = 0; i < n; i++) {
    data[i] = new char[m];
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      data[n][m] = '*';
    }
  }
    
}