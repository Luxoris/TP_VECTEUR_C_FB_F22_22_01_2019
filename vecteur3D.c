#include "vecteur3D.h"

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
// NOTE On aditionne Selon X3 = X1 + X2 , Y3 = Y1 + Y2, Z3 = Z1 + Z2
//
//*****************************************************************************************************//
void additionVectorielle3D(const tVecteur3D stVecteur1,const tVecteur3D stVecteur2,tVecteur3D *pstResultat){
    pstResultat->nX = stVecteur1.nX + stVecteur2.nX;
    pstResultat->nY = stVecteur1.nY + stVecteur2.nY;
    pstResultat->nZ = stVecteur1.nZ + stVecteur2.nZ;
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
// NOTE On aditionne Selon X3 = X1 - X2 , Y3 = Y1 - Y2, Z3 = Z1 - Z2
//
//*****************************************************************************************************//

void soustractionVectorielle3D(const tVecteur3D stVecteur1,const tVecteur3D stVecteur2,tVecteur3D *pstResultat){
    pstResultat->nX = stVecteur1.nX - stVecteur2.nX;
    pstResultat->nY = stVecteur1.nY - stVecteur2.nY;
    pstResultat->nZ = stVecteur1.nZ - stVecteur2.nZ;
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
// NOTE On aditionne Selon X2 = X1 * nScalaire , Y2 = Y1 * nScalaire et Z2 = Z1 * nScalaire
//
//*****************************************************************************************************//
void multiplicationVectorielleScalaire3D(const tVecteur3D stVecteur1,const int nScalaire,tVecteur3D *pstResultat){
    pstResultat->nX = stVecteur1.nX * nScalaire;
    pstResultat->nY = stVecteur1.nY * nScalaire;
    pstResultat->nZ = stVecteur1.nZ * nScalaire;
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
// NOTE Calcul nResultat = X1*X2 + Y1*Y2 + Z1*Z2
//
//*****************************************************************************************************//
void produitScalaire3D(const tVecteur3D stVecteur1,const tVecteur3D stVecteur2,int *pnResultat){
    *pnResultat=stVecteur1.nX*stVecteur2.nX+stVecteur1.nY*stVecteur2.nY+stVecteur1.nZ*stVecteur2.nZ;
}

//###########################################
//PROGRAMME produitVectoriel
//*****************************************************************************************************//
//
// DESCRIPTION Calcul le produit vectorielle de deux vecteurs et ressort la vecteur resultat
//
// ENTREE / Les 2 vecteur, la ref du resultat
//
// SORTIE / La vecteur resultat
//
// NOTE Calcul X3 = Y1*Z2 - Y2*Z1,  Y3 = Z1*X2 - Z2*Y1, Z3 = X1*Y2 - X2*Y1
//
//*****************************************************************************************************//
void produitVectoriel3D(const tVecteur3D stVecteur1,const tVecteur3D stVecteur2,tVecteur3D *pstResultat){
    pstResultat->nX = stVecteur1.nY*stVecteur2.nZ-stVecteur1.nZ*stVecteur2.nY;
    pstResultat->nY = stVecteur1.nZ*stVecteur2.nX-stVecteur1.nX*stVecteur2.nZ;
    pstResultat->nZ = stVecteur1.nX*stVecteur2.nY-stVecteur1.nY*stVecteur2.nX;
}
