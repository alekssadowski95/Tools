//Copyright>
//Copyright> Copyright (C) 1986-2024 Altair Engineering Inc.
//Copyright>
//Copyright> Permission is hereby granted, free of charge, to any person obtaining 
//Copyright> a copy of this software and associated documentation files (the "Software"), 
//Copyright> to deal in the Software without restriction, including without limitation 
//Copyright> the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
//Copyright> sell copies of the Software, and to permit persons to whom the Software is 
//Copyright> furnished to do so, subject to the following conditions:
//Copyright> 
//Copyright> The above copyright notice and this permission notice shall be included in all 
//Copyright> copies or substantial portions of the Software.
//Copyright> 
//Copyright> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
//Copyright> IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
//Copyright> FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
//Copyright> AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
//Copyright> WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR 
//Copyright> IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//Copyright>



#include <stdio.h>
#include <string.h>

/* --------------------------------------------------------------------------------------------------------------
    ENGINE_USER_FINALIZE : finamize routine routine - call at Radioss termination
   --------------------------------------------------------------------------------------------------------------
    int *MY_RANK  : input  - MPI_RANK id from MPI process MPI_RANK = [0:NSPMD-1]
   -------------------------------------------------------------------------------------------------------------- */

/* 
   Some initializations for Linux & Windows to be used from Radioss
   ---------- do not remove ----------
*/

#ifdef _WIN64 
#define UCDECL __declspec(dllexport)
#define ENGINE_USER_FINALIZE ENGINE_USER_FINALIZE
#else
#define UCDECL
#define ENGINE_USER_FINALIZE engine_user_finalize_
#endif


UCDECL void ENGINE_USER_FINALIZE( int *MY_RANK){
 /* user code */
}