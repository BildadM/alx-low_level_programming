#!/bin/bash
wget -P .. https://github.com/BildadM/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
