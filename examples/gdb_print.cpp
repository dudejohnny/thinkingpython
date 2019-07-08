/*
 // gdb output 
(gdb) p my_dict 
$2 = {
  keys = "Brad Pitt\nMia Wallace\nTyler Durden\nUma Thurman\n", 
  hash_table = std::map with 4 elements = {
    [0] = PersonState::alive, [10] = PersonState::alive, 
    [22] = PersonState::dead, [35] = PersonState::alive}}

*/

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

enum class PersonState {
  alive,
  dead 
};

struct MyDict {
  string keys;
  unordered_map<int, PersonState> hash_table;
};


int main(int, char**) {
  MyDict my_dict{
    "Brad Pitt\nMia Wallace\nTyler Durden\nUma Thurman\n",
    {
      {22, PersonState::dead},
      {35, PersonState::alive},
      {0, PersonState::alive},
      {10, PersonState::alive},
    }
  };
  cout << my_dict.keys;
  return 0;
}
