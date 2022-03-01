    var nbr1 = 0, nbr2 = 1, suivant, i, n = 10000000;
    for(i = 0; i <= n; i++){
      if (i <= 1){
        suivant = i;
      }
      else {
        somme = nbr1 + nbr2;
        nbr1 = nbr2;
        nbr2 = suivant;
      }
   }
