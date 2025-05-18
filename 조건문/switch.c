#include <stdio.h>


// int main(void){
//     int rank = 3; 
//     int m = 0;  

//     switch (rank){
//         case 1 : 
//             m = 300; 
//             break;
//         case 2 :
//             m = 200; 
//             break; 
//         case 3 :
//             m = 100; 
//             break; 
//         default :
//             m = 50 ; 
//             // 마지막은 break 써도 되고 안써도 됨. 
//     }

//     printf("%d", m); 
// }

int main(void){
    int rank = 0; 
    int m = 0 ; 

    printf("이번 대회에서 몇 등 하셨습니까?"); 
    scanf("%d", &rank); 

    switch (rank){
        case 1: 
            m = 300; 
            break; 
        case 2: 
            m = 200; 
            break; 
        case 3: 
            m = 100; 
            break; 
        default : 
            m = 50; 
    }
    
    if (rank <= 3){
        printf("당신은 %d등 이므로 상금은 %d원 입니다.", rank, m); 
    } else {
        printf("참가자 전원 %d원이 지급됩니다.", m); 
    }

}
