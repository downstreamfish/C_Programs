#include <stdio.h>
#include <math.h>

float c(float x, float y, float r, float p) {
    return powf(powf(fabsf(x), p) + powf(fabsf(y), p), 1 / p) - r;
}

int f(float x, float y) {
    float a = fmaxf(c(x, y, 15, 2), c(x, y + 25, 30, 2)), b = c(x, y - 7, 10, 4);
    if (a < -1)         // cap pattern
        return c(fmodf(x + 20 + 3 * floorf((y  + 20) / 6), 6) - 3, fmodf(y + 20, 6) - 3, 2, 2) >= 0;
    else if (a < 0.0f)  // cap
        return 1;
    else if (b < -2)    // face
        return c(fabsf(x) - 2.5f, y - 7.5f, 1.25f, 2) < 0 || (y > 10 && fabsf(c(x, y - 9, 4, 2)) < 0.5f);
    else                // body
        return b < 0;
}

int main() {
    float s = 1.0f, x, y;
    for (y = -18; y < 18; y += 1.0f / s, putchar('\n'))
        for (x = -18; x < 18; x += 0.5f / s)
            putchar(" *"[f(x, y)]);
}