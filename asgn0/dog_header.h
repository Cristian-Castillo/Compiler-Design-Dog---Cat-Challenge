/*
    Cristian C. Castillo 
*/
#ifndef DOG_HEADER_H
#define DOG_HEADER_H

void user_input_output(int fd,const char *argv[]);
void dash_input_output();
void check_format(int fd,const char *argv[],int i);
void check_warn(int fd,const char * argv[]);

#endif
