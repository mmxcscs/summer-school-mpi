#!/bin/bash

for i in $(ls 0*/C/*.c); do
astyle --style=linux $i
done

rm 0*/C/*.c.orig
