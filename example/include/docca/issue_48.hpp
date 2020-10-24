//
// Copyright (c) 2020 Krystian Stasiowski (sdkrystian@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef EXAMPLE_ISSUE_48_HPP
#define EXAMPLE_ISSUE_48_HPP

namespace example {

class X
{
};

struct Y
{
};

/** Issue 48

    The class should show one regular
    public member function and two friend
    functions.
*/
class issue_48
{
    /// Friend, not emitted
    friend class X;

    /// Friend, not emitted
    friend struct Y;

    /// Friend, not emitted
    friend void g( issue_48 );

public:
    /// Member function, emitted
    void f();

    /// Friend, not emitted
    friend void h( issue_48 );
};

/// This should be emitted
void g( issue_48 );

/// This should be emitted
void h( issue_48 );


} // example

#endif
