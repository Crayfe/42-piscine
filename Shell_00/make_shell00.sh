#Ejercicio 00
mkdir ex00
cd ex00
touch z
echo "Z" > z
git add z
git commit -m "ex00 done"
cd ..

#Ejercicio 01
mkdir ex01
cd ex01
echo "123456789012345678901234567890123456789" > testShell00
touch -t 202406012342 testShell00
chmod 455 testShell00
tar -cf testShell00.tar testShell00
rm testShell00
git add testShell00.tar
git commit -m "ex01 done"
cd ..

#Ejercicio 02
mkdir ex02
cd ex02
mkdir test0
touch -t 202406012047 test0
chmod 715 test0
echo "123" > test1
touch -t 202406012146 test1
chmod 714 test1
mkdir test2 
touch -t 202406012245 test2
chmod 504 test2
echo "" > test3
touch -t 202406012344 test3
chmod 404 test3
echo "2" > test4
touch -t 202406012343 test4
chmod 641 test4
ln test3 test5 
touch -t 202406012344 test5
chmod 404 test5
ln -s test0 test6
touch -mht 202406012220 test6
tar -cf exo2.tar *
rm -r test*
git add exo2.tar
git commit -m "ex02 done"
cd ..

#Ejercicio 03
mkdir ex03
cd ex03
echo "ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABgQC16/TUD7TEOWZyNCR3p3Wli8csecyRluM4uqJsAzbifxU+il+QhAsnzfveFqcJqGhpQYKPxWNzOIPWdAnNMhd8LIjwWfdN+4XncraIhdhEZRGFORhVZDeuDSWpgdOa3CzyqRxlQXkymA0hb3g8jQLT93dA3kmyOOkkS9DtXZL2w1GMz6JJAgdh4zdKKMAe/Wxt7dIAkuA76Lf5wAMKuwalrqHnek2zKLZI/bB1oh1xIzHBrBcrmRMaBPUEcjfjQ11KCmdddpI8gvexTEQSs+NJJxCcuQbd8rSPlzntW0MHg2JopGNRTWIQ9guhtmxlCemUjqYogNhyJILLZOdqnRhgOCqp34sST5osk94dH8mLf+lE8clfowZ/72c49xTnFqyWAjq+n+IQ9TDFAAmTeL2FesqJa7V/lGgvvOo4F+XwvrwaJkLkOrnJzqHc6TxOca9U5i75MW2R6gkpQhAhnSUXJpC3Mm5F5dXBl1ZM3QRO/0DwekaOhHmMnbL/8vASswk= cayuso-f@c3r7s1.42madrid.com" > id_rsa_pub
git add id_rsa_pub
git commit -m "ex03 done"
cd ..

#Ejercicio 04
mkdir ex04
cd ex04
echo "ls -mtp" > midLS
git add midLS
git commit -m "ex04 done"
cd ..

#Ejercicio 05
mkdir ex05
cd ex05
echo "git log --format="%H" -5" > git_commit.sh
git add git_commit.sh
git commit -m "ex05 done"
bash git_commit.sh | cat -e
cd ..

#Ejercicio 06
mkdir ex06
cd ex06
echo "git ls-files --others --ignored --exclude-standard" > git_ignore.sh
git add git_ignore.sh
git commit -m "ex06 done"
cd ..

#Ejercicio 07
mkdir ex07
cd ex07
#patch a sw.diff
echo "Episode V, A NEW H0PE It is a period of civil war
Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire. 
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.


Pursued by the Empire's sinister agents,
Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..



" > b
git add b
git commit -m "ex07 done"
cd ..

#Ejercicio 08
mkdir ex08
cd ex08
echo "find . -type f \( -name "*~" -o -name "#*#" \) -delete -print" > clean
git add clean
git commit -m "ex08 done"
cd ..

#Ejercicio 09
mkdir ex09
cd ex09
echo "41    string 42    42 file" > ft_magic
git add ft_magic
git commit -m "ex09 done"
cd ..
 
 

