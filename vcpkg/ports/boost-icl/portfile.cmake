# Automatically generated by scripts/boost/generate-ports.ps1

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/icl
    REF boost-1.79.0
    SHA512 4a6297454579052d9fdcb76a2b1659dd5767cff751d35770ad34f9c48a9308a548d914b8ff7156f1c64866751538f68926e81ae1a09d8f7d8da14442ee90c679
    HEAD_REF master
)

include(${CURRENT_INSTALLED_DIR}/share/boost-vcpkg-helpers/boost-modular-headers.cmake)
boost_modular_headers(SOURCE_PATH ${SOURCE_PATH})
