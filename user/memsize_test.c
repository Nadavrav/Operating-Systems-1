#include kernel/types.h
#include user/user.h

int main(int argc,char **argv){
    //(a) Print how many bytes of memory the running process is using by calling memsize().
    int memory_size = memsize();
    printf("memory size is: %d\n",memory_size);

    //(b) Allocate 20k more bytes of memory by calling malloc().
    void* new_memory =malloc(20000);
    int new_memory_size = memsize();

    //Print how many bytes of memory the running process is using after the allocation.
    printf("new memory size after malloc is: %d\n",new_memory_size);

    //(d) Free the allocated array.
    free(new_memory);

    //(e) Print how many bytes of memory the running process is using after the release.
    int new_memory_size2 = memsize();
    printf("new memory size after free is: %d\n",new_memory_size2);

    exit(0,0);


}