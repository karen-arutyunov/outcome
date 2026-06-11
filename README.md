# outcome - Lightweight outcome<T> and result<T> error handling C++ library

This is a `build2` package repository for
[`outcome`](https://github.com/ned14/outcome), a set of very lightweight
outcome<T> and result<T> types for C++ 14 and later error handling (the
standalone edition of Boost.Outcome).

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`outcome` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](liboutcome/PACKAGE-README.md) file.

Note that the package follows upstream develop branch snapshots (which is
what dependent libraries such as `llfio` track) using pre-release snapshot
versions of the next upstream release (for example, `2.2.10-a.0.z` for
snapshots following the upstream `v2.2.9` release).

The development setup for `outcome` uses the standard `bdep`-based workflow. For example:

```
git clone --recurse-submodules .../outcome.git
cd outcome

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
