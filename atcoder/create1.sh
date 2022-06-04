#!/bin/bash

# create1.shが置いてあるディレクトリをカレントディレクトリとする
cd `dirname $0`
#配列
a=(A B C D)
echo "A.cpp ~ D.cppを生成します."
echo "~コンテスト名を入力してください:"
read file
mkdir ${file}
for ((i = 0; i < ${#a[@]}; i++))
do
    cp ./helloworld.cpp ./${file}/${a[i]}.cpp
done
