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

#include "uint16.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

const uint16_t Foam::pTraits<uint16_t>::zero = 0;
const uint16_t Foam::pTraits<uint16_t>::one = 1;
const uint16_t Foam::pTraits<uint16_t>::min = 0;
const uint16_t Foam::pTraits<uint16_t>::max = UINT16_MAX;
const uint16_t Foam::pTraits<uint16_t>::rootMin = 0;
const uint16_t Foam::pTraits<uint16_t>::rootMax = pTraits<uint16_t>::max;

const char* const Foam::pTraits<uint16_t>::componentNames[] = { "" };

Foam::pTraits<uint16_t>::pTraits(const uint16_t& p)
:
    p_(p)
{}

Foam::pTraits<uint16_t>::pTraits(Istream& is)
{
    is >> p_;
}


// ************************************************************************* //
