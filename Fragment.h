#pragma once
class Fragment : public Particle
{
public:
	virtual void Init() override;
	virtual void Update(float deltaTime) override;
	
	virtual void Render   () override;
	virtual void Release  () override;
	virtual bool IsDestroy() override;
	
	virtual Particle* Instantiat(Vector2 position = ZERO, float scale = 1) override;

private:
	float m_RotationDir;
	float m_LifeTime;

	Timer* m_LifeTimer;
};

