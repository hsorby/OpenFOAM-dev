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
    uint32

Description
    32bit uinteger

SourceFiles
    uint32.C
    uint32IO.C

\*---------------------------------------------------------------------------*/

#ifndef uint16_H
#define uint16_H

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

//- Return a word representation of an uint32
word name(const uint16_t);

// * * * * * * * * * * * * * * * IOstream Operators  * * * * * * * * * * * * //

uint16_t readUint16(Istream&);
bool read(const char*, uint16_t&);
Istream& operator>>(Istream&, uint16_t&);
Ostream& operator<<(Ostream&, const uint16_t);

//- Template specialisation for pTraits<uint16_t>
template<>
class pTraits<uint16_t>
{
    uint16_t p_;

public:

    //- Component type
    typedef uint16_t cmptType;


    // Member constants

        //- Dimensionality of space
        static const direction dim = 3;

        //- Rank of uint16_t is 0
        static const direction rank = 0;

        //- Number of components in uint16_t is 1
        static const direction nComponents = 1;


    // Static Data Members

        static const char* const typeName;
        static const char* const componentNames[];
        static const uint16_t zero;
        static const uint16_t one;
        static const uint16_t min;
        static const uint16_t max;
        static const uint16_t rootMax;
        static const uint16_t rootMin;


    // Constructors

        //- Construct from primitive
        explicit pTraits(const uint16_t&);

        //- Construct from Istream
        pTraits(Istream&);


    // Member Functions

        //- Access to the uint16_t value
        operator uint16_t() const
        {
            return p_;
        }

        //- Access to the uint16_t value
        operator uint16_t&()
        {
            return p_;
        }
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
