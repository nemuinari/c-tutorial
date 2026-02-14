#include <stdio.h>
#include <string.h>

typedef struct {
    int width;
    int height;
    int depth;
} Cube;

typedef struct {
    const char* name;
    size_t length;
} Name;

typedef struct {
    double latitude;
    double longitude;
    const char* landmark;
} GeoPoint;

void print_cube(Cube c) {
    printf("Cube: [W:%d, H:%d, D:%d] -> Volume: %d\n", c.width, c.height, c.depth,
           c.width * c.height * c.depth);
}

void print_geopoint(GeoPoint gp) {
    printf("GeoPoint: %.4f, %.4f (%s)\n", gp.latitude, gp.longitude, gp.landmark);
}

int main() {
    Cube cube = {.width = 3, .height = 4, .depth = 5};
    print_cube(cube);

    const char* alice_name = "Alice";
    Name name = {.name = alice_name, .length = strlen(alice_name)};
    printf("Name: %s (Len: %zu)\n", name.name, name.length);

    GeoPoint location = {.latitude = 37.7749, .longitude = -122.4194, .landmark = "San Francisco"};
    print_geopoint(location);

    return 0;
}
