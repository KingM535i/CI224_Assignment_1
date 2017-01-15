#include "GameWorld.h"

// Modified

GameWorld::GameWorld (ApplicationMode mode) : asset_manager(std::make_shared<GameAssetManager>(mode)) {
  asset_manager->AddAsset(std::make_shared<CubeAsset>());
  asset_manager->AddAsset(std::make_shared<CubeAsset>());	// Second line added to produce two cubes
}

void GameWorld::Draw() {
  asset_manager->Draw();
}
