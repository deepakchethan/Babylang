/*
 * Copyright 2018 Deepak chethan
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <getopt.h>
#include <cctype>
using namespace std;



int main(int numberOfArguments, char* argumentList[])
{
    if( numberOfArguments < MINIMUM_REQUIRED_PARAMETERS ){
            printf( "Usage: %s hello.baby \n\n", argumentList[0] );
            exit(1);
    }
    FILE* filePointer = openFile(argv[1],"rb");
    return 0;
}

/**
 * The Function that opens the files and checks if it is valid and returns c stream pointer
 */
FILE* openFile(string fileName, string openMode){

    FILE* filePointer = fopen( fileName, openMode );

    if( filePointer == NULL ){
            printf( "Cannot open the source file [%s].\n", argumentList[1] );
            exit( 1 );
    }
}
