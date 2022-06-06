#!/bin/bash

# abcfile_gen.shが置いてあるディレクトリをカレントディレクトリとする
cd `dirname $0`

# $1 コンテストの番号
if [[ ! "$1" =~ ^[0-9]+$ ]]; then
    echo "コンテストの番号を正しく設定してください"
    exit 1
fi

files=()

if [[ "$#" -eq 1 ]]; then
    files=(A B C D)
elif [[ "$#" -le 5 ]]; then
    for i in "${@:2}"
    do
        # iがA, B, C, Dのいずれかであるか判定
        if [[ "$i" =~ ^[A-D]$ ]]; then
            files=("${files[@]}" "$i")            
        else
            echo "引数を正しく設定してください"
            exit 1
        fi
    done
else
    echo "引数を正しく設定してください"
    exit 1
fi

mkdir -p "$1"

for i in "${files[@]}"
do
    cp -i ../../template.cpp ./${1}/${i}.cpp
    echo "generate ${1}/${i}.cpp"
done

exit 0