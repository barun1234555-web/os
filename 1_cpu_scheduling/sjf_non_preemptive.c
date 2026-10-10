#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Roll no: 25071A6245\n");
    printf("Enter number of processes: ");

    scanf("%d", &n);

    int p[n], at[n], bt[n], ct[n], tat[n], wt[n], vis[n];
    float twt = 0, ttat = 0;

    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
        vis[i] = 0; 
        printf("Enter Arrival Time and Burst Time for P%d: ", i + 1);
        scanf("%d%d", &at[i], &bt[i]);
    }

    int cur = 0, done = 0;

    while (done < n) {
        int idx = -1;
        int min_bt = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (at[i] <= cur && !vis[i] && bt[i] < min_bt) {
                min_bt = bt[i];
                idx = i;
            }
        }

        if (idx == -1) {
            cur++; 
        } else {
            cur += bt[idx];
            ct[idx] = cur;
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];

            twt += wt[idx];
            ttat += tat[idx];
            vis[idx] = 1;
            done++;
        }
    }

    printf("\nProcess\tAT\tBT\tCT\tWT\tTAT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", p[i], at[i], bt[i], ct[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f\nAverage Turnaround Time = %.2f\n", twt / n, ttat / n);

    return 0;
}




