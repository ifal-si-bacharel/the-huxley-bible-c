#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x, y;
} CelestialBody;

double distance(CelestialBody a, CelestialBody b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main() {
    int maxDist;
    scanf("%d", &maxDist);

    CelestialBody bodies[10000];
    int count = 0;

    while (count < 10000) {
        scanf("%d %d", &bodies[count].x, &bodies[count].y);
        
        count++;
        
        if (bodies[count - 1].x == 1 || bodies[count - 1].y == 1) {
            break;
        }
    }

    double min_distance = -1;
    CelestialBody closest_bodies[2];
    int found = 0;

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            double d = distance(bodies[i], bodies[j]);
            if (d > maxDist) {
                if (min_distance == -1 || d < min_distance) {
                    min_distance = d;
                    closest_bodies[0] = bodies[i];
                    closest_bodies[1] = bodies[j];
                    found = 1;
                } else if (d == min_distance) {
                    if (bodies[i].x < closest_bodies[0].x || (bodies[i].x == closest_bodies[0].x && bodies[i].y < closest_bodies[0].y)) {
                        closest_bodies[0] = bodies[i];
                        closest_bodies[1] = bodies[j];
                    }
                }
            }
        }
    }

    if (found) {
        printf("%d %d, %d %d\n", closest_bodies[0].x, closest_bodies[0].y, closest_bodies[1].x, closest_bodies[1].y);
    } else {
        printf("FUJA!\n");
    }

    return 0;
}
