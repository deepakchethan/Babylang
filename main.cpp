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

#define MINIMUM_REQUIRED_PARAMETERS 2

#include <iostream>

#include "babylang.h"

/**
 * The Function that opens the files and checks if it is valid and returns a file pointer
 * @param sourceFileName The name of the file containing the source code
 */


int main(int numberOfArguments, char* argumentList[])
{
    if( numberOfArguments < MINIMUM_REQUIRED_PARAMETERS ){
            std::cout << "Usage: babylang hello.baby " << std::endl;
            exit(1);
    }

    baby_init();

    try {

        baby_parse(argumentList[1]);

    } catch (char* error) {

        std::cout << error << std::endl;
    }


    try{

        baby_execute();

    }catch  (   char* error ){

        std::cout << error << std::endl;
    }

    return 0;
}




