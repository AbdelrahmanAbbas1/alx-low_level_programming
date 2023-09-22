#!/bin/bash
wget https://github.com/AbdelrahmanAbbas1/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/$PWD/libgiga.so
