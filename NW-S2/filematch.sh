echo "enter the first file name"
read file1
echo "enter the second file name"
read file2
cmp $file1 $file2 && rm $file2
if [ -e $file1 ]
then
if [ ! -e $file2 ]
then
echo " the two files contents are same. so $file2 is deleted"
else
echo " the two file contents are not same and $file2 not deleted"
fi
else
echo "$file1 is not existed"
fi
