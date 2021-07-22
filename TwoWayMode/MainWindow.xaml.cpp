#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::TwoWayMode::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

	Windows::Foundation::Size MainWindow::MySize()
	{
		throw hresult_not_implemented();
	}
	void MainWindow::MySize(Windows::Foundation::Size const& value)
	{
		throw hresult_not_implemented();
	}
	Windows::Foundation::Rect MainWindow::MyRect()
	{
		throw hresult_not_implemented();
	}
	void MainWindow::MyRect(Windows::Foundation::Rect const& value)
	{
		throw hresult_not_implemented();
	}

    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
