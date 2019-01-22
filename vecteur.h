#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED
#pragma once

//STRUCTURE
typedef struct tVecteur{
    int nX;
    int nY;
}tVecteur;

//PROTOTYPE
extern void additionVectorielle(const tVecteur stVecteur1,const tVecteur stVecteur2,tVecteur *pstResultat);
extern void soustractionVectorielle(const tVecteur stVecteur1,const tVecteur stVecteur2,tVecteur *pstResultat);
extern void multiplicationVectorielleScalaire(const tVecteur stVecteur1,const int nScalaire,tVecteur *pstResultat);
extern void produitScalaire(const tVecteur stVecteur1,const tVecteur stVecteur2,int *pnResultat);
extern void produitVectoriel(const tVecteur stVecteur1,const tVecteur stVecteur2,tVecteur *pstResultat,int const nZ1,int const nZ2);

#endif // VECTEUR_H_INCLUDED
