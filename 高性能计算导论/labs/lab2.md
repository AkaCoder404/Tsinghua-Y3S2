# 高性能 lab2

## 实验目的

Implement parallel BFS (Breadth First Search) to help familiarize yourself with OpenMP and OpenMP+MPI mixed programming.

## 实验任务

- Fill in the ```bfs_omp``` function in the ```bfs_omp.cpp``` file and the ```bfs_omp_mpi``` function in the ```bfs_omp_mpi.cpp``` file. Use OpenMP and OpenMP+MPI to implement the parallelized BFS algorithm in these two functions, and finally get the shortest from node 0 to all nodes Distance (length of each side is 1)

## 实验实现

After reading and understanding the given top-down algorithm in ```bfs_common.cpp``` and how it utilized CSR to store graph data, I tried many methods to improve the algorithm. 

### bfs_omp

I first implemented a BFS Bottom-Up approach. In some cases, this method is sometimes more efficient because instead of iterating over all vertices in the frontier and marking all vertices as a neighbor to the frontier. We can implement a BFS algorithm that has each node check whether it should be added to the frontier. However, without parallelism, it would not make a significant difference in execution time. Thus, I then parallelized the BFS top down algorithm. 

In order to do so, I first had to identify where I could add parallelism, as well as inserting the appropriate synchronization to ensure correctness.

I inserted this

```
 #pragma omp parallel num_threads(NUM_THREADS) private(local_count)   
```

right above for loop that would look for neighboring nodes and update the new_frontier. 

I utilized

```
__sync_bool_compare_and_swap()
```

### bfs_omp_mpi



## 实验结果

### bfs_omp

对 OpenMP 版本，报告使用 1, 7, 14, 28 线程 **在 `68m.graph` 、`200m.graph`或`500m.graph`图下 `bfs_omp` 函数的运行时间（三个图选择一个报告即可），及相对单线程的加速比** 。

#### 3m.graph

```
$ srun -N -1 -n ./bfs_omp ./graph/3m.graph
Graph stats:
  Edges: 2987624
  Nodes: 1134890
  
Thread Count = 1 : Average execution time of function bfs_omp is 60.447600 ms.
Thread Count = 28: Average execution time of function bfs_omp is 9.787000 ms.
```

#### 68m.graph

```
$ srun -N -1 -n ./bfs_omp ./graph/68m.graph
Graph stats:
  Edges: 68993773
  Nodes: 4847571
  

Thread Count = 1 : Average execution time of function bfs_omp is 405.418700 ms.
Thread Count = 7 : Average execution time of function bfs_omp is 404.122200 ms.
Thread Count = 14 : Average execution time of function bfs_omp is 223.140500 ms.
Thread Count = 28 : Average execution time of function bfs_omp is 122.543800 ms.ge execution time of function bfs_omp is 125.567300 ms.
```

#### 200m.graph

```
$ srun -N -1 -n ./bfs_omp ./graph/200m.graph
```

#### 500m.graph

```
$ srun -N -1 -n ./bfs_omp ./graph/500m.graph
```



对 OpenMP+MPI 版本，报告 1×11×1, 1×21×2, 1×41×4, 1×141×14, 1×281×28, 2×12×1, 2×22×2, 2×42×4, 2×142×14, 2×282×28, 4×14×1, 4×24×2, 4×44×4, 4×144×14, 4×284×28 进程（N×PN×P 表示 NN 台机器，每台机器 PP 个进程，线程数 TT 自定，但 P×TP×T 不建议超过 28）**在 `68m.graph` 、`200m.graph`或`500m.graph`图下 `bfs_omp_mpi` 函数的运行时间（三个图选择一个报告即可），及相对单进程的加速比** 。此部分测试建议使用脚本提交运行、记录输出，以减少工作量。

```

```









## 实验分析



## Resources

https://stackoverflow.com/questions/42970700/openmp-dynamic-vs-guided-scheduling