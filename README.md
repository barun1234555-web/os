# Operating Systems Lab

C programs and sample outputs for the Operating Systems lab experiments (VNRVJIET).
Roll no: **25071A6245**

## Experiments

| # | Experiment | Programs |
|---|---|---|
| 1 | [FCFS and SJF Scheduling Algorithms](Exp01_FCFS_and_SJF/) | `fcfs_without_arrival.c`, `fcfs_with_arrival.c`, `sjf_non_preemptive.c`, `sjf_preemptive.c` |
| 2 | [Priority and Round Robin Scheduling Algorithms](Exp02_Priority_and_RoundRobin/) | `priority_non_preemptive.c`, `priority_preemptive.c`, `round_robin_tq2.c`, `round_robin_tq10.c` |
| 3 | [Banker's Algorithm and Analysis of the Scheduling Algorithms](Exp03_Bankers_and_Analysis/) | `bankers_algorithm.c` |
| 4 | [Implementation of Memory Allocation Methods](Exp04_Memory_Allocation/) | `first_fit.c`, `worst_fit.c`, `best_fit.c` |
| 5 | [Paging Technique of Memory Management](Exp05_Paging/) | `paging.c` |
| 7 | [Frame Allocation Methods](Exp07_Frame_Allocation/) | `minimum_frames.c`, `equal_allocation.c`, `proportional_allocation.c` |
| 8 | [Disk Scheduling Algorithms: FCFS, SSTF, SCAN](Exp08_Disk_Scheduling_FCFS_SSTF_SCAN/) | `fcfs_disk.c`, `sstf_disk.c`, `scan_disk.c` |
| 9 | [Disk Scheduling Algorithms: C-SCAN, LOOK, C-LOOK](Exp09_Disk_Scheduling_CSCAN_LOOK_CLOOK/) | `cscan_disk.c`, `look_disk.c`, `clook_disk.c` |
| 10 | [File Allocation Strategies](Exp10_File_Allocation/) | `sequential_allocation.c`, `indexed_allocation.c`, `linked_allocation.c` |

Each experiment folder contains the `.c` source files and a `README.md` with the aim and the test-case outputs.

> The lab record has no Experiment 6, so the numbering jumps from 5 to 7.

## How to compile and run

```bash
cd Exp01_FCFS_and_SJF
gcc fcfs_without_arrival.c -o fcfs_without_arrival
./fcfs_without_arrival
```
