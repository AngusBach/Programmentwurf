#!/bin/bash

cmake  -S . -B build
cd build
make 
./ libraries_ex_exec
cd-build
rm -rf build
