#include <iostream>
#include <string>

using namespace std;

//Implement an array like data structure called Vector, that behaves like and array but it have
//some predefined operations in functions. It should store doubles. It should have an inner array of
//doubles that stores the values. Each vector should have size property that stores how many elements are
//in the stack.

struct Vector {
  double* store;
  unsigned int size;
};

//Construct function
//It should dynamically allocate the Vector instance
//It should set the size
//It should dynamically allocate the double array

Vector* vector_construct(double input[], int size) {
    Vector* new_vector = new Vector;
    new_vector->store = new double[size];
    for (int i = 0; i < size; i++) {
      new_vector->store[i] = input[i];
    }
    new_vector->size = size;
    return new_vector;
}

//At function
//It should return the value under the given index
//It should return zero if the value is out of bound

double vector_at(Vector& v, unsigned int index) {
  double index_value = 0;
  if (index < v.size) {
    index_value = v.store[index];
  }
  return index_value;
}

//Insert function
//It should insert the value to the given index like:
//array: {1, 2, 3, 4}
//index: 2
//value: 8
//result: {1, 2, 8, 3, 4}
//It should increment the size by one
//It should reallocate the array

void vector_insert(Vector& v, unsigned int index, double value) {
    double* new_store = new double[v.size + 1];
    for (unsigned int i = 0; i < index ; i++) {
        new_store[i] = v.store[i];
    }
    new_store[index] = value;
    for (unsigned int j = index + 1; j < v.size + 1; j++) {
      new_store[j] = v.store[j - 1];
    }
    delete[] v.store;
    v.store = new_store;
    v.size++;
}

//Find function
//It should return the index of the given value

unsigned int vector_find(Vector& v, double value) {
  unsigned int index;
  for (unsigned i = 0; i < v.size; i++) {
    if (v.store[i] == value) {
      index = i;
    }
  }
  return index;
}

//Remove function
//It should remove the element under the index
//It should reallocate the array

void vector_remove(Vector& v, unsigned int index) {
    double* new_store = new double[v.size - 1];
    for (unsigned int i = 0; i < index ; i++) {
        new_store[i] = v.store[i];
    }
    for (unsigned int j = index; j < v.size - 1; j++) {
      new_store[j] = v.store[j + 1];
    }
    delete[] v.store;
    v.store = new_store;
    v.size--;
}

//Concat function
//It should return a new Vector that has all the elements of v1 and v2 like:
//v1: {1, 2}
//v2: {3, 4}
//return: {1, 2, 3, 4}
//It should have the sum size of the vectors

Vector* vector_concat(Vector& v1, Vector v2) {
  unsigned int new_size = v1.size + v2.size;
  double* new_store = new double[new_size];
  for (unsigned int i = 0; i < new_size ; i++) {
      new_store[i] = v1.store[i];
      new_store[i + v1.size] = v2.store[i];
  }
  Vector* new_vector2 = vector_construct(new_store, new_size);
  return new_vector2;
}

int main() {

  double array[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
  double value = 6.7;
  unsigned int index = 2;

  Vector* my_vector = vector_construct(array, 5);
  cout << "Initial size of vector: " << my_vector->size << endl;
  vector_insert(*my_vector, index, value);
  cout << endl << "Size of vector after insert: " << my_vector->size << endl << "Elements in vector after insert: " << endl;
  for (int i = 0; i < 5 + 1; i++) {
    cout << my_vector->store[i] << " ";
  }
  vector_remove(*my_vector, index);
  cout << endl << "Size of vector after removal: " << my_vector->size << endl << "Elements in vector after removal: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << my_vector->store[i] << " ";
  }

  return 0;
}
