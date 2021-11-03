gcc $1 -lm -o $2
echo -e "\n"
./$2
echo -e "\n"
rm -rf $2