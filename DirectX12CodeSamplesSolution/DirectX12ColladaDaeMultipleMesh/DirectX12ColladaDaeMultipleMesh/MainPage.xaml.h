﻿//
// MainPage.xaml.h
// MainPage 类的声明。
//

#pragma once

#include "MainPage.g.h"

#include "Common\DeviceResources.h"
#include "DirectX12ColladaDaelMain.h"


namespace DirectX12ColladaDaeMultipleMesh
{
	/// <summary>
	/// 可用于自身或导航至 Frame 内部的空白页。
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();
		virtual ~MainPage();

	private:
		//  m_deviceResources 的专用访问器，防范设备已删除错误。
		std::shared_ptr<DX::DeviceResources> GetDeviceResources();

		// XAML 低级渲染事件处理程序。
		//void OnRendering(Platform::Object^ sender, Platform::Object^ args);

		// 窗口事件处理程序。
		void OnVisibilityChanged(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::VisibilityChangedEventArgs^ args);

		// DisplayInformation 事件处理程序。
		void OnDpiChanged(Windows::Graphics::Display::DisplayInformation^ sender, Platform::Object^ args);
		void OnOrientationChanged(Windows::Graphics::Display::DisplayInformation^ sender, Platform::Object^ args);
		void OnDisplayContentsInvalidated(Windows::Graphics::Display::DisplayInformation^ sender, Platform::Object^ args);

		// 其他事件处理程序。
		void AppBarButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void OnCompositionScaleChanged(Windows::UI::Xaml::Controls::SwapChainPanel^ sender, Object^ args);
		void OnSwapChainPanelSizeChanged(Platform::Object^ sender, Windows::UI::Xaml::SizeChangedEventArgs^ e);

		// 在后台工作线程上跟踪我们的独立输入。
		Windows::Foundation::IAsyncAction^ m_inputLoopWorker;
		Windows::UI::Core::CoreIndependentInputSource^ m_coreInput;

		// 独立输入处理函数。
		void OnPointerPressed(Platform::Object^ sender, Windows::UI::Core::PointerEventArgs^ e);
		void OnPointerMoved(Platform::Object^ sender, Windows::UI::Core::PointerEventArgs^ e);
		void OnPointerReleased(Platform::Object^ sender, Windows::UI::Core::PointerEventArgs^ e);

		//+
		// 用于在 XAML 页面背景中呈现 DirectX 内容的资源。
		std::shared_ptr<DX::DeviceResources> m_deviceResources;
		std::unique_ptr<DirectX12ColladaDaelMain> m_main;
		bool m_windowVisible;

	};
}
