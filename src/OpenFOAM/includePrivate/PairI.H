/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) 2011-2020 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Class
    Foam::Pair

Description
    An ordered pair of two objects of type \<T\> with first() and second()
    elements.

See also
    Foam::Tuple2 for storing two objects of dissimilar types.

\*---------------------------------------------------------------------------*/

#ifndef PairI_H
#define PairI_H

//#include "FixedList.H"
#include "Istream.H"
#include "token.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

template<class Type>
inline Istream& operator>>(Istream& is, Pair<Type>& p)
{
    is.readBegin("Pair");
    is >> p.first() >> p.second();
    is.readEnd("Pair");

    // Check state of Istream
    is.check("operator>>(Istream&, Pair<Type>&)");

    return is;
}


template<class Type>
inline Ostream& operator<<(Ostream& os, const Pair<Type>& p)
{
    os  << token::BEGIN_LIST
        << p.first() << token::SPACE << p.second()
        << token::END_LIST;

    return os;
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
