General Purpose Hash Functions Extension
========================================

**hashfunctions-extension** is a [Ruby][1] C extension which 
implements 11 fast hash functions for general purpose 
non-cryptographic use implemented originally by [Arash Partow][2]. 
General pure API is available by the [**hashfunctions**][3] gem.

Some example of DJB's hash:

    require "general-hash-functions/extension"
    hash = GeneralHashFunctionsExt::djbhash("some string")
    # will return the 395673328
    
See description of all contained functions at Arash Partow's page:
http://www.partow.net/programming/hashfunctions/index.html#AvailableHashFunctions


Copyright
---------

Copyright &copy; 2002 [Arash Partow][2]. Copyright &copy; 2012 [Martin Kozák][4]. See `LICENSE.txt` for
further details.

[1]: http://www.ruby-lang.org/en/
[2]: http://www.partow.net/
[3]: http://github.com/martinkozak/hashfunctions
[4]: http://www.martinkozak.net/
