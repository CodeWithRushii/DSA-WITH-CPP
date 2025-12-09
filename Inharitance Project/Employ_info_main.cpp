#include "Employ_info.cpp"

// Main function
int main()
{
    D emp;

    // Setting data
    emp.setBasic(101, "Ramesh", "Software Engineer");
    emp.setJobDetails(55000, 5);
    emp.setCompany("TechSoft Pvt Ltd", "Ahmedabad");
    emp.setContact("ramesh123@gmail.com", "9876543210");

    // Printing data
    cout << "---- Employee Job Summary ----" << endl;
    emp.getJobSummary();

    emp.getFullDetails();

    return 0;
}
