#pragma once
#include <iostream>
using namespace std;

class Ability abstract
{
public:
	virtual void HasTheAbility() = 0;
};

class Flyable abstract : public Ability
{
public:
	virtual void CanFly() = 0;
};

class SuperPower abstract :public Ability
{
public:
	virtual void CanMakeSuperPowerThings() = 0;
};

class SuperMind abstract : public Ability
{
public:
	virtual void CanThink() = 0;
};

class SuperSpeed abstract : public Ability
{
public:
	virtual void CanRunFast() = 0;
};

class XRayVision abstract : public Ability
{
public:
	virtual void CanSeeEveryThing() = 0;
};

class Bulletproof abstract : public Ability
{
public:
	virtual void CanStopBullet() = 0;
};

class Regeneration abstract : public Ability
{
public:
	virtual void CanRestoreHP() = 0;
};

class BadGuy abstract
{
public:
	virtual void MakeBadThings() = 0;
};

class GoodGuy abstract
{
public:
	virtual void MakeGoodThings() = 0;
};

class Human abstract
{
public:
	virtual void IsAHuman() = 0;
};

class God abstract
{
public:
	virtual void IsAGod() = 0;
};

class Robot abstract
{
public:
	virtual void IsARobot() = 0;
};

class Animal abstract
{
public:
	virtual void IsAnAnimal() = 0;
};

class SuperHero abstract
{
public:
	virtual void IsASuperHero() = 0;
};

class SuperVillains abstract
{

};

class CaptainAmerica : public Human, public GoodGuy, public SuperSpeed, public SuperPower, public SuperHero,
	public Bulletproof
{
public:
	void IsASuperHero() override
	{
		cout << "Captain was created just for making peace everywhere" << endl;
	}
	void HasTheAbility() override
	{
		cout << "Super speed, muscules" << endl;
	}
	void IsAHuman() override
	{
		cout << "Captain America is a human" << endl;
	}

	void MakeGoodThings() override
	{
		cout << "He can do it all day" << endl;
	}

	void CanRunFast() override
	{
		cout << "Cptain run too fast" << endl;
	}

	void CanMakeSuperPowerThings() override
	{
		cout << "Captain can lift a car!!! " << endl;
	}

	void CanStopBullet() override
	{
		cout << "Captain can use his shield for guard " << endl;
	}
};

class IronMan: public Human, public SuperMind, public GoodGuy, public Flyable, public XRayVision, public Bulletproof,
	public SuperHero
{
public:
	void IsASuperHero() override
	{
		cout << "Iron man first of Avengers" << endl;
	}

	void HasTheAbility() override
	{
		cout << "Super mind, money" << endl;
	}

	void IsAHuman() override
	{
		cout << "Tony Stark is a human" << endl;
	}

	void CanThink() override
	{
		cout << "Tony Stark is too smart guy)" << endl;
	}

	void MakeGoodThings() override
	{
		cout << "Tony Stark make onlu good things (more often)" << endl;
	}

	void CanFly() override
	{
		cout << "Stark can use his iron suit for flying " << endl;
	}

	void CanSeeEveryThing() override
	{
		cout << "Tony can use his helmet with super-modern cameras/glasses for seeing everything" << endl;
	}

	void CanStopBullet() override
	{
		cout << "Tony use his iron suit as armor against bullets and something else" << endl;
	}
};

class Rocket : public Animal, public SuperMind, public SuperHero, public GoodGuy
{
public:
	void IsASuperHero() override
	{
		cout << "Rocket in Guardian of the Galaxy" << endl;
	}

	void HasTheAbility() override
	{
		cout << "Super mind" << endl;
	}
	void IsAnAnimal() override
	{
		cout << "Rocket is raccoon which was created in the laboratory" << endl;
	}

	void MakeGoodThings() override
	{
		cout << "Rocket was bad until he did not join Guardians of the Galaxy" << endl;
	}

	void CanThink() override
	{
		cout << "Rocket is one of the smartest Hero in the galaxy" << endl;
	}
};

class Hulk : public SuperHero, public SuperMind, public SuperPower, public Human, public GoodGuy, public Bulletproof
{
public:
	void IsASuperHero() override
	{
		cout << "Hulk form Avengers" << endl;
	}

	void HasTheAbility() override
	{
		cout << "Super mind, muscules" << endl;
	}
	void CanThink() override
	{
		cout << "Hulk or doctor Bener is one of the smartest Hero in the world" << endl;
	}
	void CanMakeSuperPowerThings()override
	{
		cout << "Doctor Bener can transform to the creature with green skin and powerful muscles" << endl;
	}
	void IsAHuman() override
	{
		cout << "Doctor Bener is a human" << endl;
	}
	void MakeGoodThings() override
	{
		cout << "Hulk make onlu good things, but sometimes he crashed the whole city" << endl;
	}
	void CanStopBullet() override
	{
		cout << "Hulk has a green skin which protects doctor Bener from death" << endl;
	}
};

class Thor :public SuperHero, public God, public Flyable, public SuperPower, public GoodGuy
{
public:
	void IsASuperHero() override
	{
		cout << "Thor from Avengers" << endl;
	}

	void HasTheAbility() override
	{
		cout << "Super power, lightning" << endl;
	}
	void IsAGod() override
	{
		cout << "Thor is a God from Asgard" << endl;
	}
	void CanFly() override
	{
		cout << "Thor can use his hummer fo flying " << endl;
	}
	void CanMakeSuperPowerThings()override
	{
		cout << "Thor as god of lightning can make a lot of thunder from his hummer" << endl;
	}
	void MakeGoodThings() override
	{
		cout << "Avengers includes Thor as guardian of Earth for making peace" << endl;
	}
};

class CaptainMarvel : public SuperHero, public Human, public Flyable, public SuperPower, public GoodGuy, public Bulletproof
{
public:
	void IsASuperHero() override
	{
		cout << "Captain Marvel from Avengers" << endl;
	}
	void HasTheAbility() override
	{
		cout << "Super power, power from space stone" << endl;
	}
	void IsAHuman() override
	{
		cout << "Captain Marvel is a woman, who use super power from the space stone" << endl;
	}
	void CanFly() override
	{
		cout << "Denvers can fly using his power from space stone" << endl;
	}
	void CanMakeSuperPowerThings()override
	{
		cout << "Captain Marvel use power to shoot bunch of energy from her hands" << endl;
	}
	void MakeGoodThings() override
	{
		cout << "Captain Marvel make peace in whole Galaxy" << endl;
	}
	void CanStopBullet() override
	{
		cout << "Power of space stone does not allow bullets to pass through the skin" << endl;
	}
};

class SpiderMan : public SuperHero, public Human, public Flyable, public SuperPower, public GoodGuy, public SuperMind
{
public:
	void IsASuperHero() override
	{
		cout << "Spider Man from New York" << endl;
	}
	void HasTheAbility() override
	{
		cout << "make all things that all spiders can do" << endl;
	}
	void IsAHuman() override
	{
		cout << "Peter Parker is a boy" << endl;
	}
	void CanFly() override
	{
		cout << "Spider Man use his web for flying around the New York city" << endl;
	}
	void CanMakeSuperPowerThings()override
	{
		cout << "Peter has a super power from spider, who gave him spider sense, ôability to produce web" << endl;
	}
	void MakeGoodThings() override
	{
		cout << "Spider Man as a hero from New York every time try to help people" << endl;
	}
	void CanThink() override
	{
		cout << "Peter smart as Tony Stark" << endl;
	}
};

class Wolverine : public SuperHero, public Human, public SuperPower, public Regeneration, public Bulletproof, public GoodGuy
{
public:
	void IsASuperHero() override
	{
		cout << "Logan from X-MEN" << endl;
	}
	void HasTheAbility() override
	{
		cout << "Immortality" << endl;
	}
	void IsAHuman() override
	{
		cout << "Logan is a man" << endl;
	}
	void CanMakeSuperPowerThings()override
	{
		cout << "Logan has a super power because he is mutant" << endl;
	}
	void CanRestoreHP() override
	{
		cout << "Logan has a mutation which can help him revover his wound" << endl;
	}
	void CanStopBullet() override
	{
		cout << "Adamantium skeleton does not allow bullets make big problem to our hero " << endl;
	}
	void MakeGoodThings() override
	{
		cout << "Logan as part of X-MEN make only good things to the world" << endl;
	}
};

class DoctorStrange : public SuperHero, public Flyable, public Human, public SuperPower, public SuperMind, public GoodGuy
{
public:
	void IsASuperHero() override
	{
		cout << "Doctor Strange from Avengers" << endl;
	}
	void HasTheAbility() override
	{
		cout << "Ånchantment" << endl;
	}
	void IsAHuman() override
	{
		cout << "Doctor Stephen Strange is a human" << endl;
	}
	void CanFly() override
	{
		cout << "Strange can fly with the help of a magical cloak" << endl;
	}
	void CanMakeSuperPowerThings()override
	{
		cout << "Strange as a magician can make a spell and a lot of other cool things" << endl;
	}
	void CanThink() override
	{
		cout << "Strange was a surgeon, and he is smart" << endl;
	}
	void MakeGoodThings() override
	{
		cout << "Strange everytime saves our dimension from evil" << endl;
	}
};

class Altron : public SuperVillains, public Robot, public Flyable, public BadGuy, public SuperMind
{
public:
	void HasTheAbility() override
	{
		cout << "Super mind" << endl;
	}
	void IsARobot() override
	{
		cout << "Altron is robot who was created by Tony Stark as defender of Earth" << endl;
	}
	void CanFly() override
	{
		cout << "Altron can fly like iron man by using jet engines" << endl;
	}
	void MakeBadThings() override
	{
		cout << "Altron is a bad guy who wanted to destroy Earth and Avengers" << endl;
	}
	void CanThink() override
	{
		cout << "Alton is artificial Intelligence who can store information about everything" << endl;
	}
};

class Tanos : public SuperVillains, public BadGuy, public SuperPower, public SuperMind
{
public:
	void HasTheAbility() override
	{
		cout << "Has power of the stones" << endl;
	}
	void MakeBadThings() override
	{
		cout << "Tanos wanted to destroy half of humanity" << endl;
	}
	void CanMakeSuperPowerThings()override
	{
		cout << "All of his power is a power from his infinity stones" << endl;
	}
	void CanThink() override
	{
		cout << "The power of mind stone made him one of the smartest bad guy in MARVEL" << endl;
	}
};