/*                              __   _,--="=--,_   __
                               /  \."    .-.    "./  \
                              /  ,/  _   : :   _  \/` \
                              \  `| /o\  :_:  /o\ |\__/
                               `-'| :="~` _ `~"=: |
                                  \`     (_)     `/
                           .-"-.   \      |      /   .-"-.
.-------------------------{     }--|  /,.-'-.,\  |--{     }-------------------------.
 )                        (_)_)_)  \_/`~-===-~`\_/  (_(_(_)                        (
(  todolist - Command line application to manage your daily or long-term schedule.  )
 ) You can write both lists and targets.                                           (
(  A list is a thing that you have to do in the very day.                           )
 ) A target is a thing that you have to finish in limited days that you input.     (
'-----------------------------------------------------------------------------------*/
#ifndef EDIT_LIST_H_0ZQO9VLW
#define EDIT_LIST_H_0ZQO9VLW

void write_list (void);
void remove_list(unsigned num);
void swap_list(unsigned num1, unsigned num2);

void write_target (void);
void remove_target(unsigned num);
void swap_target(unsigned num1, unsigned num2);

#endif /* end of include guard: EDIT_LIST_H_0ZQO9VLW */
