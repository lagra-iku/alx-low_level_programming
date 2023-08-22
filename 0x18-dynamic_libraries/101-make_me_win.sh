#!/bin/bash
wget -P /path https://github.com/lagra-iku/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=/path/101-make_me_win.so
