Certainly! Here's a concise `README.md` to describe each task and link them with their respective file names:

---

# C Memory Allocation Project

This project consists of several tasks that demonstrate the use of memory allocation functions in C. Each task focuses on different memory manipulation techniques, such as creating arrays, duplicating strings, concatenating strings, and working with 2D arrays.

## Task Descriptions

### 0. **Create an Array of Chars**  
**File**: `0-create_array.c`  
Write a function that creates an array of characters and initializes it with a specific character. The function takes the size of the array and the character to initialize it with as parameters.

**Function prototype**:  
```c
char *create_array(unsigned int size, char c);
```

---

### 1. **String Duplication**  
**File**: `1-strdup.c`  
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string passed as an argument.

**Function prototype**:  
```c
char *_strdup(const char *str);
```

---

### 2. **String Concatenation**  
**File**: `2-str_concat.c`  
Write a function that concatenates two strings. The function allocates memory for the concatenated result and returns a pointer to it.

**Function prototype**:  
```c
char *str_concat(char *s1, char *s2);
```

---

### 3. **Allocate a 2D Grid**  
**File**: `3-alloc_grid.c`  
Write a function that returns a pointer to a 2D array of integers. The array should have a specified number of rows and columns. The function allocates memory for the grid.

**Function prototype**:  
```c
int **alloc_grid(int width, int height);
```

---

### 4. **Free a 2D Grid**  
**File**: `4-free_grid.c`  
Write a function that frees a 2D grid previously created by the `alloc_grid` function. This function deallocates the memory used by the grid.

**Function prototype**:  
```c
void free_grid(int **grid, int height);
  