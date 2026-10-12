

#include <stdio.h>

int main(void) {
    printf("         STATE TRANSITION TABLE (4-BIT JOHNSON COUNTER)  \n");
    printf("| Present State (Q0 Q1 Q2 Q3) | Next State (Q0' Q1' Q2' Q3') |\n");

    for (int state = 0; state < 16; state++) {
        // Extract individual bits (Q0 Q1 Q2 Q3)
        int q0 = (state >> 3) & 1;
        int q1 = (state >> 2) & 1;
        int q2 = (state >> 1) & 1;
        int q3 = (state >> 0) & 1;

        // Next state logic: D0 = ~Q3, D1 = Q0, D2 = Q1, D3 = Q2[span_0](start_span)[span_0](end_span)
        int q0_next = !q3;
        int q1_next = q0;
        int q2_next = q1;
        int q3_next = q2;

        printf("|          %d  %d  %d  %d          |           %d   %d   %d   %d          |\n",
               q0, q1, q2, q3, q0_next, q1_next, q2_next, q3_next);
    }

    printf("+-----------------------------+------------------------------+\n");
    return 0;
}

