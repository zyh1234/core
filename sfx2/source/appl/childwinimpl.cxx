/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file incorporates work covered by the following license notice:
 *
 *   Licensed to the Apache Software Foundation (ASF) under one or more
 *   contributor license agreements. See the NOTICE file distributed
 *   with this work for additional information regarding copyright
 *   ownership. The ASF licenses this file to you under the Apache
 *   License, Version 2.0 (the "License"); you may not use this file
 *   except in compliance with the License. You may obtain a copy of
 *   the License at http://www.apache.org/licenses/LICENSE-2.0 .
 */

#include <memory>
#include <childwinimpl.hxx>

size_t SfxChildWinContextArr_Impl::size() const
{
    return maData.size();
}

const SfxChildWinContextFactory& SfxChildWinContextArr_Impl::operator []( size_t i ) const
{
    return *maData[i];
}

SfxChildWinContextFactory& SfxChildWinContextArr_Impl::operator []( size_t i )
{
    return *maData[i];
}

void SfxChildWinContextArr_Impl::push_back( std::unique_ptr<SfxChildWinContextFactory> p )
{
    maData.push_back(std::move(p));
}

size_t SfxChildWinFactArr_Impl::size() const
{
    return maData.size();
}

const SfxChildWinFactory& SfxChildWinFactArr_Impl::operator []( size_t i ) const
{
    return *maData[i];
}

SfxChildWinFactory& SfxChildWinFactArr_Impl::operator []( size_t i )
{
    return *maData[i];
}

void SfxChildWinFactArr_Impl::push_back( std::unique_ptr<SfxChildWinFactory> p )
{
    maData.push_back(std::move(p));
}

void SfxChildWinFactArr_Impl::erase( const iterator& it )
{
    maData.erase(it);
}

SfxChildWinFactArr_Impl::iterator SfxChildWinFactArr_Impl::begin()
{
    return maData.begin();
}

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
