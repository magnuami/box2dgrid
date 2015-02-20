
#include <stdio.h>
#include "physics_engine.h"

int main(int argc, char** argv)
{
    bool running = true;
	
	PhysicsEngine *phyEngine = new PhysicsEngine();

	float timeStep = 1.0f / 60.0f;

	// Game loop.
	do {
        // Update game engine/actors
		phyEngine->UpdatePhysics(timeStep);
        // do rendering
	} while (running);

	return 0;
}

