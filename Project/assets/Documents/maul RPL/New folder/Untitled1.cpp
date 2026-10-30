#include "raylib.h"

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 450;

struct Bird {
    float x;
    float y;
    float speed;
};

struct Pipe {
    float x;
    float gapY;
};

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Flappy Bird Sederhana");

    SetTargetFPS(60);

    Bird bird = {150, 200, 0};

    Pipe pipe = {700, 220};

    int score = 0;
    bool gameOver = false;

    while (!WindowShouldClose())
    {
        if (!gameOver)
        {
            // Gravitasi
            bird.speed += 0.4f;
            bird.y += bird.speed;

            // Lompat
            if (IsKeyPressed(KEY_SPACE))
                bird.speed = -8;

            // Pipa bergerak
            pipe.x -= 4;

            if (pipe.x < -60)
            {
                pipe.x = SCREEN_WIDTH;
                pipe.gapY = GetRandomValue(120, 320);
                score++;
            }

            // Tabrakan lantai
            if (bird.y > SCREEN_HEIGHT || bird.y < 0)
                gameOver = true;

            // Tabrakan pipa
            Rectangle birdRect = {bird.x, bird.y, 30, 30};

            Rectangle atas = {pipe.x, 0, 60, pipe.gapY - 60};
            Rectangle bawah = {pipe.x, pipe.gapY + 60, 60, SCREEN_HEIGHT};

            if (CheckCollisionRecs(birdRect, atas) ||
                CheckCollisionRecs(birdRect, bawah))
            {
                gameOver = true;
            }
        }

        BeginDrawing();

        ClearBackground(SKYBLUE);

        DrawRectangle(pipe.x, 0, 60, pipe.gapY - 60, GREEN);
        DrawRectangle(pipe.x, pipe.gapY + 60, 60,
                      SCREEN_HEIGHT, GREEN);

        DrawCircle(bird.x + 15, bird.y + 15, 15, YELLOW);

        DrawText(TextFormat("Score : %i", score), 20, 20, 30, BLACK);

        if (gameOver)
            DrawText("GAME OVER", 260, 180, 40, RED);

        DrawText("SPACE = Lompat", 20, 400, 20, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
