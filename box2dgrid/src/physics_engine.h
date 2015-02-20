
#include <Box2D/Box2D.h>

class PhysicsEngine
{
public:
	PhysicsEngine();
	~PhysicsEngine();

	void UpdatePhysics(float timeStep);
    void InitPhysics();

private:
	b2World *world;
};