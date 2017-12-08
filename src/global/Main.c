#include <stdio.h>
#include "Translate.h"
#include "Debug.h"
#include "Exec.h"
#include "WindList.h"

int main(int argc, char const *argv[]) {
        WindObject_INIT(foo);
        WindObject* foop = &foo;
        char* src = "in [ \"gggggggggg\" ] -> + \"rrr\" -> d";
        char* codeSrc = src;
        char** srcad = &codeSrc;
        Translate_cmd(foop, srcad);
        Debug_obj(foop);
        Translate_transition(foop, srcad);
        Exec_exec(foop);
        Debug_obj(foop);
        foop->state = WindState_Translate;
        /*Translate_cmd(foop, srcad);
           Translate_transition(foop, srcad);

           Exec_exec(foop);
           Debug_obj(foop);*/

        return 0;
}
