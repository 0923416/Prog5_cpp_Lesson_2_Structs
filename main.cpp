#include <iostream>

struct Vec3D {float x, y, z;};

Vec3D vec3D (float x, float y, float z){
    Vec3D self;
    self.x = x;
    self.y = y;
    self.z = z;
    return self ;
}

void show = (std::string label, Vec3D const &self ){

}

int main() {
    std::cout << "Hello, World!" << std::endl << " Bye world!" << std::endl;
    return 0;
}