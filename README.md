# JS
This repo contains all the javascript stuff I do during classes

## Exercise 2
Just to show a comparisson between c++ and typescript runtime execution:
```
$ time ./exercise2.
bash: ./exercise2.: No such file or directory

real	0m0.002s
user	0m0.001s
sys	0m0.001s

#######################

$ time ts-node exercise2.ts
[ [ 1, 2, 4, 3, 9 ], [ 2, 2, 3, 87, 7 ], [ 1, 2 ], [] ]

real	0m0.645s
user	0m1.054s
sys	0m0.087s
```

Note that I'm too lazy to implement a sorting algorithm in c++ but... maybe 0.01 extra time?
