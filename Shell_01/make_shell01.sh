#Ejercicio 00
mkdir ex01
cd ex01
echo "id -Gn $FT_USER| sed 's/ /,/g'| tr -d '\n'" > print_groups.sh
git add print_groups.sh
git commit -m "ex01 done"
cd ..

#Ejercicio 02
mkdir ex02
cd ex02
echo "find . -type f -name "*.sh"|sed 's/\.sh//g'" > find_sh.sh
git add find_sh.sh
git commit -m "ex02 done"
cd ..

#Ejercicio 03
mkdir ex03
cd ex03
echo "find . | wc -l" > count_files.sh
git add count_files.sh
git commit -m "ex02 done"
cd ..

#Ejercicio 04
mkdir ex04
cd ex04
echo "ifconfig | awk '/ether/ {print \$2}'" > MAC.sh
git add MAC.sh
git commit -m "ex04 done"
cd ..

#Ejercicio 05
mkdir ex05
cd ex05
echo "42" > \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
git add 
git commit -m "ex05 done"
cd ..

#Ejercicio 06
mkdir ex06
cd ex06
echo "ls -l | awk 'NR%2==0 {print NR,\$0}'" > skip.sh
git add git_commit.sh
git commit -m "ex06 done"
cd ..

#Ejercicio 07

#Ejercicio 08

#Ejercicio 09


