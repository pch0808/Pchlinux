**ls [-a -l -h] [Linux path]**

>**-a** (include hiddden folder)  .bash_history

>**-l** (more information by list)

>**-h** (with l together to get format result(KB))

**pwd**
(print work dictory)

**touch [Linux path] & mkdir [Linux path]**

>eg. touch text.txt

**cat [Linux path]**

>eg. cat ./environment/hello.cpp

**more [Linux path]**  support page tuning

**cp [-r] ori. tar.**

>**-r** for folder

**mv ori. tar.**

**rm [-r -f] [Linux path]**

>**-r** for folder

>**-f** without hint

**which cd** 

>**cd** code position

**find $statpos -name $name**

**find $statpos -size +100k**

>*$name $name* *$name*

>end with,start with, with

**grep [-n] key path** 

>filter row from the file

>-n row number

**wc[-c -m -l -w] path**

>-c  count byte number

>-m  count character

>-l  count row

>-w  count words 

cat ./environment/hello.cpp|grep -n "return"    

>|left result is right's input  for grep

ls ./environment | grep hello.cpp

**echo "hello"**

**echo `pwd`**

>as command


"> >>"

>cover add to the right file

tail -f -2 ./environment/hello.cpp 

>  cat from end  

>-$num    
>-f follow modify持续追踪