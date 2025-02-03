//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    printf("-------------EX1-------------\n") ;
    
    int c=5;
    struct node a,b,d,*head ;
    a.value = c;
    a.next=&b;
    b.next=&d;
    b.next->value = 11 ;
    head=&a;
    b.value=head->value+3;
    d.next = NULL ;

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next->next->value );

    

/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    printf("-------------EX2-------------\n") ;

    struct node f ;
    f.next = &a ;
    head = &f ;
    f.value = 2 ;
    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next->next->value );
    printf("%d\n", head ->next->next->next->value );


    printf("-------------EX3-------------\n") ;

    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    //  Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%d\n", tmp->value);
            tmp = tmp -> next ;
          // What is missing???
        }
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
       printf("-------------EX4-------------\n") ;

    typedef struct node* NodePtr;
    NodePtr tmp1=head;

         while(tmp1!=NULL){
            printf("%d\n", tmp1->value);
           // What is missing???
           tmp1 = tmp1 -> next ;
        }
    
    
 //  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help

         printf("-------------EX5-------------\n") ;

    head = (NodePtr) malloc(sizeof(struct node)) ;
    tmp = head ;

    for(i = 0 ; i < 3 ; i++)
    {
        tmp -> value = i+3 ;
        tmp -> next = (NodePtr) malloc(sizeof(struct node)) ;
        tmp = tmp -> next ;
    }
    tmp -> value = i+3 ;
    tmp -> next = NULL ;

    for(tmp=head ; tmp!=NULL ; tmp=tmp -> next)
    {
        printf("%d\n", tmp -> value) ;
    }

    printf("-------------EX6-------------\n") ;

    //  Exercise VI Free all node !!
         //use a loop to help
          
    for(tmp=head ; tmp!=NULL ; tmp=head)
    {
        head = head -> next ;
        //ขยับ head ไปข้างหลัง 1 ตำแหน่ง
        printf("Free %d\n", tmp -> value) ;
        free(tmp) ;
    }
    
    return 0;
}
