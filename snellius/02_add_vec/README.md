
Build all executables with:

```
make
```

Let's first schedule a job to print some properties of the GPU we are running on:

```
./runjob.sh enum_gpu
```

Wait for and print (with: cat file.out) the output file for each job:

```
ls -ltr *.out 
```

Schedule a job to do vector addition, as discussed in slides, on the CPU:

```
./runjob.sh add_vec_cpu
```

Schedule a job to do vector addition on the GPU using 4 threads and as many blocks as needed to cover all vector elements:

```
./runjob.sh add_vec_gpu4
```

We use just 4 threads to follow the example in the slides, for more parallelism and speed use 256, 512, or max 1024 threads.
