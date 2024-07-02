#pragma once
#include "../../header/UI/Interface/IUIController.h"
#include "../../header/UI/UIElement/ImageView.h"

namespace UI
{
	namespace SplashScreen
	{
		class SplashScreenUIController : public Interface::IUIController
		{
		private:
			// Constants:
			const float splash_screen_duration = 10.0f;
			float elapsed_duration = 0.0f;
			const float logo_width = 1920.f;
			const float logo_height = 1080.f;

			UIElement::ImageView* outscal_logo_view;

			void initializeOutscalLogo();
			void updateTimer();
			void showMainMenu();
			sf::Vector2f getLogoPosition();

		public:


			SplashScreenUIController();
			~SplashScreenUIController();

			void initialize() override;
			void update() override;
			void render() override;
			void show() override;
		};
	}
}
