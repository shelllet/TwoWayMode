#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "MainWindow.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::TwoWayMode::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

		Windows::Foundation::Size MySize();
		void MySize(Windows::Foundation::Size const& value);
		Windows::Foundation::Rect MyRect();
		void MyRect(Windows::Foundation::Rect const& value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::TwoWayMode::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
