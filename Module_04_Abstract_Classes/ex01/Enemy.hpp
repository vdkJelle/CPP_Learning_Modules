/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:32 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/31 16:19:06 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H
# include <iostream>
# include <string>

class Enemy
{
	public:
		Enemy(void);
		Enemy(int hp, std::string const& type);
		Enemy(Enemy const& src);
		Enemy&	operator=(Enemy const& rhs);
		virtual ~Enemy(void);
		virtual std::string	getType(void) const;
		int					getHP(void) const;
		virtual void		takeDamage(int num);
	protected:
		int			_hp;
		std::string	_type;
	private:
};

#endif
