#ifndef PERSO_H_
#define PERSO_H_
#include "fonction.h"
/**
* @struct perso
* @brief struct for personnage
*/

typedef struct perso
{
	int a;
	SDL_Rect position; /*!<rectangle*/
	SDL_Surface *fond00;/*!< Surface. */
	SDL_Surface *fond0;/*!< Surface. */
	SDL_Surface *fond1;/*!< Surface. */
	SDL_Surface *fond2;/*!< Surface. */
	SDL_Surface *fond3;/*!< Surface. */
	SDL_Surface *fond4;/*!< Surface. */
	SDL_Surface *fonda;/*!< Surface. */
	SDL_Surface *fondb;/*!< Surface. */
	SDL_Surface *fondc;/*!< Surface. */
	SDL_Surface *fondd;/*!< Surface. */
	SDL_Surface *fonde;/*!< Surface. */
	SDL_Surface *fond100;/*!< Surface. */
	SDL_Surface *fond10;/*!< Surface. */
	SDL_Surface *fond11;/*!< Surface. */
	SDL_Surface *fond12;/*!< Surface. */
	SDL_Surface *fond13;/*!< Surface. */
	SDL_Surface *fond14;/*!< Surface. */
	SDL_Surface *fond1a;/*!< Surface. */
	SDL_Surface *fond1b;/*!< Surface. */
	SDL_Surface *fond1c;/*!< Surface. */
	SDL_Surface *fond1d;/*!< Surface. */
	SDL_Surface *fond1e;/*!< Surface. */

}perso;
/**
* @struct vie
* @brief struct for life
*/
typedef struct vie
{
	int nb;
	SDL_Rect position;/*!<rectangle*/
	SDL_Rect position2;/*!<rectangle*/
	SDL_Surface *fond1;/*!< Surface. */
	SDL_Surface *fond2;/*!< Surface. */
	SDL_Surface *fond3;/*!< Surface. */
	SDL_Surface *fond4;/*!< Surface. */
	SDL_Surface *fond5;/*!< Surface. */
}vie;
void gravity(SDL_Rect *positionchar,int gravity,int a,int jumping,int jumpspeed,int *falling);
void jumpin(SDL_Rect *position,SDL_Rect *camera,int jump,int *i,int jumpheight,int jumpspeed);
void initialiserperso(perso *perso);
void initialiserperso2(perso *perso);
void initialiserperso3(perso *perso);
void freefurfaceperso(perso *perso);
int mouv(int d,int q,int z,int s,int x,perso perso,int prevd,int prevq);
void splitperso2(int d,int q,int *x);
void mouvement(SDL_Rect *position,SDL_Rect *camera,int d,int q,int mvmspeed);
void afficherperso(perso perso,SDL_Surface *ecran,int x);
void initialiservie(vie *vie);
void freesurfacevie(vie *vie);
void affichervie(vie *vie,perso perso,SDL_Surface *ecran);

#endif 
