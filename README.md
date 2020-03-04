# node-cxx-example
[![Build Status](https://travis-ci.com/springmeyer/node-cxx-example.svg?branch=master)](https://travis-ci.com/springmeyer/node-cxx-example)

This is a modern (as of 2020) example of a simple node C++ module (aka addon).

It is designed to be used as a template by those interested in having a relatively simple starting point for experiments and learning.

If you are looking to write a new production quality node module a better starting point would be https://github.com/mapbox/node-cpp-skel, because it contains more build and testing scaffolding to catch bugs you might write.

# Supports

 - OS X
 - Node >= 8

Linux support may be added in the future.

# Building

First install dependencies:

```
npm ci
```

Then, build or rebuild the C++ code with:

```bash
./compile-and-link.sh
```

Run `./compile-and-link.sh` every time you change anything in `module.cpp`.

# Testing

Run:

```bash
node test.js
```
