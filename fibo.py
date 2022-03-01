nbr1=0
nbr2=1
n=10000000
for i in range(n-3):
    if i <= 1:
        suivant = i
    else:
        suivant = nbr1 + nbr2
        nbr1 = nbr2
        nbr2 = suivant
