/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:35:41 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/19 16:32:12 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
	
	virtual void action(Bureaucrat const &exectutor) const;
};

#define _TREE "\
........................................................................................................................\n\
........................................................................................................................\n\
........................................................................................................................\n\
........................................................................................................................\n\
........................................................................................................................\n\
........................................................................................................................\n\
.........................................................=...=..........................................................\n\
......................................................=.====.===.=.=....................................................\n\
....................................................========.==========.................................................\n\
...............................................===========I================.............................................\n\
.........................................=....========I===II=I=I=III=I======............................................\n\
.........................................=.=.======I==III=II=III=II==I======............................................\n\
.......................................=.==========II=IIIIII=I=IIII=I=====I=.===........................................\n\
.....................................=..========I===IIIIIIII=IIIIII=I=I==II======.==....................................\n\
.....................................============I=II=IIIIIIIAIIIAI=I====II========.==..................................\n\
....................................=====I=I===I=.=III=IIIIAAIIIIAI=I==IIII============.................................\n\
.....................................=====II==III==IIAIIIIIAII=AIAIII=IIII===II=======..................................\n\
...................................==.======II=III==IAIIIIIAII=AAIII=II==I===II=I=====.==.=.............................\n\
....................................========IIIIIII=IIAIIIAAIIIIAIII==I=II==IIIII==I===.===.............................\n\
.............................=....=========IIIIIIIIIIIAIIAAAIIIIAIII=IAIII=IIIIIIII=========..==........................\n\
..............................===.======I===IIAAAIIIIAAAIAAAAIAIAIIIIIAIIIAIIAAI======.=======.==.......................\n\
............................===I===========IIIIAAAIIIIAAAAAAAIAIAIAI=IIIIAAIII=I=I==============........................\n\
..............................==I======III==IIIIIIAAI=AAIAAXAAAAIAAIIAAIAAIIIIII=I===IIII======....=....................\n\
............................=..=IAI===IIIIIIIIIIIAAAAAIAIXIXAAXAIAXAAIIAAAIIAII=IIIIIII=======..====....................\n\
...........................====..IAII=IIIII=IIIIAIAIAAAAAXAXAAXAIAAAIAAAAIIIAIIIIIIIIII=====.=.===......................\n\
..................=.......========IIIIIIIIIAIIIIIIIAAXAAAXAAXXXAIXAIAXIAAAIAIIA==I=II=====I=====........................\n\
..................==......=========IIAIIIAIIIIAAAIIIAAAAAXAXXXXAAXAAAAAAAIAIIII==III=======.=========...................\n\
...................=I==..=====I======IIIIIAAIAIIIAAAAAXXAXXXXAXAAXAXXIAAIAIIIIIIAII==.==IIII==III===....................\n\
....................=II===II===IIIIIIIAAAAIAAAAAIIIAXXXXXXXXXXXAAAAAAAXAAAAAAAAAIIIAAAAAIIIIII====......................\n\
....................==IIIIIIIIIIIIAAAAAAXAAAAIIIAIIIAXXXMXXXMXAAXXIAXXAXAAAAIII=IIII======IIII=I=====...................\n\
................==..====IIIAAAAIIIIAIAAAAAXAAXAIIIAAAIXAAMXMMMXXAAXXXXXXAAIIIIIAIIIIIIIIIIIIIII========.................\n\
...............=====I====IIAAAAAIII=====IIAXXAXXAAIAAAAXIAMMXMXAAAXMMXAIIAAAI=====IAIIIIIAII========....................\n\
...................=====IIIIIIAAAAAAAIIIIIIAAAIAAXMMXXXXXXMMXMMXXMMXAIAAAAAIII====IIAAAAIIII====.=.........=............\n\
...................========IIIIIAXXAAAAIAIIIIIAAAIAXAAAXXXXMMMXXMMMAAAAAAAAAIAIIIIAAAIAIII==========..=====.............\n\
................=======II=========IAXAAXXXXAAAAAXXAAXAAIMMMMMXXMMMAIAAAAIAAXXAAAAAAI==II=========..======...............\n\
..........========.======IIIIIIIIIIIAAAXXXXXXXXAAXXXMXXXAXMMMMMMXXAAAXAAAAAXAAAAAIIIIIIIIIIIIIIIIIII===.................\n\
............===IIIAIIIIIIIIAAAAAAXXXXXXXXXXXXXAXXAXAXXMXXMMMMMMXMXXXXAAAAAAAIIAIIAAAAAAAAAIIIIIII=====..................\n\
................======IIIIIIIIAAAAAAAAAXAXAAAAXMMMXXAAMXIAMMMMMMMXMXXXXXXXXXXXAAAIIIIIIIIIIAIAII========................\n\
.................====II==I=IIIAIIIIAIAAXAAAAXXXXXXXMXXXMMAMMMMXIAMXAXXXXXXXXXXXAAAAAAAAAIAAIIIIII=I===..................\n\
...............====================IIAAAAXXXXXXXAXXMMMMMXMMWMMMMXXXXXAAAAAAIAAXXXAAAAAII================................\n\
.....................==...======IIIAAAXXXXAAAXAXIAAIAXMMAAMWWMXAXXAXXXAXAAXXAXAXXXAIIIIIII====I=======.=................\n\
..................=====IIIIIIAAAAAAAAAAAI=IAIAAA=IIAXXAXMXMMMXIAAAAXXXXXAXAIAAAXAAAAAAAAIIIIII=========.................\n\
.................=====IIIIIIAAAIIIII=I=IIIIAXAAIAAIAXXXAIMMMMXIAIXAXXXAAXXXXXAIIIAAAIAAIAIIIII=====I====................\n\
.................=======III=I======IIIIIIIAXAAAAIIAAIIIAAAMMMAAAAAIIIAXXXMXXXXAIII==IIIII==IIIII=======.................\n\
................=================II==IIIAAAAAAAIIAI===IIIMMMMXAIIAIIIIIAAXXXXXXXAAII==IIII========.====.................\n\
..................====..=============IIAAAAAIIIIIII===IIIXMMMAIIAIIAIII=IAAAAAXXAAAIAII==============...................\n\
........................============IAAAIAII===I======I==AMMMAIII=IAI====IIIAAAAAAAAIIIIIII===========..................\n\
......................======..======III===II============IIMMMIIIIIII=====I===IAAAAIAAI=I========........................\n\
===================....===....==============I=============MMMI=================IIAAIIIIIIII========.....................\n\
==========================.....================..=========MMMI===================IIIIII====I==.==.......................\n\
=============================.================....========MMMI=.......=================I===I====........................\n\
================================================..========MMMA==......==.=.......===..===.===.==........................\n\
==========================================================MMMA=================.====.====...=.......=========...........\n\
==========================================================MMMX==========================================================\n\
=========================================================IMMMX==========================================================\n\
========II==IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIAAAIIAIIXMMMMAIIIIAAAIIIIIIIIIIIIIII=IIIII=IIIIIIIIIIII================\n\
XXXXXXXXXXXXXXXXXXXXXXXXXXMXXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXMMM\n\
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n\
"

#endif