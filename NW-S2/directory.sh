echo "Enter folder name"
read dir 
if [ ! -d $dir ]
then
mkdir $dir
echo "Directory created"
else
echo "$dir already exists"
fi
