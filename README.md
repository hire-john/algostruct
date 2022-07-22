# Algostruct

Algostruct is a simple command line program that demonstrates implementations of various ALGOrithms and Data STRUCTures in the C programming language by developer John McDonnell. Algostruct will really have no actual practical use-value other than allowing potential prospective employers to get a better insight into the developers skills, capabilites, experience, and, thought process. While I am trying to write these in-accordance with industry best practices which may actually allow for this to be a usable library I'm sure there are more refined alternatives. All Algorithms, Data Strutures, and Application code are original implementations by John McDonnell of existing concepts from various technical fields (Mathematics, Computer Science Etc). 

## Development of this project

Community contributions/commits/pull requests are not accepted as this is simply a side-project that will be developed at will in-lieu of the maintainers (john@hire-john.com) freetime. Commits will be added as each section is completed and some will be added sporadically. 

I generally dedicate a small-portion of a day each day when I am able to complete one single algorithm or data structure depending on complexity. Sometimes I will be able to complete more than one per day and some may take more than one day. I am not racing a clock in developing these and am using the experience to derive as much learning value as possible. There will also be able time dedicated to the programs code as well. I will be trying to utilize industry best practices in writing that as well as taking the opporuntiy to explore C to the greatest extent possible. 

The program contains/will contain the following algortihms and structures and some additions not listed like graphs.

## ALGOrithms
![Algostruct Screenshot](https://www.hire-john.com/images/algostruct_start.png)

### Sorts
* Selection  
![Algostruct Selection Sort Screenshot](https://www.hire-john.com/images/algostruct_selection_sort.png)

* Insertion
![Algostruct Insertion Sort Screenshot](https://www.hire-john.com/images/algostruct_insertion_sort.png)

* Bubble
* Merge
* Quick 
* Heap
* Tree
* Shell
* Bucket
* Radix
* Counting
* Cube

### Searching
* Linear
* Binary 
* Ternary  
* Jump 
* Exponential 
* Interpolation

##  Data STRUCTures
* Array
* Stack
* Queue
* Hash Table
* Skip List
* Singly-Linked List
* Double-Linked List
* Binary Search Tree
* Cartesian Tree
* Red-Black Tree
* B-Tree
* KD Tree
* AVL Tree
* Splay Tree

## Build Environment

* Linux
* VIM (no IDE is used for any of these repos, yes I do use IDEs eclipse/netbeans/vscode/phpstorm)  
![VIM Version Screenshot](https://www.hire-john.com/images/vim_version.png)

* GNU Compiler Collection -> GCC version 12.1.1  
![GCC Version Screenshot](https://www.hire-john.com/images/gcc_version.png)

* GNU Debugger -> GDB Version 12.1.1  
![GDB Version Screenshot](https://www.hire-john.com/images/gdb_version.png)

* GNU Automake -> AM Version 1.16.5 (currently optional - maybe for future use) 
![Automake Version Screenshot](https://www.hire-john.com/images/automake_version.png)

* GNU Autoconf -> AC Version 2.71 (currently optional - maybe for future use) 
![Autoconf Version Screenshot](https://www.hire-john.com/images/autoconf_version.png)

* All C is written and compiled to be in accordance with the GNUISO C17 standard (gcc -std=c17) nearly everything will compile under C18 as well. I'm just sticking to the more wider known C17 standard at this time. 

### Building and Running

You can just run the application by using the following command from the main directory:

```
$: ./Algostruct
```

To build the project simply run make from the main directory:

```
$: make
$: ./Algostruct
```
