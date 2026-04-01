/* * NF-1 MICRO-KERNEL CORE LOGIC v1.0
 * [span_13](start_span)ARCHITECT: ADITYA RAI (AADI-TECH SYSTEMS)[span_13](end_span)
 * [span_14](start_span)TARGET: INTEL i3 3rd GEN & BELOW[span_14](end_span)
 */

#include <stdio.h>

void clean_ram_legacy() {
    [span_15](start_span)// Direct Memory Optimization for 16-bit/32-bit[span_15](end_span)
    unsigned int *ptr;
    ptr = (unsigned int *)0x0001; [span_16](start_span)// Direct MDA Access[span_16](end_span)
    
    [span_17](start_span)printf("NF-1: Optimizing RAM for Legacy Hardware...\n");[span_17](end_span)
    [span_18](start_span)printf("Aadi-Tech Systems: Starting Revolution for Students.\n");[span_18](end_span)
}

int main() {
    [span_19](start_span)clean_ram_legacy();[span_19](end_span)
    return 0;
    }
