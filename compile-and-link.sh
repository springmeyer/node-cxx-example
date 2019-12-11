#!/usr/bin/env bash

clang++ -o module.node module.cpp -std=c++14 -Inode_modules/node-addon-api -Inode_modules/node-addon-api/src -Wl,-undefined,dynamic_lookup