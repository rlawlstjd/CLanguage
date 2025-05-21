#include <stdio.h>
#include <string.h>

int main(void){ // 매개변수 사용하지 않겠다. {

    char ch[20]; 
    // 개행문자를 없애기 위한 방법 
    ch[strlen(ch)-1] = '\0'; 
    
    fgets(ch, sizeof(ch), stdin); 
    // if 10글자만 썼다면, 0~9까지는 문자가 들어가고 10은 개행문자 11은 널문자가 들어간다. 

    printf("%s", ch); 


}
// fflush(stdin)l 하면 버퍼에 있는 내용을 전부 지울 수 있음. 