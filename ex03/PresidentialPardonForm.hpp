#ifndef PRESEIDENTIALPARDONFORM_HPP
# define PRESEIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &other);
		PresidentialPardonForm &operator=(PresidentialPardonForm &rhs);
		~PresidentialPardonForm();

		void		execute(Bureaucrat const & executor) const;
};
#endif