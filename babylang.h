/*
 * Copyright 2018 Deepak Chethan
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
#ifndef BABYLANG_H
#define BABYLANG_H

#define BABY_INCREMENT "aaag"
#define BABY_DECREMENT "uuug"
#define BABY_MOVE_BACK "gugu"
#define BABY_MOVE_FRONT "gaga"
#define BABY_TAKE_INPUT "gaaa"
#define BABY_GIVE_OUTPUT "guuu"
#define BABY_LOOP_BEGIN "gagu"
#define BABY_LOOP_END "guga"

/**
 * Start interpreting the code
 * @param source The source code to be interpreted
 */
void baby_interpret(File* source);

/**
 * Executes the commands in the program location
 */
void baby_execute();

/**
 * Reset the value stored at a memory location
 * @param reference The memory location to be reset
 */
void baby_reset(int reference);

/**
 * Increment the value stored at a memory location
 * @param reference The memory location to be incremented
 */
void baby_increment_value(int reference);

/**
 * Decrement the value stored at memory location
 * @param reference The memory location to be decremented
 */
void baby_decrement_value(int reference);

/**
 * Point to the next line to be executed
 */
void baby_move_front();

/**
 * Point to the next line to be executed
 */
void baby_move_back();

/**
 * Decrement the value stored at memory location
 * @param reference The memory location to be decremented
 */
void baby_decrement(int reference);

/**
 * Read a character from stdin and write to current location
 * @return The character read from stdin.
 */
char baby_read(void);

/**
 * write a character to stdout.
 * @param character The character to output
 */
char baby_write(char character);



