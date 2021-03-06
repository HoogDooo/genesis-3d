/****************************************************************************
Copyright (c) 2008, Radon Labs GmbH
Copyright (c) 2011-2013,WebJet Business Division,CYOU
 
http://www.genesis-3d.com.cn

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#pragma once
//------------------------------------------------------------------------------
/**
    @class Win32::Win32Cpu
    
    CPU related definitions for the Win32 platform.  
    
*/
#include "core/types.h"

//------------------------------------------------------------------------------
namespace Win32
{
class Win32Cpu
{
public:
    typedef DWORD CoreId;
    
    /// core identifiers, under Win32, we basically don't care...
    static const CoreId InvalidCoreId       = 0xffffffff;
    static const CoreId MainThreadCore      = 0;
    static const CoreId IoThreadCore        = 2;
    static const CoreId RenderThreadCore    = 1;
    static const CoreId AudioThreadCore     = 3;
    static const CoreId MiscThreadCore      = 4;
    static const CoreId NetworkThreadCore   = 5;

    static const CoreId JobThreadFirstCore  = 6;
};

} // namespace Win32    
//------------------------------------------------------------------------------
