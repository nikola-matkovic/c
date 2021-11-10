gcc $1 -lm -o $1.o
echo -e "\n"
./$1.o
echo -e "\n"
rm -rf $1.o