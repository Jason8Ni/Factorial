#!/bin/bash

# download pip, cpplint
python get-pip.py

pip install cpplint

cpplint main.cpp Factorial.cpp

#make and output whether it suceedes or fails

make 

([ $? -eq 0 ] && echo "success!") || echo "failure!"

./factorialmake

exit 0
