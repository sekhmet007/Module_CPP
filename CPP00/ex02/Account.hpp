/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:10:29 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/27 16:40:07 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{


	public:

		typedef Account		t;

		static int	getNbAccounts( void );
		static int	getTotalAmount( void );
		static int	getNbDeposits( void );
		static int	getNbWithdrawals( void );
		static void	displayAccountsInfos( void );

		Account( int initial_deposit );
		~Account( void );

		void 	init(int initial_deposit);
		void	makeDeposit( int deposit );
		bool	makeWithdrawal( int withdrawal );
		int	checkAmount( void ) const;
		void	displayStatus( void ) const;


	private:

		static int	_nbAccounts;
		static int	_totalAmount;
		static int	_totalNbDeposits;
		static int	_totalNbWithdrawals;

		static void	_displayTimestamp( void );

		int		_accountIndex;
		int		_amount;
		int		_nbDeposits;
		int		_nbWithdrawals;

		Account( void );

};

#endif
/*------------------------Informations----------------------------------------------*/
/*le '_' devant le nom d'une ofnciton ou d'une variable est une convention de nomage
pour indiquer que l'element est privee ou interne a la class*/

/* #pragma once :#pragma once est une directive de préprocesseur qui assure qu'un fichier
d'en-tête est inclus au plus une fois lors de la compilation.
C'est une alternative moderne et souvent préférée à la traditionnelle "inclusion guard"
(#ifndef, #define, #endif). */