#ifndef VECTEUR3D_H_INCLUDED
#define VECTEUR3D_H_INCLUDED
#pragma once

//STRUCTURE
typedef struct tVecteur3D{
    int nX;
    int nY;
    int nZ;
}tVecteur3D;

//PROTOTYPE
extern void additionVectorielle3D(const tVecteur3D stVecteur1,const tVecteur3D stVecteur2,tVecteur3D *pstResultat);
extern void soustractionVectorielle3D(const tVecteur3D stVecteur1,const tVecteur3D stVecteur2,tVecteur3D *pstResultat);
extern void multiplicationVectorielleScalaire3D(const tVecteur3D stVecteur1,const int nScalaire,tVecteur3D *pstResultat);
extern void produitScalaire3D(const tVecteur3D stVecteur1,const tVecteur3D stVecteur2,int *pnResultat);
extern void produitVectoriel3D(const tVecteur3D stVecteur1,const tVecteur3D stVecteur2,tVecteur3D *pstResultat);

#endif // VECTEUR3D_H_INCLUDED
