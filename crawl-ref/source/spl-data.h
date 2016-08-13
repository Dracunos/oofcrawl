/**
 * @file
 * @brief Spell definitions and descriptions. See spell_desc struct in
 *        spl-util.cc.
**/

/*
struct spell_desc
{
    enum, spell name,
    spell schools,
    flags,
    level,
    power_cap,
    min_range, max_range, (-1 if not applicable)
    noise, effect_noise
    tile
}
*/

static const struct spell_desc spelldata[] =
{

{
    SPELL_TELEPORT_SELF, "Teleport Self",
    SPTYP_TRANSLOCATION,
    SPFLAG_ESCAPE | SPFLAG_EMERGENCY | SPFLAG_UTILITY | SPFLAG_MONSTER,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_TELEPORT_SELF,
},

{
    SPELL_CAUSE_FEAR, "Cause Fear",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_MR_CHECK,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_CAUSE_FEAR,
},

{
    SPELL_MAGIC_DART, "Magic Dart",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    1,
    25,
    LOS_RADIUS, LOS_RADIUS,
    1, 0,
    TILEG_MAGIC_DART,
},

{
    SPELL_FIREBALL, "Fireball",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    5,
    200,
    5, 5,
    5, 0,
    TILEG_FIREBALL,
},

{
    SPELL_APPORTATION, "Apportation",
    SPTYP_TRANSLOCATION,
    SPFLAG_TARGET | SPFLAG_OBJ | SPFLAG_NOT_SELF,
    1,
    1000,
    LOS_RADIUS, LOS_RADIUS,
    1, 0,
    TILEG_APPORTATION,
},

{
    SPELL_DELAYED_FIREBALL, "Delayed Fireball",
    SPTYP_FIRE | SPTYP_CONJURATION,
    SPFLAG_UTILITY,
    7,
    0,
    -1, -1,
    7, 0,
    TILEG_DELAYED_FIREBALL,
},

{
    SPELL_CONJURE_FLAME, "Conjure Flame",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_TARGET | SPFLAG_NOT_SELF,
    3,
    100,
    3, 3,
    3, 2,
    TILEG_CONJURE_FLAME,
},

{
    SPELL_DIG, "Dig",
    SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEUTRAL | SPFLAG_UTILITY,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_DIG,
},

{
    SPELL_BOLT_OF_FIRE, "Bolt of Fire",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    6,
    200,
    6, 6,
    6, 0,
    TILEG_BOLT_OF_FIRE,
},

{
    SPELL_BOLT_OF_COLD, "Bolt of Cold",
    SPTYP_CONJURATION | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    6,
    200,
    5, 5,
    6, 0,
    TILEG_BOLT_OF_COLD,
},

{
    SPELL_LIGHTNING_BOLT, "Lightning Bolt",
    SPTYP_CONJURATION | SPTYP_AIR,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    5,
    200,
    4, 11, // capped at LOS, yet this 11 matters since range increases linearly
    5, 25,
    TILEG_LIGHTNING_BOLT,
},

{
    SPELL_BLINKBOLT, "Blinkbolt",
    SPTYP_AIR | SPTYP_TRANSLOCATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    200,
    4, 11,
    3, 0,
    TILEG_BLINKBOLT,
},

{
    SPELL_BOLT_OF_MAGMA, "Bolt of Magma",
    SPTYP_CONJURATION | SPTYP_FIRE | SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    5,
    200,
    4, 4,
    5, 0,
    TILEG_BOLT_OF_MAGMA,
},

{
    SPELL_POLYMORPH, "Polymorph",
    SPTYP_TRANSMUTATION | SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_CHAOTIC | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_POLYMORPH,
},

{
    SPELL_SLOW, "Slow",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    2,
    200,
    LOS_RADIUS, LOS_RADIUS,
    2, 0,
    TILEG_SLOW,
},

{
    SPELL_HASTE, "Haste",
    SPTYP_CHARMS,
    SPFLAG_DIR_OR_TARGET | SPFLAG_HELPFUL | SPFLAG_HASTY | SPFLAG_SELFENCH
        | SPFLAG_UTILITY,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_HASTE,
},

{
    SPELL_PETRIFY, "Petrify",
    SPTYP_TRANSMUTATION | SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_PETRIFY,
},

{
    SPELL_CONFUSE, "Confuse",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    3,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_CONFUSE,
},

{
    SPELL_INVISIBILITY, "Invisibility",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_HELPFUL | SPFLAG_SELFENCH
        | SPFLAG_EMERGENCY | SPFLAG_NEEDS_TRACER,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    0, 0,
    TILEG_INVISIBILITY,
},

{
    SPELL_THROW_FLAME, "Throw Flame",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    2,
    50,
    LOS_RADIUS, LOS_RADIUS,
    2, 0,
    TILEG_THROW_FLAME,
},

{
    SPELL_THROW_FROST, "Throw Frost",
    SPTYP_CONJURATION | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    2,
    50,
    6, 6,
    2, 0,
    TILEG_THROW_FROST,
},

{
    SPELL_CONTROLLED_BLINK, "Controlled Blink",
    SPTYP_TRANSLOCATION,
    SPFLAG_ESCAPE | SPFLAG_EMERGENCY | SPFLAG_UTILITY,
    8,
    0,
    -1, -1,
    2, 0, // Not noisier than Blink, to keep this spell relevant
          // for stabbers. [rob]
    TILEG_CONTROLLED_BLINK,
},

{
    SPELL_DISJUNCTION, "Disjunction",
    SPTYP_TRANSLOCATION,
    SPFLAG_ESCAPE | SPFLAG_UTILITY,
    8,
    200,
    -1, -1,
    6, 0,
    TILEG_DISJUNCTION,
},

{
    SPELL_FREEZING_CLOUD, "Freezing Cloud",
    SPTYP_CONJURATION | SPTYP_ICE | SPTYP_AIR,
    SPFLAG_TARGET | SPFLAG_AREA | SPFLAG_NEEDS_TRACER
        | SPFLAG_CLOUD,
    6,
    200,
    5, 5,
    6, 2,
    TILEG_FREEZING_CLOUD,
},

{
    SPELL_MEPHITIC_CLOUD, "Mephitic Cloud",
    SPTYP_CONJURATION | SPTYP_POISON | SPTYP_AIR,
    SPFLAG_DIR_OR_TARGET | SPFLAG_AREA
        | SPFLAG_NEEDS_TRACER | SPFLAG_CLOUD,
    3,
    100,
    4, 4,
    3, 0,
    TILEG_MEPHITIC_CLOUD,
},

{
    SPELL_RING_OF_FLAMES, "Ring of Flames",
    SPTYP_CHARMS | SPTYP_FIRE,
    SPFLAG_AREA,
    7,
    200,
    -1, -1,
    6, 0,
    TILEG_RING_OF_FLAMES,
},

{
    SPELL_VENOM_BOLT, "Venom Bolt",
    SPTYP_CONJURATION | SPTYP_POISON,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    5,
    200,
    5, 5,
    5, 0,
    TILEG_VENOM_BOLT,
},

{
    SPELL_OLGREBS_TOXIC_RADIANCE, "Olgreb's Toxic Radiance",
    SPTYP_POISON,
    SPFLAG_AREA | SPFLAG_BATTLE,
    4,
    100,
    -1, -1,
    2, 0,
    TILEG_OLGREBS_TOXIC_RADIANCE,
},

{
    SPELL_TELEPORT_OTHER, "Teleport Other",
    SPTYP_TRANSLOCATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_ESCAPE
        | SPFLAG_EMERGENCY | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    3,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_TELEPORT_OTHER,
},

{
    SPELL_DEATHS_DOOR, "Death's Door",
    SPTYP_CHARMS | SPTYP_NECROMANCY,
    SPFLAG_EMERGENCY | SPFLAG_UTILITY | SPFLAG_NO_GHOST,
    8,
    200,
    -1, -1,
    6, 0,
    TILEG_DEATHS_DOOR,
},

{
    SPELL_MASS_CONFUSION, "Mass Confusion",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_MR_CHECK,
    6,
    200,
    -1, -1,
    5, 0,
    TILEG_MASS_CONFUSION,
},

{
    SPELL_SMITING, "Smiting",
    SPTYP_NONE,
    SPFLAG_TARGET | SPFLAG_NOT_SELF,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    6, 0,
    TILEG_SMITING,
},

{
    SPELL_SUMMON_SMALL_MAMMAL, "Summon Small Mammal",
    SPTYP_SUMMONING,
    SPFLAG_BATTLE,
    1,
    25,
    -1, -1,
    1, 0,
    TILEG_SUMMON_SMALL_MAMMAL,
},

// Used indirectly, by monsters abjuring via other summon spells.
{
    SPELL_ABJURATION, "Abjuration",
    SPTYP_SUMMONING,
    SPFLAG_ESCAPE | SPFLAG_NEEDS_TRACER | SPFLAG_MONSTER,
    3,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_ERROR,
},

{
    SPELL_AURA_OF_ABJURATION, "Aura of Abjuration",
    SPTYP_SUMMONING,
    SPFLAG_AREA | SPFLAG_NEUTRAL | SPFLAG_ESCAPE,
    5,
    200,
    -1, -1,
    5, 0,
    TILEG_MASS_ABJURATION,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SUMMON_SCORPIONS, "Summon Scorpions",
    SPTYP_SUMMONING | SPTYP_POISON,
    SPFLAG_BATTLE,
    4,
    200,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_BOLT_OF_DRAINING, "Bolt of Draining",
    SPTYP_CONJURATION | SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    5,
    200,
    5, 5,
    2, 0, //the beam is silent
    TILEG_BOLT_OF_DRAINING,
},

{
    SPELL_LEHUDIBS_CRYSTAL_SPEAR, "Lehudib's Crystal Spear",
    SPTYP_CONJURATION | SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    8,
    200,
    3, 3,
    8, 0,
    TILEG_LEHUDIBS_CRYSTAL_SPEAR,
},

{
    SPELL_BOLT_OF_INACCURACY, "Bolt of Inaccuracy",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER, // rod/tome of destruction
    3,
    1000,
    6, 6,
    3, 0,
    TILEG_BOLT_OF_INACCURACY,
},

{
    SPELL_TORNADO, "Tornado",
    SPTYP_AIR,
    SPFLAG_AREA,
    9,
    200,
    TORNADO_RADIUS, TORNADO_RADIUS,
    5, 0,
    TILEG_TORNADO,
},

{
    SPELL_POISONOUS_CLOUD, "Poisonous Cloud",
    SPTYP_CONJURATION | SPTYP_POISON | SPTYP_AIR,
    SPFLAG_TARGET | SPFLAG_AREA | SPFLAG_NEEDS_TRACER | SPFLAG_CLOUD,
    6,
    200,
    5, 5,
    6, 2,
    TILEG_POISONOUS_CLOUD,
},

{
    SPELL_FIRE_STORM, "Fire Storm",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_TARGET | SPFLAG_AREA | SPFLAG_NEEDS_TRACER,
    9,
    200,
    5, 5,
    9, 0,
    TILEG_FIRE_STORM,
},

{
    SPELL_CALL_DOWN_DAMNATION, "Call Down Damnation",
    SPTYP_CONJURATION,
    SPFLAG_TARGET | SPFLAG_AREA | SPFLAG_UNHOLY | SPFLAG_NEEDS_TRACER,
    9,
    200,
    LOS_RADIUS, LOS_RADIUS,
    9, 0,
    TILEG_CALL_DOWN_DAMNATION,
},

{
    SPELL_BLINK, "Blink",
    SPTYP_TRANSLOCATION,
    SPFLAG_ESCAPE | SPFLAG_SELFENCH | SPFLAG_EMERGENCY | SPFLAG_UTILITY,
    2,
    0,
    -1, -1,
    2, 0,
    TILEG_BLINK,
},

{
    SPELL_BLINK_RANGE, "Blink Range", // XXX needs better name
    SPTYP_TRANSLOCATION,
    SPFLAG_ESCAPE | SPFLAG_MONSTER | SPFLAG_SELFENCH | SPFLAG_EMERGENCY,
    2,
    0,
    -1, -1,
    2, 0,
    TILEG_BLINK_RANGE,
},

{
    SPELL_BLINK_AWAY, "Blink Away",
    SPTYP_TRANSLOCATION,
    SPFLAG_ESCAPE | SPFLAG_MONSTER | SPFLAG_EMERGENCY | SPFLAG_SELFENCH,
    2,
    0,
    -1, -1,
    2, 0,
    TILEG_BLINK_AWAY,
},

{
    SPELL_BLINK_CLOSE, "Blink Close",
    SPTYP_TRANSLOCATION,
    SPFLAG_MONSTER,
    2,
    0,
    -1, -1,
    2, 0,
    TILEG_BLINK_CLOSE,
},

// The following name was found in the hack.exe file of an early version
// of PCHACK - credit goes to its creator (whoever that may be):
{
    SPELL_ISKENDERUNS_MYSTIC_BLAST, "Iskenderun's Mystic Blast",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    4,
    100,
    6, 6,
    4, 10,
    TILEG_ISKENDERUNS_MYSTIC_BLAST,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SUMMON_SWARM, "Summon Swarm",
    SPTYP_SUMMONING,
    SPFLAG_BATTLE,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_SUMMON_HORRIBLE_THINGS, "Summon Horrible Things",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_BATTLE | SPFLAG_CHAOTIC | SPFLAG_MONS_ABJURE,
    8,
    200,
    -1, -1,
    6, 0,
    TILEG_SUMMON_HORRIBLE_THINGS,
},

{
    SPELL_MALIGN_GATEWAY, "Malign Gateway",
    SPTYP_SUMMONING | SPTYP_TRANSLOCATION,
    SPFLAG_UNHOLY | SPFLAG_BATTLE | SPFLAG_CHAOTIC,
    7,
    200,
    -1, -1,
    6, 0,
    TILEG_MALIGN_GATEWAY,
},

{
    SPELL_ENSLAVEMENT, "Enslavement",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER
        | SPFLAG_MONSTER | SPFLAG_MR_CHECK,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_ENSLAVEMENT,
},

{
    SPELL_ANIMATE_DEAD, "Animate Dead",
    SPTYP_NECROMANCY,
    SPFLAG_AREA | SPFLAG_NEUTRAL | SPFLAG_CORPSE_VIOLATING | SPFLAG_UTILITY,
    4,
    0,
    -1, -1,
    3, 0,
    TILEG_ANIMATE_DEAD,
},

{
    SPELL_PAIN, "Pain",
    SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_BATTLE | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    1,
    25,
    5, 5,
    1, 0,
    TILEG_PAIN,
},

{
    SPELL_CONTROL_UNDEAD, "Control Undead",
    SPTYP_NECROMANCY,
    SPFLAG_MR_CHECK,
    4,
    200,
    -1, -1,
    3, 0,
    TILEG_CONTROL_UNDEAD,
},

{
    SPELL_ANIMATE_SKELETON, "Animate Skeleton",
    SPTYP_NECROMANCY,
    SPFLAG_CORPSE_VIOLATING | SPFLAG_UTILITY,
    1,
    0,
    -1, -1,
    1, 0,
    TILEG_ANIMATE_SKELETON,
},

{
    SPELL_VAMPIRIC_DRAINING, "Vampiric Draining",
    SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_BATTLE | SPFLAG_EMERGENCY
        | SPFLAG_SELFENCH,
    3,
    200,
    1, 1,
    3, 0,
    TILEG_VAMPIRIC_DRAINING,
},

{
    SPELL_HAUNT, "Haunt",
    SPTYP_SUMMONING | SPTYP_NECROMANCY,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_MONS_ABJURE,
    7,
    200,
    LOS_RADIUS, LOS_RADIUS,
    6, 0,
    TILEG_HAUNT,
},

{
    SPELL_BORGNJORS_REVIVIFICATION, "Borgnjor's Revivification",
    SPTYP_NECROMANCY,
    SPFLAG_UTILITY,
    8,
    200,
    -1, -1,
    6, 0,
    TILEG_BORGNJORS_REVIVIFICATION,
},

{
    SPELL_FREEZE, "Freeze",
    SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_BATTLE,
    1,
    25,
    1, 1,
    1, 0,
    TILEG_FREEZE,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SUMMON_ELEMENTAL, "Summon Elemental",
    SPTYP_SUMMONING,
    SPFLAG_BATTLE,
    4,
    200,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_OZOCUBUS_REFRIGERATION, "Ozocubu's Refrigeration",
    SPTYP_ICE,
    SPFLAG_AREA,
    6,
    200,
    -1, -1,
    5, 0,
    TILEG_OZOCUBUS_REFRIGERATION,
},

{
    SPELL_STICKY_FLAME, "Sticky Flame",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    4,
    100,
    1, 1,
    4, 0,
    TILEG_STICKY_FLAME,
},

{
    SPELL_SUMMON_ICE_BEAST, "Summon Ice Beast",
    SPTYP_ICE | SPTYP_SUMMONING,
    SPFLAG_BATTLE,
    4,
    100,
    -1, -1,
    3, 0,
    TILEG_SUMMON_ICE_BEAST,
},

{
    SPELL_OZOCUBUS_ARMOUR, "Ozocubu's Armour",
    SPTYP_CHARMS | SPTYP_ICE,
    SPFLAG_NO_GHOST,
    3,
    100,
    -1, -1,
    3, 0,
    TILEG_OZOCUBUS_ARMOUR,
},

{
    SPELL_CALL_IMP, "Call Imp",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_BATTLE | SPFLAG_SELFENCH,
    2,
    100,
    -1, -1,
    2, 0,
    TILEG_CALL_IMP,
},

{
    SPELL_REPEL_MISSILES, "Repel Missiles",
    SPTYP_CHARMS | SPTYP_AIR,
    SPFLAG_NONE,
    2,
    50,
    -1, -1,
    1, 0,
    TILEG_REPEL_MISSILES,
},

{
    SPELL_BERSERKER_RAGE, "Berserker Rage",
    SPTYP_CHARMS,
    SPFLAG_HASTY | SPFLAG_MONSTER,
    3,
    0,
    -1, -1,
    3, 0,
    TILEG_BERSERKER_RAGE,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_FRENZY, "Frenzy",
    SPTYP_CHARMS,
    SPFLAG_HASTY | SPFLAG_MONSTER,
    3,
    0,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_DISPEL_UNDEAD, "Dispel Undead",
    SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    5,
    100,
    4, 4,
    4, 0,
    TILEG_DISPEL_UNDEAD,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_FULSOME_DISTILLATION, "Fulsome Distillation",
    SPTYP_TRANSMUTATION | SPTYP_NECROMANCY,
    SPFLAG_CORPSE_VIOLATING,
    1,
    0,
    -1, -1,
    1, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_POISON_ARROW, "Poison Arrow",
    SPTYP_CONJURATION | SPTYP_POISON,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    6,
    200,
    6, 6,
    6, 0,
    TILEG_POISON_ARROW,
},

{
    SPELL_TWISTED_RESURRECTION, "Twisted Resurrection",
    SPTYP_NECROMANCY,
    SPFLAG_CHAOTIC | SPFLAG_CORPSE_VIOLATING | SPFLAG_UTILITY | SPFLAG_MONSTER,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_TWISTED_RESURRECTION,
},

{
    SPELL_REGENERATION, "Regeneration",
    SPTYP_CHARMS | SPTYP_NECROMANCY,
    SPFLAG_SELFENCH | SPFLAG_UTILITY,
    3,
    200,
    -1, -1,
    3, 0,
    TILEG_REGENERATION,
},

// Monster-only, players can use Lugonu's ability
{
    SPELL_BANISHMENT, "Banishment",
    SPTYP_TRANSLOCATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_UNHOLY | SPFLAG_CHAOTIC | SPFLAG_MONSTER
        | SPFLAG_EMERGENCY | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_BANISHMENT,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_CIGOTUVIS_DEGENERATION, "Cigotuvi's Degeneration",
    SPTYP_TRANSMUTATION | SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_CHAOTIC,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_STING, "Sting",
    SPTYP_CONJURATION | SPTYP_POISON,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    1,
    25,
    6, 6,
    1, 0,
    TILEG_STING,
},

{
    SPELL_SUBLIMATION_OF_BLOOD, "Sublimation of Blood",
    SPTYP_NECROMANCY,
    SPFLAG_UTILITY,
    2,
    200,
    -1, -1,
    2, 0,
    TILEG_SUBLIMATION_OF_BLOOD,
},

{
    SPELL_TUKIMAS_DANCE, "Tukima's Dance",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK
        | SPFLAG_NOT_SELF,
    3,
    100,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_TUKIMAS_DANCE,
},

{
    SPELL_SUMMON_DEMON, "Summon Demon",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_BATTLE | SPFLAG_SELFENCH | SPFLAG_MONS_ABJURE,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_SUMMON_DEMON,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_DEMONIC_HORDE, "Demonic Horde",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_BATTLE,
    6,
    200,
    -1, -1,
    5, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_SUMMON_GREATER_DEMON, "Summon Greater Demon",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_BATTLE | SPFLAG_SELFENCH | SPFLAG_MONS_ABJURE,
    7,
    200,
    -1, -1,
    6, 0,
    TILEG_SUMMON_GREATER_DEMON,
},

{
    SPELL_CORPSE_ROT, "Corpse Rot",
    SPTYP_NECROMANCY,
    SPFLAG_AREA | SPFLAG_NEUTRAL | SPFLAG_UNCLEAN,
    2,
    0,
    -1, -1,
    2, 0,
    TILEG_CORPSE_ROT,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_FIRE_BRAND, "Fire Brand",
    SPTYP_CHARMS | SPTYP_FIRE,
    SPFLAG_HELPFUL | SPFLAG_BATTLE,
    2,
    200,
    -1, -1,
    2, 0,
    TILEG_ERROR,
},

{
    SPELL_FREEZING_AURA, "Freezing Aura",
    SPTYP_CHARMS | SPTYP_ICE,
    SPFLAG_HELPFUL | SPFLAG_BATTLE,
    2,
    200,
    -1, -1,
    2, 0,
    TILEG_ERROR,
},

{
    SPELL_LETHAL_INFUSION, "Lethal Infusion",
    SPTYP_CHARMS | SPTYP_NECROMANCY,
    SPFLAG_HELPFUL | SPFLAG_BATTLE,
    2,
    200,
    -1, -1,
    2, 0,
    TILEG_ERROR,
},

#endif
{
    SPELL_IRON_SHOT, "Iron Shot",
    SPTYP_CONJURATION | SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    6,
    200,
    4, 4,
    6, 0,
    TILEG_IRON_SHOT,
},

{
    SPELL_STONE_ARROW, "Stone Arrow",
    SPTYP_CONJURATION | SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    3,
    50,
    4, 4,
    3, 0,
    TILEG_STONE_ARROW,
},

{
    SPELL_SHOCK, "Shock",
    SPTYP_CONJURATION | SPTYP_AIR,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    1,
    25,
    LOS_RADIUS, LOS_RADIUS,
    1, 0,
    TILEG_SHOCK,
},

{
    SPELL_SWIFTNESS, "Swiftness",
    SPTYP_CHARMS | SPTYP_AIR,
    SPFLAG_HASTY | SPFLAG_SELFENCH | SPFLAG_UTILITY,
    2,
    100,
    -1, -1,
    2, 0,
    TILEG_SWIFTNESS,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_FLY, "Flight",
    SPTYP_CHARMS | SPTYP_AIR,
    SPFLAG_UTILITY,
    3,
    200,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},

{
    SPELL_INSULATION, "Insulation",
    SPTYP_CHARMS | SPTYP_AIR,
    SPFLAG_NONE,
    4,
    200,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},
#endif

#if TAG_MAJOR_VERSION == 34
{
    SPELL_CURE_POISON, "Cure Poison",
    SPTYP_POISON,
    SPFLAG_RECOVERY | SPFLAG_HELPFUL | SPFLAG_UTILITY,
    2,
    200,
    -1, -1,
    1, 0,
    TILEG_ERROR,
},
#endif

#if TAG_MAJOR_VERSION == 34
{
    SPELL_CONTROL_TELEPORT, "Control Teleport",
    SPTYP_CHARMS | SPTYP_TRANSLOCATION,
    SPFLAG_HELPFUL | SPFLAG_UTILITY,
    4,
    200,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},

{
    SPELL_POISON_WEAPON, "Poison Weapon",
    SPTYP_CHARMS | SPTYP_POISON,
    SPFLAG_HELPFUL | SPFLAG_BATTLE,
    3,
    200,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},

#endif
{
    SPELL_DEBUGGING_RAY, "Debugging Ray",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_TESTING,
    7,
    100,
    LOS_RADIUS, LOS_RADIUS,
    7, 0,
    TILEG_ERROR,
},

{
    SPELL_RECALL, "Recall",
    SPTYP_SUMMONING | SPTYP_TRANSLOCATION,
    SPFLAG_UTILITY,
    3,
    0,
    -1, -1,
    3, 0,
    TILEG_RECALL,
},

{
    SPELL_AGONY, "Agony",
    SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_AGONY,
},

{
    SPELL_SPIDER_FORM, "Spider Form",
    SPTYP_TRANSMUTATION | SPTYP_POISON,
    SPFLAG_HELPFUL | SPFLAG_CHAOTIC | SPFLAG_UTILITY,
    3,
    200,
    -1, -1,
    2, 0,
    TILEG_SPIDER_FORM,
},

{
    SPELL_DISINTEGRATE, "Disintegrate",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    6,
    200,
    5, 5,
    6, 0,
    TILEG_DISINTEGRATE,
},

{
    SPELL_BLADE_HANDS, "Blade Hands",
    SPTYP_TRANSMUTATION,
    SPFLAG_HELPFUL | SPFLAG_BATTLE | SPFLAG_CHAOTIC | SPFLAG_UTILITY,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_BLADE_HANDS,
},

{
    SPELL_STATUE_FORM, "Statue Form",
    SPTYP_TRANSMUTATION | SPTYP_EARTH,
    SPFLAG_HELPFUL | SPFLAG_CHAOTIC | SPFLAG_UTILITY,
    6,
    150,
    -1, -1,
    5, 0,
    TILEG_STATUE_FORM,
},

{
    SPELL_ICE_FORM, "Ice Form",
    SPTYP_ICE | SPTYP_TRANSMUTATION,
    SPFLAG_HELPFUL | SPFLAG_CHAOTIC | SPFLAG_UTILITY,
    4,
    100,
    -1, -1,
    3, 0,
    TILEG_ICE_FORM,
},

{
    SPELL_DRAGON_FORM, "Dragon Form",
    SPTYP_TRANSMUTATION,
    SPFLAG_HELPFUL | SPFLAG_CHAOTIC | SPFLAG_UTILITY,
    7,
    200,
    -1, -1,
    6, 0,
    TILEG_DRAGON_FORM,
},

{
    SPELL_HYDRA_FORM, "Hydra Form",
    SPTYP_TRANSMUTATION,
    SPFLAG_HELPFUL | SPFLAG_CHAOTIC | SPFLAG_UTILITY,
    6,
    200,
    -1, -1,
    6, 0,
    TILEG_HYDRA_FORM,
},

{
    SPELL_NECROMUTATION, "Necromutation",
    SPTYP_TRANSMUTATION | SPTYP_NECROMANCY,
    SPFLAG_HELPFUL | SPFLAG_CORPSE_VIOLATING | SPFLAG_CHAOTIC,
    8,
    200,
    -1, -1,
    6, 0,
    TILEG_NECROMUTATION,
},

{
    SPELL_DEATH_CHANNEL, "Death Channel",
    SPTYP_NECROMANCY,
    SPFLAG_HELPFUL | SPFLAG_UTILITY,
    6,
    200,
    -1, -1,
    5, 0,
    TILEG_DEATH_CHANNEL,
},

// Monster-only, players can use Kiku's ability
{
    SPELL_SYMBOL_OF_TORMENT, "Symbol of Torment",
    SPTYP_NECROMANCY,
    SPFLAG_AREA | SPFLAG_MONSTER,
    6,
    0,
    -1, -1,
    5, 0,
    TILEG_SYMBOL_OF_TORMENT,
},

{
    SPELL_DEFLECT_MISSILES, "Deflect Missiles",
    SPTYP_CHARMS | SPTYP_AIR,
    SPFLAG_HELPFUL | SPFLAG_UTILITY,
    6,
    200,
    -1, -1,
    3, 0,
    TILEG_DEFLECT_MISSILES,
},

{
    SPELL_THROW_ICICLE, "Throw Icicle",
    SPTYP_CONJURATION | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    4,
    100,
    5, 5,
    4, 0,
    TILEG_THROW_ICICLE,
},

{
    SPELL_AIRSTRIKE, "Airstrike",
    SPTYP_AIR,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_BATTLE,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    2, 4,
    TILEG_AIRSTRIKE,
},

{
    SPELL_SHADOW_CREATURES, "Shadow Creatures",
    SPTYP_SUMMONING,
    SPFLAG_MONS_ABJURE,
    6,
    0,
    -1, -1,
    4, 0,
    TILEG_SUMMON_SHADOW_CREATURES,
},

{
    SPELL_CONFUSING_TOUCH, "Confusing Touch",
    SPTYP_HEXES,
    SPFLAG_NONE,
    1,
    50,
    -1, -1,
    2, 0,
    TILEG_CONFUSING_TOUCH,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SURE_BLADE, "Sure Blade",
    SPTYP_HEXES | SPTYP_CHARMS,
    SPFLAG_HELPFUL | SPFLAG_BATTLE | SPFLAG_UTILITY,
    2,
    200,
    -1, -1,
    2, 0,
    TILEG_ERROR,
},
#endif
{
    SPELL_FLAME_TONGUE, "Flame Tongue",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER,
    1,
    40, // cap for range; damage cap is at 25
    2, 5,
    1, 0,
    TILEG_FLAME_TONGUE,
},

{
    SPELL_PASSWALL, "Passwall",
    SPTYP_TRANSMUTATION | SPTYP_EARTH,
    SPFLAG_DIR | SPFLAG_ESCAPE | SPFLAG_NOT_SELF | SPFLAG_UTILITY,
    2,
    200,
    1, 9,
    0, 0, // make silent to keep passwall a viable stabbing spell [rob]
    TILEG_PASSWALL,
},

{
    SPELL_IGNITE_POISON, "Ignite Poison",
    SPTYP_FIRE | SPTYP_TRANSMUTATION | SPTYP_POISON,
    SPFLAG_AREA | SPFLAG_BATTLE,
    3,
    100,
    -1, -1,
    4, 0,
    TILEG_IGNITE_POISON,
},

{
    SPELL_STICKS_TO_SNAKES, "Sticks to Snakes",
    SPTYP_TRANSMUTATION,
    SPFLAG_BATTLE | SPFLAG_NO_GHOST,
    2,
    100,
    -1, -1,
    2, 0,
    TILEG_STICKS_TO_SNAKES,
},

{
    SPELL_CALL_CANINE_FAMILIAR, "Call Canine Familiar",
    SPTYP_SUMMONING,
    SPFLAG_NONE,
    3,
    100,
    -1, -1,
    3, 0,
    TILEG_CALL_CANINE_FAMILIAR,
},

{
    SPELL_SUMMON_DRAGON, "Summon Dragon",
    SPTYP_SUMMONING,
    SPFLAG_MONS_ABJURE,
    9,
    200,
    -1, -1,
    7, 0,
    TILEG_SUMMON_DRAGON,
},

{
    SPELL_HIBERNATION, "Ensorcelled Hibernation",
    SPTYP_HEXES | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    2,
    56,
    LOS_RADIUS, LOS_RADIUS,
    0, 0, //putting a monster to sleep should be silent
    TILEG_ENSORCELLED_HIBERNATION,
},

{
    SPELL_ENGLACIATION, "Metabolic Englaciation",
    SPTYP_HEXES | SPTYP_ICE,
    SPFLAG_AREA,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_METABOLIC_ENGLACIATION,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SEE_INVISIBLE, "See Invisible",
    SPTYP_CHARMS,
    SPFLAG_HELPFUL,
    4,
    200,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},

{
    SPELL_PHASE_SHIFT, "Phase Shift",
    SPTYP_TRANSLOCATION,
    SPFLAG_HELPFUL | SPFLAG_UTILITY,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_SUMMON_BUTTERFLIES, "Summon Butterflies",
    SPTYP_SUMMONING,
    SPFLAG_NONE,
    1,
    100,
    -1, -1,
    1, 0,
    TILEG_SUMMON_BUTTERFLIES,
},

{
    SPELL_WARP_BRAND, "Warp Weapon",
    SPTYP_CHARMS | SPTYP_TRANSLOCATION,
    SPFLAG_HELPFUL | SPFLAG_BATTLE | SPFLAG_UTILITY,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_WARP_WEAPON,
},

{
    SPELL_SILENCE, "Silence",
    SPTYP_HEXES | SPTYP_AIR,
    SPFLAG_AREA,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_SILENCE,
},

{
    SPELL_SHATTER, "Shatter",
    SPTYP_EARTH,
    SPFLAG_AREA,
    9,
    200,
    -1, -1,
    7, 30,
    TILEG_SHATTER,
},

{
    SPELL_DISPERSAL, "Dispersal",
    SPTYP_TRANSLOCATION,
    SPFLAG_AREA | SPFLAG_ESCAPE,
    6,
    200,
    1, 4,
    5, 0,
    TILEG_DISPERSAL,
},

{
    SPELL_DISCHARGE, "Static Discharge",
    SPTYP_CONJURATION | SPTYP_AIR,
    SPFLAG_AREA,
    3,
    100,
    1, 1,
    3, 0,
    TILEG_STATIC_DISCHARGE,
},

{
    SPELL_CORONA, "Corona",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    1,
    200,
    LOS_RADIUS, LOS_RADIUS,
    1, 0,
    TILEG_CORONA,
},

{
    SPELL_INTOXICATE, "Alistair's Intoxication",
    SPTYP_TRANSMUTATION | SPTYP_POISON,
    SPFLAG_NONE,
    5,
    100,
    -1, -1,
    3, 0,
    TILEG_ALISTAIRS_INTOXICATION,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_EVAPORATE, "Evaporate",
    SPTYP_FIRE | SPTYP_TRANSMUTATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_AREA,
    2,
    50,
    5, 5,
    2, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_LRD, "Lee's Rapid Deconstruction",
    SPTYP_EARTH,
    SPFLAG_TARGET,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_LEES_RAPID_DECONSTRUCTION,
},

{
    SPELL_SANDBLAST, "Sandblast",
    SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_BATTLE | SPFLAG_NEEDS_TRACER,
    1,
    50,
    2, 2, // more with wielded stones
    1, 0,
    TILEG_SANDBLAST,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_CONDENSATION_SHIELD, "Condensation Shield",
    SPTYP_ICE,
    SPFLAG_HELPFUL | SPFLAG_UTILITY,
    4,
    200,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},

{
    SPELL_STONESKIN, "Stoneskin",
    SPTYP_EARTH | SPTYP_TRANSMUTATION,
    SPFLAG_HELPFUL | SPFLAG_UTILITY | SPFLAG_NO_GHOST | SPFLAG_MONSTER,
    2,
    100,
    -1, -1,
    2, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_SIMULACRUM, "Simulacrum",
    SPTYP_ICE | SPTYP_NECROMANCY,
    SPFLAG_CORPSE_VIOLATING,
    6,
    200,
    -1, -1,
    5, 0,
    TILEG_SIMULACRUM,
},

{
    SPELL_CONJURE_BALL_LIGHTNING, "Conjure Ball Lightning",
    SPTYP_AIR | SPTYP_CONJURATION,
    SPFLAG_SELFENCH,
    6,
    200,
    -1, -1,
    6, 0,
    TILEG_CONJURE_BALL_LIGHTNING,
},

{
    SPELL_CHAIN_LIGHTNING, "Chain Lightning",
    SPTYP_AIR | SPTYP_CONJURATION,
    SPFLAG_AREA,
    8,
    200,
    -1, -1,
    8, 25,
    TILEG_CHAIN_LIGHTNING,
},

{
    SPELL_EXCRUCIATING_WOUNDS, "Excruciating Wounds",
    SPTYP_CHARMS | SPTYP_NECROMANCY,
    SPFLAG_HELPFUL | SPFLAG_BATTLE,
    5,
    200,
    -1, -1,
    4, 15,
    TILEG_EXCRUCIATING_WOUNDS,
},

{
    SPELL_PORTAL_PROJECTILE, "Portal Projectile",
    SPTYP_TRANSLOCATION,
    SPFLAG_BATTLE,
    3,
    50,
    -1, -1,
    3, 0,
    TILEG_PORTAL_PROJECTILE,
},

{
    SPELL_MONSTROUS_MENAGERIE, "Monstrous Menagerie",
    SPTYP_SUMMONING,
    SPFLAG_MONS_ABJURE,
    7,
    200,
    -1, -1,
    5, 0,
    TILEG_MONSTROUS_MENAGERIE,
},

{
    SPELL_GOLUBRIAS_PASSAGE, "Passage of Golubria",
    SPTYP_TRANSLOCATION,
    SPFLAG_TARGET | SPFLAG_NEUTRAL | SPFLAG_ESCAPE | SPFLAG_SELFENCH,
    4,
    0,
    LOS_RADIUS, LOS_RADIUS,
    3, 8, // when it closes
    TILEG_PASSAGE_OF_GOLUBRIA,
},

{
    SPELL_FULMINANT_PRISM, "Fulminant Prism",
    SPTYP_CONJURATION | SPTYP_HEXES,
    SPFLAG_TARGET | SPFLAG_AREA | SPFLAG_NOT_SELF,
    4,
    200,
    4, 4,
    4, 0,
    TILEG_FULMINANT_PRISM,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SINGULARITY, "Singularity",
    SPTYP_TRANSLOCATION,
    SPFLAG_TARGET | SPFLAG_AREA | SPFLAG_NOT_SELF | SPFLAG_MONSTER,
    9,
    200,
    LOS_RADIUS, LOS_RADIUS,
    20, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_PARALYSE, "Paralyse",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_PARALYSE,
},

{
    SPELL_MINOR_HEALING, "Minor Healing",
    SPTYP_NECROMANCY,
    SPFLAG_RECOVERY | SPFLAG_HELPFUL | SPFLAG_MONSTER | SPFLAG_SELFENCH
        | SPFLAG_EMERGENCY | SPFLAG_UTILITY | SPFLAG_NOT_EVIL,
    2,
    0,
    LOS_RADIUS, LOS_RADIUS,
    2, 0,
    TILEG_MINOR_HEALING,
},

{
    SPELL_MAJOR_HEALING, "Major Healing",
    SPTYP_NECROMANCY,
    SPFLAG_RECOVERY | SPFLAG_HELPFUL | SPFLAG_MONSTER | SPFLAG_SELFENCH
        | SPFLAG_EMERGENCY | SPFLAG_UTILITY | SPFLAG_NOT_EVIL,
    6,
    0,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_MAJOR_HEALING,
},

{
    SPELL_HURL_DAMNATION, "Hurl Damnation",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_UNHOLY | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    // plus DS ability, staff of Dispater & Sceptre of Asmodeus
    9,
    200,
    6, 6,
    9, 0,
    TILEG_HURL_DAMNATION,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_VAMPIRE_SUMMON, "Vampire Summon",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_MONSTER,
    3,
    0,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_BRAIN_FEED, "Brain Feed",
    SPTYP_NECROMANCY,
    SPFLAG_TARGET | SPFLAG_MONSTER,
    3,
    0,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_BRAIN_FEED,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_FAKE_RAKSHASA_SUMMON, "Rakshasa Summon",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_MONSTER,
    3,
    0,
    -1, -1,
    3, 0,
    TILEG_FAKE_RAKSHASA_SUMMON,
},
#endif

{
    SPELL_NOXIOUS_CLOUD, "Noxious Cloud",
    SPTYP_CONJURATION | SPTYP_POISON | SPTYP_AIR,
    SPFLAG_TARGET | SPFLAG_AREA | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER
        | SPFLAG_CLOUD,
    5,
    200,
    5, 5,
    5, 0,
    TILEG_NOXIOUS_CLOUD,
},

{
    SPELL_STEAM_BALL, "Steam Ball",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    4,
    0,
    6, 6,
    4, 0,
    TILEG_STEAM_BALL,
},

{
    SPELL_SUMMON_UFETUBUS, "Summon Ufetubus",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_MONSTER | SPFLAG_SELFENCH,
    4,
    0,
    -1, -1,
    3, 0,
    TILEG_SUMMON_UFETUBUS,
},

{
    SPELL_SUMMON_HELL_BEAST, "Summon Hell Beast",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_MONSTER | SPFLAG_SELFENCH,
    4,
    0,
    -1, -1,
    3, 0,
    TILEG_SUMMON_HELL_BEAST,
},

{
    SPELL_ENERGY_BOLT, "Energy Bolt",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    4,
    0,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_ENERGY_BOLT,
},

{
    SPELL_SPIT_POISON, "Spit Poison",
    SPTYP_POISON,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    2,
    0,
    6, 6,
    3, 0,
    TILEG_SPIT_POISON,
},

{
    SPELL_SUMMON_UNDEAD, "Summon Undead",
    SPTYP_SUMMONING | SPTYP_NECROMANCY,
    SPFLAG_MONSTER | SPFLAG_MONS_ABJURE,
    7,
    0,
    -1, -1,
    6, 0,
    TILEG_SUMMON_UNDEAD,
},

{
    SPELL_CANTRIP, "Cantrip",
    SPTYP_NONE,
    SPFLAG_MONSTER,
    1,
    0,
    -1, -1,
    2, 0,
    TILEG_CANTRIP,
},

{
    SPELL_QUICKSILVER_BOLT, "Quicksilver Bolt",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_QUICKSILVER_BOLT,
},

{
    SPELL_METAL_SPLINTERS, "Metal Splinters",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    5,
    0,
    4, 4,
    5, 0,
    TILEG_METAL_SPLINTERS,
},

{
    SPELL_MIASMA_BREATH, "Miasma Breath",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_UNCLEAN | SPFLAG_MONSTER
        | SPFLAG_NEEDS_TRACER | SPFLAG_CLOUD,
    6,
    0,
    5, 5,
    6, 0,
    TILEG_MIASMA_BREATH,
},

{
    SPELL_SUMMON_DRAKES, "Summon Drakes",
    SPTYP_SUMMONING | SPTYP_NECROMANCY, // since it can summon shadow dragons
    SPFLAG_UNCLEAN | SPFLAG_MONSTER | SPFLAG_MONS_ABJURE,
    6,
    0,
    -1, -1,
    5, 0,
    TILEG_SUMMON_DRAKES,
},

{
    SPELL_BLINK_OTHER, "Blink Other",
    SPTYP_TRANSLOCATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_ESCAPE | SPFLAG_MONSTER
        | SPFLAG_EMERGENCY | SPFLAG_NEEDS_TRACER,
    2,
    0,
    LOS_RADIUS, LOS_RADIUS,
    2, 0,
    TILEG_BLINK_OTHER,
},

{
    SPELL_BLINK_OTHER_CLOSE, "Blink Other Close",
    SPTYP_TRANSLOCATION,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    2,
    0,
    LOS_RADIUS, LOS_RADIUS,
    2, 0,
    TILEG_BLINK_OTHER_CLOSE,
},

{
    SPELL_SUMMON_MUSHROOMS, "Summon Mushrooms",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_SELFENCH | SPFLAG_MONS_ABJURE,
    4,
    0,
    -1, -1,
    3, 0,
    TILEG_SUMMON_MUSHROOMS,
},

{
    SPELL_SPIT_ACID, "Spit Acid",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_SPIT_ACID,
},

// Monster version of the spell (with full range)
{
    SPELL_STICKY_FLAME_RANGE, "Sticky Flame Range",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    4,
    100,
    4, 4,
    4, 0,
    TILEG_STICKY_FLAME_RANGE,
},

{
    SPELL_STICKY_FLAME_SPLASH, "Sticky Flame Splash",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    4,
    100,
    4, 4,
    4, 0,
    TILEG_STICKY_FLAME_SPLASH,
},

{
    SPELL_FIRE_BREATH, "Fire Breath",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    5, 5,
    5, 0,
    TILEG_FIRE_BREATH,
},

{
    SPELL_SEARING_BREATH, "Searing Breath",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    5, 5,
    5, 0,
    TILEG_FIRE_BREATH,
},

{
    SPELL_CHAOS_BREATH, "Chaos Breath",
    SPTYP_CONJURATION | SPTYP_RANDOM,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY
        | SPFLAG_NEEDS_TRACER | SPFLAG_CLOUD,
    5,
    0,
    5, 5,
    5, 0,
    TILEG_CHAOS_BREATH,
},

{
    SPELL_COLD_BREATH, "Cold Breath",
    SPTYP_CONJURATION | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    5, 5,
    5, 0,
    TILEG_COLD_BREATH,
},

{
    SPELL_CHILLING_BREATH, "Chilling Breath",
    SPTYP_CONJURATION | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    5, 5,
    5, 0,
    TILEG_ERROR,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_DRACONIAN_BREATH, "Draconian Breath",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY,
    8,
    0,
    LOS_RADIUS, LOS_RADIUS,
    8, 0,
    TILEG_ERROR,
},

#endif
{
    SPELL_WATER_ELEMENTALS, "Summon Water Elementals",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_MONS_ABJURE,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_WATER_ELEMENTALS,
},

{
    SPELL_PORKALATOR, "Porkalator",
    SPTYP_HEXES | SPTYP_TRANSMUTATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_CHAOTIC | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_PORKALATOR,
},

{
    SPELL_CREATE_TENTACLES, "Spawn Tentacles",
    SPTYP_NONE,
    SPFLAG_MONSTER | SPFLAG_SELFENCH,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_CREATE_TENTACLES,
},

{
    SPELL_TOMB_OF_DOROKLOHE, "Tomb of Doroklohe",
    SPTYP_EARTH,
    SPFLAG_MONSTER | SPFLAG_EMERGENCY,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_TOMB_OF_DOROKLOHE,
},

{
    SPELL_SUMMON_EYEBALLS, "Summon Eyeballs",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_MONS_ABJURE,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_SUMMON_EYEBALLS,
},

{
    SPELL_HASTE_OTHER, "Haste Other",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_HELPFUL
        | SPFLAG_HASTY | SPFLAG_NEEDS_TRACER | SPFLAG_UTILITY,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_HASTE_OTHER,
},

{
    SPELL_EARTH_ELEMENTALS, "Summon Earth Elementals",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_MONS_ABJURE,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_EARTH_ELEMENTALS,
},

{
    SPELL_AIR_ELEMENTALS, "Summon Air Elementals",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_MONS_ABJURE,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_AIR_ELEMENTALS,
},

{
    SPELL_FIRE_ELEMENTALS, "Summon Fire Elementals",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_MONS_ABJURE,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_FIRE_ELEMENTALS,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_IRON_ELEMENTALS, "Summon Iron Elementals",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_MONS_ABJURE,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_IRON_ELEMENTALS,
},
#endif

{
    SPELL_SLEEP, "Sleep",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_SLEEP,
},

{
    SPELL_FAKE_MARA_SUMMON, "Mara Summon",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_SELFENCH,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_FAKE_MARA_SUMMON,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SUMMON_RAKSHASA, "Summon Rakshasa",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_ERROR,
},

{
    SPELL_MISLEAD, "Mislead",
    SPTYP_HEXES,
    SPFLAG_TARGET | SPFLAG_NOT_SELF,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_SUMMON_ILLUSION, "Summon Illusion",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_SUMMON_ILLUSION,
},

{
    SPELL_PRIMAL_WAVE, "Primal Wave",
    SPTYP_CONJURATION | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    6,
    200,
    6, 6,
    6, 25,
    TILEG_PRIMAL_WAVE,
},

{
    SPELL_CALL_TIDE, "Call Tide",
    SPTYP_TRANSLOCATION,
    SPFLAG_MONSTER,
    7,
    0,
    -1, -1,
    6, 0,
    TILEG_CALL_TIDE,
},

{
    SPELL_IOOD, "Orb of Destruction",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER,
    7,
    200,
    8, 8,
    7, 0,
    TILEG_IOOD,
},

{
    SPELL_INK_CLOUD, "Ink Cloud",
    SPTYP_CONJURATION | SPTYP_ICE, // it's a water spell
    SPFLAG_MONSTER | SPFLAG_EMERGENCY | SPFLAG_UTILITY,
    7,
    0,
    -1, -1,
    7, 0,
    TILEG_INK_CLOUD,
},

{
    SPELL_MIGHT, "Might",
    SPTYP_CHARMS,
    SPFLAG_DIR_OR_TARGET | SPFLAG_HELPFUL | SPFLAG_SELFENCH
        | SPFLAG_EMERGENCY | SPFLAG_UTILITY,
    3,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_MIGHT,
},

{
    SPELL_MIGHT_OTHER, "Might Other",
    SPTYP_CHARMS,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_HELPFUL
        | SPFLAG_NEEDS_TRACER | SPFLAG_UTILITY,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_MIGHT_OTHER,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SUNRAY, "Sunray",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET,
    6,
    200,
    8, 8,
    -9, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_AWAKEN_FOREST, "Awaken Forest",
    SPTYP_HEXES | SPTYP_SUMMONING,
    SPFLAG_AREA,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_AWAKEN_FOREST,
},

{
    SPELL_DRUIDS_CALL, "Druid's Call",
    SPTYP_CHARMS,
    SPFLAG_MONSTER,
    6,
    0,
    -1, -1,
    5, 0,
    TILEG_DRUIDS_CALL,
},

{
    SPELL_BROTHERS_IN_ARMS, "Brothers in Arms",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_EMERGENCY,
    6,
    0,
    -1, -1,
    5, 0,
    TILEG_BROTHERS_IN_ARMS,
},

{
    SPELL_TROGS_HAND, "Trog's Hand",
    SPTYP_NONE,
    SPFLAG_MONSTER | SPFLAG_SELFENCH,
    3,
    0,
    -1, -1,
    3, 0,
    TILEG_TROGS_HAND,
},

{
    SPELL_SUMMON_SPECTRAL_ORCS, "Summon Spectral Orcs",
    SPTYP_NECROMANCY | SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_TARGET,
    4,
    0,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_SUMMON_SPECTRAL_ORCS,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_HOLY_LIGHT, "Holy Light",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET,
    6,
    200,
    5, 5,
    6, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_SUMMON_HOLIES, "Summon Holies",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_MONS_ABJURE | SPFLAG_HOLY,
    5,
    0,
    -1, -1,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_HEAL_OTHER, "Heal Other",
    SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_HELPFUL
        | SPFLAG_NEEDS_TRACER | SPFLAG_UTILITY | SPFLAG_NOT_EVIL,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_HEAL_OTHER,
},

{
    SPELL_HOLY_FLAMES, "Holy Flames",
    SPTYP_NONE,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_BATTLE | SPFLAG_HOLY,
    7,
    200,
    LOS_RADIUS, LOS_RADIUS,
    6, 0,
    TILEG_HOLY_FLAMES,
},

{
    SPELL_HOLY_BREATH, "Holy Breath",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_AREA | SPFLAG_NEEDS_TRACER | SPFLAG_CLOUD
        | SPFLAG_HOLY,
    5,
    200,
    5, 5,
    5, 2,
    TILEG_HOLY_BREATH,
},

{
    SPELL_INJURY_MIRROR, "Injury Mirror",
    SPTYP_NONE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_HELPFUL | SPFLAG_SELFENCH | SPFLAG_EMERGENCY
        | SPFLAG_UTILITY,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_INJURY_MIRROR,
},

{
    SPELL_DRAIN_LIFE, "Drain Life",
    SPTYP_NECROMANCY,
    SPFLAG_AREA | SPFLAG_EMERGENCY,
    6,
    0,
    -1, -1,
    5, 0,
    TILEG_DRAIN_LIFE,
},

{
    SPELL_LEDAS_LIQUEFACTION, "Leda's Liquefaction",
    SPTYP_EARTH | SPTYP_HEXES,
    SPFLAG_AREA,
    4,
    200,
    -1, -1,
    3, 0,
    TILEG_LEDAS_LIQUEFACTION,
},

{
    SPELL_SUMMON_HYDRA, "Summon Hydra",
    SPTYP_SUMMONING,
    SPFLAG_MONS_ABJURE,
    7,
    200,
    -1, -1,
    6, 0,
    TILEG_SUMMON_HYDRA,
},

{
    SPELL_DARKNESS, "Darkness",
    SPTYP_HEXES,
    SPFLAG_NONE,
    6,
    200,
    -1, -1,
    3, 0,
    TILEG_DARKNESS,
},

{
    SPELL_MESMERISE, "Mesmerise",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_MR_CHECK,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_MESMERISE,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_MELEE, "Melee",
    SPTYP_NONE,
    SPFLAG_BATTLE,
    1,
    0,
    -1, -1,
    1, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_FIRE_SUMMON, "Fire Summon",
    SPTYP_SUMMONING | SPTYP_FIRE,
    SPFLAG_MONSTER | SPFLAG_MONS_ABJURE,
    8,
    0,
    -1, -1,
    6, 0,
    TILEG_FIRE_SUMMON,
},

{
    SPELL_PETRIFYING_CLOUD, "Petrifying Cloud",
    SPTYP_CONJURATION | SPTYP_EARTH | SPTYP_AIR,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    5,
    0,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_PETRIFYING_CLOUD,
},

{
    SPELL_SHROUD_OF_GOLUBRIA, "Shroud of Golubria",
    SPTYP_CHARMS | SPTYP_TRANSLOCATION,
    SPFLAG_SELFENCH,
    2,
    200,
    -1, -1,
    2, 0,
    TILEG_SHROUD_OF_GOLUBRIA,
},

{
    SPELL_INNER_FLAME, "Inner Flame",
    SPTYP_HEXES | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEUTRAL | SPFLAG_MR_CHECK,
    3,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_INNER_FLAME,
},

{
    SPELL_BEASTLY_APPENDAGE, "Beastly Appendage",
    SPTYP_TRANSMUTATION,
    SPFLAG_HELPFUL | SPFLAG_CHAOTIC,
    1,
    50,
    -1, -1,
    1, 0,
    TILEG_BEASTLY_APPENDAGE,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SILVER_BLAST, "Silver Blast",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET,
    5,
    200,
    5, 5,
    0, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_ENSNARE, "Ensnare",
    SPTYP_CONJURATION | SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    6,
    200,
    5, 5,
    6, 0,
    TILEG_ENSNARE,
},

{
    SPELL_THUNDERBOLT, "Thunderbolt",
    SPTYP_CONJURATION | SPTYP_AIR,
    SPFLAG_DIR_OR_TARGET,
    2, // 2-5
    200,
    5, 5,
    2, 0,
    TILEG_THUNDERBOLT,
},

{
    SPELL_BATTLESPHERE, "Iskenderun's Battlesphere",
    SPTYP_CONJURATION | SPTYP_CHARMS,
    SPFLAG_UTILITY,
    5,
    100,
    -1, -1,
    5, 0,
    TILEG_BATTLESPHERE,
},

{
    SPELL_SUMMON_MINOR_DEMON, "Summon Minor Demon",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_BATTLE | SPFLAG_SELFENCH,
    2,
    200,
    -1, -1,
    2, 0,
    TILEG_SUMMON_MINOR_DEMON,
},

{
    SPELL_MALMUTATE, "Malmutate",
    SPTYP_TRANSMUTATION | SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_CHAOTIC | SPFLAG_NEEDS_TRACER,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_MALMUTATE,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SUMMON_TWISTER, "Summon Twister",
    SPTYP_SUMMONING | SPTYP_AIR,
    SPFLAG_UNCLEAN | SPFLAG_MONSTER,
    9,
    0,
    -1, -1,
    0, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_DAZZLING_SPRAY, "Dazzling Spray",
    SPTYP_CONJURATION | SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF,
    3,
    50,
    5, 5,
    3, 0,
    TILEG_DAZZLING_SPRAY,
},

{
    SPELL_FORCE_LANCE, "Force Lance",
    SPTYP_CONJURATION | SPTYP_TRANSLOCATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    4,
    100,
    3, 3,
    5, 0,
    TILEG_FORCE_LANCE,
},

{
    SPELL_SENTINEL_MARK, "Sentinel's Mark",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_SENTINEL_MARK,
},

// Ironbrand Convoker version (delayed activation, recalls only humanoids)
{
    SPELL_WORD_OF_RECALL, "Word of Recall",
    SPTYP_SUMMONING | SPTYP_TRANSLOCATION,
    SPFLAG_UTILITY,
    3,
    0,
    -1, -1,
    3, 0,
    TILEG_WORD_OF_RECALL,
},

{
    SPELL_INJURY_BOND, "Injury Bond",
    SPTYP_CHARMS,
    SPFLAG_AREA | SPFLAG_HELPFUL,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_INJURY_BOND,
},

{
    SPELL_SPECTRAL_CLOUD, "Spectral Cloud",
    SPTYP_CONJURATION | SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_CLOUD,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_SPECTRAL_CLOUD,
},

{
    SPELL_GHOSTLY_FIREBALL, "Ghostly Fireball",
    SPTYP_CONJURATION | SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_UNHOLY | SPFLAG_NEEDS_TRACER,
    5,
    200,
    5, 5,
    5, 0,
    TILEG_GHOSTLY_FIREBALL,
},

{
    SPELL_CALL_LOST_SOUL, "Call Lost Soul",
    SPTYP_SUMMONING | SPTYP_NECROMANCY,
    SPFLAG_UNHOLY | SPFLAG_BATTLE | SPFLAG_MONSTER,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_CALL_LOST_SOUL,
},

{
    SPELL_DIMENSION_ANCHOR, "Dimension Anchor",
    SPTYP_TRANSLOCATION | SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_DIMENSION_ANCHOR,
},

{
    SPELL_BLINK_ALLIES_ENCIRCLE, "Blink Allies Encircling",
    SPTYP_TRANSLOCATION,
    SPFLAG_AREA,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_BLINK_ALLIES_ENCIRCLE,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SHAFT_SELF, "Shaft Self",
    SPTYP_EARTH,
    SPFLAG_ESCAPE,
    1,
    0,
    -1, -1,
    100, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_AWAKEN_VINES, "Awaken Vines",
    SPTYP_HEXES | SPTYP_SUMMONING,
    SPFLAG_AREA | SPFLAG_MONSTER,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_AWAKEN_VINES,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_CONTROL_WINDS, "Control Winds",
    SPTYP_CHARMS | SPTYP_AIR,
    SPFLAG_AREA | SPFLAG_MONSTER,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_THORN_VOLLEY, "Volley of Thorns",
    SPTYP_CONJURATION | SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    4,
    100,
    5, 5,
    4, 0,
    TILEG_THORN_VOLLEY,
},

{
    SPELL_WALL_OF_BRAMBLES, "Wall of Brambles",
    SPTYP_CONJURATION | SPTYP_EARTH,
    SPFLAG_AREA | SPFLAG_MONSTER,
    5,
    100,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_WALL_OF_BRAMBLES,
},

{
    SPELL_WATERSTRIKE, "Waterstrike",
    SPTYP_ICE,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_BATTLE | SPFLAG_MONSTER,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_WATERSTRIKE,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_HASTE_PLANTS, "Haste Plants",
    SPTYP_CHARMS,
    SPFLAG_AREA | SPFLAG_HELPFUL,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_WIND_BLAST, "Wind Blast",
    SPTYP_AIR,
    SPFLAG_AREA,
    3,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_WIND_BLAST,
},

{
    SPELL_STRIP_RESISTANCE, "Strip Resistance",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_STRIP_RESISTANCE,
},

{
    SPELL_INFUSION, "Infusion",
    SPTYP_CHARMS,
    SPFLAG_BATTLE | SPFLAG_UTILITY,
    1,
    25,
    -1, -1,
    1, 0,
    TILEG_INFUSION,
},

{
    SPELL_SONG_OF_SLAYING, "Song of Slaying",
    SPTYP_CHARMS,
    SPFLAG_BATTLE | SPFLAG_UTILITY,
    2,
    100,
    -1, -1,
    2, 8,
    TILEG_SONG_OF_SLAYING,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_SONG_OF_SHIELDING, "Song of Shielding",
    SPTYP_CHARMS,
    SPFLAG_BATTLE,
    4,
    100,
    -1, -1,
    0, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_SPECTRAL_WEAPON, "Spectral Weapon",
    SPTYP_HEXES | SPTYP_CHARMS,
    SPFLAG_BATTLE | SPFLAG_SELFENCH | SPFLAG_UTILITY | SPFLAG_NO_GHOST,
    3,
    100,
    -1, -1,
    3, 0,
    TILEG_SPECTRAL_WEAPON,
},

{
    SPELL_SUMMON_VERMIN, "Summon Vermin",
    SPTYP_SUMMONING,
    SPFLAG_MONSTER | SPFLAG_UNHOLY | SPFLAG_SELFENCH | SPFLAG_MONS_ABJURE,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_SUMMON_VERMIN,
},

{
    SPELL_MALIGN_OFFERING, "Malign Offering",
    SPTYP_NECROMANCY,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 10,
    TILEG_MALIGN_OFFERING,
},

{
    SPELL_SEARING_RAY, "Searing Ray",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    2,
    50,
    4, 4,
    2, 0,
    TILEG_SEARING_RAY,
},

{
    SPELL_DISCORD, "Discord",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_HASTY,
    8,
    200,
    -1, -1,
    6, 0,
    TILEG_DISCORD,
},

{
    SPELL_INVISIBILITY_OTHER, "Invisibility Other",
    SPTYP_CHARMS | SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_HELPFUL,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_INVISIBILITY_OTHER,
},

{
    SPELL_VIRULENCE, "Virulence",
    SPTYP_POISON | SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    2, 0,
    TILEG_VIRULENCE,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_IGNITE_POISON_SINGLE, "Localized Ignite Poison",
    SPTYP_FIRE | SPTYP_TRANSMUTATION,
    SPFLAG_MONSTER | SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_ORB_OF_ELECTRICITY, "Orb of Electricity",
    SPTYP_CONJURATION | SPTYP_AIR,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    7,
    200,
    LOS_RADIUS, LOS_RADIUS,
    7, 0,
    TILEG_ORB_OF_ELECTRICITY,
},

{
    SPELL_EXPLOSIVE_BOLT, "Explosive Bolt",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    6, 0,
    TILEG_EXPLOSIVE_BOLT,
},

{
    SPELL_FLASH_FREEZE, "Flash Freeze",
    SPTYP_CONJURATION | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    7,
    200,
    LOS_RADIUS, LOS_RADIUS,
    7, 0,
    TILEG_FLASH_FREEZE,
},

{
    SPELL_LEGENDARY_DESTRUCTION, "Legendary Destruction",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    8,
    200,
    5, 5,
    8, 0,
    TILEG_LEGENDARY_DESTRUCTION,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_EPHEMERAL_INFUSION, "Ephemeral Infusion",
    SPTYP_CHARMS | SPTYP_NECROMANCY,
    SPFLAG_MONSTER | SPFLAG_EMERGENCY,
    6,
    200,
    -1, -1,
    5, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_FORCEFUL_INVITATION, "Forceful Invitation",
    SPTYP_SUMMONING,
    SPFLAG_BATTLE | SPFLAG_MONSTER,
    4,
    200,
    -1, -1,
    3, 0,
    TILEG_FORCEFUL_INVITATION,
},

{
    SPELL_PLANEREND, "Plane Rend",
    SPTYP_SUMMONING,
    SPFLAG_BATTLE | SPFLAG_MONSTER,
    8,
    200,
    -1, -1,
    6, 0,
    TILEG_PLANEREND,
},

{
    SPELL_CHAIN_OF_CHAOS, "Chain of Chaos",
    SPTYP_CONJURATION,
    SPFLAG_AREA | SPFLAG_MONSTER | SPFLAG_CHAOTIC,
    8,
    200,
    -1, -1,
    8, 0,
    TILEG_CHAIN_OF_CHAOS,
},

{
    SPELL_CALL_OF_CHAOS, "Call of Chaos",
    SPTYP_CHARMS,
    SPFLAG_AREA | SPFLAG_CHAOTIC | SPFLAG_MONSTER,
    7,
    200,
    LOS_RADIUS, LOS_RADIUS,
    6, 0,
    TILEG_CALL_OF_CHAOS,
},

{
    SPELL_BLACK_MARK, "Black Mark",
    SPTYP_CHARMS | SPTYP_NECROMANCY,
    SPFLAG_MONSTER,
    7,
    200,
    -1, -1,
    6, 0,
    TILEG_BLACK_MARK,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_GRAND_AVATAR, "Grand Avatar",
    SPTYP_CONJURATION | SPTYP_CHARMS | SPTYP_HEXES,
    SPFLAG_MONSTER | SPFLAG_UTILITY,
    4,
    100,
    -1, -1,
    4, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_SAP_MAGIC, "Sap Magic",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_SAP_MAGIC,
},

{
    SPELL_CORRUPT_BODY, "Corrupt Body",
    SPTYP_TRANSMUTATION | SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF | SPFLAG_CHAOTIC | SPFLAG_NEEDS_TRACER,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_CORRUPT_BODY,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_REARRANGE_PIECES, "Rearrange the Pieces",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_MONSTER | SPFLAG_CHAOTIC,
    8,
    200,
    -1, -1,
    0, 0,
    TILEG_REARRANGE_PIECES,
},
#endif

{
    SPELL_MAJOR_DESTRUCTION, "Major Destruction",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_CHAOTIC | SPFLAG_NEEDS_TRACER,
    7,
    200,
    6, 6,
    7, 0,
    TILEG_MAJOR_DESTRUCTION,
},

{
    SPELL_BLINK_ALLIES_AWAY, "Blink Allies Away",
    SPTYP_TRANSLOCATION,
    SPFLAG_AREA,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_BLINK_ALLIES_AWAY,
},

{
    SPELL_SUMMON_FOREST, "Summon Forest",
    SPTYP_SUMMONING | SPTYP_TRANSLOCATION,
    SPFLAG_NONE,
    5,
    200,
    -1, -1,
    4, 10,
    TILEG_SUMMON_FOREST,
},

{
    SPELL_SUMMON_LIGHTNING_SPIRE, "Summon Lightning Spire",
    SPTYP_SUMMONING | SPTYP_AIR,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEUTRAL,
    4,
    100,
    2, 2,
    2, 0,
    TILEG_SUMMON_LIGHTNING_SPIRE,
},

{
    SPELL_SUMMON_GUARDIAN_GOLEM, "Summon Guardian Golem",
    SPTYP_SUMMONING | SPTYP_HEXES,
    SPFLAG_NONE,
    3,
    100,
    -1, -1,
    3, 0,
    TILEG_SUMMON_GUARDIAN_GOLEM,
},

{
    SPELL_SHADOW_SHARD, "Shadow Shard",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_SHADOW_SHARD,
},

{
    SPELL_SHADOW_BOLT, "Shadow Bolt",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_SHADOW_BOLT,
},

{
    SPELL_CRYSTAL_BOLT, "Crystal Bolt",
    SPTYP_CONJURATION | SPTYP_FIRE | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    6,
    200,
    6, 6,
    6, 0,
    TILEG_CRYSTAL_BOLT,
},

{
    SPELL_RANDOM_BOLT, "Random Bolt",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    4,
    200,
    5, 5,
    4, 0,
    TILEG_RANDOM_BOLT,
},

{
    SPELL_GLACIATE, "Glaciate",
    SPTYP_CONJURATION | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_AREA | SPFLAG_NOT_SELF,
    9,
    200,
    6, 6,
    9, 25,
    TILEG_ICE_STORM,
},

{
    SPELL_CLOUD_CONE, "Cloud Cone",
    SPTYP_CONJURATION | SPTYP_AIR,
    SPFLAG_TARGET | SPFLAG_NOT_SELF,
    6,
    100,
    3, LOS_RADIUS,
    6, 0,
    TILEG_CLOUD_CONE,
},

{
    SPELL_WEAVE_SHADOWS, "Weave Shadows",
    SPTYP_SUMMONING,
    SPFLAG_NONE,
    5,
    0,
    -1, -1,
    4, 0,
    TILEG_WEAVE_SHADOWS,
},

{
    SPELL_DRAGON_CALL, "Dragon's Call",
    SPTYP_SUMMONING,
    SPFLAG_NONE,
    9,
    200,
    -1, -1,
    7, 15,
    TILEG_SUMMON_DRAGON,
},

{
    SPELL_SPELLFORGED_SERVITOR, "Spellforged Servitor",
    SPTYP_CONJURATION | SPTYP_SUMMONING,
    SPFLAG_NONE,
    7,
    200,
    -1, -1,
    6, 0,
    TILEG_SPELLFORGED_SERVITOR,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_FORCEFUL_DISMISSAL, "Forceful Dismissal",
    SPTYP_SUMMONING,
    SPFLAG_AREA,
    6,
    200,
    -1, -1,
    5, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_SUMMON_MANA_VIPER, "Summon Mana Viper",
    SPTYP_SUMMONING | SPTYP_HEXES,
    SPFLAG_MONS_ABJURE,
    5,
    100,
    -1, -1,
    4, 0,
    TILEG_SUMMON_MANA_VIPER,
},

{
    SPELL_PHANTOM_MIRROR, "Phantom Mirror",
    SPTYP_CHARMS | SPTYP_HEXES,
    SPFLAG_HELPFUL | SPFLAG_SELFENCH,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_PHANTOM_MIRROR,
},

{
    SPELL_DRAIN_MAGIC, "Drain Magic",
    SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER | SPFLAG_MR_CHECK,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_ERROR,
},

{
    SPELL_CORROSIVE_BOLT, "Corrosive Bolt",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    6,
    200,
    5, 5,
    6, 0,
    TILEG_CORROSIVE_BOLT,
},

{
    SPELL_SERPENT_OF_HELL_GEH_BREATH, "gehenna serpent of hell breath",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_SERPENT_OF_HELL_COC_BREATH, "cocytus serpent of hell breath",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_SERPENT_OF_HELL_DIS_BREATH, "dis serpent of hell breath",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_SERPENT_OF_HELL_TAR_BREATH, "tartarus serpent of hell breath",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_SUMMON_EMPEROR_SCORPIONS, "Summon Emperor Scorpions",
    SPTYP_SUMMONING | SPTYP_POISON,
    SPFLAG_MONS_ABJURE,
    7,
    100,
    -1, -1,
    6, 0,
    TILEG_ERROR,
},

{
    SPELL_IRRADIATE, "Irradiate",
    SPTYP_CONJURATION | SPTYP_TRANSMUTATION,
    SPFLAG_AREA | SPFLAG_CHAOTIC,
    5,
    200,
    1, 1,
    4, 0,
    TILEG_IRRADIATE,
},

{
    SPELL_SPIT_LAVA, "Spit Lava",
    SPTYP_CONJURATION | SPTYP_FIRE | SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    5, 5,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_ELECTRICAL_BOLT, "Electrical Bolt",
    SPTYP_CONJURATION | SPTYP_AIR,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_FLAMING_CLOUD, "Flaming Cloud",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_TARGET | SPFLAG_AREA | SPFLAG_MONSTER | SPFLAG_NEEDS_TRACER
        | SPFLAG_CLOUD,
    5,
    0,
    5, 5,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_THROW_BARBS, "Throw Barbs",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER | SPFLAG_NOISY | SPFLAG_NEEDS_TRACER,
    5,
    0,
    5, 5,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_BATTLECRY, "Battlecry",
    SPTYP_CHARMS,
    SPFLAG_AREA | SPFLAG_MONSTER | SPFLAG_SELFENCH,
    6,
    0,
    -1, -1,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_WARNING_CRY, "Warning Cry",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_MONSTER | SPFLAG_SELFENCH | SPFLAG_NOISY,
    6,
    0,
    -1, -1,
    25, 0,
    TILEG_ERROR,
},

{
    SPELL_SEAL_DOORS, "Seal Doors",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_MONSTER | SPFLAG_SELFENCH,
    6,
    0,
    -1, -1,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_FLAY, "Flay",
    SPTYP_NECROMANCY,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_MONSTER,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    6, 0,
    TILEG_ERROR,
},

{
    SPELL_BERSERK_OTHER, "Berserk Other",
    SPTYP_CHARMS,
    SPFLAG_HASTY | SPFLAG_MONSTER | SPFLAG_NOT_SELF | SPFLAG_HELPFUL,
    3,
    0,
    3, 3,
    3, 0,
    TILEG_ERROR,
},

{
    SPELL_THROW, "Throw",
    SPTYP_TRANSLOCATION,
    SPFLAG_MONSTER | SPFLAG_NOT_SELF,
    5,
    200,
    1, 1,
    0, 5,
    TILEG_ERROR,
},

{
    SPELL_CORRUPTING_PULSE, "Corrupting Pulse",
    SPTYP_HEXES | SPTYP_TRANSMUTATION,
    SPFLAG_AREA | SPFLAG_MONSTER,
    6,
    200,
    LOS_RADIUS, LOS_RADIUS,
    0, 0,
    TILEG_ERROR,
},

{
    SPELL_SIREN_SONG, "Siren Song",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_MR_CHECK,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_ERROR,
},

{
    SPELL_AVATAR_SONG, "Avatar Song",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_MR_CHECK,
    7,
    200,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_ERROR,
},

{
    SPELL_PARALYSIS_GAZE, "Paralysis Gaze",
    SPTYP_HEXES,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_MONSTER,
    4,
    200,
    LOS_RADIUS, LOS_RADIUS,
    0, 0,
    TILEG_ERROR,
},

{
    SPELL_CONFUSION_GAZE, "Confusion Gaze",
    SPTYP_HEXES,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_MONSTER | SPFLAG_MR_CHECK,
    3,
    200,
    LOS_RADIUS, LOS_RADIUS,
    0, 0,
    TILEG_ERROR,
},

{
    SPELL_DRAINING_GAZE, "Draining Gaze",
    SPTYP_HEXES,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_MONSTER,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    0, 0,
    TILEG_ERROR,
},

{
    SPELL_DEATH_RATTLE, "Death Rattle",
    SPTYP_CONJURATION | SPTYP_NECROMANCY | SPTYP_AIR,
    SPFLAG_DIR_OR_TARGET | SPFLAG_MONSTER,
    7,
    0,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_DEATH_RATTLE,
},

{
    SPELL_SUMMON_SCARABS, "Summon Scarabs",
    SPTYP_SUMMONING | SPTYP_NECROMANCY,
    SPFLAG_MONS_ABJURE,
    7,
    100,
    -1, -1,
    6, 0,
    TILEG_ERROR,
},

{
    SPELL_SCATTERSHOT, "Scattershot",
    SPTYP_CONJURATION | SPTYP_EARTH,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NOT_SELF,
    6,
    200,
    5, 5,
    6, 0,
    TILEG_SCATTERSHOT,
},

{
    SPELL_THROW_ALLY, "Throw Ally",
    SPTYP_TRANSLOCATION,
    SPFLAG_MONSTER | SPFLAG_NOT_SELF,
    2,
    50,
    LOS_RADIUS, LOS_RADIUS,
    3, 5,
    TILEG_ERROR,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_HUNTING_CRY, "Hunting Cry",
    SPTYP_HEXES,
    SPFLAG_AREA | SPFLAG_MONSTER | SPFLAG_SELFENCH | SPFLAG_NOISY,
    6,
    0,
    -1, -1,
    25, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_CLEANSING_FLAME, "Cleansing Flame",
    SPTYP_NONE,
    SPFLAG_AREA | SPFLAG_MONSTER | SPFLAG_HOLY,
    8,
    200,
    -1, -1,
    20, 0,
    TILEG_ERROR,
},

{
    SPELL_CIGOTUVIS_EMBRACE, "Cigotuvi's Embrace",
    SPTYP_NECROMANCY,
    SPFLAG_CHAOTIC | SPFLAG_CORPSE_VIOLATING | SPFLAG_UTILITY | SPFLAG_NO_GHOST,
    5,
    200,
    -1, -1,
    4, 0,
    TILEG_CIGOTUVIS_EMBRACE,
},

{
    SPELL_GRAVITAS, "Gell's Gravitas",
    SPTYP_TRANSLOCATION | SPTYP_HEXES,
    SPFLAG_TARGET | SPFLAG_NOT_SELF | SPFLAG_NEEDS_TRACER,
    3,
    200,
    LOS_RADIUS, LOS_RADIUS,
    3, 0,
    TILEG_GRAVITAS,
},

#if TAG_MAJOR_VERSION == 34
{
    SPELL_CHANT_FIRE_STORM, "Chant Fire Storm",
    SPTYP_CONJURATION | SPTYP_FIRE,
    SPFLAG_UTILITY,
    6,
    200,
    -1, -1,
    5, 0,
    TILEG_ERROR,
},
#endif

{
    SPELL_VIOLENT_UNRAVELLING, "Yara's Violent Unravelling",
    SPTYP_HEXES | SPTYP_TRANSMUTATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_NO_GHOST | SPFLAG_CHAOTIC,
    5,
    200,
    LOS_RADIUS, LOS_RADIUS,
    5, 0,
    TILEG_VIOLENT_UNRAVELLING,
},

{
    SPELL_ENTROPIC_WEAVE, "Entropic Weave",
    SPTYP_HEXES,
    SPFLAG_UTILITY,
    5,
    200,
    -1, -1,
    3, 0,
    TILEG_ERROR,
},

{
    SPELL_SUMMON_EXECUTIONERS, "Summon Executioners",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_BATTLE | SPFLAG_SELFENCH | SPFLAG_MONS_ABJURE,
    9,
    200,
    -1, -1,
    6, 0,
    TILEG_ERROR,
},

{
    SPELL_DOOM_HOWL, "Doom Howl",
    SPTYP_TRANSLOCATION | SPTYP_HEXES,
    SPFLAG_DIR_OR_TARGET,
    3,
    200,
    LOS_RADIUS, LOS_RADIUS,
    15, 0,
    TILEG_ERROR,
},

{
    SPELL_AWAKEN_EARTH, "Awaken Earth",
    SPTYP_SUMMONING | SPTYP_EARTH,
    SPFLAG_MONSTER | SPFLAG_TARGET,
    7,
    0,
    LOS_RADIUS, LOS_RADIUS,
    4, 0,
    TILEG_ERROR,
},

{
    SPELL_AURA_OF_BRILLIANCE, "Aura of Brilliance",
    SPTYP_CHARMS,
    SPFLAG_AREA | SPFLAG_MONSTER,
    5,
    200,
    -1, -1,
    5, 0,
    TILEG_ERROR,
},

{
    SPELL_ICEBLAST, "Iceblast",
    SPTYP_CONJURATION | SPTYP_ICE,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER,
    5,
    200,
    5, 5,
    5, 0,
    TILEG_ICEBLAST,
},

{
    SPELL_SLUG_DART, "Slug Dart",
    SPTYP_CONJURATION,
    SPFLAG_DIR_OR_TARGET | SPFLAG_NEEDS_TRACER | SPFLAG_MONSTER,
    1,
    25,
    LOS_RADIUS, LOS_RADIUS,
    1, 0,
    TILEG_ERROR,
},

{
    SPELL_SPRINT, "Sprint",
    SPTYP_CHARMS,
    SPFLAG_HASTY | SPFLAG_SELFENCH | SPFLAG_UTILITY,
    2,
    100,
    -1, -1,
    2, 0,
    TILEG_ERROR,
},

{
    SPELL_GREATER_SERVANT_MAKHLEB, "Greater Servant of Makhleb",
    SPTYP_SUMMONING,
    SPFLAG_UNHOLY | SPFLAG_BATTLE | SPFLAG_SELFENCH | SPFLAG_MONS_ABJURE,
    7,
    200,
    -1, -1,
    6, 0,
    TILEG_ERROR,
},

{
    SPELL_BIND_SOULS, "Bind Souls",
    SPTYP_NECROMANCY | SPTYP_ICE,
    SPFLAG_AREA | SPFLAG_MONSTER,
    6,
    200,
    -1, -1,
    5, 0,
    TILEG_DEATH_CHANNEL,
},

{
    SPELL_INFESTATION, "Infestation",
    SPTYP_NECROMANCY,
    SPFLAG_TARGET | SPFLAG_UNCLEAN,
    8,
    200,
    LOS_RADIUS, LOS_RADIUS,
    8, 4,
    TILEG_INFESTATION,
},

{
    SPELL_NO_SPELL, "nonexistent spell",
    SPTYP_NONE,
    SPFLAG_TESTING,
    1,
    0,
    -1, -1,
    1, 0,
    TILEG_ERROR,
},

};
