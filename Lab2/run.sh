#!/bin/bash

out=`(./Lab2)`
echo $out
if [[ $out == *"!!!FAILURES!!!"* ]]; then
  exit 1;
fi


