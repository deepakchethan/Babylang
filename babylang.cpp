#include "babylang.h"
#include <deque>
#include <fstream>
#include <cstring>
#include <unordered_map>
#include <iostream>

/*
 * The Source generated after the initial interpretion
 */
static std::deque<int> intermediatary_source;
static std::deque<int>::iterator source_pointer;

/*
 * The memory tape for the program
 */
static std::deque<int> program_memory(1,0);
static std::deque<int>::iterator memory_pointer;

/*
 * A multi_map that maps the mnemonics with opcodes
 */
static std::unordered_map<std::string,int> mnemonic_mapper;

void baby_init(){
    mnemonic_mapper[BABY_INCREMENT] = OPCODE_INCREMENT;
    mnemonic_mapper[BABY_DECREMENT] = OPCODE_DECREMENT;
    mnemonic_mapper[BABY_MOVE_BACK] = OPCODE_MOVE_BACK;
    mnemonic_mapper[BABY_MOVE_FRONT] = OPCODE_MOVE_FRONT;
    mnemonic_mapper[BABY_TAKE_INPUT] = OPCODE_TAKE_INPUT;
    mnemonic_mapper[BABY_GIVE_OUTPUT] = OPCODE_GIVE_OUTPUT;
    mnemonic_mapper[BABY_LOOP_BEGIN] = OPCODE_LOOP_BEGIN;
    mnemonic_mapper[BABY_LOOP_END] = OPCODE_LOOP_END;
    mnemonic_mapper[BABY_RESET] = OPCODE_RESET;

    source_pointer = intermediatary_source.begin();
    memory_pointer = program_memory.begin();
}

void baby_reset(){
    *memory_pointer = 0;
}

void baby_increment_value(){

    *memory_pointer += 1;
}

void baby_decrement_value(){

    *memory_pointer -=1;
}

void baby_move_back(){

    if (memory_pointer == program_memory.begin()){

        memory_pointer = program_memory.end();
    }

    memory_pointer--;
}

void baby_move_front(){

    if (memory_pointer+1 == program_memory.end()){

        program_memory.push_back(0);

    }
    memory_pointer++;
}

void baby_read(){

    int userInput;
    std::cin >> userInput;
    *memory_pointer = char(userInput);
}

void baby_write(){

    char output;
    output = char (*memory_pointer);
    std::cout << output;

}

void baby_insert_command(int command){

    intermediatary_source.push_back(command);

}

void baby_parse(const char* source){

    std::fstream sourceStream;
    std::string keyword;
    sourceStream.open(source);

    while( sourceStream >> keyword )
    {


        if (mnemonic_mapper.find(keyword) != mnemonic_mapper.end()){
            baby_insert_command(mnemonic_mapper[keyword]);
        }
        else{
            throw "Illegal Command";
        }

    }

}

void baby_handle_loop(){

    source_pointer++;

    std::deque<int>::iterator loop_beginning_pointer = source_pointer;

    while (*memory_pointer){

        source_pointer = loop_beginning_pointer;

        while (*source_pointer != OPCODE_LOOP_END){

            baby_execute_command(*source_pointer);

             source_pointer++;

        }
    }
}

void baby_execute_command(int command){

    switch (command) {

        case OPCODE_INCREMENT: baby_increment_value();
            break;

        case OPCODE_DECREMENT: baby_decrement_value();
            break;

        case OPCODE_MOVE_FRONT: baby_move_front();
            break;

        case OPCODE_MOVE_BACK: baby_move_back();
            break;

        case OPCODE_TAKE_INPUT: baby_read();
            break;

        case OPCODE_GIVE_OUTPUT: baby_write();
            break;

        case OPCODE_RESET: baby_reset();
            break;

        case OPCODE_LOOP_BEGIN: baby_handle_loop();
            break;

    }

}
void baby_execute(){

    for (source_pointer = intermediatary_source.begin(); source_pointer != intermediatary_source.end(); ++source_pointer){

        baby_execute_command(*source_pointer);

    }
}


