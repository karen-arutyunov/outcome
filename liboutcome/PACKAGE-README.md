# liboutcome - Lightweight outcome<T> and result<T> C++ library

This is a `build2` package for the
[`outcome`](https://github.com/ned14/outcome) C++ library (the standalone
edition of Boost.Outcome). It provides very lightweight `outcome<T>` and
`result<T>` types for C++ 14 and later error handling, including the
experimental SG14 `status_code` based variants.


## Usage

To start using `liboutcome` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: liboutcome >= 2.2.10-a.0.1
```

Then import the library in your `buildfile`:

```
import libs = liboutcome%lib{outcome}
```

And include its headers as, for example:

```c++
#include <outcome/outcome.hpp>
```


## Importable targets

This package provides the following importable targets:

```
lib{outcome}
```


## Configuration variables

This package does not provide any configuration variables.
