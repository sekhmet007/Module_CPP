/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:18:44 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 11:36:29 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*--CONSTRUCTEUR--*/
/*Constructeur de Form prenant le nom, le grade nécessaire pour signer
et le grade nécessaire pour exécuter.*/
Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
: _name(name), _isSigned(false), _gradeRequiredToSign(gradeToSign),
	_gradeRequiredToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
: _name(other._name), _isSigned(other._isSigned),
	_gradeRequiredToSign(other._gradeRequiredToSign),
	_gradeRequiredToExecute(other._gradeRequiredToExecute) {}

// Opérateur d'assignation
Form &Form::operator=(const Form &other)
{
    if (this != &other)// Évite l'auto-affectation
    {
        // Les membres const doivent être modifiés via const_cast
        const_cast<std::string&>(this->_name) = other._name;
        this->_isSigned = other._isSigned;
        const_cast<int&>(this->_gradeRequiredToSign) = other._gradeRequiredToSign;
        const_cast<int&>(this->_gradeRequiredToExecute) = other._gradeRequiredToExecute;
    }
    return (*this);
}

/*--DESTRUCTEUR--*/
Form::~Form() {}

/*--FONCTIONS--*/
// Accesseurs(getters)
const std::string &Form::getName() const
{
    return (_name);
}
// Accesseurs
bool Form::getIsSigned() const
{
    return (_isSigned);
}
// Accesseurs
int Form::getGradeRequiredToSign() const
{
    return (_gradeRequiredToSign);
}
// Accesseurs
int Form::getGradeRequiredToExecute() const
{
    return (_gradeRequiredToExecute);
}

/*Méthode pour signer le formulaire. Si le grade du bureaucrate 
est trop bas, lance une exception.*/
void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeRequiredToSign)
        _isSigned = true;
    else
        throw GradeTooLowException();
}
// Surcharge de l'opérateur << pour afficher les informations de Form.
std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "Form " << form.getName() << " is " <<
    	(form.getIsSigned() ? "signed" : "not signed")
       << ", grade required to sign: " << form.getGradeRequiredToSign()
       << ", grade required to execute: " << form.getGradeRequiredToExecute();
    return (os);
}

/*------------------------Information------------------------------------*/
/*
Dans ce code, la classe `Form` est conçue pour représenter un formulaire
qui peut être signé par des bureaucrates. Le formulaire a des exigences spécifiques
en termes de grade pour pouvoir être signé ou exécuté, et il y a des vérifications
pour s'assurer que ces grades sont dans les limites autorisées.

- Les constructeurs et l'opérateur d'assignation gèrent la création et
la gestion des objets `Form`.
- Le destructeur est simple car il n'y a pas de gestion de mémoire
ynamique directe.
- Les fonctions membres telles que `getName`, `getIsSigned`, etc.,
fournissent un accès aux propriétés de l'objet.
- La fonction `beSigned` permet à un `Bureaucrat` de signer le formulaire,
en vérifiant si le grade du `Bureaucrat` est suffisant.
- L'opérateur `<<` est surchargé pour permettre une impression facile des objets `Form`.

Ce code illustre l'utilisation de concepts tels que l'encapsulation,
la surcharge des opérateurs, la gestion des exceptions et les principes de base 
de la programmation orientée objet en C++.
*/