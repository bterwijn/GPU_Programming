
Compile the CUDA example code in 'hello.cu' as:

```
nvcc hello.cu -o hello
```

Submit it as job with: 

```
./runjob.sh hello
```

This schedules the job, which might take a bit of time to complete.
When completed it should produce an output file something like 'slurm-22569159.out' in the currents directory:

```
ls -ltr *.out
```

Print the content of output file with:

```
cat <output-file.out>
```
