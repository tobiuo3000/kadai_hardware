#define NULL 0
#include <stdio.h>

int main(void){
    struct NODE{
        struct NODE *next;
        int val;
    };
    struct NODE* root;
    struct NODE node1;
    struct NODE node2;

    root = &node1;
    node1.next = &node2;
    node1.val =  100;
    node2.next = NULL;
    node2.val =  200;
    
    printf("size of int =%d, size of pointer =%d\n",
        sizeof(int), sizeof(struct NODE*));
    
    //①変数rootについて、そのアドレスと格納されている値を表示
    printf("root    addr:%p value:%p\n", &root, root);
    //  %p書式アドレスまたはポインタの値、%d書式はintの値
    printf("node1.val    addr:%p value:%d\n", &node1.val, node1.val);
//②node1.nextについて同様に、そのアドレスと格納されている値を表示
    printf("node1.next    addr:%p value:%d\n", &node1.next, node1.next);
// ここに追加
    //③node1.valについて同様に、そのアドレスと格納されている値を表示
    printf("node2.val    addr:%p value:%d\n", &node2.val, node2.val);
// ここに追加
//④node2.nextについて同様に、そのアドレスと格納されている値を表示
    printf("node2.next    addr:%p value:%d\n", &node2.next, node2.next);
// ここに追加
//⑤node2.valについて同様に、そのアドレスと格納されている値を表示
// ここに追加


    return 0;
}