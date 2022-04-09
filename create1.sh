#!/bin/bash

#配列
a=(A B C D)
echo "~/compro からのディレクトリを作成しA.cpp ~ D.cppを生成します."
echo "~/compro/ からのファイル名を入力してください:"
read file
mkdir ~/compro/${file}
for ((i = 0; i < ${#a[@]}; i++))
do
    cp ~/compro/helloworld.cpp ~/compro/${file}/${a[i]}.cpp
done