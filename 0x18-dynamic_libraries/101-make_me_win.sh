#!/bin/bash
wget -P /tmp https://github.com/med-i/alx-low_level_programming/blob/main/0x18-dynamic_libraries/rand.so
LD_PRELOAD=/tmp/rand.so