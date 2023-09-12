#include <stdio.h>
union SampleUnion 
{
    int integer;
    float floating;
    char character;
};

int main() 
{
    // Create an instance of the union
    union SampleUnion myUnion;

    
    printf("Size of SampleUnion: %lu bytes\n", sizeof(union SampleUnion));

    return 0;
}
