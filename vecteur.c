#include "vecteur.h"

//###########################################
//PROGRAMME additionVectorielle
//*****************************************************************************************************//
//
// DESCRIPTION Additionne deux vecteurs et sort le resultat en argument
//
// ENTREE / Les 2 vecteur, la ref du vecteur résultat.
//
// SORTIE / La valeur obtenu à la fin
//
// NOTE On aditionne Selon X3 = X1 + X2 et Y3 = Y1 + Y2
//
//*****************************************************************************************************//
void additionVectorielle(const tVecteur stVecteur1,const tVecteur stVecteur2,tVecteur *pstResultat){
    pstResultat->nX = stVecteur1.nX + stVecteur2.nX;
    pstResultat->nY = stVecteur1.nY + stVecteur2.nY;
}

//###########################################
//PROGRAMME soustractionVectorielle
//*****************************************************************************************************//
//
// DESCRIPTION Soustrait le second vecteur au premier et sort le resultat en argument
//
// ENTREE / Les 2 vecteur, la ref du vecteur résultat.
//
// SORTIE / La valeur obtenu à la fin
//
// NOTE On aditionne Selon X3 = X1 - X2 et Y3 = Y1 - Y2
//
//*****************************************************************************************************//
void soustractionVectorielle(const tVecteur stVecteur1,const tVecteur stVecteur2,tVecteur *pstResultat){
    pstResultat->nX = stVecteur1.nX - stVecteur2.nX;
    pstResultat->nY = stVecteur1.nY - stVecteur2.nY;
}

//###########################################
//PROGRAMME multiplicationVectorielleScalaire
//*****************************************************************************************************//
//
// DESCRIPTION Multplie le vecteur par un scalaire et sort le resultat en argument
//
// ENTREE / Le vecteur, le scalaire, la ref du vecteur résultat.
//
// SORTIE / La valeur obtenu à la fin
//
// NOTE On aditionne Selon X2 = X1 * nScalaire et Y2 = Y1 * nScalaire
//
//*****************************************************************************************************//
void multiplicationVectorielleScalaire(const tVecteur stVecteur1,const int nScalaire,tVecteur *pstResultat){
    pstResultat->nX = stVecteur1.nX * nScalaire;
    pstResultat->nY = stVecteur1.nY * nScalaire;
}

//###########################################
//PROGRAMME produitScalaire
//*****************************************************************************************************//
//
// DESCRIPTION Calcul le produit scalaire de deux vecteurs et ressort la valeur
//
// ENTREE / Les 2 vecteur, la ref du resultat
//
// SORTIE / La valeur obtenu à la fin
//
// NOTE Calcul nResultat = X1*X2 + Y1*Y2
//
//*****************************************************************************************************//
void produitScalaire(const tVecteur stVecteur1,const tVecteur stVecteur2,int *pnResultat){
    *pnResultat=stVecteur1.nX*stVecteur2.nX+stVecteur1.nY*stVecteur2.nY;
}

//###########################################
//PROGRAMME produitVectoriel
//*****************************************************************************************************//
//
// DESCRIPTION Calcul le produit vectorielle de deux vecteurs et remplace la coordonné z par 2 constante z1 et z2
//
// ENTREE / Les 2 vecteur, la ref du resultat, les const z1 et z2
//
// SORTIE / La vecteur resultat
//
// NOTE Calcul X3 = Y1*Z2 - Y2*Z1,  Y3 = Z1*X2 - Z2*Y1
//
//*****************************************************************************************************//
void produitVectoriel(const tVecteur stVecteur1,const tVecteur stVecteur2,tVecteur *pstResultat,int const nZ1,int const nZ2){
    pstResultat->nX = stVecteur1.nY*nZ2-nZ1*stVecteur2.nY;
    pstResultat->nY = nZ1*stVecteur2.nX-stVecteur1.nX*nZ2;
}
