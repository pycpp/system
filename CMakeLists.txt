#  :copyright: (c) 2017-2018 Alex Huszagh.
#  :license: MIT, see licenses/mit.md for more details.

add_headers(
    errno.h
    windows.h
    sys/stat.h
    sys/mman.h
)

add_sources(
    windows.cc
    sys/mman.cc
)
