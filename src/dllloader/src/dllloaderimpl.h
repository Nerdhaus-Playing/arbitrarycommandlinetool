#pragma once
#include <string>
#include <boost/dll.hpp>


namespace nhp::aclt::dllloader
{
    class DllLoaderImpl
    {
    public:
        DllLoaderImpl() = delete;
        DllLoaderImpl(const std::string& filePath);
        ~DllLoaderImpl();

    private:
        boost::dll::shared_library m_library;
    };
}