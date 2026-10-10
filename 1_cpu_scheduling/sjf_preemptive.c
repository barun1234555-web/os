
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Roll no: 25071A6245\n");
    printf("Enter number of processes: ");

    scanf("%d", &n);
    int at[n], bt[n], rt[n], ct[n];
    int done = 0, time = 0;
    float twt = 0, ttat = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter Arrival Time and Burst Time for P%d: ", i + 1);
        scanf("%d%d", &at[i], &bt[i]);
        rt[i] = bt[i]; 
    }

    while (done < n) {
        int min_rt = INT_MAX;
        int idx = -1;

        for (int i = 0; i < n; i++) {
            if (at[i] <= time && rt[i] > 0 && rt[i] < min_rt) {
                min_rt = rt[i];
                idx = i;
            }
        }

        if (idx == -1) {
            time++;
            continue;
        }

        rt[idx]--;
        time++;

        if (rt[idx] == 0) {
            done++;
            ct[idx] = time;
        }
    }

    printf("\nProcess\tAT\tBT\tCT\tWT\tTAT\n");
    for (int i = 0; i < n; i++) {
        int tat = ct[i] - at[i];
        int wt = tat - bt[i];
        twt += wt;
        ttat += tat;
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], ct[i], wt, tat);
    }

    printf("\nAverage Waiting Time = %.2f\nAverage Turnaround Time = %.2f\n", twt / n, ttat / n);

    return 0;
}
