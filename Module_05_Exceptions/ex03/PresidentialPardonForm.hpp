/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:09:57 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 13:53:09 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include "AForm.hpp"
# include <iostream>

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const& src);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const& rhs);
		virtual ~PresidentialPardonForm(void);
		void		execute(Bureaucrat const& src) const;
	private:
};

#endif
