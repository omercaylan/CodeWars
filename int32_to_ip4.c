#include <inttypes.h>
#include <stdio.h>
#include <string.h>

void uint32_to_ip(uint32_t ip, char *output)
{
    uint8_t *local;
    local = (uint8_t *)&ip;
    sprintf(output, "%d.%d.%d.%d", local[3], local[2], local[1], local[0]);
}

int main()
{
}