#include <stdio.h>
#include <stdlib.h>

int main() { 
    printf("Roll no: 25071A6245\n"); 

    int n, head, req[25], thm = 0; 

    printf("Enter number of requests: "); 
    scanf("%d", &n);

    printf("Enter request sequence: "); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &req[i]); 
    }

    printf("Enter initial head position: "); 
    scanf("%d", &head); 

    int original_n = n;
    req[n++] = head; 

    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (req[j] > req[j + 1]) { 
                int t = req[j]; 
                req[j] = req[j + 1]; 
                req[j + 1] = t; 
            } 
        } 
    } 

    int pos = 0; 
    for (int i = 0; i < n; i++) {
        if (req[i] == head) { 
            pos = i; 
            break; 
        }
    }

    printf("\nSeek Sequence: %d", head);
    int cur = head; 

    for (int i = pos + 1; i < n; i++) { 
        thm += abs(req[i] - cur); 
        cur = req[i]; 
        printf(" -> %d", cur); 
    } 

    for (int i = 0; i < pos; i++) { 
        thm += abs(req[i] - cur); 
        cur = req[i]; 
        printf(" -> %d", cur); 
    } 

    printf("\n\nTotal Head Movement = %d\n", thm);
    printf("Average Seek Time = %.2f\n", (float)thm / original_n);

    return 0; 
}