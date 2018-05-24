#include "Soldier.h"

#define VALID_POS "DRIVER"||"MED"||"ENG"||"INT"||"GUNNER"


struct Soldier {
	char Pos[MAX_ID_LENGTH];
	char ID[MAX_ID_LENGTH];
};


PSoldier Soldier_Duplicate(PSoldier Soldier) {
	if (Soldier == NULL) {
		printf(ARG_ERR_MSG);
		return NULL;
	}
	PSoldier New_Soldier = Soldier_Create(Soldier->Pos, Soldier->ID);
	if (New_Soldier == NULL) {
		printf(MALLOC_ERR_MSG);
		return NULL;
	}
	return New_Soldier;
}

PSoldier Soldier_Create(char* Pos, char* ID){
    //check is starts with S
    if (Pos[0]!= 'S'){
        printf("Doesn't match soldier call sign! should start with S!\n");
        return NULL;
    }

    //check that it's matching positions
    if (ID!=VALID_POS){
        printf("Doesn't match soldier possible position!\n");
        return NULL;
    }
    //allocate memory+check successful
    PSoldier new_soldier = (PSoldier)malloc(sizeof(struct Soldier));
    if (new_soldier==NULL){
        printf("Malloc failed\n");
    }
    //return pointer, if malloc failed it'll return null anyway
    return new_soldier;
}

void Soldier_Print(PSoldier Soldier) {
	if (Soldier == NULL) {
		printf(ARG_ERR_MSG);
		return ;
	}
	printf("%s , %s\n", Soldier->ID, Soldier->Pos);
}

void Soldier_Delete (PSoldier Soldier_to_delete){

    free(Soldier_to_delete);

}
