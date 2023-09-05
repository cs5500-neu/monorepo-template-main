# Debugging

- Edit the following lines to list two things you learned about debugging (a command, a technique, a concept. etc.). This is a "for-credit" exercise, I will not evaluate what I consider "difficult enough", I just want to know you learned or practiced two things about debugging.

1. *edit response here*
2. *edit response here*


## Mini Debugging Exercises

- Run the following code, and report at what value the segmentation fault actually happens. Note: It may not actually be the number you expect, and it may differ on different machines.

```cpp

  int main(){
    
    int array[10];
    
    for(int i=0; i < 1000000; i++){
      array[i] = i;
    }
  
    return 0;
  }

```

3. *edit response here including the index at which the array crashed, and why you think it crashed at that index*

- From the provided [gdb.cpp](./gdb.cpp) example, fix all of the errors in the  [gdb.cpp](./gdb.cpp) file and the commit that file back into the repository.

4. *N/A (Commit the new fixed gdb.cpp fixing any errors and warnings in the program)*
