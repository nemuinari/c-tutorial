#include <iostream>

class vector3d {
    float x;
    float y;
    float z;

public:
    vector3d();
    explicit vector3d(float x, float y, float z);

    friend vector3d add(const vector3d& v1, const vector3d& v2);
    friend vector3d sub(const vector3d& v1, const vector3d& v2);

    void dump() const;
};

vector3d::vector3d() : vector3d(0, 0, 0) {
}

vector3d::vector3d(float x, float y, float z) : x(x), y(y), z(z) {
}

vector3d add(const vector3d& v1, const vector3d& v2) {
    vector3d result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;
    return result;
}

vector3d sub(const vector3d& v1, const vector3d& v2) {
    vector3d result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    result.z = v1.z - v2.z;
    return result;
}

void vector3d::dump() const {
    std::cout << x << ", " << y << ", " << z << std::endl;
}

void practice() {
    vector3d v1(1, 1, 1), v2(1, 2, 3);

    vector3d c = add(v1, v2);
    c.dump();

    vector3d d = sub(v1, v2);
    d.dump();
}