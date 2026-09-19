#include <string.h>

const char* rps(const char* p1, const char* p2)
{
    // Verifica empate
    if (strcmp(p1, p2) == 0)
        return "Draw!";

    // Verifica se o jogador 1 venceu
    if (
        (strcmp(p1, "rock") == 0 && strcmp(p2, "scissors") == 0) ||
        (strcmp(p1, "paper") == 0 && strcmp(p2, "rock") == 0) ||
        (strcmp(p1, "scissors") == 0 && strcmp(p2, "paper") == 0)
    )
    {
        return "Player 1 won!";
    }

    return "Player 2 won!";
}