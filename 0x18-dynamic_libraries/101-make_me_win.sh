#!/bin/bash
wget -P /tmp/ https://raw.github.com/DadMed/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
