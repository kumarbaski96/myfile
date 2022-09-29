echo "Enter source and target file name:- "
read source target
if mv $source $target
then
echo "Your file has been successfully renamed";
fi
