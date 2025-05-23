﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class SwapChainPanel;
                ref class StackPanel;
                ref class MediaElement;
                ref class CheckBox;
                ref class Slider;
            }
        }
    }
}

namespace DirectX12XAMLPostProcessGray
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::SwapChainPanel^ swapChainPanel;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ contentPanel;
        private: ::Windows::UI::Xaml::Controls::MediaElement^ soundPlayer;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ checkBoxNormalMape;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ checkBoxCubeMape;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ checkBoxParallaxMape;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ checkBox;
        private: ::Windows::UI::Xaml::Controls::Slider^ sliderX;
        private: ::Windows::UI::Xaml::Controls::Slider^ sliderY;
        private: ::Windows::UI::Xaml::Controls::Slider^ sliderZ;
    };
}

