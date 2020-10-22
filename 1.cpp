#include<iostream>
using namespace std;
class Student{};
class UnderGraduateStudent : public Student{};
class GraduateStudent      : public Student{};
class Freshman             : public UnderGraduateStudent{};
class Junior               : public UnderGraduateStudent{};
class Senior               : public UnderGraduateStudent{};
class DoctorStudent        : public GraduateStudent{};
class MasterStudent        : public GraduateStudent{};

