﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.000000.0
#pragma once
#include "winrt/impl/Component.Composable.0.h"
namespace winrt::Component::Composable
{
    struct WINRT_EBO IBase :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBase>
    {
        IBase(std::nullptr_t = nullptr) noexcept {}
        IBase(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IBaseFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBaseFactory>
    {
        IBaseFactory(std::nullptr_t = nullptr) noexcept {}
        IBaseFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDerived :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDerived>
    {
        IDerived(std::nullptr_t = nullptr) noexcept {}
        IDerived(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
