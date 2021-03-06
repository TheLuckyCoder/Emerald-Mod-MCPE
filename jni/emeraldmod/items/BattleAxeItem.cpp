#include "BattleAxeItem.h"
#include "minecraftpe/world/item/ItemInstance.h"
#include "minecraftpe/world/entity/Mob.h"
#include "minecraftpe/world/block/Block.h"

BattleAxeItem::BattleAxeItem(const std::string &name, short id) : Item(name, id)
{
	setCategory(CreativeItemCategory::TOOLS);
	setMaxStackSize(1);
	setMaxDamage(2000);
	setHandEquipped();
}

void BattleAxeItem::hurtEnemy(ItemInstance &item, Mob*, Mob *victim) const
{
	item.hurtAndBreak(1, victim);
}

bool BattleAxeItem::mineBlock(ItemInstance &item, BlockID, int, int, int, Entity *entity) const
{
	item.hurtAndBreak(1, entity);
}

bool BattleAxeItem::canDestroySpecial(const Block &block) const
{
	return Item::mItems[279]->canDestroySpecial(block);
}

float BattleAxeItem::getDestroySpeed(ItemInstance&, const Block &block) const
{
	return block.getMaterial() == Material::getMaterial(MaterialType::WOOD) ? 50.0f : 1.0f;
}

