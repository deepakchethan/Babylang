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
#define BABY_RESET "unga"


#define OPCODE_MOVE_FRONT 1
#define OPCODE_MOVE_BACK 2
#define OPCODE_INCREMENT 3
#define OPCODE_DECREMENT 4
#define OPCODE_TAKE_INPUT 5
#define OPCODE_GIVE_OUTPUT 6
#define OPCODE_LOOP_BEGIN 7
#define OPCODE_LOOP_END 8
#define OPCODE_RESET 9

#define OPCODE_FOUND 0
#define COMMAND_SIZE 4

/**
 * Start interpreting the code
 * @param source The source code to be interpreted
 */
void baby_parse(FILE* sourceCode);

/**
 * Insert a command into intermediatary code
 * @param command The command to be inserted
 */
void baby_insert_command(int command);

/**
 * Executes the commands in the program location
 */
void baby_execute();

/**
 * Reset the value stored at a memory location
 */
void baby_reset();

/**
 * Increment the value stored at a memory location
 */
void baby_increment_value();

/**
 * Decrement the value stored at memory location
 */
void baby_decrement_value();

/**
 * Point to the next line to be executed
 */
void baby_move_front();

/**
 * Point to the next line to be executed
 */
void baby_move_back();

/**
 * Read a character from stdin and write to current location
 * @return The character read from stdin.
 */
void baby_read(void);

/**
 * write a character to stdout.
 * @param character The character to output
 */
void baby_write(char character);

/**
 * Parse the command
 * @param command
 */
void baby_compare_command(char[4] command, char[4] );

