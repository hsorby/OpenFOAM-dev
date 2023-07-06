/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) 2014-2021 OpenFOAM Foundation
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

Primitive
    int32

Description
    32bit integer

SourceFiles
    int32.C
    int32IO.C

\*---------------------------------------------------------------------------*/

#ifndef int16_H
#define int16_H

#include <cstdint>
#include <climits>
#include <cstdlib>

#include "word.H"
#include "pTraits.H"
#include "direction.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

class Istream;
class Ostream;

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

//- Return a word representation of an int32
word name(const int16_t);

// * * * * * * * * * * * * * * * IOstream Operators  * * * * * * * * * * * * //

int16_t readInt16(Istream&);
bool read(const char*, int16_t&);
Istream& operator>>(Istream&, int16_t&);
Ostream& operator<<(Ostream&, const int16_t);

inline void writeEntry(Ostream& os, const int16_t value)
{
    os << value;
}


//- Template specialisation for pTraits<int16_t>
template<>
class pTraits<int16_t>
{
    int16_t p_;

public:

    //- Component type
    typedef int16_t cmptType;


    // Member constants

        //- Dimensionality of space
        static const direction dim = 3;

        //- Rank of int32_t is 0
        static const direction rank = 0;

        //- Number of components in int32_t is 1
        static const direction nComponents = 1;


    // Static Data Members

        static const char* const typeName;
        static const char* const componentNames[];
        static const int16_t zero;
        static const int16_t one;
        static const int16_t min;
        static const int16_t max;
        static const int16_t rootMax;
        static const int16_t rootMin;


    // Constructors

        //- Construct from primitive
        explicit pTraits(const int16_t&);

        //- Construct from Istream
        pTraits(Istream&);


    // Member Functions

        //- Access to the int32_t value
        operator int16_t() const
        {
            return p_;
        }

        //- Access to the int value
        operator int16_t&()
        {
            return p_;
        }
};


inline int16_t mag(const int16_t l)
{
    return ::abs(l);
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
