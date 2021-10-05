#include <iostream>
#include <cmath>

struct Vec3D {float x, y, z;};

Vec3D vec3D (float x, float y, float z){
    Vec3D self;
    self.x = x;
    self.y = y;
    self.z = z;
    return self ;
}

Vec3D minus (Vec3D const &self){
    Vec3D out;
    out.x = self.x * -1;
    out.y = self.y * -1;
    out.z = self.z * -1;
    return out;
}

Vec3D add (Vec3D const &self, Vec3D const &other){
    Vec3D out;
    out.x = self.x + other.x;
    out.y = self.y + other.y;
    out.z = self.z + other.z;
    return out;
}

Vec3D sub (Vec3D const &self, Vec3D const &other){
    Vec3D out;
    out.x = self.x - other.x;
    out.y = self.y - other.y;
    out.z = self.z - other.z;
    return out;
}

Vec3D mul (Vec3D const &self, float scalar){
    Vec3D out;
    out.x = self.x * scalar;
    out.y = self.y * scalar;
    out.z = self.z * scalar;
    return out;
}

Vec3D div (Vec3D const &self, float scalar){
    Vec3D out;
    out.x = self.x / scalar;
    out.y = self.y / scalar;
    out.z = self.z / scalar;
    return out;
}

float norm (Vec3D const &self){
    float length = sqrt(pow(self.x,2) + pow(self.y,2) + pow(self.z,2) );
    return length;
}

Vec3D unit (Vec3D const &self){
    float magnitude = norm(self);
    Vec3D out;
    out.x = self.x / magnitude;
    out.y = self.y / magnitude;
    out.z = self.z / magnitude;
    return out;
}

float dot (Vec3D const &self, Vec3D const &other){
    float dotProduct = self.x * other.x + self.y * other.y + self.z * other.z;
    return dotProduct;
}

Vec3D cross (Vec3D const &self, Vec3D const &other){
    Vec3D out;
    out.x = self.y * other.z - self.z * other.y;
    out.y = -1*(self.x * other.z - self.z * other.x);
    out.z = self.x * other.y - self.y * other.x ;
    return out;
}


void show(std::string label, Vec3D const &self ){
    std::cout << label  << ": x = " << self.x << ", y = " << self.y  << ", z = " << self.z << std::endl ;
}

void show(std::string label, float scalar){
    std::cout << label  << " = " << scalar << std::endl ;
}

void show(){
    std::cout << std::endl;
}

int main() {
    std::cout << "This assignment was made by Rens van Vendeloo" << std::endl << "source code can be found at https://github.com/0923416/Prog5_cpp_Lesson_2_Structs" << std::endl << std::endl;
    Vec3D test = vec3D(10,20,30);
    show("test", test);
    show("k", 10);
    show();
    Vec3D reverseTest = minus(test);
    show("reverseTest", reverseTest);
    Vec3D testPlusReverseTest = add(test, reverseTest);
    show("Test + ReverseTest", testPlusReverseTest);
    Vec3D reverseTestMinusTest = sub(reverseTest, test);
    show("ReverseTest - Test", reverseTestMinusTest);
    Vec3D mulTest = mul(test, 10);
    show("test * 10", mulTest);
    Vec3D quoTest = div(test,10);
    show("test / 10",quoTest);
    show("length of test", norm(test));
    Vec3D unitTest = unit(test);
    show("Unit vector of test", unitTest);
    show("The dotproduct of test and reverseTest",dot(test,reverseTest));
    Vec3D crossTest = cross(test,reverseTest);
    show("Crossproduct of test * reverseTest", crossTest);




    return 0;
}