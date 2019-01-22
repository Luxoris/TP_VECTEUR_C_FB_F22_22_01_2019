#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"
#include "vecteur3D.h"
#include "vue.h"
//###########################################
//PROGRAMME PRINCIPAL
//*****************************************************************************************************//
//
// DESCRIPTION Appel et test les procedures concernat les vecteurs 2D et 3D
//
// ENTREE / L'environnement
//
// SORTIE / L'affichage textuel des résultats
//
// NOTE Test d'abord l'ensemble des procedures 2D, puis des procedures 3D.
//
//*****************************************************************************************************//


int main(){
    tVecteur stVect1={5,6};
    tVecteur stVect2={8,10};
    tVecteur stVect3={0,0};
    tVecteur3D stVect3D1={5,6,-8};
    tVecteur3D stVect3D2={8,10,7};
    tVecteur3D stVect3D3={0,0,0};
    int nNb = 6;

    //TEST VECTEUR 2D
    printf("Valeur Vect1 : \n");
    affichageVecteur(stVect1);

    printf("Valeur Vect2 : \n");
    affichageVecteur(stVect2);

    printf("Test procedure addition Vectorielle : \n");
    additionVectorielle(stVect1,stVect2,&stVect3);
    affichageVecteur(stVect3);

    printf("Test procedure soustraction Vectorielle : \n");
    soustractionVectorielle(stVect1,stVect2,&stVect3);
    affichageVecteur(stVect3);

    printf("Test procedure multiplication vectorielle par un scalaire (6) : \n");
    multiplicationVectorielleScalaire(stVect1,nNb,&stVect3);
    affichageVecteur(stVect3);

    nNb=6;
    printf("Test procedure produit scalaire : \n");
    produitScalaire(stVect1,stVect2,&nNb);
    printf("nNb=%d\n",nNb);

    //TEST VECTEUR 3D

    printf("Valeur Vect1 : \n");
    affichageVecteur3D(stVect3D1);

    printf("Valeur Vect2 : \n");
    affichageVecteur3D(stVect3D2);

    printf("Test procedure addition Vectorielle : \n");
    additionVectorielle3D(stVect3D1,stVect3D2,&stVect3D3);
    affichageVecteur3D(stVect3D3);

    printf("Test procedure soustraction Vectorielle : \n");
    soustractionVectorielle3D(stVect3D1,stVect3D2,&stVect3D3);
    affichageVecteur3D(stVect3D3);

    nNb=6;
    printf("Test procedure multiplication vectorielle par un scalaire (6) : \n");
    multiplicationVectorielleScalaire3D(stVect3D1,nNb,&stVect3D3);
    affichageVecteur3D(stVect3D3);

    nNb=6;
    printf("Test procedure produit scalaire : \n");
    produitScalaire3D(stVect3D1,stVect3D2,&nNb);
    printf("nNb=%d\n",nNb);

    printf("Test procedure produit vectoriel : \n");
    produitVectoriel3D(stVect3D1,stVect3D2,&stVect3D3);
    affichageVecteur3D(stVect3D3);

    return 0;
}
