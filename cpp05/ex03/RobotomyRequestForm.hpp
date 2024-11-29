#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Macros.hpp"
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
  public:
    // CONSTRUCTORS: 
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string);
    RobotomyRequestForm(const RobotomyRequestForm &);

    // DESTRUCTOR:
    ~RobotomyRequestForm();

    // OPERATORS:
    RobotomyRequestForm &operator=(const RobotomyRequestForm &);

    // GETTERS / SETTERS:
    std::string getTarget();

    // METHODS:
    void executeForm();

  private:
    std::string _target;
    bool _odds;
};

#endif // !DEBUi
