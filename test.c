#include <stdio.h>
#include <string.h>
void Araiwa();
int main(){
    Araiwa("Vegita",9000);
    return 0;
}
void Araiwa(char *name,int powaa){
    if(powaa>0){
        printf("%s what does the scouter say about his power",name);
        printf("\nIt's over %d!!!",powaa);
    }
    else{
        return;
    }
}
