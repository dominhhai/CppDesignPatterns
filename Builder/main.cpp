#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Packing {
 public:
  virtual std::string Pack() = 0;
};

class Item {
 public:
  virtual std::string Name() = 0;
  virtual Packing* DoPacking() = 0;
  virtual float Price() = 0;
};

class Wrapper : public Packing {
 public:
  std::string Pack() { return "Wrapper"; }
};

class Bottle : public Packing {
 public:
  std::string Pack() { return "Bottle"; }
};

class Burger : public Item {
 public:
  Packing* DoPacking() { return new Wrapper(); }
};

class ColdDrink : public Item {
 public:
  Packing* DoPacking() { return new Bottle(); }
};

class VegBurger : public Burger {
 public:
  std::string Name() { return "VegBurger"; }

  float Price() { return 10; }
};

class ChickenBurger : public Burger {
 public:
  std::string Name() { return "ChickenBurger"; }

  float Price() { return 12; }
};

class Pepsi : public ColdDrink {
 public:
  std::string Name() { return "Pepsi"; }

  float Price() { return 13; }
};

class Coke : public ColdDrink {
 public:
  std::string Name() { return "Coke"; }

  float Price() { return 14; }
};

class Meal {
 public:
  void AddItem(Item* item) {
    this->items_.push_back(std::unique_ptr<Item>(item));
  }

  float GetCost() {
    float cost = 0;

    for (auto& item : this->items_) {
      cost += item->Price();
    }

    return cost;
  }

  void ShowItems() {
    for (auto& item : this->items_) {
      std::cout << "Item: " << item->Name()
                << ", Packing: " << item->DoPacking()->Pack()
                << ", Price: " << item->Price() << std::endl;
    }
  }

 private:
  std::vector<std::unique_ptr<Item>> items_;
};

class MealBuilder {
 public:
  static Meal* PreapreVegMeal() {
    Meal* meal = new Meal();
    meal->AddItem(new VegBurger());
    meal->AddItem(new Coke());
    return meal;
  }

  static Meal* PreapreNonVegMeal() {
    Meal* meal = new Meal();
    meal->AddItem(new ChickenBurger());
    meal->AddItem(new Pepsi());
    return meal;
  }
};

int main(int argc, char const* argv[]) {
  std::unique_ptr<Meal> vegMeal =
      std::unique_ptr<Meal>(MealBuilder::PreapreVegMeal());
  std::cout << "Veg Meal" << std::endl;
  vegMeal->ShowItems();
  std::cout << "Total Cost: " << vegMeal->GetCost() << std::endl;
  vegMeal.reset();

  std::unique_ptr<Meal> nonVegMeal =
      std::unique_ptr<Meal>(MealBuilder::PreapreNonVegMeal());
  std::cout << "Non-Veg Meal" << std::endl;
  nonVegMeal->ShowItems();
  std::cout << "Total Cost: " << nonVegMeal->GetCost() << std::endl;

  return 0;
}
