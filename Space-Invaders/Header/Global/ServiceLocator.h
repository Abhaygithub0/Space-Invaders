#pragma once
#include "../../header/Graphics/GraphicService.h"
#include "../../header/Event/EventService.h"
#include "../../header/UI/UIService.h"
#include "../../header/Player/PlayerService.h"
#include "../../header/Time/TimeService.h"
#include "../../header/Enemy/EnemyService.h"
#include "../../header/Gameplay/GameplayService.h"
#include "../../header/Elements/ElementService.h"
#include "../../header/Bullet/BulletService.h"
#include "../../header/Powerup/PowerupService.h"
#include "../../header/Sound/SoundService.h"
#include "../../header/Collision/CollisionService.h"
#include"../../Header/AnimationSystem/AnimationService.h"


namespace Global
{
    class ServiceLocator
    {
    private:
        Animation::AnimationService* animation_service;
        Event::EventService* event_service;
        Graphics::GraphicService* graphic_service;
        UI::UIService* ui_service;
        Time::TimeService* time_service;
        Gameplay::GameplayService* gameplay_service;
        Player::PlayerService* player_service;
        Enemy::EnemyService* enemy_service;
        Element::ElementService* element_service;
        Bullet::BulletService* bullet_service;
        Powerup::PowerupService* powerup_service;
        Sound::SoundService* sound_service;
        Collision::CollisionService* collision_service;


        ServiceLocator();
        ~ServiceLocator();

        void createServices();
        void clearAllServices();

    public:
        static ServiceLocator* getInstance();

        void initialize();
        void update();
        void render();
        void deleteServiceLocator();

        Animation::AnimationService* getAnimationService();
        Event::EventService* getEventService();
        Graphics::GraphicService* getGraphicService();
        UI::UIService* getUIService();
        Time::TimeService* getTimeService();
        Gameplay::GameplayService* getGameplayService();
        Player::PlayerService* getPlayerService();
        Enemy::EnemyService* getEnemyService();
        Element::ElementService* getElementService();
        Bullet::BulletService* getBulletService();
        Powerup::PowerupService* getPowerupService();
        Sound::SoundService* getSoundService();
        Collision::CollisionService* getCollisionService();

        
    };
}