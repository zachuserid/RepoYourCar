#include "Application.h"
//#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

Application::Application(Student *s, int appNum, string cor, string stat){
	//CONSTRUCTOR!===========
        applicationNumber = appNum;
        course 		  = cor;
        applicationStatus = stat;
	stuCGPA = s->getCGPA();
	stuMGPA = s->getMajorGPA();
	stuFirst = s->getFirst();
	stuLast = s->getLast();
	stuEmail = s->getEmail();
	stuMajor = s->getMajor();
	stuYearStanding = s->getYearStanding();
	stuID = s->getStudentNumber();
}
//==============================GETTERS==========================================
//Student* Application::getApplicant(){ return applicant; }
int      Application::getApplicationNumber(){ return applicationNumber; }
string   Application::getCourse(){ return course; }
string   Application::getStatus(){ return applicationStatus; }

int      Application::getStuCGPA(){ return stuCGPA; }
int      Application::getStuMGPA(){ return stuMGPA; }
string   Application::getStuFirst(){ return stuFirst; }
string   Application::getStuLast(){ return stuLast; }
string   Application::getStuEmail(){ return stuEmail; }
string   Application::getStuMajor(){ return stuMajor; }
int      Application::getStuYrStanding(){ return stuYearStanding; }
string   Application::getStuID(){ return stuID; }
//===============================================================================

//Destructor:
Application::~Application(){

}


bool Application::printApp(){
	int i;
	//Course tempCourse;
        ofstream outFile("Applications.txt", ios::out|ios::app);

        if (!outFile) {
                //ios::out<<"Could not open file"<<endl;
                return false;
        }
	//Save the Application data:
	outFile << applicationNumber << endl;
	outFile << course << endl;
	outFile << applicationStatus << endl;
	outFile << stuCGPA << endl;
	outFile << stuMGPA << endl;
	outFile << stuFirst << endl;
	outFile << stuLast << endl;
	outFile << stuEmail << endl;
	outFile << stuMajor << endl;
	outFile << stuYearStanding << endl;
	outFile << stuID << endl;

	//Save the related courses:
	//for(i=0; i<relatedCourses.getSize(); i++){
		//tempCourse = relatedCourses.
//	}


/*
        outFile << "\t\tAPPLICANTION FORM:\n" << endl;
        outFile << "Applying for TA for class: " << course << " Application id: " << applicationNumber << endl;
        outFile << "======================APPLICANT INFORMATION======================="<<endl;
        outFile << "Applicant name: " << applicant->getFirst() << " " << applicant->getLast() << endl;
        outFile << "Applicant email: " << applicant->getEmail() << endl;
        outFile << "Applicant student number: " << applicant->getStudentNumber() << endl;
	outFile << "Application status: "<< Application::applicationStatus << endl;
	outFile << "Applicant Major GPA: " << applicant->getMajorGPA() <<endl;
        return true;
*/
}
