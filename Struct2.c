#include <stdio.h>
struct Person {
  char name[40];
  int age;
};

// Void type func
void ageOne(struct Person friend1, struct Person * friend2Pointer){
  friend1.age +=1;
  friend2Pointer->age += 1;
  printf("void func: Hello my name is %s and I am %d years old.(inside func printf)\n", friend1.name, friend1.age);
};
// Struct type func with return type of Person
struct Person ageOne2(struct Person friend1, struct Person * friend2Pointer){
  friend1.age +=1;
  friend2Pointer->age += 1;
  return friend1;

};

int main(void) {
  struct Person myFriend = {"Martin", 57};
  struct Person myOtherFriend = {"Michelle", 27};

  // Call your function below

  ageOne(myFriend,&myOtherFriend);

  printf("void func: Hello my name is %s and I am %d years old.\n", myFriend.name, myFriend.age);
  printf("void func: Hello my name is %s and I am %d years old.\n", myOtherFriend.name, myOtherFriend.age);

  myFriend = ageOne2(myFriend,&myOtherFriend);
  printf("struct func: Hello my name is %s and I am %d years old.\n", myFriend.name, myFriend.age);
  printf("struct func: Hello my name is %s and I am %d years old.\n", myOtherFriend.name, myOtherFriend.age);
  
}