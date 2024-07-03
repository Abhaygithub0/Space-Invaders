#pragma once
#include "../../header/UI/Interface/IUIController.h"

#include "../../header/UI/UIElement/AnimatedImageView.h"

namespace UI
{
	namespace SplashScreen
	{
		class SplashScreenUIController : public Interface::IUIController
		{
		private:
			// Constants:
			const float splash_screen_duration = 3.0f;
			const float logo_width = 1920.f;
			const float logo_height = 1080.f;
			UIElement::AnimatedImageView* outscal_logo_view;
			

			void initializeOutscalLogo();
			void fadeInAnimationCallback();
			void fadeOutAnimationCallback();
			
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
