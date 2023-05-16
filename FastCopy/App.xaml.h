// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "App.xaml.g.h"
#include "AcrylicHelper.h"
#include <optional>

namespace winrt::FastCopy::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);
    private:
        winrt::Microsoft::UI::Xaml::Window window{ nullptr };
        winrt::Microsoft::UI::Xaml::Window setting{ nullptr };
        std::optional<MicaHelper> m_helper;
    };
}
