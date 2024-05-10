#include <iostream>
#include "Enemy/Enemy.h"
#include "Player/Player.h"
#include "Combat/Combat.h"



//TODO:PREGUNTAR AL PROFE SI YA TIENEN QUE TENER UN VALOR DETERMINADO LOS ENEMIGOS EN LA EXPERIENCIA

using namespace std;

int main() {
    cout << "Ingresa el nombre de tu personaje: " << endl;
    char PlayerName[30];
    cin.getline(PlayerName, 30);

    cout << "Quien es tu enemigo:?" << endl;
    char EnemyName[30];
    cin.getline(EnemyName, 30);

    cout<<"escribe el arma del personaje: "<< endl;
    char PlayerArm [30];
    cin.getline(PlayerArm, 30);

    cout<<"escribe el arma del enemigo: "<< endl;
    char EnemyArm[30];
    cin.getline(EnemyArm, 30);


    Player *player = new Player(PlayerName, 35, 7, 2, 10,EnemyArm, 10, 1);
    Enemy *enemy = new Enemy(EnemyName,10, 5, 2, 7,PlayerArm, 10, 1);

    vector<Character*> participants;
    participants.push_back(player);
    participants.push_back(enemy);

    Combat* combat = new Combat(participants);
    combat->doCombat();

    delete player;
    delete enemy;
    delete combat;

    return 0;
}
