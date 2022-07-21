#include<stdio.h>
#include<stdint.h>
int main(int argc, char* argv[]){
    FILE *fp1 = fopen(argv[1], "rb");
    FILE *fp2 = fopen(argv[2], "rb");
    uint32_t first=0;
    uint32_t second=0;
    unsigned char one[4];
    unsigned char two[4];
    fread(one,1,4,fp1);
    fread(two,1,4,fp2);
    //printf("%0x %0x %0x\n",one[0],one[1],one[2]);
    for(int i=0;i<4;i++){
        first=first<<8;
        first=first|one[i];
        second=second<<8;
        second=second|two[i];
    }
    printf("%d(%#x) + %d(%#x) = %d(%#x)\n",first,first,second,second,first+second,first+second);
    return 0;
}