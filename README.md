# Babylang     ![travis_build_status](https://travis-ci.org/dodococo/Babylang.svg?branch=master)
  
Putting my own spin on some of my favorite estoeric languages brainf*ck and COW, I came up with the grand BabyLang with 9 amazing instructions. The interpreter is written in C++ (Cause, Why not?). It is basic, cause the best things in life are basic. It is esoteric for a reason. 
  
## Commands

| Instruction   | Description |
| ----------- | ----------- |
| gugu | Moves current memory position back one block.       |
| gaga | Moves current memory position forward one block.        |
| unga | Resets the current memory block. It replaces any value with 0. |
| uuug |	Decrement current memory block value by 1. |
| aaag |	Increment current memory block value by 1. |
| gaaa | Take user input and store it in the current memory block |
| guuu |	Print the current memory blocks content to the stdout |
| gagu |	Marks the beginning of the loop. It considers the current memory block's value as the flag to loop through the code. It keeps looping until that value is zero. |
| guga |	Marks the end of the loop. Absence of it after gagu will result in an error.   |

## Examples

#### Hello World

```aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag gugu gugu gugu gugu gugu gugu gugu gugu gugu gugu guuu gaga guuu gaga guuu gaga guuu gaga guuu gaga guuu gaga guuu gaga guuu gaga guuu gaga guuu gaga guuu gaga aaag aaag aaag aaag aaag aaag aaag aaag aaag aaag guuu ```


#### Sum of two number with user input

```gaaa gaga gaaa gugu gagu uuug gaga aaag gugu guga gaga guuu```

## Installation instructions

### Dependencies

* Qmake
* gcc (c++)

### Installation Instructions

* Clone the repo with ```git clone https://github.com/dodococo/Babylang```
* Enter into the directory with ```cd Babylang```
* Execute the build script ```sh buils.sh```
* Test with the example from ***Examples***
