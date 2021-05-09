#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;



class Worker
{
    private:
        string name, code;

    protected:
        float salary;

    public:
        Worker(string name, string code, float salary) : name(name), code(code), salary(salary){};

        string getName() { return name; }
        string getCode() { return code; }
        float getSalary() { return salary; }

        void setName() { this->name = name; }
        void setCode() { this->code = code; }
        void setSalary() { this->salary = salary; }

        virtual float calculateSalary() { return salary; }

        virtual void showData()
        {
            cout << "\nName: " << this->name << endl;
            cout << "Code: " << this->code << endl;
            cout << "Salary: $" << this->salary << endl;
        }

};

class primarySchool : public Worker
{
    protected:
        string primarySchoolName;

    public:
        primarySchool(string name, string code, float salary, string primarySchoolName) : Worker(name, code, salary), primarySchoolName(primarySchoolName) {}

        string getPrimarySchoolName() { return primarySchoolName; }

        void setPrimarySchoolName() { this->primarySchoolName = primarySchoolName; }
        
        float calculateSalary() override {return salary + (salary * 0.1); }
        
        void showData() override
        {
            cout << "\nName: " << getName() << endl;
            cout << "Code: " << getCode() << endl;
            cout << "Salary: $" << getSalary() << endl;
            cout << "Primary School: " << this->primarySchoolName << endl;
        }

};

class highSchool: public primarySchool
{
    protected:
        string highSchoolName;
    public:
        highSchool(string name, string code, float salary, string primarySchoolName, string highSchoolName):  primarySchool(name, code, salary, primarySchoolName), highSchoolName(highSchoolName){};

        string getHighSchoolName() { return highSchoolName; }

        void setHighSchoolName() { this->highSchoolName = highSchoolName; }
        
        float calculateSalary() override {return salary + (salary * 0.5); }
        
        void showData() override
        {
            cout << "\nName: " << getName() << endl;
            cout << "Code: " << getCode() << endl;
            cout << "Salary: $" << getSalary() << endl;
            cout << "Primary School: " << getPrimarySchoolName() << endl;
            cout << "High School: " << this->highSchoolName << endl;
        }

};

class University: public highSchool
{
    protected:
        string universityName;
    public:
        University(string name, string code, float salary, string primarySchoolName, string highSchoolName, string universityName):  highSchool(name, code, salary, primarySchoolName, highSchoolName), universityName(universityName){};

        string getUniversityName() { return highSchoolName; }

        void setUniversityName() { this->highSchoolName = highSchoolName; }
        
        float calculateSalary() override {return salary * 2; }
        
        void showData() override
        {
            cout << "\nName: " << getName() << endl;
            cout << "Code: " << getCode() << endl;
            cout << "Salary: $" << getSalary() << endl;
            cout << "Primary School: " << getPrimarySchoolName() << endl;
            cout << "High School: " << getHighSchoolName() << endl;
            cout << "University: " << this->universityName << endl;
        }

};

int main()
{
	float amount = 0;

    primarySchool p1("Mary", "111C", 3000.50, "Elisabeth School");
    primarySchool p2("Kevin", "054C", 2331.29, "Joseph Conan School");
    primarySchool p3("Mendes", "009A", 2331.59, "Pine View School");
    primarySchool p4("Wesley", "288A", 2000.30, "Elisabeth School");

    highSchool h1("Harry","312T",7142.7,"Pine View School","Merrol Hyde Magnet School");
    highSchool h2("Calvin","150T",5002.23,"Joseph Conan School","Academic Magnet High School");
    highSchool h3("Emilia","042A",7500.00,"Pine View School","DeKalb School of the Arts");
    highSchool h4("Brian", "015T", 1344.76, "Elisabeth School","Academic Magnet High School");
    
    University u1("Arnold","027B",8040.33,"Joseph Conan School","DeKalb School of the Arts", "MIT");
    University u2("Bethoven","005B",7500.00,"Pine View School","DeKalb School of the Arts", "University of Oxford");


    vector <Worker*> wk;

	wk.push_back(&p1);
	wk.push_back(&p2);
	wk.push_back(&p3);
	wk.push_back(&p4);

	wk.push_back(&h1);
	wk.push_back(&h2);
	wk.push_back(&h3);
	wk.push_back(&h4);

	wk.push_back(&u1);
	wk.push_back(&u2);

        
    for(auto c : wk)
	{
		amount += c->calculateSalary();
		c->showData();
	}

    cout << "\nComplete Primary School = $" << p1.calculateSalary() + p2.calculateSalary() + p3.calculateSalary() + p4.calculateSalary() << endl;
    cout << "Complete High School = $" << h1.calculateSalary() + h2.calculateSalary() + h3.calculateSalary() + p4.calculateSalary()<< endl;
    cout << "Complete Higher Education = $" << u1.calculateSalary() + u2.calculateSalary() << endl;
    cout << "Amount = $" << amount << endl;

    return 0;
}