#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include<fstream>

using namespace std;


int main()
{

				// So many variables, so many...
				string Name;
				int Age;
				string Race;
				int RaceInt;
				string RacePerks;
				int AbilityChoiceHalfElf = 0;
				int Strength = 0;
				int Dexterity = 0;
				int Constitution = 0;
				int Intelligence = 0;
				int Wisdom = 0;
				int Charisma = 0;
				int AlignmentSelection;
				string Alignment;
				int ClassSelection = 0;
				string Class;
				string HitDie;
				string PrimeAbility;
				string Saves;
				int AbilityControl = 0;
				int StrengthRoll = 0;
				int DexterityRoll = 0;
				int ConstitutionRoll = 0;
				int IntelligenceRoll = 0;
				int WisdomRoll = 0;
				int CharismaRoll = 0;
				int WealthRoll = 0;
				int AC = 0;
				int Weight = 0;
				string StartingEquiptment;
				int Expiriance = 0;
				int Level = 1;
				int MagicSchoolSelection = 0;
				string Spells;
				int Counter = 0;


				// Boring shit

				cout << "What is your character's name?" << endl;
				getline(cin, Name);
				cout << "Well hello " << Name << ", how old might you be?" << endl;
				cin >> Age;


				// end of Boring Shit

				do // This guy is Racist...get it?
				{
								cout << "What race are you? (Please select the number of your race)" << endl << "1. Dragonborn" << endl << "2. Dwarf" << endl << "3. Elf" << endl << "4. Gnome" << endl << "5. Half-Elf" << endl << "6. Halfling" << endl << "7. Half-Orc" << endl << "8. Human" << endl << "9. Tiefling" << endl;
								cin >> RaceInt;
								switch (RaceInt)
								{
								case 1: Race = "Dragonborn", RacePerks = "Draconic Ancestry, Breath Weapon, Damage resistance", Strength = 2, Charisma = 1;
												break;
								case 2: Race = "Dwarf", RacePerks = "Darkvision, Dwarven Resiliance, Dwarven Combat Training, Stonecutting", Constitution = 2;
												break;
								case 3: Race = "Elf", RacePerks = "Darkvision, Keen Senses, Fey Ancestry, Trance", Dexterity = 2;
												break;
								case 4: Race = "Gnome", RacePerks = "Darkvision, Gnome Cunning", Intelligence = 2;
												break;
								case 5: Race = "Half-Elf", RacePerks = "Fey Ancestory, Skill Versatility", Charisma = 2;
												do
												{
																cout << "please select the first ability you'd like to boost (+1)" << endl << "1. Strength" << endl << "2. Dexterity" << endl << "3. Constitution" << endl << "4. Intelligence" << endl << "5. Wisdom" << endl << "6. Charisma" << endl;
																cin >> AbilityChoiceHalfElf;
																switch (AbilityChoiceHalfElf)
																{
																case 1: Strength = Strength + 1;
																				break;
																case 2: Dexterity = Dexterity + 1;
																				break;
																case 3: Constitution = Constitution + 1;
																				break;
																case 4: Intelligence = Intelligence + 1;
																				break;
																case 5: Wisdom = Wisdom + 1;
																				break;
																case 6: Charisma = Charisma + 1;
																				break;
																}
												} while (AbilityChoiceHalfElf < 1 || AbilityChoiceHalfElf > 6);
												do
												{
																cout << "please select the second ability you'd like to boost (+1)" << endl << "1. Strength" << endl << "2. Dexterity" << endl << "3. Constitution" << endl << "4. Intelligence" << endl << "5. Wisdom" << endl << "6. Charisma" << endl;
																cin >> AbilityChoiceHalfElf;
																switch (AbilityChoiceHalfElf)
																{
																case 1: Strength = Strength + 1;
																				break;
																case 2: Dexterity = Dexterity + 1;
																				break;
																case 3: Constitution = Constitution + 1;
																				break;
																case 4: Intelligence = Intelligence + 1;
																				break;
																case 5: Wisdom = Wisdom + 1;
																				break;
																case 6: Charisma = Charisma + 1;
																				break;
																}
												} while (AbilityChoiceHalfElf < 1 || AbilityChoiceHalfElf > 6);
												break;
								case 6: Race = "Halfling", RacePerks = "Brave, Halfling Nimbleness", Dexterity = 2;
												break;
								case 7: Race = "Half-Orc", RacePerks = "Darkvision, Menacing, Relentless, Endurance, Savage Attacks", Strength = 2, Constitution = 1;
												break;
								case 8: Race = "Human", RacePerks = "Extra Language", Strength = 1, Dexterity = 1, Constitution = 1, Wisdom = 1, Intelligence = 1, Charisma = 1;
												break;
								case 9: Race = "Teifling", RacePerks = "Health Resistance, Infernal Legacy", Charisma = 2, Intelligence = 1;
												break;
								}
				} while (RaceInt > 9 || RaceInt < 1);


				do // This determines whether or not your character is a dick
				{
								cout << "How would you describe yourself?(Please enter the number of your selection)" << endl << "1. Lawful Good" << endl << "2. Neutral Good" << endl << "3. Chaotic Good" << endl << "4. Lawful Neutral" << endl << "5. True Neutral" << endl << "6. Chaotic Neutral" << endl << "7. Lawful Evil" << endl << "8. Neutral Evil" << endl << "9. Chaotic Evil" << endl;
								cin >> AlignmentSelection;
								switch (AlignmentSelection)
								{
								case 1: Alignment = "Lawful Good";
												break;
								case 2: Alignment = "Neutral Good";
												break;
								case 3: Alignment = "Chaotic Good";
												break;
								case 4: Alignment = "Lawful Neutral";
												break;
								case 5: Alignment = "True Neutral";
												break;
								case 6: Alignment = "Chaotic Nuetral";
												break;
								case 7: Alignment = "Lawful Evil";
												break;
								case 8: Alignment = "Nuetral Evil";
												break;
								case 9: Alignment = "Chaotic Evil";
												break;
								}
				} while (AlignmentSelection > 9 || AlignmentSelection < 1);


				do // This do-hickey sets all the data required for classes via switch functions and loops
				{
								cout << "And what is your class?" << endl << "1. Barbarian" << endl << "2. Bard" << endl << "3. Cleric" << endl << "4. Druid" << endl << "5. Fighter" << endl << "6. Monk" << endl << "7. Paladin" << endl << "8. Ranger" << endl << "9. Rogue" << endl << "10. Sorcerer" << endl << "11. Warlock" << endl << "12. Wizard" << endl;
								cin >> ClassSelection;

								switch (ClassSelection)
								{
								case 1: Class = "Barbarian", HitDie = "d12", PrimeAbility = "Strength", Saves = "Strength and Constitution", WealthRoll = 10 * (rand() % 8 + 1), StartingEquiptment = "Studded leather armor, greataxe, shortbow,\nand a quiver with 20 arrows";
												break;
								case 2: Class = "Bard", HitDie = "d8", PrimeAbility = "Charisma", Saves = "Dexterity and Charisma", WealthRoll = 10 * (rand() % 20 + 1), StartingEquiptment = "Studded leather armor, longsword, light crossbow,\ncase with 10 crossbow bolts, lute (common), and a spell component pouch";
												break;
								case 3: Class = "Cleric", HitDie = "d8", PrimeAbility = "Wisdom", Saves = "Wisdom and Charisma", WealthRoll = 10 * (rand() % 20 + 1), "Scale mail armor, heavy wooden shield, heavy mace, light crossbow,\ncase with 10 crossbow bolts, and a wooden holy symbol";
												break;
								case 4: Class = "Druid", HitDie = "d8", PrimeAbility = "Wisdom", Saves = "Intelligence and Wisdom", WealthRoll = 10 * (rand() % 8 + 1), StartingEquiptment = "Hide armor, heavy wooden shield, scimitar, club, sling,\npouch with 10 sling bullets, holly and mistletoe";
												break;
								case 5: Class = "Fighter", HitDie = "d10", PrimeAbility = "Strength or Dexterity", Saves = "Strength and Constitution", WealthRoll = 10 * (rand() % 20 + 1), StartingEquiptment = "Scale mail armor, greatsword, shortbow,\nand a quiver with twenty arrows";
												break;
								case 6: Class = "Monk", HitDie = "d8", PrimeAbility = "Dexterity and Wisdom", Saves = "Strength and Dexterity", WealthRoll = (rand() % 20 + 1), "Quarterstaff, sling, and a pouch with 10 sling stones";
												break;
								case 7: Class = "Paladin", HitDie = "d10", PrimeAbility = "Strength and Charisma", Saves = "Wisdom and Charisma", WealthRoll = 10 * (rand() % 20 + 1), StartingEquiptment = "Scale mail armor, heavy wooden shield, longsword, shortbow, hooded lantern,\nthree pints of oil, quiver with 20 arrows, and a wooden holy symbol";
												break;
								case 8: Class = "Ranger", HitDie = "d10", PrimeAbility = "Dexterity and Wisdom", Saves = "Strength and Dexterity", WealthRoll = 10 * (rand() % 20 + 1), StartingEquiptment = "Studded leather armor, longsword,\nshort sword, longbow, and a quiver with 20 arrows";
												break;
								case 9: Class = "Rogue", HitDie = "d8", PrimeAbility = "Dexterity", Saves = "Dexterity and intelligence", WealthRoll = 10 * (rand() % 16 + 1), StartingEquiptment = "Leather armor, short sword, light crossbow, dagger, thieves’ tools,\nhooded lantern and three pints of oil, and a case with 10 crossbow bolts";
												break;
								case 10: Class = "Sorcerer", HitDie = "d6", PrimeAbility = "Charisma", Saves = "Constitution and Charisma", WealthRoll = 10 * (rand() % 12 + 1), StartingEquiptment = "Shortspear, light crossbow, hooded lantern, 5 pints of oil,\nspell component pouch, and a case with 10 crossbow bolts";
												break;
								case 11: Class = "Warlock", HitDie = "d8", PrimeAbility = "Charisma", Saves = "Wisdom and Charisma", WealthRoll = 10 * (rand() % 16 + 1), StartingEquiptment = "A light crossbow and 20 bolts, a spell component pouch,\na scholar's pack, Leather Armor, a light hammer, and two daggers";
												break;
								case 12: Class = "Wizard", HitDie = "d6", PrimeAbility = "Intelligence", Saves = "Intelligence and Wisdom", WealthRoll = 10 * (rand() % 16 + 1), StartingEquiptment = "Quarterstaff, light crossbow, ten candles, map case, three pages of parchment,\nink, inkpen, spell component pouch, spellbook, and a case with 10 crossbow bolts";
												break;
								}
				} while (ClassSelection > 12 || ClassSelection < 1);


				do // See this guy? Fuck this guy!
				{
								cout << "Would you like to (1) input your own ability scores or (2) do you want me to randomly generate them?" << endl;
								cin >> AbilityControl;
				} while (AbilityControl < 1 || AbilityControl > 2);


				if (AbilityControl == 1)
				{
								do
								{
												cout << "What is your Strength? (8-18)" << endl;
												cin >> StrengthRoll;
												Strength = Strength + StrengthRoll;
								} while (StrengthRoll < 8 || StrengthRoll > 18);

								do
								{
												cout << "What is your Dexterity? (8-18)" << endl;
												cin >> DexterityRoll;
												Dexterity = Dexterity + DexterityRoll;
								} while (DexterityRoll < 8 || DexterityRoll > 18);

								do
								{
												cout << "What is your Constitution? (8-18)" << endl;
												cin >> ConstitutionRoll;
												Constitution = Constitution + ConstitutionRoll;
								} while (ConstitutionRoll < 8 || ConstitutionRoll > 18);

								do
								{
												cout << "What is your Intelligence? (8-18)" << endl;
												cin >> IntelligenceRoll;
												Intelligence = Intelligence + IntelligenceRoll;
								} while (IntelligenceRoll < 8 || IntelligenceRoll > 18);

								do
								{
												cout << "What is your Wisdom? (8-18)" << endl;
												cin >> WisdomRoll;
												Wisdom = Wisdom + WisdomRoll;
								} while (WisdomRoll < 8 || WisdomRoll > 18);

								do
								{
												cout << "What is your Charisma? (8-18)" << endl;
												cin >> CharismaRoll;
												Charisma = Charisma + CharismaRoll;
								} while (CharismaRoll < 8 || CharismaRoll > 18);
				}
				else
				{

								srand(time(0));

								do
								{
												StrengthRoll = rand() % 12 + 6;
								} while (StrengthRoll < 12);

								do
								{
												DexterityRoll = rand() % 12 + 6;
								} while (DexterityRoll < 12);

								do
								{
												ConstitutionRoll = rand() % 12 + 6;
								} while (ConstitutionRoll < 12);

								do
								{
												IntelligenceRoll = rand() % 12 + 6;
								} while (IntelligenceRoll < 12);

								do
								{
												WisdomRoll = rand() % 12 + 6;
								} while (WisdomRoll < 12);

								do
								{
												CharismaRoll = rand() % 12 + 6;
								} while (CharismaRoll < 12);


								Strength = Strength + StrengthRoll;
								Dexterity = Dexterity + DexterityRoll;
								Constitution = Constitution + ConstitutionRoll;
								Intelligence = Intelligence + IntelligenceRoll;
								Wisdom = Wisdom + WisdomRoll;
								Charisma = Charisma + CharismaRoll;


				}

				// A Magical time
				if (ClassSelection == 10 || ClassSelection == 11 || ClassSelection == 12) // Any other magic things you wanna add, be my guest, just got it started
				{
								while (MagicSchoolSelection > 6 || MagicSchoolSelection < 1)
								{
												cout << "Time to choose your School(s) of Magic! (eneter menu number)\n1. Elemental Magic\n2. Summoner Magic\n3. Enchanting Magic\n4. Chakra Magic\n5. Illusion Magic\n";
												cin >> MagicSchoolSelection;
												switch (MagicSchoolSelection)
												{
												case 1: Spells = "Basic Fire\nBasic Lightning";
																while (MagicSchoolSelection > 6 || MagicSchoolSelection < 1)
																{
																				cout << "Time to choose your School(s) of Magic! (eneter menu number)\n1. Elemental Magic\n2. Summoner Magic\n3. Enchanting Magic\n4. Chakra Magic\n5. Illusion Magic\n";
																				cin >> MagicSchoolSelection;
																				switch (MagicSchoolSelection)
																				{
																				case 1: Spells = "Advanced Fire\nBasic Frost";
																								break;
																				case 2: Spells = "Familiar Summoning\nWeak Resurrection";
																								break;
																				case 3: Spells = "Basic Weapon Enchantment\nBasic Despelling";
																								break;
																				case 4: Spells = "Basic Strength buff\nBasic Charisma buff";
																								break;
																				case 5: Spells = "Calming Spells\nSilence Spells";
																								break;
																				default: cout << "Invalid entry, please try again." << endl;
																								break;
																				}
																				break;
																}
												case 2: Spells = "Familiar Summoning\nWeak Resurrection";
																while (MagicSchoolSelection > 6 || MagicSchoolSelection < 1)
																{
																				cout << "Time to choose your School(s) of Magic! (eneter menu number)\n1. Elemental Magic\n2. Summoner Magic\n3. Enchanting Magic\n4. Chakra Magic\n5. Illusion Magic\n";
																				cin >> MagicSchoolSelection;
																				switch (MagicSchoolSelection)
																				{
																				case 1: Spells = "Advanced Fire\nBasic Frost";
																								break;
																				case 2: Spells = "Creature Summoning\nAdvanced Resurrection";
																								break;
																				case 3: Spells = "Basic Weapon Enchantment\nBasic Despelling";
																								break;
																				case 4: Spells = "Basic Strength buff\nBasic Charisma buff";
																								break;
																				case 5: Spells = "Calming Spells\nSilence Spells";
																								break;
																				default: cout << "Invalid entry, please try again." << endl;
																								break;
																				}
																				break;
																}
																break;
												case 3: Spells = "Basic Weapon Enchantment\nBasic Despelling";
																while (MagicSchoolSelection > 6 || MagicSchoolSelection < 1)
																{
																				cout << "Time to choose your School(s) of Magic! (eneter menu number)\n1. Elemental Magic\n2. Summoner Magic\n3. Enchanting Magic\n4. Chakra Magic\n5. Illusion Magic\n";
																				cin >> MagicSchoolSelection;
																				switch (MagicSchoolSelection)
																				{
																				case 1: Spells = "Advanced Fire\nBasic Frost";
																								break;
																				case 2: Spells = "Familiar Summoning\nWeak Resurrection";
																								break;
																				case 3: Spells = "Advanced Weapon Enchantment\nAdvanced Despelling";
																								break;
																				case 4: Spells = "Basic Strength buff\nBasic Charisma buff";
																								break;
																				case 5: Spells = "Calming Spells\nSilence Spells";
																								break;
																				default: cout << "Invalid entry, please try again." << endl;
																								break;
																				}
																				break;
																}
																break;
												case 4: Spells = "Basic Strength buff\nBasic Charisma buff";
																while (MagicSchoolSelection > 6 || MagicSchoolSelection < 1)
																{
																				cout << "Time to choose your School(s) of Magic! (eneter menu number)\n1. Elemental Magic\n2. Summoner Magic\n3. Enchanting Magic\n4. Chakra Magic\n5. Illusion Magic\n";
																				cin >> MagicSchoolSelection;
																				switch (MagicSchoolSelection)
																				{
																				case 1: Spells = "Advanced Fire\nBasic Frost";
																								break;
																				case 2: Spells = "Familiar Summoning\nWeak Resurrection";
																								break;
																				case 3: Spells = "Basic Weapon Enchantment\nBasic Despelling";
																								break;
																				case 4: Spells = "Basic Intellegence buff\nBasic Wisdom buff";
																								break;
																				case 5: Spells = "Calming Spells\nSilence Spells";
																								break;
																				default: cout << "Invalid entry, please try again." << endl;
																								break;
																				}
																				break;
																}
																break;
												case 5: Spells = "Calming Spells\nSilence Spells";
																while (MagicSchoolSelection > 6 || MagicSchoolSelection < 1)
																{
																				cout << "Time to choose your School(s) of Magic! (eneter menu number)\n1. Elemental Magic\n2. Summoner Magic\n3. Enchanting Magic\n4. Chakra Magic\n5. Illusion Magic\n";
																				cin >> MagicSchoolSelection;
																				switch (MagicSchoolSelection)
																				{
																				case 1: Spells = "Advanced Fire\nBasic Frost";
																								break;
																				case 2: Spells = "Familiar Summoning\nWeak Resurrection";
																								break;
																				case 3: Spells = "Basic Weapon Enchantment\nBasic Despelling";
																								break;
																				case 4: Spells = "Basic Strength buff\nBasic Charisma buff";
																								break;
																				case 5: Spells = "Rage Spells\nDisorientation Spells";
																								break;
																				default: cout << "Invalid entry, please try again." << endl;
																								break;
																				}
																				break;
																}
																break;
												default: cout << "Invalid entry, please try again." << endl;
																break;
												}
								}
				}
				else
				{
								while (MagicSchoolSelection > 6 || MagicSchoolSelection < 1)
								{
												cout << "Time to choose your School(s) of Magic! (eneter menu number)\n1. Elemental Magic\n2. Summoner Magic\n3. Enchanting Magic\n4. Chakra Magic\n5. Illusion Magic\n";
												cin >> MagicSchoolSelection;
												switch (MagicSchoolSelection)
												{
												case 1: Spells = "Basic Fire\nBasic Lightning";
																break;
												case 2: Spells = "Familiar Summoning\nWeak Resurrection";
																break;
												case 3: Spells = "Basic Weapon Enchantment\nBasic Despelling";
																break;
												case 4: Spells = "Basic Strength buff\nBasic Charisma buff";
																break;
												case 5: Spells = "Calming Spells\nSilence Spells";
																break;
												default: cout << "Invalid entry, please try again." << endl;
																break;
												}
								}
				}

				ofstream CharacterInfo;
				CharacterInfo.open("CharacterInfo.txt");
				CharacterInfo << "\nLevel " << Level << "\nExperiance " << Expiriance << "\nName " << Name << "\nAge " << Age << "\nRace " << Race << "\nRacePerks:\n" << RacePerks << "\nClass " << Class << "\nSpells " << Spells << "\nAlignment " << Alignment << "\nArmour Class " << AC << "\nStrength" << Strength << "\nDexterity " << Dexterity << "\nConstitution " << Constitution << "\nIntelligence " << Intelligence << "\nWisdom " << Wisdom << "\nCharisma " << Charisma << "\nHit Die " << HitDie << "\nPrime Ability " << PrimeAbility << "\nSaves " << Saves << "\nStarting Gear\n" << StartingEquiptment << endl;
				CharacterInfo.close();

				return 0;
}