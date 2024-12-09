#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Macros.hpp"
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
  public:
    // CONSTRUCTORS: 
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string);
    PresidentialPardonForm(const PresidentialPardonForm &);

    // DESTRUCTOR:
    ~PresidentialPardonForm();

    // OPERATORS:
    PresidentialPardonForm &operator=(const PresidentialPardonForm &);

    // GETTERS / SETTERS:
    std::string getTarget();

    // METHODS:
    void executeForm();

  private:
    std::string _target;
    bool _odds;
};

#endif // !DEBUi
