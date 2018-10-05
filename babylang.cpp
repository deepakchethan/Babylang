#include "babylang.h"
#include <vector>

/*
 * The Source generated after the initial interpretion
 */
vector<int> intermediatary_source;

/*
 * The memory tape for the program
 */
vector<int> program_memory;

/*
 * An iterator that shows the currently executing instruction
 */
vector<int>::iterator instruction_counter;

void baby_reset(){
    *program_counter = 0;
}

void baby_increment_value(){
    *program_counter += 1;
}

void baby_decrement_value(){
    *program_counter -=1;
}

void baby_move_back(){
    program_counter--;
}

void baby_move_front(){
    program_counter++;

}

void baby_read(){
    char userInput;
    scanf("%s",&userInput);
    *program_counter = userInput;
}

void baby_write(){
    char output;
    output = *program_counter;
    printf("%s",output);
}

void baby_insert_command(int command){
    intermediatary_source.push_back(command);
}

void

// TODO: complete working on this
void baby_parse(File* source){

    char command[COMMAND_SIZE];

    while( !feof(source) )
    {

        command[COMMAND_SIZE-1] = fgetc( f );

        if( OPCODE_FOUND = !strncmp(BABY_MOVE_FRONT , command, COMMAND_SIZE ) )
            baby_insert_command(OPCODE_MOVE_FRONT);
        else if( OPCODE_FOUND = !strncmp( BABY_MOVE_BACK, command, COMMAND_SIZE ) )
            baby_insert_command(OPCODE_MOVE_BACK);
        else if( OPCODE_FOUND = !strncmp( "mOO", command, COMMAND_SIZE ) )
            program.push_back( 3 );
        else if( OPCODE_FOUND = !strncmp( "Moo", command, COMMAND_SIZE ) )
            program.push_back( 4 );
        else if( OPCODE_FOUND = !strncmp( "MOo", command, COMMAND_SIZE ) )
            program.push_back( 5 );
        else if( OPCODE_FOUND = !strncmp( "MoO", command, COMMAND_SIZE ) )
            program.push_back( 6 );
        else if( OPCODE_FOUND = !strncmp( "MOO", command, COMMAND_SIZE ) )
            program.push_back( 7 );
        else if( OPCODE_FOUND = !strncmp( "OOO", command, COMMAND_SIZE ) )
            program.push_back( 8 );
        else if( OPCODE_FOUND = !strncmp( "MMM", command, COMMAND_SIZE ) )
            program.push_back( 9 );
        else if( OPCODE_FOUND = !strncmp( "OOM", command, COMMAND_SIZE ) )
            program.push_back( 10 );
        else if( OPCODE_FOUND = !strncmp( "oom", command, COMMAND_SIZE ) )
            program.push_back( 11 );

        if( OPCODE_FOUND )
        {
            memset( command, 0, COMMAND_SIZE );
        }
        else
        {
            command[0] = command[1];
            command[1] = command[2];
            command[2] = 0;
        }
    }

fclose( f );
}


