/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) 2014-2018 OpenFOAM Foundation
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

\*---------------------------------------------------------------------------*/

#include "int16.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

const int16_t Foam::pTraits<int16_t>::zero = 0;
const int16_t Foam::pTraits<int16_t>::one = 1;
const int16_t Foam::pTraits<int16_t>::min = INT16_MIN;
const int16_t Foam::pTraits<int16_t>::max = INT16_MAX;
const int16_t Foam::pTraits<int16_t>::rootMin = pTraits<int16_t>::min;
const int16_t Foam::pTraits<int16_t>::rootMax = pTraits<int16_t>::max;

const char* const Foam::pTraits<int16_t>::componentNames[] = { "" };

Foam::pTraits<int16_t>::pTraits(const int16_t& p)
:
    p_(p)
{}

Foam::pTraits<int16_t>::pTraits(Istream& is)
{
    is >> p_;
}


// ************************************************************************* //
