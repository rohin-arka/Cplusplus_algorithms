#include <iostream>
using namespace std;
void selection_sort(int array_index, int a[]){
  int current_index;

  cout << "Unsorted version" << endl;

  for(int i = 0; i <= array_index; i++){
    cout << a[i];
  }
  cout << endl;

  cout << "Sorted version" << endl;
  for(int i = 0; i <= array_index; i++){
    for (int j = i + 1, temp; j <= array_index; j++){
      if (a[j] < a[i]){
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
    }
    cout << a[i];
  }
  cout << endl;
}

int main(void){
  int a[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
  int total_array_index = 9;
  selection_sort(total_array_index, a);
}
