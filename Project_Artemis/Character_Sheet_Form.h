#pragma once

namespace LOTRProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExampleTest
	/// </summary>
	public ref class ExampleTest : public System::Windows::Forms::Form
	{
	public:
		ExampleTest(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ExampleTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  charNameText;
	private: System::Windows::Forms::Label^  charNameLabel;
	private: System::Windows::Forms::Label^  classLabel;

	private: System::Windows::Forms::Label^  charLevelLabel;
	private: System::Windows::Forms::TextBox^  charLevelText;
	private: System::Windows::Forms::Label^  charBgLabel;
	private: System::Windows::Forms::Label^  charSwLabel;


	private: System::Windows::Forms::Label^  playerNameLabel;
	private: System::Windows::Forms::TextBox^  playerNameText;
	private: System::Windows::Forms::Label^  expLabel;
	private: System::Windows::Forms::TextBox^  expText;
	private: System::Windows::Forms::ComboBox^  charClassList;
	private: System::Windows::Forms::ComboBox^  charBgList;
	private: System::Windows::Forms::ComboBox^  charSwList;
	private: System::Windows::Forms::GroupBox^  charStatFrame;
	private: System::Windows::Forms::Label^  modStrLabel;



	private: System::Windows::Forms::Label^  statStrLabel;
	private: System::Windows::Forms::TextBox^  modStrText;


	private: System::Windows::Forms::RichTextBox^  statStrText;
	private: System::Windows::Forms::RichTextBox^  richTextBox6;
	private: System::Windows::Forms::RichTextBox^  statChaText;

	private: System::Windows::Forms::RichTextBox^  statWisText;

	private: System::Windows::Forms::RichTextBox^  statIntText;

	private: System::Windows::Forms::RichTextBox^  statConText;

	private: System::Windows::Forms::RichTextBox^  statDexText;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  statChaLabel;
	private: System::Windows::Forms::Label^  statWisLabel;
	private: System::Windows::Forms::Label^  statIntLabel;
	private: System::Windows::Forms::Label^  statConLabel;
	private: System::Windows::Forms::Label^  statDexLabel;
	private: System::Windows::Forms::TextBox^  modShaText;
	private: System::Windows::Forms::TextBox^  modChaText;
	private: System::Windows::Forms::TextBox^  modWisText;
	private: System::Windows::Forms::TextBox^  modIntText;
	private: System::Windows::Forms::TextBox^  modConText;
	private: System::Windows::Forms::TextBox^  modDexText;
	private: System::Windows::Forms::Label^  statShaLabel;
	private: System::Windows::Forms::Label^  modShaLabel;
	private: System::Windows::Forms::Label^  modChaLabel;
	private: System::Windows::Forms::Label^  modWisLabel;
	private: System::Windows::Forms::Label^  modIntLabel;
	private: System::Windows::Forms::Label^  modConLabel;
	private: System::Windows::Forms::Label^  modDexLabel;
	private: System::Windows::Forms::GroupBox^  charSkillsFrame;
	private: System::Windows::Forms::CheckBox^  acrobaticsCheckBox;


	private: System::Windows::Forms::Button^  skillAcrobaticButton;
	private: System::Windows::Forms::CheckBox^  animalCheckBox;

	private: System::Windows::Forms::Button^  skillAniHandButton;
	private: System::Windows::Forms::Button^  skillAthleticsButton;
	private: System::Windows::Forms::CheckBox^  traditionsCheckBox;

	private: System::Windows::Forms::CheckBox^  survivalCheckBox;

	private: System::Windows::Forms::CheckBox^  stealthCheckBox;

	private: System::Windows::Forms::CheckBox^  sofhandCheckBox;

	private: System::Windows::Forms::CheckBox^  shaloreCheckBox;

	private: System::Windows::Forms::CheckBox^  riddleCheckBox;

	private: System::Windows::Forms::CheckBox^  persuasionCheckBox;

	private: System::Windows::Forms::CheckBox^  performanceCheckBox;

	private: System::Windows::Forms::CheckBox^  perceptionCheckBox;

	private: System::Windows::Forms::CheckBox^  natureCheckBox;

	private: System::Windows::Forms::CheckBox^  medicineCheckBox;

	private: System::Windows::Forms::CheckBox^  loreCheckBox;

	private: System::Windows::Forms::CheckBox^  investigationCheckBox;

	private: System::Windows::Forms::CheckBox^  intimidationCheckBox;

	private: System::Windows::Forms::CheckBox^  insightCheckBox;

	private: System::Windows::Forms::CheckBox^  historyCheckBox;

	private: System::Windows::Forms::CheckBox^  deceptionCheckBox;

	private: System::Windows::Forms::CheckBox^  athleticsCheckBox;

	private: System::Windows::Forms::Button^  skillTraditionsButton;
	private: System::Windows::Forms::Button^  skillSurvivalButton;
	private: System::Windows::Forms::Button^  skillStealthButton;
	private: System::Windows::Forms::Button^  skillSofHandButton;
	private: System::Windows::Forms::Button^  skillShaLoreButton;
	private: System::Windows::Forms::Button^  skillRiddleButton;
	private: System::Windows::Forms::Button^  skillPersuasionButton;
	private: System::Windows::Forms::Button^  skillPerformanceButton;
	private: System::Windows::Forms::Button^  skillPerceptionButton;
	private: System::Windows::Forms::Button^  skillNatureButton;
	private: System::Windows::Forms::Button^  skillMedicineButton;
	private: System::Windows::Forms::Button^  skillLoreButton;
	private: System::Windows::Forms::Button^  skillInvestigationButton;
	private: System::Windows::Forms::Button^  skillIntimidationButton;
	private: System::Windows::Forms::Button^  skillInsightButton;
	private: System::Windows::Forms::Button^  skillHistoryButton;
	private: System::Windows::Forms::Button^  skillDeceptionButton;
	private: System::Windows::Forms::Button^  checkChaButton;
	private: System::Windows::Forms::Button^  checkWisButton;
	private: System::Windows::Forms::Button^  checkDexButton;
	private: System::Windows::Forms::Button^  checkStrButton;
	private: System::Windows::Forms::Button^  checkConButton;
	private: System::Windows::Forms::Button^  checkIntButton;
	private: System::Windows::Forms::GroupBox^  savingThrowFrame;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::Button^  sthrowCorCheckBox;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Button^  sthrowChaCheckBox;
	private: System::Windows::Forms::Button^  sthrowWisCheckBox;
	private: System::Windows::Forms::Button^  sthrowIntCheckBox;
	private: System::Windows::Forms::Button^  sthrowConCheckBox;
	private: System::Windows::Forms::Button^  sthrowDexCheckBox;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  sthrowStrButton;
	private: System::Windows::Forms::CheckBox^  sthrowStrCheckBox;
	private: System::Windows::Forms::GroupBox^  proficiencyBonusFrame;

	private: System::Windows::Forms::TextBox^  proboTextBox;

	private: System::Windows::Forms::GroupBox^  initiativeFrame;
	private: System::Windows::Forms::TextBox^  initiativeTextBox;

	private: System::Windows::Forms::CheckBox^  inspirationCheckBox;
	private: System::Windows::Forms::GroupBox^  inspirationFram;
	private: System::Windows::Forms::GroupBox^  passivePerceptionFrame;
	private: System::Windows::Forms::TextBox^  pasPerTextBox;
	private: System::Windows::Forms::GroupBox^  speedFrame;
	private: System::Windows::Forms::TextBox^  speedTextBox;
	private: System::Windows::Forms::GroupBox^  attacksFrame;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  attack4Button;
	private: System::Windows::Forms::ComboBox^  damageType4List;
	private: System::Windows::Forms::ComboBox^  damageDice4List;
	private: System::Windows::Forms::TextBox^  toHit4TextBox;
	private: System::Windows::Forms::TextBox^  weapon4TextBox;
	private: System::Windows::Forms::Button^  attack3Button;
	private: System::Windows::Forms::ComboBox^  damageType3List;
	private: System::Windows::Forms::ComboBox^  damageDice3List;
	private: System::Windows::Forms::TextBox^  toHit3TextBox;
	private: System::Windows::Forms::TextBox^  weapon3TextBox;
	private: System::Windows::Forms::Button^  attack2Button;
	private: System::Windows::Forms::ComboBox^  damageType2List;
	private: System::Windows::Forms::ComboBox^  damageDice2List;
	private: System::Windows::Forms::TextBox^  toHit2TextBox;
	private: System::Windows::Forms::TextBox^  weapon2TextBox;
	private: System::Windows::Forms::Button^  attack1Button;
	private: System::Windows::Forms::ComboBox^  damageType1List;
	private: System::Windows::Forms::CheckBox^  dexAttackCheckBox;
	private: System::Windows::Forms::ComboBox^  damageDice1List;
	private: System::Windows::Forms::Label^  weaponDmgTypeLabel;
	private: System::Windows::Forms::Label^  damageLabel;
	private: System::Windows::Forms::Label^  toHitLabel;
	private: System::Windows::Forms::Label^  weaponNameLabel;
	private: System::Windows::Forms::TextBox^  toHit1TextBox;
	private: System::Windows::Forms::TextBox^  weapon1TextBox;
	private: System::Windows::Forms::CheckBox^  strengthAttackCheckBox;
	private: System::Windows::Forms::Label^  cultureLabel;
	private: System::Windows::Forms::ComboBox^  cultureList;
	private: System::Windows::Forms::Button^  shaDecreaseButton;
	private: System::Windows::Forms::Button^  shaIncreaseButton;
	private: System::Windows::Forms::Button^  statEditButton;
	private: System::Windows::Forms::RichTextBox^  hitPointText;
	private: System::Windows::Forms::Label^  miserableLabel;
	private: System::Windows::Forms::NumericUpDown^  miserableCounter;
	private: System::Windows::Forms::Button^  deathSaveButton;
	private: System::Windows::Forms::NumericUpDown^  hitDieCounter;
	private: System::Windows::Forms::Label^  totalHitDieLabel;
	private: System::Windows::Forms::ComboBox^  hitDieList;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  hitPointHealButton;
	private: System::Windows::Forms::Button^  hitPointDamageButton;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  shieldArmorCheck;
	private: System::Windows::Forms::CheckBox^  wisArmorCheck;
	private: System::Windows::Forms::CheckBox^  conArmorCheck;
	private: System::Windows::Forms::CheckBox^  dexArmorCheck;
	private: System::Windows::Forms::Label^  armorModLabel;
	private: System::Windows::Forms::TextBox^  armorModBox;
	private: System::Windows::Forms::Label^  armorClassLabel;
	private: System::Windows::Forms::RichTextBox^  armorClassText;
	private: System::Windows::Forms::TextBox^  armorTextBox;
	private: System::Windows::Forms::Label^  armorNameLabel;
	private: System::Windows::Forms::Button^  tempHitPointButton;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  deathFailLabel;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  deathSaveLabel;
	private: System::Windows::Forms::RichTextBox^  characterActionText;












	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->charNameText = (gcnew System::Windows::Forms::TextBox());
			this->charNameLabel = (gcnew System::Windows::Forms::Label());
			this->classLabel = (gcnew System::Windows::Forms::Label());
			this->charLevelLabel = (gcnew System::Windows::Forms::Label());
			this->charLevelText = (gcnew System::Windows::Forms::TextBox());
			this->charBgLabel = (gcnew System::Windows::Forms::Label());
			this->charSwLabel = (gcnew System::Windows::Forms::Label());
			this->playerNameLabel = (gcnew System::Windows::Forms::Label());
			this->playerNameText = (gcnew System::Windows::Forms::TextBox());
			this->expLabel = (gcnew System::Windows::Forms::Label());
			this->expText = (gcnew System::Windows::Forms::TextBox());
			this->charClassList = (gcnew System::Windows::Forms::ComboBox());
			this->charBgList = (gcnew System::Windows::Forms::ComboBox());
			this->charSwList = (gcnew System::Windows::Forms::ComboBox());
			this->charStatFrame = (gcnew System::Windows::Forms::GroupBox());
			this->shaDecreaseButton = (gcnew System::Windows::Forms::Button());
			this->shaIncreaseButton = (gcnew System::Windows::Forms::Button());
			this->statEditButton = (gcnew System::Windows::Forms::Button());
			this->checkChaButton = (gcnew System::Windows::Forms::Button());
			this->checkWisButton = (gcnew System::Windows::Forms::Button());
			this->checkDexButton = (gcnew System::Windows::Forms::Button());
			this->checkStrButton = (gcnew System::Windows::Forms::Button());
			this->modShaLabel = (gcnew System::Windows::Forms::Label());
			this->modChaLabel = (gcnew System::Windows::Forms::Label());
			this->modWisLabel = (gcnew System::Windows::Forms::Label());
			this->modIntLabel = (gcnew System::Windows::Forms::Label());
			this->modConLabel = (gcnew System::Windows::Forms::Label());
			this->modDexLabel = (gcnew System::Windows::Forms::Label());
			this->modShaText = (gcnew System::Windows::Forms::TextBox());
			this->modChaText = (gcnew System::Windows::Forms::TextBox());
			this->modWisText = (gcnew System::Windows::Forms::TextBox());
			this->modIntText = (gcnew System::Windows::Forms::TextBox());
			this->modConText = (gcnew System::Windows::Forms::TextBox());
			this->modDexText = (gcnew System::Windows::Forms::TextBox());
			this->statShaLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->statChaLabel = (gcnew System::Windows::Forms::Label());
			this->statWisLabel = (gcnew System::Windows::Forms::Label());
			this->statIntLabel = (gcnew System::Windows::Forms::Label());
			this->statConLabel = (gcnew System::Windows::Forms::Label());
			this->statDexLabel = (gcnew System::Windows::Forms::Label());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->statChaText = (gcnew System::Windows::Forms::RichTextBox());
			this->statWisText = (gcnew System::Windows::Forms::RichTextBox());
			this->statIntText = (gcnew System::Windows::Forms::RichTextBox());
			this->statConText = (gcnew System::Windows::Forms::RichTextBox());
			this->statDexText = (gcnew System::Windows::Forms::RichTextBox());
			this->modStrLabel = (gcnew System::Windows::Forms::Label());
			this->statStrLabel = (gcnew System::Windows::Forms::Label());
			this->modStrText = (gcnew System::Windows::Forms::TextBox());
			this->statStrText = (gcnew System::Windows::Forms::RichTextBox());
			this->checkConButton = (gcnew System::Windows::Forms::Button());
			this->checkIntButton = (gcnew System::Windows::Forms::Button());
			this->charSkillsFrame = (gcnew System::Windows::Forms::GroupBox());
			this->traditionsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->survivalCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->stealthCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->sofhandCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->shaloreCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->riddleCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->persuasionCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->performanceCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->perceptionCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->natureCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->medicineCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->loreCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->investigationCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->intimidationCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->insightCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->historyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->deceptionCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->athleticsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->skillTraditionsButton = (gcnew System::Windows::Forms::Button());
			this->skillSurvivalButton = (gcnew System::Windows::Forms::Button());
			this->skillStealthButton = (gcnew System::Windows::Forms::Button());
			this->skillSofHandButton = (gcnew System::Windows::Forms::Button());
			this->skillShaLoreButton = (gcnew System::Windows::Forms::Button());
			this->skillRiddleButton = (gcnew System::Windows::Forms::Button());
			this->skillPersuasionButton = (gcnew System::Windows::Forms::Button());
			this->skillPerformanceButton = (gcnew System::Windows::Forms::Button());
			this->skillPerceptionButton = (gcnew System::Windows::Forms::Button());
			this->skillNatureButton = (gcnew System::Windows::Forms::Button());
			this->skillMedicineButton = (gcnew System::Windows::Forms::Button());
			this->skillLoreButton = (gcnew System::Windows::Forms::Button());
			this->skillInvestigationButton = (gcnew System::Windows::Forms::Button());
			this->skillIntimidationButton = (gcnew System::Windows::Forms::Button());
			this->skillInsightButton = (gcnew System::Windows::Forms::Button());
			this->skillHistoryButton = (gcnew System::Windows::Forms::Button());
			this->skillDeceptionButton = (gcnew System::Windows::Forms::Button());
			this->skillAthleticsButton = (gcnew System::Windows::Forms::Button());
			this->skillAniHandButton = (gcnew System::Windows::Forms::Button());
			this->skillAcrobaticButton = (gcnew System::Windows::Forms::Button());
			this->acrobaticsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->animalCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->savingThrowFrame = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->sthrowCorCheckBox = (gcnew System::Windows::Forms::Button());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->sthrowChaCheckBox = (gcnew System::Windows::Forms::Button());
			this->sthrowWisCheckBox = (gcnew System::Windows::Forms::Button());
			this->sthrowIntCheckBox = (gcnew System::Windows::Forms::Button());
			this->sthrowConCheckBox = (gcnew System::Windows::Forms::Button());
			this->sthrowDexCheckBox = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->sthrowStrButton = (gcnew System::Windows::Forms::Button());
			this->sthrowStrCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->proficiencyBonusFrame = (gcnew System::Windows::Forms::GroupBox());
			this->proboTextBox = (gcnew System::Windows::Forms::TextBox());
			this->initiativeFrame = (gcnew System::Windows::Forms::GroupBox());
			this->initiativeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->inspirationCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->inspirationFram = (gcnew System::Windows::Forms::GroupBox());
			this->passivePerceptionFrame = (gcnew System::Windows::Forms::GroupBox());
			this->pasPerTextBox = (gcnew System::Windows::Forms::TextBox());
			this->speedFrame = (gcnew System::Windows::Forms::GroupBox());
			this->speedTextBox = (gcnew System::Windows::Forms::TextBox());
			this->attacksFrame = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->deathSaveButton = (gcnew System::Windows::Forms::Button());
			this->hitDieCounter = (gcnew System::Windows::Forms::NumericUpDown());
			this->totalHitDieLabel = (gcnew System::Windows::Forms::Label());
			this->hitDieList = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hitPointHealButton = (gcnew System::Windows::Forms::Button());
			this->hitPointDamageButton = (gcnew System::Windows::Forms::Button());
			this->hitPointText = (gcnew System::Windows::Forms::RichTextBox());
			this->attack4Button = (gcnew System::Windows::Forms::Button());
			this->damageType4List = (gcnew System::Windows::Forms::ComboBox());
			this->damageDice4List = (gcnew System::Windows::Forms::ComboBox());
			this->toHit4TextBox = (gcnew System::Windows::Forms::TextBox());
			this->weapon4TextBox = (gcnew System::Windows::Forms::TextBox());
			this->attack3Button = (gcnew System::Windows::Forms::Button());
			this->damageType3List = (gcnew System::Windows::Forms::ComboBox());
			this->damageDice3List = (gcnew System::Windows::Forms::ComboBox());
			this->toHit3TextBox = (gcnew System::Windows::Forms::TextBox());
			this->weapon3TextBox = (gcnew System::Windows::Forms::TextBox());
			this->attack2Button = (gcnew System::Windows::Forms::Button());
			this->damageType2List = (gcnew System::Windows::Forms::ComboBox());
			this->damageDice2List = (gcnew System::Windows::Forms::ComboBox());
			this->toHit2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->weapon2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->attack1Button = (gcnew System::Windows::Forms::Button());
			this->damageType1List = (gcnew System::Windows::Forms::ComboBox());
			this->dexAttackCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->damageDice1List = (gcnew System::Windows::Forms::ComboBox());
			this->weaponDmgTypeLabel = (gcnew System::Windows::Forms::Label());
			this->damageLabel = (gcnew System::Windows::Forms::Label());
			this->toHitLabel = (gcnew System::Windows::Forms::Label());
			this->weaponNameLabel = (gcnew System::Windows::Forms::Label());
			this->toHit1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->weapon1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->strengthAttackCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->cultureLabel = (gcnew System::Windows::Forms::Label());
			this->cultureList = (gcnew System::Windows::Forms::ComboBox());
			this->miserableLabel = (gcnew System::Windows::Forms::Label());
			this->miserableCounter = (gcnew System::Windows::Forms::NumericUpDown());
			this->deathSaveLabel = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->deathFailLabel = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->tempHitPointButton = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->armorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->armorNameLabel = (gcnew System::Windows::Forms::Label());
			this->armorClassText = (gcnew System::Windows::Forms::RichTextBox());
			this->armorClassLabel = (gcnew System::Windows::Forms::Label());
			this->armorModBox = (gcnew System::Windows::Forms::TextBox());
			this->armorModLabel = (gcnew System::Windows::Forms::Label());
			this->dexArmorCheck = (gcnew System::Windows::Forms::CheckBox());
			this->conArmorCheck = (gcnew System::Windows::Forms::CheckBox());
			this->wisArmorCheck = (gcnew System::Windows::Forms::CheckBox());
			this->shieldArmorCheck = (gcnew System::Windows::Forms::CheckBox());
			this->characterActionText = (gcnew System::Windows::Forms::RichTextBox());
			this->charStatFrame->SuspendLayout();
			this->charSkillsFrame->SuspendLayout();
			this->savingThrowFrame->SuspendLayout();
			this->proficiencyBonusFrame->SuspendLayout();
			this->initiativeFrame->SuspendLayout();
			this->inspirationFram->SuspendLayout();
			this->passivePerceptionFrame->SuspendLayout();
			this->speedFrame->SuspendLayout();
			this->attacksFrame->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hitDieCounter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->miserableCounter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// charNameText
			// 
			this->charNameText->Location = System::Drawing::Point(11, 22);
			this->charNameText->Name = L"charNameText";
			this->charNameText->Size = System::Drawing::Size(122, 20);
			this->charNameText->TabIndex = 0;
			// 
			// charNameLabel
			// 
			this->charNameLabel->AutoSize = true;
			this->charNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charNameLabel->Location = System::Drawing::Point(9, 6);
			this->charNameLabel->Name = L"charNameLabel";
			this->charNameLabel->Size = System::Drawing::Size(84, 13);
			this->charNameLabel->TabIndex = 1;
			this->charNameLabel->Text = L"Character Name";
			// 
			// classLabel
			// 
			this->classLabel->AutoSize = true;
			this->classLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classLabel->Location = System::Drawing::Point(147, 7);
			this->classLabel->Name = L"classLabel";
			this->classLabel->Size = System::Drawing::Size(32, 13);
			this->classLabel->TabIndex = 2;
			this->classLabel->Text = L"Class";
			// 
			// charLevelLabel
			// 
			this->charLevelLabel->AutoSize = true;
			this->charLevelLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->charLevelLabel->Location = System::Drawing::Point(146, 29);
			this->charLevelLabel->Name = L"charLevelLabel";
			this->charLevelLabel->Size = System::Drawing::Size(33, 13);
			this->charLevelLabel->TabIndex = 4;
			this->charLevelLabel->Text = L"Level";
			// 
			// charLevelText
			// 
			this->charLevelText->Location = System::Drawing::Point(185, 29);
			this->charLevelText->Name = L"charLevelText";
			this->charLevelText->Size = System::Drawing::Size(69, 20);
			this->charLevelText->TabIndex = 5;
			// 
			// charBgLabel
			// 
			this->charBgLabel->AutoSize = true;
			this->charBgLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charBgLabel->Location = System::Drawing::Point(292, 9);
			this->charBgLabel->Name = L"charBgLabel";
			this->charBgLabel->Size = System::Drawing::Size(65, 13);
			this->charBgLabel->TabIndex = 6;
			this->charBgLabel->Text = L"Background";
			// 
			// charSwLabel
			// 
			this->charSwLabel->AutoSize = true;
			this->charSwLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charSwLabel->Location = System::Drawing::Point(257, 29);
			this->charSwLabel->Name = L"charSwLabel";
			this->charSwLabel->Size = System::Drawing::Size(100, 13);
			this->charSwLabel->TabIndex = 7;
			this->charSwLabel->Text = L"Shadow Weakness";
			// 
			// playerNameLabel
			// 
			this->playerNameLabel->AutoSize = true;
			this->playerNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->playerNameLabel->Location = System::Drawing::Point(622, 9);
			this->playerNameLabel->Name = L"playerNameLabel";
			this->playerNameLabel->Size = System::Drawing::Size(67, 13);
			this->playerNameLabel->TabIndex = 10;
			this->playerNameLabel->Text = L"Player Name";
			// 
			// playerNameText
			// 
			this->playerNameText->Location = System::Drawing::Point(688, 4);
			this->playerNameText->Name = L"playerNameText";
			this->playerNameText->Size = System::Drawing::Size(122, 20);
			this->playerNameText->TabIndex = 11;
			// 
			// expLabel
			// 
			this->expLabel->AutoSize = true;
			this->expLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expLabel->Location = System::Drawing::Point(651, 36);
			this->expLabel->Name = L"expLabel";
			this->expLabel->Size = System::Drawing::Size(92, 13);
			this->expLabel->TabIndex = 12;
			this->expLabel->Text = L"Experience Points";
			// 
			// expText
			// 
			this->expText->Location = System::Drawing::Point(749, 31);
			this->expText->Name = L"expText";
			this->expText->Size = System::Drawing::Size(61, 20);
			this->expText->TabIndex = 13;
			// 
			// charClassList
			// 
			this->charClassList->BackColor = System::Drawing::SystemColors::HotTrack;
			this->charClassList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->charClassList->FormattingEnabled = true;
			this->charClassList->Location = System::Drawing::Point(181, 3);
			this->charClassList->Name = L"charClassList";
			this->charClassList->Size = System::Drawing::Size(105, 21);
			this->charClassList->TabIndex = 14;
			// 
			// charBgList
			// 
			this->charBgList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->charBgList->FormattingEnabled = true;
			this->charBgList->Location = System::Drawing::Point(362, 3);
			this->charBgList->Name = L"charBgList";
			this->charBgList->Size = System::Drawing::Size(121, 21);
			this->charBgList->TabIndex = 15;
			// 
			// charSwList
			// 
			this->charSwList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->charSwList->FormattingEnabled = true;
			this->charSwList->Location = System::Drawing::Point(362, 30);
			this->charSwList->Name = L"charSwList";
			this->charSwList->Size = System::Drawing::Size(121, 21);
			this->charSwList->TabIndex = 16;
			// 
			// charStatFrame
			// 
			this->charStatFrame->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->charStatFrame->Controls->Add(this->shaDecreaseButton);
			this->charStatFrame->Controls->Add(this->shaIncreaseButton);
			this->charStatFrame->Controls->Add(this->statEditButton);
			this->charStatFrame->Controls->Add(this->checkChaButton);
			this->charStatFrame->Controls->Add(this->checkWisButton);
			this->charStatFrame->Controls->Add(this->checkDexButton);
			this->charStatFrame->Controls->Add(this->checkStrButton);
			this->charStatFrame->Controls->Add(this->modShaLabel);
			this->charStatFrame->Controls->Add(this->modChaLabel);
			this->charStatFrame->Controls->Add(this->modWisLabel);
			this->charStatFrame->Controls->Add(this->modIntLabel);
			this->charStatFrame->Controls->Add(this->modConLabel);
			this->charStatFrame->Controls->Add(this->modDexLabel);
			this->charStatFrame->Controls->Add(this->modShaText);
			this->charStatFrame->Controls->Add(this->modChaText);
			this->charStatFrame->Controls->Add(this->modWisText);
			this->charStatFrame->Controls->Add(this->modIntText);
			this->charStatFrame->Controls->Add(this->modConText);
			this->charStatFrame->Controls->Add(this->modDexText);
			this->charStatFrame->Controls->Add(this->statShaLabel);
			this->charStatFrame->Controls->Add(this->label6);
			this->charStatFrame->Controls->Add(this->statChaLabel);
			this->charStatFrame->Controls->Add(this->statWisLabel);
			this->charStatFrame->Controls->Add(this->statIntLabel);
			this->charStatFrame->Controls->Add(this->statConLabel);
			this->charStatFrame->Controls->Add(this->statDexLabel);
			this->charStatFrame->Controls->Add(this->richTextBox6);
			this->charStatFrame->Controls->Add(this->statChaText);
			this->charStatFrame->Controls->Add(this->statWisText);
			this->charStatFrame->Controls->Add(this->statIntText);
			this->charStatFrame->Controls->Add(this->statConText);
			this->charStatFrame->Controls->Add(this->statDexText);
			this->charStatFrame->Controls->Add(this->modStrLabel);
			this->charStatFrame->Controls->Add(this->statStrLabel);
			this->charStatFrame->Controls->Add(this->modStrText);
			this->charStatFrame->Controls->Add(this->statStrText);
			this->charStatFrame->Controls->Add(this->checkConButton);
			this->charStatFrame->Controls->Add(this->checkIntButton);
			this->charStatFrame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->charStatFrame->Location = System::Drawing::Point(12, 48);
			this->charStatFrame->Name = L"charStatFrame";
			this->charStatFrame->Size = System::Drawing::Size(121, 574);
			this->charStatFrame->TabIndex = 17;
			this->charStatFrame->TabStop = false;
			this->charStatFrame->Text = L"Character Stats";
			// 
			// shaDecreaseButton
			// 
			this->shaDecreaseButton->Location = System::Drawing::Point(94, 487);
			this->shaDecreaseButton->Name = L"shaDecreaseButton";
			this->shaDecreaseButton->Size = System::Drawing::Size(20, 21);
			this->shaDecreaseButton->TabIndex = 48;
			this->shaDecreaseButton->Text = L"-";
			this->shaDecreaseButton->UseVisualStyleBackColor = true;
			// 
			// shaIncreaseButton
			// 
			this->shaIncreaseButton->Location = System::Drawing::Point(67, 487);
			this->shaIncreaseButton->Name = L"shaIncreaseButton";
			this->shaIncreaseButton->Size = System::Drawing::Size(21, 22);
			this->shaIncreaseButton->TabIndex = 47;
			this->shaIncreaseButton->Text = L"+";
			this->shaIncreaseButton->UseVisualStyleBackColor = true;
			// 
			// statEditButton
			// 
			this->statEditButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statEditButton->Location = System::Drawing::Point(9, 552);
			this->statEditButton->Name = L"statEditButton";
			this->statEditButton->Size = System::Drawing::Size(106, 15);
			this->statEditButton->TabIndex = 46;
			this->statEditButton->Text = L"Edit";
			this->statEditButton->UseVisualStyleBackColor = true;
			// 
			// checkChaButton
			// 
			this->checkChaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkChaButton->Location = System::Drawing::Point(77, 417);
			this->checkChaButton->Name = L"checkChaButton";
			this->checkChaButton->Size = System::Drawing::Size(42, 17);
			this->checkChaButton->TabIndex = 45;
			this->checkChaButton->Text = L"check";
			this->checkChaButton->UseVisualStyleBackColor = true;
			// 
			// checkWisButton
			// 
			this->checkWisButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkWisButton->Location = System::Drawing::Point(73, 340);
			this->checkWisButton->Name = L"checkWisButton";
			this->checkWisButton->Size = System::Drawing::Size(42, 17);
			this->checkWisButton->TabIndex = 44;
			this->checkWisButton->Text = L"check";
			this->checkWisButton->UseVisualStyleBackColor = true;
			// 
			// checkDexButton
			// 
			this->checkDexButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkDexButton->Location = System::Drawing::Point(70, 105);
			this->checkDexButton->Name = L"checkDexButton";
			this->checkDexButton->Size = System::Drawing::Size(42, 17);
			this->checkDexButton->TabIndex = 41;
			this->checkDexButton->Text = L"check";
			this->checkDexButton->UseVisualStyleBackColor = true;
			// 
			// checkStrButton
			// 
			this->checkStrButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkStrButton->Location = System::Drawing::Point(73, 33);
			this->checkStrButton->Name = L"checkStrButton";
			this->checkStrButton->Size = System::Drawing::Size(42, 17);
			this->checkStrButton->TabIndex = 20;
			this->checkStrButton->Text = L"check";
			this->checkStrButton->UseVisualStyleBackColor = true;
			// 
			// modShaLabel
			// 
			this->modShaLabel->AutoSize = true;
			this->modShaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modShaLabel->Location = System::Drawing::Point(64, 509);
			this->modShaLabel->Name = L"modShaLabel";
			this->modShaLabel->Size = System::Drawing::Size(58, 13);
			this->modShaLabel->TabIndex = 40;
			this->modShaLabel->Text = L"Permanent";
			// 
			// modChaLabel
			// 
			this->modChaLabel->AutoSize = true;
			this->modChaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modChaLabel->Location = System::Drawing::Point(67, 437);
			this->modChaLabel->Name = L"modChaLabel";
			this->modChaLabel->Size = System::Drawing::Size(52, 15);
			this->modChaLabel->TabIndex = 39;
			this->modChaLabel->Text = L"Modifier";
			// 
			// modWisLabel
			// 
			this->modWisLabel->AutoSize = true;
			this->modWisLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modWisLabel->Location = System::Drawing::Point(67, 360);
			this->modWisLabel->Name = L"modWisLabel";
			this->modWisLabel->Size = System::Drawing::Size(52, 15);
			this->modWisLabel->TabIndex = 38;
			this->modWisLabel->Text = L"Modifier";
			// 
			// modIntLabel
			// 
			this->modIntLabel->AutoSize = true;
			this->modIntLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modIntLabel->Location = System::Drawing::Point(67, 283);
			this->modIntLabel->Name = L"modIntLabel";
			this->modIntLabel->Size = System::Drawing::Size(52, 15);
			this->modIntLabel->TabIndex = 37;
			this->modIntLabel->Text = L"Modifier";
			// 
			// modConLabel
			// 
			this->modConLabel->AutoSize = true;
			this->modConLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modConLabel->Location = System::Drawing::Point(67, 204);
			this->modConLabel->Name = L"modConLabel";
			this->modConLabel->Size = System::Drawing::Size(52, 15);
			this->modConLabel->TabIndex = 36;
			this->modConLabel->Text = L"Modifier";
			// 
			// modDexLabel
			// 
			this->modDexLabel->AutoSize = true;
			this->modDexLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modDexLabel->Location = System::Drawing::Point(67, 125);
			this->modDexLabel->Name = L"modDexLabel";
			this->modDexLabel->Size = System::Drawing::Size(52, 15);
			this->modDexLabel->TabIndex = 35;
			this->modDexLabel->Text = L"Modifier";
			// 
			// modShaText
			// 
			this->modShaText->BackColor = System::Drawing::SystemColors::Info;
			this->modShaText->Enabled = false;
			this->modShaText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modShaText->Location = System::Drawing::Point(70, 525);
			this->modShaText->Name = L"modShaText";
			this->modShaText->Size = System::Drawing::Size(34, 21);
			this->modShaText->TabIndex = 34;
			// 
			// modChaText
			// 
			this->modChaText->BackColor = System::Drawing::SystemColors::Info;
			this->modChaText->Enabled = false;
			this->modChaText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modChaText->Location = System::Drawing::Point(70, 452);
			this->modChaText->Name = L"modChaText";
			this->modChaText->Size = System::Drawing::Size(34, 21);
			this->modChaText->TabIndex = 33;
			// 
			// modWisText
			// 
			this->modWisText->BackColor = System::Drawing::SystemColors::Info;
			this->modWisText->Enabled = false;
			this->modWisText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modWisText->Location = System::Drawing::Point(70, 375);
			this->modWisText->Name = L"modWisText";
			this->modWisText->Size = System::Drawing::Size(34, 21);
			this->modWisText->TabIndex = 32;
			// 
			// modIntText
			// 
			this->modIntText->BackColor = System::Drawing::SystemColors::Info;
			this->modIntText->Enabled = false;
			this->modIntText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modIntText->Location = System::Drawing::Point(70, 298);
			this->modIntText->Name = L"modIntText";
			this->modIntText->Size = System::Drawing::Size(34, 21);
			this->modIntText->TabIndex = 31;
			// 
			// modConText
			// 
			this->modConText->BackColor = System::Drawing::SystemColors::Info;
			this->modConText->Enabled = false;
			this->modConText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modConText->Location = System::Drawing::Point(70, 219);
			this->modConText->Name = L"modConText";
			this->modConText->Size = System::Drawing::Size(34, 21);
			this->modConText->TabIndex = 30;
			// 
			// modDexText
			// 
			this->modDexText->BackColor = System::Drawing::SystemColors::Info;
			this->modDexText->Enabled = false;
			this->modDexText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modDexText->Location = System::Drawing::Point(70, 140);
			this->modDexText->Name = L"modDexText";
			this->modDexText->Size = System::Drawing::Size(34, 21);
			this->modDexText->TabIndex = 20;
			// 
			// statShaLabel
			// 
			this->statShaLabel->AutoSize = true;
			this->statShaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statShaLabel->Location = System::Drawing::Point(6, 482);
			this->statShaLabel->Name = L"statShaLabel";
			this->statShaLabel->Size = System::Drawing::Size(58, 15);
			this->statShaLabel->TabIndex = 21;
			this->statShaLabel->Text = L"Shadow";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 482);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 15);
			this->label6->TabIndex = 21;
			// 
			// statChaLabel
			// 
			this->statChaLabel->AutoSize = true;
			this->statChaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statChaLabel->Location = System::Drawing::Point(6, 410);
			this->statChaLabel->Name = L"statChaLabel";
			this->statChaLabel->Size = System::Drawing::Size(68, 15);
			this->statChaLabel->TabIndex = 21;
			this->statChaLabel->Text = L"Charisma";
			// 
			// statWisLabel
			// 
			this->statWisLabel->AutoSize = true;
			this->statWisLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statWisLabel->Location = System::Drawing::Point(6, 332);
			this->statWisLabel->Name = L"statWisLabel";
			this->statWisLabel->Size = System::Drawing::Size(58, 15);
			this->statWisLabel->TabIndex = 21;
			this->statWisLabel->Text = L"Wisdom";
			// 
			// statIntLabel
			// 
			this->statIntLabel->AutoSize = true;
			this->statIntLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statIntLabel->Location = System::Drawing::Point(0, 255);
			this->statIntLabel->Name = L"statIntLabel";
			this->statIntLabel->Size = System::Drawing::Size(82, 15);
			this->statIntLabel->TabIndex = 21;
			this->statIntLabel->Text = L"Intelligence";
			// 
			// statConLabel
			// 
			this->statConLabel->AutoSize = true;
			this->statConLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statConLabel->Location = System::Drawing::Point(1, 176);
			this->statConLabel->Name = L"statConLabel";
			this->statConLabel->Size = System::Drawing::Size(83, 15);
			this->statConLabel->TabIndex = 29;
			this->statConLabel->Text = L"Constitution";
			// 
			// statDexLabel
			// 
			this->statDexLabel->AutoSize = true;
			this->statDexLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statDexLabel->Location = System::Drawing::Point(3, 98);
			this->statDexLabel->Name = L"statDexLabel";
			this->statDexLabel->Size = System::Drawing::Size(63, 15);
			this->statDexLabel->TabIndex = 28;
			this->statDexLabel->Text = L"Dexterity";
			// 
			// richTextBox6
			// 
			this->richTextBox6->BackColor = System::Drawing::SystemColors::MenuBar;
			this->richTextBox6->Enabled = false;
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox6->Location = System::Drawing::Point(6, 501);
			this->richTextBox6->MaxLength = 4;
			this->richTextBox6->Multiline = false;
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(58, 46);
			this->richTextBox6->TabIndex = 27;
			this->richTextBox6->Text = L"";
			this->richTextBox6->ZoomFactor = 1.5F;
			// 
			// statChaText
			// 
			this->statChaText->BackColor = System::Drawing::SystemColors::MenuBar;
			this->statChaText->Enabled = false;
			this->statChaText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statChaText->Location = System::Drawing::Point(6, 427);
			this->statChaText->MaxLength = 4;
			this->statChaText->Multiline = false;
			this->statChaText->Name = L"statChaText";
			this->statChaText->Size = System::Drawing::Size(58, 46);
			this->statChaText->TabIndex = 26;
			this->statChaText->Text = L"";
			this->statChaText->ZoomFactor = 1.5F;
			// 
			// statWisText
			// 
			this->statWisText->BackColor = System::Drawing::SystemColors::MenuBar;
			this->statWisText->Enabled = false;
			this->statWisText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statWisText->Location = System::Drawing::Point(6, 350);
			this->statWisText->MaxLength = 4;
			this->statWisText->Multiline = false;
			this->statWisText->Name = L"statWisText";
			this->statWisText->Size = System::Drawing::Size(58, 46);
			this->statWisText->TabIndex = 25;
			this->statWisText->Text = L"";
			this->statWisText->ZoomFactor = 1.5F;
			// 
			// statIntText
			// 
			this->statIntText->BackColor = System::Drawing::SystemColors::MenuBar;
			this->statIntText->Enabled = false;
			this->statIntText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statIntText->Location = System::Drawing::Point(6, 273);
			this->statIntText->MaxLength = 4;
			this->statIntText->Multiline = false;
			this->statIntText->Name = L"statIntText";
			this->statIntText->Size = System::Drawing::Size(58, 46);
			this->statIntText->TabIndex = 24;
			this->statIntText->Text = L"";
			this->statIntText->ZoomFactor = 1.5F;
			// 
			// statConText
			// 
			this->statConText->BackColor = System::Drawing::SystemColors::MenuBar;
			this->statConText->Enabled = false;
			this->statConText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statConText->Location = System::Drawing::Point(6, 194);
			this->statConText->MaxLength = 4;
			this->statConText->Multiline = false;
			this->statConText->Name = L"statConText";
			this->statConText->Size = System::Drawing::Size(58, 46);
			this->statConText->TabIndex = 23;
			this->statConText->Text = L"";
			this->statConText->ZoomFactor = 1.5F;
			// 
			// statDexText
			// 
			this->statDexText->BackColor = System::Drawing::SystemColors::MenuBar;
			this->statDexText->Enabled = false;
			this->statDexText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statDexText->Location = System::Drawing::Point(6, 115);
			this->statDexText->MaxLength = 4;
			this->statDexText->Multiline = false;
			this->statDexText->Name = L"statDexText";
			this->statDexText->Size = System::Drawing::Size(58, 46);
			this->statDexText->TabIndex = 22;
			this->statDexText->Text = L"";
			this->statDexText->ZoomFactor = 1.5F;
			// 
			// modStrLabel
			// 
			this->modStrLabel->AutoSize = true;
			this->modStrLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modStrLabel->Location = System::Drawing::Point(67, 52);
			this->modStrLabel->Name = L"modStrLabel";
			this->modStrLabel->Size = System::Drawing::Size(52, 15);
			this->modStrLabel->TabIndex = 21;
			this->modStrLabel->Text = L"Modifier";
			// 
			// statStrLabel
			// 
			this->statStrLabel->AutoSize = true;
			this->statStrLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statStrLabel->Location = System::Drawing::Point(6, 24);
			this->statStrLabel->Name = L"statStrLabel";
			this->statStrLabel->Size = System::Drawing::Size(61, 15);
			this->statStrLabel->TabIndex = 20;
			this->statStrLabel->Text = L"Strength";
			// 
			// modStrText
			// 
			this->modStrText->BackColor = System::Drawing::SystemColors::Info;
			this->modStrText->Enabled = false;
			this->modStrText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modStrText->Location = System::Drawing::Point(70, 67);
			this->modStrText->Name = L"modStrText";
			this->modStrText->Size = System::Drawing::Size(34, 21);
			this->modStrText->TabIndex = 19;
			// 
			// statStrText
			// 
			this->statStrText->BackColor = System::Drawing::SystemColors::MenuBar;
			this->statStrText->Enabled = false;
			this->statStrText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statStrText->Location = System::Drawing::Point(6, 42);
			this->statStrText->MaxLength = 4;
			this->statStrText->Multiline = false;
			this->statStrText->Name = L"statStrText";
			this->statStrText->Size = System::Drawing::Size(58, 46);
			this->statStrText->TabIndex = 18;
			this->statStrText->Text = L"";
			this->statStrText->ZoomFactor = 1.5F;
			// 
			// checkConButton
			// 
			this->checkConButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkConButton->Location = System::Drawing::Point(77, 184);
			this->checkConButton->Name = L"checkConButton";
			this->checkConButton->Size = System::Drawing::Size(42, 17);
			this->checkConButton->TabIndex = 42;
			this->checkConButton->Text = L"check";
			this->checkConButton->UseVisualStyleBackColor = true;
			// 
			// checkIntButton
			// 
			this->checkIntButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkIntButton->Location = System::Drawing::Point(80, 263);
			this->checkIntButton->Name = L"checkIntButton";
			this->checkIntButton->Size = System::Drawing::Size(42, 17);
			this->checkIntButton->TabIndex = 43;
			this->checkIntButton->Text = L"check";
			this->checkIntButton->UseVisualStyleBackColor = true;
			// 
			// charSkillsFrame
			// 
			this->charSkillsFrame->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->charSkillsFrame->Controls->Add(this->traditionsCheckBox);
			this->charSkillsFrame->Controls->Add(this->survivalCheckBox);
			this->charSkillsFrame->Controls->Add(this->stealthCheckBox);
			this->charSkillsFrame->Controls->Add(this->sofhandCheckBox);
			this->charSkillsFrame->Controls->Add(this->shaloreCheckBox);
			this->charSkillsFrame->Controls->Add(this->riddleCheckBox);
			this->charSkillsFrame->Controls->Add(this->persuasionCheckBox);
			this->charSkillsFrame->Controls->Add(this->performanceCheckBox);
			this->charSkillsFrame->Controls->Add(this->perceptionCheckBox);
			this->charSkillsFrame->Controls->Add(this->natureCheckBox);
			this->charSkillsFrame->Controls->Add(this->medicineCheckBox);
			this->charSkillsFrame->Controls->Add(this->loreCheckBox);
			this->charSkillsFrame->Controls->Add(this->investigationCheckBox);
			this->charSkillsFrame->Controls->Add(this->intimidationCheckBox);
			this->charSkillsFrame->Controls->Add(this->insightCheckBox);
			this->charSkillsFrame->Controls->Add(this->historyCheckBox);
			this->charSkillsFrame->Controls->Add(this->deceptionCheckBox);
			this->charSkillsFrame->Controls->Add(this->athleticsCheckBox);
			this->charSkillsFrame->Controls->Add(this->skillTraditionsButton);
			this->charSkillsFrame->Controls->Add(this->skillSurvivalButton);
			this->charSkillsFrame->Controls->Add(this->skillStealthButton);
			this->charSkillsFrame->Controls->Add(this->skillSofHandButton);
			this->charSkillsFrame->Controls->Add(this->skillShaLoreButton);
			this->charSkillsFrame->Controls->Add(this->skillRiddleButton);
			this->charSkillsFrame->Controls->Add(this->skillPersuasionButton);
			this->charSkillsFrame->Controls->Add(this->skillPerformanceButton);
			this->charSkillsFrame->Controls->Add(this->skillPerceptionButton);
			this->charSkillsFrame->Controls->Add(this->skillNatureButton);
			this->charSkillsFrame->Controls->Add(this->skillMedicineButton);
			this->charSkillsFrame->Controls->Add(this->skillLoreButton);
			this->charSkillsFrame->Controls->Add(this->skillInvestigationButton);
			this->charSkillsFrame->Controls->Add(this->skillIntimidationButton);
			this->charSkillsFrame->Controls->Add(this->skillInsightButton);
			this->charSkillsFrame->Controls->Add(this->skillHistoryButton);
			this->charSkillsFrame->Controls->Add(this->skillDeceptionButton);
			this->charSkillsFrame->Controls->Add(this->skillAthleticsButton);
			this->charSkillsFrame->Controls->Add(this->skillAniHandButton);
			this->charSkillsFrame->Controls->Add(this->skillAcrobaticButton);
			this->charSkillsFrame->Controls->Add(this->acrobaticsCheckBox);
			this->charSkillsFrame->Controls->Add(this->animalCheckBox);
			this->charSkillsFrame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->charSkillsFrame->Location = System::Drawing::Point(137, 75);
			this->charSkillsFrame->Name = L"charSkillsFrame";
			this->charSkillsFrame->Size = System::Drawing::Size(125, 547);
			this->charSkillsFrame->TabIndex = 18;
			this->charSkillsFrame->TabStop = false;
			this->charSkillsFrame->Text = L"Character Skills";
			// 
			// traditionsCheckBox
			// 
			this->traditionsCheckBox->AutoSize = true;
			this->traditionsCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->traditionsCheckBox->Location = System::Drawing::Point(2, 508);
			this->traditionsCheckBox->Name = L"traditionsCheckBox";
			this->traditionsCheckBox->Size = System::Drawing::Size(38, 17);
			this->traditionsCheckBox->TabIndex = 58;
			this->traditionsCheckBox->Text = L"+9";
			this->traditionsCheckBox->UseVisualStyleBackColor = true;
			// 
			// survivalCheckBox
			// 
			this->survivalCheckBox->AutoSize = true;
			this->survivalCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->survivalCheckBox->Location = System::Drawing::Point(2, 481);
			this->survivalCheckBox->Name = L"survivalCheckBox";
			this->survivalCheckBox->Size = System::Drawing::Size(38, 17);
			this->survivalCheckBox->TabIndex = 57;
			this->survivalCheckBox->Text = L"+9";
			this->survivalCheckBox->UseVisualStyleBackColor = true;
			// 
			// stealthCheckBox
			// 
			this->stealthCheckBox->AutoSize = true;
			this->stealthCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stealthCheckBox->Location = System::Drawing::Point(2, 454);
			this->stealthCheckBox->Name = L"stealthCheckBox";
			this->stealthCheckBox->Size = System::Drawing::Size(38, 17);
			this->stealthCheckBox->TabIndex = 56;
			this->stealthCheckBox->Text = L"+9";
			this->stealthCheckBox->UseVisualStyleBackColor = true;
			// 
			// sofhandCheckBox
			// 
			this->sofhandCheckBox->AutoSize = true;
			this->sofhandCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sofhandCheckBox->Location = System::Drawing::Point(2, 429);
			this->sofhandCheckBox->Name = L"sofhandCheckBox";
			this->sofhandCheckBox->Size = System::Drawing::Size(38, 17);
			this->sofhandCheckBox->TabIndex = 55;
			this->sofhandCheckBox->Text = L"+9";
			this->sofhandCheckBox->UseVisualStyleBackColor = true;
			// 
			// shaloreCheckBox
			// 
			this->shaloreCheckBox->AutoSize = true;
			this->shaloreCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shaloreCheckBox->Location = System::Drawing::Point(2, 404);
			this->shaloreCheckBox->Name = L"shaloreCheckBox";
			this->shaloreCheckBox->Size = System::Drawing::Size(38, 17);
			this->shaloreCheckBox->TabIndex = 54;
			this->shaloreCheckBox->Text = L"+9";
			this->shaloreCheckBox->UseVisualStyleBackColor = true;
			// 
			// riddleCheckBox
			// 
			this->riddleCheckBox->AutoSize = true;
			this->riddleCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->riddleCheckBox->Location = System::Drawing::Point(2, 377);
			this->riddleCheckBox->Name = L"riddleCheckBox";
			this->riddleCheckBox->Size = System::Drawing::Size(38, 17);
			this->riddleCheckBox->TabIndex = 53;
			this->riddleCheckBox->Text = L"+9";
			this->riddleCheckBox->UseVisualStyleBackColor = true;
			// 
			// persuasionCheckBox
			// 
			this->persuasionCheckBox->AutoSize = true;
			this->persuasionCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->persuasionCheckBox->Location = System::Drawing::Point(2, 352);
			this->persuasionCheckBox->Name = L"persuasionCheckBox";
			this->persuasionCheckBox->Size = System::Drawing::Size(38, 17);
			this->persuasionCheckBox->TabIndex = 52;
			this->persuasionCheckBox->Text = L"+9";
			this->persuasionCheckBox->UseVisualStyleBackColor = true;
			// 
			// performanceCheckBox
			// 
			this->performanceCheckBox->AutoSize = true;
			this->performanceCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->performanceCheckBox->Location = System::Drawing::Point(2, 327);
			this->performanceCheckBox->Name = L"performanceCheckBox";
			this->performanceCheckBox->Size = System::Drawing::Size(38, 17);
			this->performanceCheckBox->TabIndex = 51;
			this->performanceCheckBox->Text = L"+9";
			this->performanceCheckBox->UseVisualStyleBackColor = true;
			// 
			// perceptionCheckBox
			// 
			this->perceptionCheckBox->AutoSize = true;
			this->perceptionCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perceptionCheckBox->Location = System::Drawing::Point(2, 300);
			this->perceptionCheckBox->Name = L"perceptionCheckBox";
			this->perceptionCheckBox->Size = System::Drawing::Size(38, 17);
			this->perceptionCheckBox->TabIndex = 50;
			this->perceptionCheckBox->Text = L"+9";
			this->perceptionCheckBox->UseVisualStyleBackColor = true;
			// 
			// natureCheckBox
			// 
			this->natureCheckBox->AutoSize = true;
			this->natureCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->natureCheckBox->Location = System::Drawing::Point(2, 275);
			this->natureCheckBox->Name = L"natureCheckBox";
			this->natureCheckBox->Size = System::Drawing::Size(38, 17);
			this->natureCheckBox->TabIndex = 49;
			this->natureCheckBox->Text = L"+9";
			this->natureCheckBox->UseVisualStyleBackColor = true;
			// 
			// medicineCheckBox
			// 
			this->medicineCheckBox->AutoSize = true;
			this->medicineCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->medicineCheckBox->Location = System::Drawing::Point(2, 248);
			this->medicineCheckBox->Name = L"medicineCheckBox";
			this->medicineCheckBox->Size = System::Drawing::Size(38, 17);
			this->medicineCheckBox->TabIndex = 48;
			this->medicineCheckBox->Text = L"+9";
			this->medicineCheckBox->UseVisualStyleBackColor = true;
			// 
			// loreCheckBox
			// 
			this->loreCheckBox->AutoSize = true;
			this->loreCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loreCheckBox->Location = System::Drawing::Point(2, 221);
			this->loreCheckBox->Name = L"loreCheckBox";
			this->loreCheckBox->Size = System::Drawing::Size(38, 17);
			this->loreCheckBox->TabIndex = 47;
			this->loreCheckBox->Text = L"+9";
			this->loreCheckBox->UseVisualStyleBackColor = true;
			// 
			// investigationCheckBox
			// 
			this->investigationCheckBox->AutoSize = true;
			this->investigationCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->investigationCheckBox->Location = System::Drawing::Point(2, 196);
			this->investigationCheckBox->Name = L"investigationCheckBox";
			this->investigationCheckBox->Size = System::Drawing::Size(38, 17);
			this->investigationCheckBox->TabIndex = 46;
			this->investigationCheckBox->Text = L"+9";
			this->investigationCheckBox->UseVisualStyleBackColor = true;
			// 
			// intimidationCheckBox
			// 
			this->intimidationCheckBox->AutoSize = true;
			this->intimidationCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->intimidationCheckBox->Location = System::Drawing::Point(2, 169);
			this->intimidationCheckBox->Name = L"intimidationCheckBox";
			this->intimidationCheckBox->Size = System::Drawing::Size(38, 17);
			this->intimidationCheckBox->TabIndex = 45;
			this->intimidationCheckBox->Text = L"+9";
			this->intimidationCheckBox->UseVisualStyleBackColor = true;
			// 
			// insightCheckBox
			// 
			this->insightCheckBox->AutoSize = true;
			this->insightCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insightCheckBox->Location = System::Drawing::Point(2, 142);
			this->insightCheckBox->Name = L"insightCheckBox";
			this->insightCheckBox->Size = System::Drawing::Size(38, 17);
			this->insightCheckBox->TabIndex = 44;
			this->insightCheckBox->Text = L"+9";
			this->insightCheckBox->UseVisualStyleBackColor = true;
			// 
			// historyCheckBox
			// 
			this->historyCheckBox->AutoSize = true;
			this->historyCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyCheckBox->Location = System::Drawing::Point(2, 117);
			this->historyCheckBox->Name = L"historyCheckBox";
			this->historyCheckBox->Size = System::Drawing::Size(38, 17);
			this->historyCheckBox->TabIndex = 43;
			this->historyCheckBox->Text = L"+9";
			this->historyCheckBox->UseVisualStyleBackColor = true;
			// 
			// deceptionCheckBox
			// 
			this->deceptionCheckBox->AutoSize = true;
			this->deceptionCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deceptionCheckBox->Location = System::Drawing::Point(2, 93);
			this->deceptionCheckBox->Name = L"deceptionCheckBox";
			this->deceptionCheckBox->Size = System::Drawing::Size(38, 17);
			this->deceptionCheckBox->TabIndex = 42;
			this->deceptionCheckBox->Text = L"+9";
			this->deceptionCheckBox->UseVisualStyleBackColor = true;
			// 
			// athleticsCheckBox
			// 
			this->athleticsCheckBox->AutoSize = true;
			this->athleticsCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->athleticsCheckBox->Location = System::Drawing::Point(2, 69);
			this->athleticsCheckBox->Name = L"athleticsCheckBox";
			this->athleticsCheckBox->Size = System::Drawing::Size(38, 17);
			this->athleticsCheckBox->TabIndex = 41;
			this->athleticsCheckBox->Text = L"+9";
			this->athleticsCheckBox->UseVisualStyleBackColor = true;
			// 
			// skillTraditionsButton
			// 
			this->skillTraditionsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillTraditionsButton->Location = System::Drawing::Point(35, 506);
			this->skillTraditionsButton->Name = L"skillTraditionsButton";
			this->skillTraditionsButton->Size = System::Drawing::Size(90, 21);
			this->skillTraditionsButton->TabIndex = 40;
			this->skillTraditionsButton->Text = L"Traditions";
			this->skillTraditionsButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillTraditionsButton->UseVisualStyleBackColor = true;
			// 
			// skillSurvivalButton
			// 
			this->skillSurvivalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillSurvivalButton->Location = System::Drawing::Point(35, 479);
			this->skillSurvivalButton->Name = L"skillSurvivalButton";
			this->skillSurvivalButton->Size = System::Drawing::Size(90, 21);
			this->skillSurvivalButton->TabIndex = 39;
			this->skillSurvivalButton->Text = L"Survival";
			this->skillSurvivalButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillSurvivalButton->UseVisualStyleBackColor = true;
			// 
			// skillStealthButton
			// 
			this->skillStealthButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillStealthButton->Location = System::Drawing::Point(35, 452);
			this->skillStealthButton->Name = L"skillStealthButton";
			this->skillStealthButton->Size = System::Drawing::Size(90, 21);
			this->skillStealthButton->TabIndex = 38;
			this->skillStealthButton->Text = L"Stealth";
			this->skillStealthButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillStealthButton->UseVisualStyleBackColor = true;
			// 
			// skillSofHandButton
			// 
			this->skillSofHandButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillSofHandButton->Location = System::Drawing::Point(35, 427);
			this->skillSofHandButton->Name = L"skillSofHandButton";
			this->skillSofHandButton->Size = System::Drawing::Size(90, 21);
			this->skillSofHandButton->TabIndex = 37;
			this->skillSofHandButton->Text = L"Sleight of Hand";
			this->skillSofHandButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillSofHandButton->UseVisualStyleBackColor = true;
			// 
			// skillShaLoreButton
			// 
			this->skillShaLoreButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillShaLoreButton->Location = System::Drawing::Point(35, 402);
			this->skillShaLoreButton->Name = L"skillShaLoreButton";
			this->skillShaLoreButton->Size = System::Drawing::Size(90, 21);
			this->skillShaLoreButton->TabIndex = 36;
			this->skillShaLoreButton->Text = L"Shadow-Lore";
			this->skillShaLoreButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillShaLoreButton->UseVisualStyleBackColor = true;
			// 
			// skillRiddleButton
			// 
			this->skillRiddleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillRiddleButton->Location = System::Drawing::Point(35, 375);
			this->skillRiddleButton->Name = L"skillRiddleButton";
			this->skillRiddleButton->Size = System::Drawing::Size(90, 21);
			this->skillRiddleButton->TabIndex = 35;
			this->skillRiddleButton->Text = L"Riddle";
			this->skillRiddleButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillRiddleButton->UseVisualStyleBackColor = true;
			// 
			// skillPersuasionButton
			// 
			this->skillPersuasionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillPersuasionButton->Location = System::Drawing::Point(35, 350);
			this->skillPersuasionButton->Name = L"skillPersuasionButton";
			this->skillPersuasionButton->Size = System::Drawing::Size(90, 21);
			this->skillPersuasionButton->TabIndex = 34;
			this->skillPersuasionButton->Text = L"Persuasion";
			this->skillPersuasionButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillPersuasionButton->UseVisualStyleBackColor = true;
			// 
			// skillPerformanceButton
			// 
			this->skillPerformanceButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillPerformanceButton->Location = System::Drawing::Point(35, 325);
			this->skillPerformanceButton->Name = L"skillPerformanceButton";
			this->skillPerformanceButton->Size = System::Drawing::Size(90, 21);
			this->skillPerformanceButton->TabIndex = 33;
			this->skillPerformanceButton->Text = L"Performance";
			this->skillPerformanceButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillPerformanceButton->UseVisualStyleBackColor = true;
			// 
			// skillPerceptionButton
			// 
			this->skillPerceptionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillPerceptionButton->Location = System::Drawing::Point(35, 298);
			this->skillPerceptionButton->Name = L"skillPerceptionButton";
			this->skillPerceptionButton->Size = System::Drawing::Size(90, 21);
			this->skillPerceptionButton->TabIndex = 32;
			this->skillPerceptionButton->Text = L"Perception";
			this->skillPerceptionButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillPerceptionButton->UseVisualStyleBackColor = true;
			// 
			// skillNatureButton
			// 
			this->skillNatureButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillNatureButton->Location = System::Drawing::Point(35, 273);
			this->skillNatureButton->Name = L"skillNatureButton";
			this->skillNatureButton->Size = System::Drawing::Size(90, 21);
			this->skillNatureButton->TabIndex = 31;
			this->skillNatureButton->Text = L"Nature";
			this->skillNatureButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillNatureButton->UseVisualStyleBackColor = true;
			// 
			// skillMedicineButton
			// 
			this->skillMedicineButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillMedicineButton->Location = System::Drawing::Point(35, 246);
			this->skillMedicineButton->Name = L"skillMedicineButton";
			this->skillMedicineButton->Size = System::Drawing::Size(90, 21);
			this->skillMedicineButton->TabIndex = 30;
			this->skillMedicineButton->Text = L"Medicine";
			this->skillMedicineButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillMedicineButton->UseVisualStyleBackColor = true;
			// 
			// skillLoreButton
			// 
			this->skillLoreButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillLoreButton->Location = System::Drawing::Point(35, 219);
			this->skillLoreButton->Name = L"skillLoreButton";
			this->skillLoreButton->Size = System::Drawing::Size(90, 21);
			this->skillLoreButton->TabIndex = 29;
			this->skillLoreButton->Text = L"Lore";
			this->skillLoreButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillLoreButton->UseVisualStyleBackColor = true;
			// 
			// skillInvestigationButton
			// 
			this->skillInvestigationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillInvestigationButton->Location = System::Drawing::Point(35, 194);
			this->skillInvestigationButton->Name = L"skillInvestigationButton";
			this->skillInvestigationButton->Size = System::Drawing::Size(90, 21);
			this->skillInvestigationButton->TabIndex = 28;
			this->skillInvestigationButton->Text = L"Investigation";
			this->skillInvestigationButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillInvestigationButton->UseVisualStyleBackColor = true;
			// 
			// skillIntimidationButton
			// 
			this->skillIntimidationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillIntimidationButton->Location = System::Drawing::Point(35, 167);
			this->skillIntimidationButton->Name = L"skillIntimidationButton";
			this->skillIntimidationButton->Size = System::Drawing::Size(90, 21);
			this->skillIntimidationButton->TabIndex = 27;
			this->skillIntimidationButton->Text = L"Intimidation";
			this->skillIntimidationButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillIntimidationButton->UseVisualStyleBackColor = true;
			// 
			// skillInsightButton
			// 
			this->skillInsightButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillInsightButton->Location = System::Drawing::Point(35, 140);
			this->skillInsightButton->Name = L"skillInsightButton";
			this->skillInsightButton->Size = System::Drawing::Size(90, 21);
			this->skillInsightButton->TabIndex = 26;
			this->skillInsightButton->Text = L"Insight";
			this->skillInsightButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillInsightButton->UseVisualStyleBackColor = true;
			// 
			// skillHistoryButton
			// 
			this->skillHistoryButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillHistoryButton->Location = System::Drawing::Point(35, 115);
			this->skillHistoryButton->Name = L"skillHistoryButton";
			this->skillHistoryButton->Size = System::Drawing::Size(90, 21);
			this->skillHistoryButton->TabIndex = 25;
			this->skillHistoryButton->Text = L"History";
			this->skillHistoryButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillHistoryButton->UseVisualStyleBackColor = true;
			// 
			// skillDeceptionButton
			// 
			this->skillDeceptionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillDeceptionButton->Location = System::Drawing::Point(35, 91);
			this->skillDeceptionButton->Name = L"skillDeceptionButton";
			this->skillDeceptionButton->Size = System::Drawing::Size(90, 21);
			this->skillDeceptionButton->TabIndex = 24;
			this->skillDeceptionButton->Text = L"Deception";
			this->skillDeceptionButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillDeceptionButton->UseVisualStyleBackColor = true;
			// 
			// skillAthleticsButton
			// 
			this->skillAthleticsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillAthleticsButton->Location = System::Drawing::Point(35, 67);
			this->skillAthleticsButton->Name = L"skillAthleticsButton";
			this->skillAthleticsButton->Size = System::Drawing::Size(90, 21);
			this->skillAthleticsButton->TabIndex = 23;
			this->skillAthleticsButton->Text = L"Athletics";
			this->skillAthleticsButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillAthleticsButton->UseVisualStyleBackColor = true;
			// 
			// skillAniHandButton
			// 
			this->skillAniHandButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillAniHandButton->Location = System::Drawing::Point(35, 42);
			this->skillAniHandButton->Name = L"skillAniHandButton";
			this->skillAniHandButton->Size = System::Drawing::Size(90, 21);
			this->skillAniHandButton->TabIndex = 21;
			this->skillAniHandButton->Text = L"Animal Handling";
			this->skillAniHandButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->skillAniHandButton->UseVisualStyleBackColor = true;
			// 
			// skillAcrobaticButton
			// 
			this->skillAcrobaticButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillAcrobaticButton->Location = System::Drawing::Point(35, 18);
			this->skillAcrobaticButton->Name = L"skillAcrobaticButton";
			this->skillAcrobaticButton->Size = System::Drawing::Size(90, 21);
			this->skillAcrobaticButton->TabIndex = 20;
			this->skillAcrobaticButton->Text = L"Acrobatics";
			this->skillAcrobaticButton->UseVisualStyleBackColor = true;
			// 
			// acrobaticsCheckBox
			// 
			this->acrobaticsCheckBox->AutoSize = true;
			this->acrobaticsCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acrobaticsCheckBox->Location = System::Drawing::Point(2, 20);
			this->acrobaticsCheckBox->Name = L"acrobaticsCheckBox";
			this->acrobaticsCheckBox->Size = System::Drawing::Size(38, 17);
			this->acrobaticsCheckBox->TabIndex = 19;
			this->acrobaticsCheckBox->Text = L"+9";
			this->acrobaticsCheckBox->UseVisualStyleBackColor = true;
			// 
			// animalCheckBox
			// 
			this->animalCheckBox->AutoSize = true;
			this->animalCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->animalCheckBox->Location = System::Drawing::Point(2, 44);
			this->animalCheckBox->Name = L"animalCheckBox";
			this->animalCheckBox->Size = System::Drawing::Size(38, 17);
			this->animalCheckBox->TabIndex = 22;
			this->animalCheckBox->Text = L"+9";
			this->animalCheckBox->UseVisualStyleBackColor = true;
			this->animalCheckBox->CheckedChanged += gcnew System::EventHandler(this, &ExampleTest::checkBox2_CheckedChanged);
			// 
			// savingThrowFrame
			// 
			this->savingThrowFrame->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->savingThrowFrame->Controls->Add(this->checkBox6);
			this->savingThrowFrame->Controls->Add(this->sthrowCorCheckBox);
			this->savingThrowFrame->Controls->Add(this->checkBox5);
			this->savingThrowFrame->Controls->Add(this->checkBox4);
			this->savingThrowFrame->Controls->Add(this->checkBox3);
			this->savingThrowFrame->Controls->Add(this->sthrowChaCheckBox);
			this->savingThrowFrame->Controls->Add(this->sthrowWisCheckBox);
			this->savingThrowFrame->Controls->Add(this->sthrowIntCheckBox);
			this->savingThrowFrame->Controls->Add(this->sthrowConCheckBox);
			this->savingThrowFrame->Controls->Add(this->sthrowDexCheckBox);
			this->savingThrowFrame->Controls->Add(this->checkBox2);
			this->savingThrowFrame->Controls->Add(this->checkBox1);
			this->savingThrowFrame->Controls->Add(this->sthrowStrButton);
			this->savingThrowFrame->Controls->Add(this->sthrowStrCheckBox);
			this->savingThrowFrame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->savingThrowFrame->Location = System::Drawing::Point(268, 423);
			this->savingThrowFrame->Name = L"savingThrowFrame";
			this->savingThrowFrame->Size = System::Drawing::Size(148, 199);
			this->savingThrowFrame->TabIndex = 19;
			this->savingThrowFrame->TabStop = false;
			this->savingThrowFrame->Text = L"Saving Throws";
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox6->Location = System::Drawing::Point(7, 161);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(44, 17);
			this->checkBox6->TabIndex = 13;
			this->checkBox6->Text = L"+11";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// sthrowCorCheckBox
			// 
			this->sthrowCorCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sthrowCorCheckBox->Location = System::Drawing::Point(56, 158);
			this->sthrowCorCheckBox->Name = L"sthrowCorCheckBox";
			this->sthrowCorCheckBox->Size = System::Drawing::Size(75, 22);
			this->sthrowCorCheckBox->TabIndex = 12;
			this->sthrowCorCheckBox->Text = L"Corruption";
			this->sthrowCorCheckBox->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(7, 141);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(44, 17);
			this->checkBox5->TabIndex = 11;
			this->checkBox5->Text = L"+11";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(7, 116);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(44, 17);
			this->checkBox4->TabIndex = 10;
			this->checkBox4->Text = L"+11";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(7, 92);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(44, 17);
			this->checkBox3->TabIndex = 9;
			this->checkBox3->Text = L"+11";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// sthrowChaCheckBox
			// 
			this->sthrowChaCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sthrowChaCheckBox->Location = System::Drawing::Point(56, 137);
			this->sthrowChaCheckBox->Name = L"sthrowChaCheckBox";
			this->sthrowChaCheckBox->Size = System::Drawing::Size(75, 22);
			this->sthrowChaCheckBox->TabIndex = 8;
			this->sthrowChaCheckBox->Text = L"Charisma";
			this->sthrowChaCheckBox->UseVisualStyleBackColor = true;
			// 
			// sthrowWisCheckBox
			// 
			this->sthrowWisCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sthrowWisCheckBox->Location = System::Drawing::Point(56, 112);
			this->sthrowWisCheckBox->Name = L"sthrowWisCheckBox";
			this->sthrowWisCheckBox->Size = System::Drawing::Size(75, 22);
			this->sthrowWisCheckBox->TabIndex = 7;
			this->sthrowWisCheckBox->Text = L"Wisdom";
			this->sthrowWisCheckBox->UseVisualStyleBackColor = true;
			// 
			// sthrowIntCheckBox
			// 
			this->sthrowIntCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sthrowIntCheckBox->Location = System::Drawing::Point(56, 88);
			this->sthrowIntCheckBox->Name = L"sthrowIntCheckBox";
			this->sthrowIntCheckBox->Size = System::Drawing::Size(75, 22);
			this->sthrowIntCheckBox->TabIndex = 6;
			this->sthrowIntCheckBox->Text = L"Intelligence";
			this->sthrowIntCheckBox->UseVisualStyleBackColor = true;
			// 
			// sthrowConCheckBox
			// 
			this->sthrowConCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sthrowConCheckBox->Location = System::Drawing::Point(56, 64);
			this->sthrowConCheckBox->Name = L"sthrowConCheckBox";
			this->sthrowConCheckBox->Size = System::Drawing::Size(75, 22);
			this->sthrowConCheckBox->TabIndex = 5;
			this->sthrowConCheckBox->Text = L"Constitution";
			this->sthrowConCheckBox->UseVisualStyleBackColor = true;
			// 
			// sthrowDexCheckBox
			// 
			this->sthrowDexCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sthrowDexCheckBox->Location = System::Drawing::Point(56, 40);
			this->sthrowDexCheckBox->Name = L"sthrowDexCheckBox";
			this->sthrowDexCheckBox->Size = System::Drawing::Size(75, 22);
			this->sthrowDexCheckBox->TabIndex = 4;
			this->sthrowDexCheckBox->Text = L"Dexterity";
			this->sthrowDexCheckBox->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(6, 67);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(44, 17);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"+11";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(6, 44);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(44, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"+11";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// sthrowStrButton
			// 
			this->sthrowStrButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sthrowStrButton->Location = System::Drawing::Point(56, 17);
			this->sthrowStrButton->Name = L"sthrowStrButton";
			this->sthrowStrButton->Size = System::Drawing::Size(75, 22);
			this->sthrowStrButton->TabIndex = 1;
			this->sthrowStrButton->Text = L"Strength";
			this->sthrowStrButton->UseVisualStyleBackColor = true;
			// 
			// sthrowStrCheckBox
			// 
			this->sthrowStrCheckBox->AutoSize = true;
			this->sthrowStrCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sthrowStrCheckBox->Location = System::Drawing::Point(6, 22);
			this->sthrowStrCheckBox->Name = L"sthrowStrCheckBox";
			this->sthrowStrCheckBox->Size = System::Drawing::Size(44, 17);
			this->sthrowStrCheckBox->TabIndex = 0;
			this->sthrowStrCheckBox->Text = L"+11";
			this->sthrowStrCheckBox->UseVisualStyleBackColor = true;
			// 
			// proficiencyBonusFrame
			// 
			this->proficiencyBonusFrame->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->proficiencyBonusFrame->Controls->Add(this->proboTextBox);
			this->proficiencyBonusFrame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->proficiencyBonusFrame->Location = System::Drawing::Point(268, 353);
			this->proficiencyBonusFrame->Name = L"proficiencyBonusFrame";
			this->proficiencyBonusFrame->Size = System::Drawing::Size(75, 64);
			this->proficiencyBonusFrame->TabIndex = 20;
			this->proficiencyBonusFrame->TabStop = false;
			this->proficiencyBonusFrame->Text = L"Proficiency Bonus";
			// 
			// proboTextBox
			// 
			this->proboTextBox->BackColor = System::Drawing::SystemColors::Info;
			this->proboTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->proboTextBox->Location = System::Drawing::Point(10, 32);
			this->proboTextBox->Name = L"proboTextBox";
			this->proboTextBox->Size = System::Drawing::Size(41, 26);
			this->proboTextBox->TabIndex = 21;
			this->proboTextBox->Text = L"10";
			this->proboTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// initiativeFrame
			// 
			this->initiativeFrame->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->initiativeFrame->Controls->Add(this->initiativeTextBox);
			this->initiativeFrame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->initiativeFrame->Location = System::Drawing::Point(342, 353);
			this->initiativeFrame->Name = L"initiativeFrame";
			this->initiativeFrame->Size = System::Drawing::Size(74, 64);
			this->initiativeFrame->TabIndex = 21;
			this->initiativeFrame->TabStop = false;
			this->initiativeFrame->Text = L"Initiative";
			// 
			// initiativeTextBox
			// 
			this->initiativeTextBox->BackColor = System::Drawing::SystemColors::Info;
			this->initiativeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->initiativeTextBox->Location = System::Drawing::Point(16, 26);
			this->initiativeTextBox->Name = L"initiativeTextBox";
			this->initiativeTextBox->Size = System::Drawing::Size(41, 26);
			this->initiativeTextBox->TabIndex = 22;
			this->initiativeTextBox->Text = L"10";
			this->initiativeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// inspirationCheckBox
			// 
			this->inspirationCheckBox->AutoSize = true;
			this->inspirationCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inspirationCheckBox->Location = System::Drawing::Point(7, 7);
			this->inspirationCheckBox->Name = L"inspirationCheckBox";
			this->inspirationCheckBox->Size = System::Drawing::Size(85, 17);
			this->inspirationCheckBox->TabIndex = 22;
			this->inspirationCheckBox->Text = L"Inspiration";
			this->inspirationCheckBox->UseVisualStyleBackColor = true;
			// 
			// inspirationFram
			// 
			this->inspirationFram->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->inspirationFram->Controls->Add(this->inspirationCheckBox);
			this->inspirationFram->Location = System::Drawing::Point(143, 48);
			this->inspirationFram->Name = L"inspirationFram";
			this->inspirationFram->Size = System::Drawing::Size(109, 24);
			this->inspirationFram->TabIndex = 23;
			this->inspirationFram->TabStop = false;
			// 
			// passivePerceptionFrame
			// 
			this->passivePerceptionFrame->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->passivePerceptionFrame->Controls->Add(this->pasPerTextBox);
			this->passivePerceptionFrame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->passivePerceptionFrame->Location = System::Drawing::Point(268, 284);
			this->passivePerceptionFrame->Name = L"passivePerceptionFrame";
			this->passivePerceptionFrame->Size = System::Drawing::Size(75, 63);
			this->passivePerceptionFrame->TabIndex = 24;
			this->passivePerceptionFrame->TabStop = false;
			this->passivePerceptionFrame->Text = L"Passive Perception";
			// 
			// pasPerTextBox
			// 
			this->pasPerTextBox->BackColor = System::Drawing::SystemColors::Info;
			this->pasPerTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pasPerTextBox->Location = System::Drawing::Point(10, 30);
			this->pasPerTextBox->Name = L"pasPerTextBox";
			this->pasPerTextBox->Size = System::Drawing::Size(41, 26);
			this->pasPerTextBox->TabIndex = 21;
			this->pasPerTextBox->Text = L"10";
			this->pasPerTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// speedFrame
			// 
			this->speedFrame->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->speedFrame->Controls->Add(this->speedTextBox);
			this->speedFrame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->speedFrame->Location = System::Drawing::Point(342, 284);
			this->speedFrame->Name = L"speedFrame";
			this->speedFrame->Size = System::Drawing::Size(75, 64);
			this->speedFrame->TabIndex = 25;
			this->speedFrame->TabStop = false;
			this->speedFrame->Text = L"Speed";
			// 
			// speedTextBox
			// 
			this->speedTextBox->BackColor = System::Drawing::SystemColors::Info;
			this->speedTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->speedTextBox->Location = System::Drawing::Point(16, 27);
			this->speedTextBox->Name = L"speedTextBox";
			this->speedTextBox->Size = System::Drawing::Size(41, 26);
			this->speedTextBox->TabIndex = 21;
			this->speedTextBox->Text = L"10";
			this->speedTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attacksFrame
			// 
			this->attacksFrame->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->attacksFrame->Controls->Add(this->groupBox2);
			this->attacksFrame->Controls->Add(this->groupBox1);
			this->attacksFrame->Controls->Add(this->attack4Button);
			this->attacksFrame->Controls->Add(this->damageType4List);
			this->attacksFrame->Controls->Add(this->damageDice4List);
			this->attacksFrame->Controls->Add(this->toHit4TextBox);
			this->attacksFrame->Controls->Add(this->weapon4TextBox);
			this->attacksFrame->Controls->Add(this->attack3Button);
			this->attacksFrame->Controls->Add(this->damageType3List);
			this->attacksFrame->Controls->Add(this->damageDice3List);
			this->attacksFrame->Controls->Add(this->toHit3TextBox);
			this->attacksFrame->Controls->Add(this->weapon3TextBox);
			this->attacksFrame->Controls->Add(this->attack2Button);
			this->attacksFrame->Controls->Add(this->damageType2List);
			this->attacksFrame->Controls->Add(this->damageDice2List);
			this->attacksFrame->Controls->Add(this->toHit2TextBox);
			this->attacksFrame->Controls->Add(this->weapon2TextBox);
			this->attacksFrame->Controls->Add(this->attack1Button);
			this->attacksFrame->Controls->Add(this->damageType1List);
			this->attacksFrame->Controls->Add(this->dexAttackCheckBox);
			this->attacksFrame->Controls->Add(this->damageDice1List);
			this->attacksFrame->Controls->Add(this->weaponDmgTypeLabel);
			this->attacksFrame->Controls->Add(this->damageLabel);
			this->attacksFrame->Controls->Add(this->toHitLabel);
			this->attacksFrame->Controls->Add(this->weaponNameLabel);
			this->attacksFrame->Controls->Add(this->toHit1TextBox);
			this->attacksFrame->Controls->Add(this->weapon1TextBox);
			this->attacksFrame->Controls->Add(this->strengthAttackCheckBox);
			this->attacksFrame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attacksFrame->Location = System::Drawing::Point(268, 57);
			this->attacksFrame->Name = L"attacksFrame";
			this->attacksFrame->Size = System::Drawing::Size(542, 221);
			this->attacksFrame->TabIndex = 26;
			this->attacksFrame->TabStop = false;
			this->attacksFrame->Text = L"Attacks";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tempHitPointButton);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->deathFailLabel);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->deathSaveLabel);
			this->groupBox1->Controls->Add(this->deathSaveButton);
			this->groupBox1->Controls->Add(this->hitDieCounter);
			this->groupBox1->Controls->Add(this->totalHitDieLabel);
			this->groupBox1->Controls->Add(this->hitDieList);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->hitPointHealButton);
			this->groupBox1->Controls->Add(this->hitPointDamageButton);
			this->groupBox1->Controls->Add(this->hitPointText);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(0, 131);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(215, 90);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Hit Points";
			// 
			// deathSaveButton
			// 
			this->deathSaveButton->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->deathSaveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deathSaveButton->Location = System::Drawing::Point(124, 5);
			this->deathSaveButton->Name = L"deathSaveButton";
			this->deathSaveButton->Size = System::Drawing::Size(85, 20);
			this->deathSaveButton->TabIndex = 7;
			this->deathSaveButton->Text = L"Death Save";
			this->deathSaveButton->UseVisualStyleBackColor = false;
			// 
			// hitDieCounter
			// 
			this->hitDieCounter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hitDieCounter->Location = System::Drawing::Point(144, 67);
			this->hitDieCounter->Name = L"hitDieCounter";
			this->hitDieCounter->Size = System::Drawing::Size(32, 20);
			this->hitDieCounter->TabIndex = 6;
			// 
			// totalHitDieLabel
			// 
			this->totalHitDieLabel->AutoSize = true;
			this->totalHitDieLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->totalHitDieLabel->Location = System::Drawing::Point(110, 70);
			this->totalHitDieLabel->Name = L"totalHitDieLabel";
			this->totalHitDieLabel->Size = System::Drawing::Size(38, 13);
			this->totalHitDieLabel->TabIndex = 5;
			this->totalHitDieLabel->Text = L"Total:";
			// 
			// hitDieList
			// 
			this->hitDieList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->hitDieList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->hitDieList->FormattingEnabled = true;
			this->hitDieList->Location = System::Drawing::Point(50, 70);
			this->hitDieList->Name = L"hitDieList";
			this->hitDieList->Size = System::Drawing::Size(55, 17);
			this->hitDieList->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Hit Die:";
			// 
			// hitPointHealButton
			// 
			this->hitPointHealButton->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->hitPointHealButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->hitPointHealButton->Location = System::Drawing::Point(70, 27);
			this->hitPointHealButton->Name = L"hitPointHealButton";
			this->hitPointHealButton->Size = System::Drawing::Size(48, 20);
			this->hitPointHealButton->TabIndex = 2;
			this->hitPointHealButton->Text = L"Heal";
			this->hitPointHealButton->UseVisualStyleBackColor = false;
			// 
			// hitPointDamageButton
			// 
			this->hitPointDamageButton->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->hitPointDamageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->hitPointDamageButton->Location = System::Drawing::Point(70, 10);
			this->hitPointDamageButton->Name = L"hitPointDamageButton";
			this->hitPointDamageButton->Size = System::Drawing::Size(48, 20);
			this->hitPointDamageButton->TabIndex = 1;
			this->hitPointDamageButton->Text = L"Damage";
			this->hitPointDamageButton->UseVisualStyleBackColor = false;
			// 
			// hitPointText
			// 
			this->hitPointText->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->hitPointText->Enabled = false;
			this->hitPointText->Location = System::Drawing::Point(6, 19);
			this->hitPointText->Name = L"hitPointText";
			this->hitPointText->Size = System::Drawing::Size(51, 38);
			this->hitPointText->TabIndex = 0;
			this->hitPointText->Text = L"";
			// 
			// attack4Button
			// 
			this->attack4Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->attack4Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attack4Button->Location = System::Drawing::Point(403, 101);
			this->attack4Button->Name = L"attack4Button";
			this->attack4Button->Size = System::Drawing::Size(89, 27);
			this->attack4Button->TabIndex = 27;
			this->attack4Button->Text = L"Attack";
			this->attack4Button->UseVisualStyleBackColor = false;
			// 
			// damageType4List
			// 
			this->damageType4List->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->damageType4List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->damageType4List->FormattingEnabled = true;
			this->damageType4List->Location = System::Drawing::Point(294, 105);
			this->damageType4List->Name = L"damageType4List";
			this->damageType4List->Size = System::Drawing::Size(103, 21);
			this->damageType4List->TabIndex = 26;
			// 
			// damageDice4List
			// 
			this->damageDice4List->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->damageDice4List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->damageDice4List->FormattingEnabled = true;
			this->damageDice4List->Location = System::Drawing::Point(209, 105);
			this->damageDice4List->Name = L"damageDice4List";
			this->damageDice4List->Size = System::Drawing::Size(79, 21);
			this->damageDice4List->TabIndex = 25;
			// 
			// toHit4TextBox
			// 
			this->toHit4TextBox->BackColor = System::Drawing::SystemColors::Info;
			this->toHit4TextBox->Enabled = false;
			this->toHit4TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toHit4TextBox->Location = System::Drawing::Point(154, 107);
			this->toHit4TextBox->Name = L"toHit4TextBox";
			this->toHit4TextBox->Size = System::Drawing::Size(49, 23);
			this->toHit4TextBox->TabIndex = 24;
			// 
			// weapon4TextBox
			// 
			this->weapon4TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weapon4TextBox->Location = System::Drawing::Point(0, 106);
			this->weapon4TextBox->Name = L"weapon4TextBox";
			this->weapon4TextBox->Size = System::Drawing::Size(148, 20);
			this->weapon4TextBox->TabIndex = 23;
			// 
			// attack3Button
			// 
			this->attack3Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->attack3Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attack3Button->Location = System::Drawing::Point(403, 79);
			this->attack3Button->Name = L"attack3Button";
			this->attack3Button->Size = System::Drawing::Size(89, 27);
			this->attack3Button->TabIndex = 22;
			this->attack3Button->Text = L"Attack";
			this->attack3Button->UseVisualStyleBackColor = false;
			// 
			// damageType3List
			// 
			this->damageType3List->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->damageType3List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->damageType3List->FormattingEnabled = true;
			this->damageType3List->Location = System::Drawing::Point(294, 81);
			this->damageType3List->Name = L"damageType3List";
			this->damageType3List->Size = System::Drawing::Size(103, 21);
			this->damageType3List->TabIndex = 21;
			// 
			// damageDice3List
			// 
			this->damageDice3List->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->damageDice3List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->damageDice3List->FormattingEnabled = true;
			this->damageDice3List->Location = System::Drawing::Point(209, 81);
			this->damageDice3List->Name = L"damageDice3List";
			this->damageDice3List->Size = System::Drawing::Size(79, 21);
			this->damageDice3List->TabIndex = 20;
			// 
			// toHit3TextBox
			// 
			this->toHit3TextBox->BackColor = System::Drawing::SystemColors::Info;
			this->toHit3TextBox->Enabled = false;
			this->toHit3TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toHit3TextBox->Location = System::Drawing::Point(154, 81);
			this->toHit3TextBox->Name = L"toHit3TextBox";
			this->toHit3TextBox->Size = System::Drawing::Size(49, 23);
			this->toHit3TextBox->TabIndex = 19;
			// 
			// weapon3TextBox
			// 
			this->weapon3TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weapon3TextBox->Location = System::Drawing::Point(0, 84);
			this->weapon3TextBox->Name = L"weapon3TextBox";
			this->weapon3TextBox->Size = System::Drawing::Size(148, 20);
			this->weapon3TextBox->TabIndex = 18;
			// 
			// attack2Button
			// 
			this->attack2Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->attack2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attack2Button->Location = System::Drawing::Point(403, 56);
			this->attack2Button->Name = L"attack2Button";
			this->attack2Button->Size = System::Drawing::Size(89, 27);
			this->attack2Button->TabIndex = 17;
			this->attack2Button->Text = L"Attack";
			this->attack2Button->UseVisualStyleBackColor = false;
			// 
			// damageType2List
			// 
			this->damageType2List->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->damageType2List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->damageType2List->FormattingEnabled = true;
			this->damageType2List->Location = System::Drawing::Point(294, 58);
			this->damageType2List->Name = L"damageType2List";
			this->damageType2List->Size = System::Drawing::Size(103, 21);
			this->damageType2List->TabIndex = 16;
			// 
			// damageDice2List
			// 
			this->damageDice2List->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->damageDice2List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->damageDice2List->FormattingEnabled = true;
			this->damageDice2List->Location = System::Drawing::Point(209, 57);
			this->damageDice2List->Name = L"damageDice2List";
			this->damageDice2List->Size = System::Drawing::Size(79, 21);
			this->damageDice2List->TabIndex = 15;
			// 
			// toHit2TextBox
			// 
			this->toHit2TextBox->BackColor = System::Drawing::SystemColors::Info;
			this->toHit2TextBox->Enabled = false;
			this->toHit2TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toHit2TextBox->Location = System::Drawing::Point(154, 58);
			this->toHit2TextBox->Name = L"toHit2TextBox";
			this->toHit2TextBox->Size = System::Drawing::Size(49, 23);
			this->toHit2TextBox->TabIndex = 14;
			// 
			// weapon2TextBox
			// 
			this->weapon2TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weapon2TextBox->Location = System::Drawing::Point(0, 58);
			this->weapon2TextBox->Name = L"weapon2TextBox";
			this->weapon2TextBox->Size = System::Drawing::Size(148, 20);
			this->weapon2TextBox->TabIndex = 13;
			// 
			// attack1Button
			// 
			this->attack1Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->attack1Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attack1Button->Location = System::Drawing::Point(403, 28);
			this->attack1Button->Name = L"attack1Button";
			this->attack1Button->Size = System::Drawing::Size(89, 27);
			this->attack1Button->TabIndex = 12;
			this->attack1Button->Text = L"Attack";
			this->attack1Button->UseVisualStyleBackColor = false;
			// 
			// damageType1List
			// 
			this->damageType1List->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->damageType1List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->damageType1List->FormattingEnabled = true;
			this->damageType1List->Location = System::Drawing::Point(294, 32);
			this->damageType1List->Name = L"damageType1List";
			this->damageType1List->Size = System::Drawing::Size(103, 21);
			this->damageType1List->TabIndex = 11;
			// 
			// dexAttackCheckBox
			// 
			this->dexAttackCheckBox->AutoSize = true;
			this->dexAttackCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dexAttackCheckBox->Location = System::Drawing::Point(469, 0);
			this->dexAttackCheckBox->Name = L"dexAttackCheckBox";
			this->dexAttackCheckBox->Size = System::Drawing::Size(67, 17);
			this->dexAttackCheckBox->TabIndex = 10;
			this->dexAttackCheckBox->Text = L"Dexterity";
			this->dexAttackCheckBox->UseVisualStyleBackColor = true;
			// 
			// damageDice1List
			// 
			this->damageDice1List->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->damageDice1List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->damageDice1List->FormattingEnabled = true;
			this->damageDice1List->Location = System::Drawing::Point(209, 32);
			this->damageDice1List->Name = L"damageDice1List";
			this->damageDice1List->Size = System::Drawing::Size(79, 21);
			this->damageDice1List->TabIndex = 8;
			// 
			// weaponDmgTypeLabel
			// 
			this->weaponDmgTypeLabel->AutoSize = true;
			this->weaponDmgTypeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->weaponDmgTypeLabel->Location = System::Drawing::Point(327, 17);
			this->weaponDmgTypeLabel->Name = L"weaponDmgTypeLabel";
			this->weaponDmgTypeLabel->Size = System::Drawing::Size(29, 13);
			this->weaponDmgTypeLabel->TabIndex = 7;
			this->weaponDmgTypeLabel->Text = L"Type";
			// 
			// damageLabel
			// 
			this->damageLabel->AutoSize = true;
			this->damageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->damageLabel->Location = System::Drawing::Point(227, 19);
			this->damageLabel->Name = L"damageLabel";
			this->damageLabel->Size = System::Drawing::Size(47, 13);
			this->damageLabel->TabIndex = 5;
			this->damageLabel->Text = L"Damage";
			// 
			// toHitLabel
			// 
			this->toHitLabel->AutoSize = true;
			this->toHitLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toHitLabel->Location = System::Drawing::Point(161, 19);
			this->toHitLabel->Name = L"toHitLabel";
			this->toHitLabel->Size = System::Drawing::Size(33, 13);
			this->toHitLabel->TabIndex = 4;
			this->toHitLabel->Text = L"To Hit";
			// 
			// weaponNameLabel
			// 
			this->weaponNameLabel->AutoSize = true;
			this->weaponNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weaponNameLabel->Location = System::Drawing::Point(35, 19);
			this->weaponNameLabel->Name = L"weaponNameLabel";
			this->weaponNameLabel->Size = System::Drawing::Size(76, 13);
			this->weaponNameLabel->TabIndex = 3;
			this->weaponNameLabel->Text = L"Weapon Name";
			// 
			// toHit1TextBox
			// 
			this->toHit1TextBox->BackColor = System::Drawing::SystemColors::Info;
			this->toHit1TextBox->Enabled = false;
			this->toHit1TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toHit1TextBox->Location = System::Drawing::Point(154, 33);
			this->toHit1TextBox->Name = L"toHit1TextBox";
			this->toHit1TextBox->Size = System::Drawing::Size(49, 23);
			this->toHit1TextBox->TabIndex = 1;
			// 
			// weapon1TextBox
			// 
			this->weapon1TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weapon1TextBox->Location = System::Drawing::Point(0, 33);
			this->weapon1TextBox->Name = L"weapon1TextBox";
			this->weapon1TextBox->Size = System::Drawing::Size(148, 20);
			this->weapon1TextBox->TabIndex = 0;
			// 
			// strengthAttackCheckBox
			// 
			this->strengthAttackCheckBox->AutoSize = true;
			this->strengthAttackCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->strengthAttackCheckBox->Location = System::Drawing::Point(397, 0);
			this->strengthAttackCheckBox->Name = L"strengthAttackCheckBox";
			this->strengthAttackCheckBox->Size = System::Drawing::Size(66, 17);
			this->strengthAttackCheckBox->TabIndex = 9;
			this->strengthAttackCheckBox->Text = L"Strength";
			this->strengthAttackCheckBox->UseVisualStyleBackColor = true;
			// 
			// cultureLabel
			// 
			this->cultureLabel->AutoSize = true;
			this->cultureLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cultureLabel->Location = System::Drawing::Point(486, 9);
			this->cultureLabel->Name = L"cultureLabel";
			this->cultureLabel->Size = System::Drawing::Size(40, 13);
			this->cultureLabel->TabIndex = 27;
			this->cultureLabel->Text = L"Culture";
			// 
			// cultureList
			// 
			this->cultureList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cultureList->FormattingEnabled = true;
			this->cultureList->Location = System::Drawing::Point(527, 3);
			this->cultureList->Name = L"cultureList";
			this->cultureList->Size = System::Drawing::Size(97, 21);
			this->cultureList->TabIndex = 28;
			// 
			// miserableLabel
			// 
			this->miserableLabel->AutoSize = true;
			this->miserableLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->miserableLabel->Location = System::Drawing::Point(523, 36);
			this->miserableLabel->Name = L"miserableLabel";
			this->miserableLabel->Size = System::Drawing::Size(52, 13);
			this->miserableLabel->TabIndex = 29;
			this->miserableLabel->Text = L"Miserable";
			// 
			// miserableCounter
			// 
			this->miserableCounter->Location = System::Drawing::Point(581, 32);
			this->miserableCounter->Name = L"miserableCounter";
			this->miserableCounter->Size = System::Drawing::Size(43, 20);
			this->miserableCounter->TabIndex = 30;
			// 
			// deathSaveLabel
			// 
			this->deathSaveLabel->AutoSize = true;
			this->deathSaveLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deathSaveLabel->Location = System::Drawing::Point(141, 26);
			this->deathSaveLabel->Name = L"deathSaveLabel";
			this->deathSaveLabel->Size = System::Drawing::Size(36, 13);
			this->deathSaveLabel->TabIndex = 8;
			this->deathSaveLabel->Text = L"Save";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(179, 21);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(30, 19);
			this->numericUpDown1->TabIndex = 9;
			// 
			// deathFailLabel
			// 
			this->deathFailLabel->AutoSize = true;
			this->deathFailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deathFailLabel->Location = System::Drawing::Point(149, 44);
			this->deathFailLabel->Name = L"deathFailLabel";
			this->deathFailLabel->Size = System::Drawing::Size(27, 13);
			this->deathFailLabel->TabIndex = 10;
			this->deathFailLabel->Text = L"Fail";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(179, 42);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(30, 19);
			this->numericUpDown2->TabIndex = 11;
			// 
			// tempHitPointButton
			// 
			this->tempHitPointButton->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tempHitPointButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tempHitPointButton->Location = System::Drawing::Point(70, 47);
			this->tempHitPointButton->Name = L"tempHitPointButton";
			this->tempHitPointButton->Size = System::Drawing::Size(48, 20);
			this->tempHitPointButton->TabIndex = 12;
			this->tempHitPointButton->Text = L"Temp HP";
			this->tempHitPointButton->UseVisualStyleBackColor = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->shieldArmorCheck);
			this->groupBox2->Controls->Add(this->wisArmorCheck);
			this->groupBox2->Controls->Add(this->conArmorCheck);
			this->groupBox2->Controls->Add(this->dexArmorCheck);
			this->groupBox2->Controls->Add(this->armorModLabel);
			this->groupBox2->Controls->Add(this->armorModBox);
			this->groupBox2->Controls->Add(this->armorClassLabel);
			this->groupBox2->Controls->Add(this->armorClassText);
			this->groupBox2->Controls->Add(this->armorTextBox);
			this->groupBox2->Controls->Add(this->armorNameLabel);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(221, 131);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(315, 90);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Armor";
			// 
			// armorTextBox
			// 
			this->armorTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->armorTextBox->Location = System::Drawing::Point(0, 26);
			this->armorTextBox->Name = L"armorTextBox";
			this->armorTextBox->Size = System::Drawing::Size(116, 20);
			this->armorTextBox->TabIndex = 0;
			// 
			// armorNameLabel
			// 
			this->armorNameLabel->AutoSize = true;
			this->armorNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->armorNameLabel->Location = System::Drawing::Point(15, 15);
			this->armorNameLabel->Name = L"armorNameLabel";
			this->armorNameLabel->Size = System::Drawing::Size(64, 13);
			this->armorNameLabel->TabIndex = 4;
			this->armorNameLabel->Text = L"Armor Name";
			// 
			// armorClassText
			// 
			this->armorClassText->BackColor = System::Drawing::SystemColors::Info;
			this->armorClassText->Enabled = false;
			this->armorClassText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->armorClassText->Location = System::Drawing::Point(260, 47);
			this->armorClassText->Name = L"armorClassText";
			this->armorClassText->Size = System::Drawing::Size(49, 36);
			this->armorClassText->TabIndex = 5;
			this->armorClassText->Text = L"";
			// 
			// armorClassLabel
			// 
			this->armorClassLabel->AutoSize = true;
			this->armorClassLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->armorClassLabel->Location = System::Drawing::Point(253, 31);
			this->armorClassLabel->Name = L"armorClassLabel";
			this->armorClassLabel->Size = System::Drawing::Size(62, 13);
			this->armorClassLabel->TabIndex = 6;
			this->armorClassLabel->Text = L"Armor Class";
			// 
			// armorModBox
			// 
			this->armorModBox->BackColor = System::Drawing::SystemColors::Info;
			this->armorModBox->Enabled = false;
			this->armorModBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->armorModBox->Location = System::Drawing::Point(122, 25);
			this->armorModBox->Name = L"armorModBox";
			this->armorModBox->Size = System::Drawing::Size(49, 23);
			this->armorModBox->TabIndex = 7;
			// 
			// armorModLabel
			// 
			this->armorModLabel->AutoSize = true;
			this->armorModLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->armorModLabel->Location = System::Drawing::Point(126, 12);
			this->armorModLabel->Name = L"armorModLabel";
			this->armorModLabel->Size = System::Drawing::Size(45, 13);
			this->armorModLabel->TabIndex = 8;
			this->armorModLabel->Text = L"AC Mod";
			// 
			// dexArmorCheck
			// 
			this->dexArmorCheck->AutoSize = true;
			this->dexArmorCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dexArmorCheck->Location = System::Drawing::Point(7, 61);
			this->dexArmorCheck->Name = L"dexArmorCheck";
			this->dexArmorCheck->Size = System::Drawing::Size(67, 17);
			this->dexArmorCheck->TabIndex = 9;
			this->dexArmorCheck->Text = L"Dexterity";
			this->dexArmorCheck->UseVisualStyleBackColor = true;
			// 
			// conArmorCheck
			// 
			this->conArmorCheck->AutoSize = true;
			this->conArmorCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->conArmorCheck->Location = System::Drawing::Point(80, 62);
			this->conArmorCheck->Name = L"conArmorCheck";
			this->conArmorCheck->Size = System::Drawing::Size(81, 17);
			this->conArmorCheck->TabIndex = 10;
			this->conArmorCheck->Text = L"Constitution";
			this->conArmorCheck->UseVisualStyleBackColor = true;
			// 
			// wisArmorCheck
			// 
			this->wisArmorCheck->AutoSize = true;
			this->wisArmorCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wisArmorCheck->Location = System::Drawing::Point(161, 62);
			this->wisArmorCheck->Name = L"wisArmorCheck";
			this->wisArmorCheck->Size = System::Drawing::Size(62, 17);
			this->wisArmorCheck->TabIndex = 11;
			this->wisArmorCheck->Text = L"Wisdom";
			this->wisArmorCheck->UseVisualStyleBackColor = true;
			// 
			// shieldArmorCheck
			// 
			this->shieldArmorCheck->AutoSize = true;
			this->shieldArmorCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shieldArmorCheck->Location = System::Drawing::Point(177, 29);
			this->shieldArmorCheck->Name = L"shieldArmorCheck";
			this->shieldArmorCheck->Size = System::Drawing::Size(55, 17);
			this->shieldArmorCheck->TabIndex = 12;
			this->shieldArmorCheck->Text = L"Shield";
			this->shieldArmorCheck->UseVisualStyleBackColor = true;
			// 
			// characterActionText
			// 
			this->characterActionText->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->characterActionText->Location = System::Drawing::Point(426, 284);
			this->characterActionText->Name = L"characterActionText";
			this->characterActionText->Size = System::Drawing::Size(384, 338);
			this->characterActionText->TabIndex = 31;
			this->characterActionText->Text = L"This is the \"window\" for rolls and checks to be displayed.";
			// 
			// ExampleTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(822, 1061);
			this->Controls->Add(this->characterActionText);
			this->Controls->Add(this->miserableCounter);
			this->Controls->Add(this->miserableLabel);
			this->Controls->Add(this->cultureList);
			this->Controls->Add(this->cultureLabel);
			this->Controls->Add(this->attacksFrame);
			this->Controls->Add(this->speedFrame);
			this->Controls->Add(this->passivePerceptionFrame);
			this->Controls->Add(this->inspirationFram);
			this->Controls->Add(this->initiativeFrame);
			this->Controls->Add(this->proficiencyBonusFrame);
			this->Controls->Add(this->savingThrowFrame);
			this->Controls->Add(this->charSkillsFrame);
			this->Controls->Add(this->charStatFrame);
			this->Controls->Add(this->charSwList);
			this->Controls->Add(this->charBgList);
			this->Controls->Add(this->charClassList);
			this->Controls->Add(this->expText);
			this->Controls->Add(this->expLabel);
			this->Controls->Add(this->playerNameText);
			this->Controls->Add(this->playerNameLabel);
			this->Controls->Add(this->charSwLabel);
			this->Controls->Add(this->charBgLabel);
			this->Controls->Add(this->charLevelText);
			this->Controls->Add(this->charLevelLabel);
			this->Controls->Add(this->classLabel);
			this->Controls->Add(this->charNameLabel);
			this->Controls->Add(this->charNameText);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"ExampleTest";
			this->Text = L"ExampleTest";
			this->charStatFrame->ResumeLayout(false);
			this->charStatFrame->PerformLayout();
			this->charSkillsFrame->ResumeLayout(false);
			this->charSkillsFrame->PerformLayout();
			this->savingThrowFrame->ResumeLayout(false);
			this->savingThrowFrame->PerformLayout();
			this->proficiencyBonusFrame->ResumeLayout(false);
			this->proficiencyBonusFrame->PerformLayout();
			this->initiativeFrame->ResumeLayout(false);
			this->initiativeFrame->PerformLayout();
			this->inspirationFram->ResumeLayout(false);
			this->inspirationFram->PerformLayout();
			this->passivePerceptionFrame->ResumeLayout(false);
			this->passivePerceptionFrame->PerformLayout();
			this->speedFrame->ResumeLayout(false);
			this->speedFrame->PerformLayout();
			this->attacksFrame->ResumeLayout(false);
			this->attacksFrame->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hitDieCounter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->miserableCounter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion









	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
