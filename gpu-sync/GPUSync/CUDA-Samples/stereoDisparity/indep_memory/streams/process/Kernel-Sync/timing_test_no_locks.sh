#!/bin/bash
for i in `seq 1 $1`;
do
  echo -n "$i,"
  ./run_i_SO_no_locks.sh $i $2;
done
