/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "Logger.h"
#include "Version.h"

#include "BurstLib.c"
#define STR_SIZE 2048
//[/Headers]

#include "InterfaceComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
void InterfaceComponent::log(String message)
{
	ToLog(message);
}
//[/MiscUserDefs]

//==============================================================================
InterfaceComponent::InterfaceComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (makeButton = new TextButton ("new button"));
    makeButton->setButtonText (TRANS("Make coupon"));
    makeButton->addListener (this);

    addAndMakeVisible (recipientEditor = new TextEditor ("recipientEditor"));
    recipientEditor->setMultiLine (false);
    recipientEditor->setReturnKeyStartsNewLine (false);
    recipientEditor->setReadOnly (false);
    recipientEditor->setScrollbarsShown (true);
    recipientEditor->setCaretVisible (true);
    recipientEditor->setPopupMenuEnabled (true);
    recipientEditor->setColour (TextEditor::textColourId, Colours::black);
    recipientEditor->setColour (TextEditor::backgroundColourId, Colours::white);
    recipientEditor->setColour (CaretComponent::caretColourId, Colour (0xff222222));
    recipientEditor->setText (TRANS("BURST-"));

    addAndMakeVisible (serverComboBox = new ComboBox ("new combo box"));
    serverComboBox->setEditableText (false);
    serverComboBox->setJustificationType (Justification::centredLeft);
    serverComboBox->setTextWhenNothingSelected (TRANS("http://127.0.0.1:8125/"));
    serverComboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    serverComboBox->addItem (TRANS("http://127.0.0.1:8125/"), 1);
    serverComboBox->addItem (TRANS("https://wallet1.burst-team.us:2083/"), 2);
    serverComboBox->addItem (TRANS("https://wallet.burst.cryptoguru.org:8125/"), 3);
    serverComboBox->addItem (TRANS("https://wallet.dev.burst-test.net/"), 4);
    serverComboBox->addListener (this);

    addAndMakeVisible (passPhraseLabel = new Label ("passPhraseLabel",
                                                    TRANS("Secret pass phrase")));
    passPhraseLabel->setFont (Font (15.00f, Font::plain));
    passPhraseLabel->setJustificationType (Justification::centredRight);
    passPhraseLabel->setEditable (false, false, false);
    passPhraseLabel->setColour (Label::textColourId, Colours::white);
    passPhraseLabel->setColour (TextEditor::textColourId, Colours::black);
    passPhraseLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (savePassPhraseToggleButton = new ToggleButton ("new toggle button"));
    savePassPhraseToggleButton->setTooltip (TRANS("Saves your pass phrase on this computer. It will be obscured but offers no guarantees of protection !"));
    savePassPhraseToggleButton->setButtonText (TRANS("remember"));
    savePassPhraseToggleButton->addListener (this);
    savePassPhraseToggleButton->setColour (ToggleButton::textColourId, Colours::white);

    addAndMakeVisible (versionLabel = new Label ("new label",
                                                 TRANS("v0.1")));
    versionLabel->setFont (Font (12.00f, Font::plain));
    versionLabel->setJustificationType (Justification::centredLeft);
    versionLabel->setEditable (false, false, false);
    versionLabel->setColour (Label::textColourId, Colours::black);
    versionLabel->setColour (TextEditor::textColourId, Colours::black);
    versionLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel = new Label ("walletLabel",
                                                TRANS("Wallet")));
    walletLabel->setFont (Font (15.00f, Font::plain));
    walletLabel->setJustificationType (Justification::centredLeft);
    walletLabel->setEditable (false, false, false);
    walletLabel->setColour (Label::textColourId, Colours::black);
    walletLabel->setColour (TextEditor::textColourId, Colours::black);
    walletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (passPhraseTextEditor = new TextEditor ("new text editor"));
    passPhraseTextEditor->setTooltip (TRANS("enter your pass phrase here"));
    passPhraseTextEditor->setMultiLine (false);
    passPhraseTextEditor->setReturnKeyStartsNewLine (false);
    passPhraseTextEditor->setReadOnly (false);
    passPhraseTextEditor->setScrollbarsShown (false);
    passPhraseTextEditor->setCaretVisible (true);
    passPhraseTextEditor->setPopupMenuEnabled (true);
    passPhraseTextEditor->setText (String());

    addAndMakeVisible (valueSlider = new Slider ("new slider"));
    valueSlider->setRange (1, 10000, 1);
    valueSlider->setSliderStyle (Slider::IncDecButtons);
    valueSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    valueSlider->addListener (this);

    addAndMakeVisible (walletLabel2 = new Label ("walletLabel",
                                                 TRANS("BURST")));
    walletLabel2->setFont (Font (15.00f, Font::plain));
    walletLabel2->setJustificationType (Justification::centredLeft);
    walletLabel2->setEditable (false, false, false);
    walletLabel2->setColour (Label::textColourId, Colours::white);
    walletLabel2->setColour (TextEditor::textColourId, Colours::black);
    walletLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (makePasswordTextEditor = new TextEditor ("new text editor"));
    makePasswordTextEditor->setMultiLine (false);
    makePasswordTextEditor->setReturnKeyStartsNewLine (false);
    makePasswordTextEditor->setReadOnly (false);
    makePasswordTextEditor->setScrollbarsShown (true);
    makePasswordTextEditor->setCaretVisible (true);
    makePasswordTextEditor->setPopupMenuEnabled (true);
    makePasswordTextEditor->setText (String());

    addAndMakeVisible (walletLabel3 = new Label ("walletLabel",
                                                 TRANS("Value")));
    walletLabel3->setFont (Font (15.00f, Font::plain));
    walletLabel3->setJustificationType (Justification::centredRight);
    walletLabel3->setEditable (false, false, false);
    walletLabel3->setColour (Label::textColourId, Colours::white);
    walletLabel3->setColour (TextEditor::textColourId, Colours::black);
    walletLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel4 = new Label ("walletLabel",
                                                 TRANS("Recipient")));
    walletLabel4->setFont (Font (15.00f, Font::plain));
    walletLabel4->setJustificationType (Justification::centredRight);
    walletLabel4->setEditable (false, false, false);
    walletLabel4->setColour (Label::textColourId, Colours::white);
    walletLabel4->setColour (TextEditor::textColourId, Colours::black);
    walletLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel5 = new Label ("walletLabel",
                                                 TRANS("Redeem password")));
    walletLabel5->setFont (Font (15.00f, Font::plain));
    walletLabel5->setJustificationType (Justification::centredRight);
    walletLabel5->setEditable (false, false, false);
    walletLabel5->setColour (Label::textColourId, Colours::white);
    walletLabel5->setColour (TextEditor::textColourId, Colours::black);
    walletLabel5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (deadlineSlider = new Slider ("new slider"));
    deadlineSlider->setRange (1, 1440, 1);
    deadlineSlider->setSliderStyle (Slider::IncDecButtons);
    deadlineSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    deadlineSlider->addListener (this);

    addAndMakeVisible (walletLabel6 = new Label ("walletLabel",
                                                 TRANS("minutes")));
    walletLabel6->setFont (Font (15.00f, Font::plain));
    walletLabel6->setJustificationType (Justification::centredLeft);
    walletLabel6->setEditable (false, false, false);
    walletLabel6->setColour (Label::textColourId, Colours::white);
    walletLabel6->setColour (TextEditor::textColourId, Colours::black);
    walletLabel6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel7 = new Label ("walletLabel",
                                                 TRANS("Deadline")));
    walletLabel7->setFont (Font (15.00f, Font::plain));
    walletLabel7->setJustificationType (Justification::centredRight);
    walletLabel7->setEditable (false, false, false);
    walletLabel7->setColour (Label::textColourId, Colours::white);
    walletLabel7->setColour (TextEditor::textColourId, Colours::black);
    walletLabel7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (feeSlider = new Slider ("new slider"));
    feeSlider->setRange (1, 1020, 1);
    feeSlider->setSliderStyle (Slider::IncDecButtons);
    feeSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    feeSlider->addListener (this);

    addAndMakeVisible (walletLabel8 = new Label ("walletLabel",
                                                 TRANS("slot * 735000 planck")));
    walletLabel8->setFont (Font (15.00f, Font::plain));
    walletLabel8->setJustificationType (Justification::centredLeft);
    walletLabel8->setEditable (false, false, false);
    walletLabel8->setColour (Label::textColourId, Colours::white);
    walletLabel8->setColour (TextEditor::textColourId, Colours::black);
    walletLabel8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel9 = new Label ("walletLabel",
                                                 TRANS("Fee slot")));
    walletLabel9->setFont (Font (15.00f, Font::plain));
    walletLabel9->setJustificationType (Justification::centredRight);
    walletLabel9->setEditable (false, false, false);
    walletLabel9->setColour (Label::textColourId, Colours::white);
    walletLabel9->setColour (TextEditor::textColourId, Colours::black);
    walletLabel9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (redeemButton = new TextButton ("new button"));
    redeemButton->setButtonText (TRANS("Claim coupon"));
    redeemButton->addListener (this);

    addAndMakeVisible (passwordTextEditor = new TextEditor ("new text editor"));
    passwordTextEditor->setMultiLine (false);
    passwordTextEditor->setReturnKeyStartsNewLine (false);
    passwordTextEditor->setReadOnly (false);
    passwordTextEditor->setScrollbarsShown (true);
    passwordTextEditor->setCaretVisible (true);
    passwordTextEditor->setPopupMenuEnabled (true);
    passwordTextEditor->setText (String());

    addAndMakeVisible (walletLabel10 = new Label ("walletLabel",
                                                  TRANS("Coupon password")));
    walletLabel10->setFont (Font (15.00f, Font::plain));
    walletLabel10->setJustificationType (Justification::centredRight);
    walletLabel10->setEditable (false, false, false);
    walletLabel10->setColour (Label::textColourId, Colours::black);
    walletLabel10->setColour (TextEditor::textColourId, Colours::black);
    walletLabel10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (couponCodeTextEditor = new TextEditor ("new text editor"));
    couponCodeTextEditor->setMultiLine (false);
    couponCodeTextEditor->setReturnKeyStartsNewLine (false);
    couponCodeTextEditor->setReadOnly (false);
    couponCodeTextEditor->setScrollbarsShown (true);
    couponCodeTextEditor->setCaretVisible (true);
    couponCodeTextEditor->setPopupMenuEnabled (true);
    couponCodeTextEditor->setText (String());

    addAndMakeVisible (walletLabel11 = new Label ("walletLabel",
                                                  TRANS("Coupon code")));
    walletLabel11->setFont (Font (15.00f, Font::plain));
    walletLabel11->setJustificationType (Justification::centredRight);
    walletLabel11->setEditable (false, false, false);
    walletLabel11->setColour (Label::textColourId, Colours::black);
    walletLabel11->setColour (TextEditor::textColourId, Colours::black);
    walletLabel11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (createButton = new TextButton ("createButton"));
    createButton->setButtonText (TRANS("Create"));
    createButton->addListener (this);

    addAndMakeVisible (claimButton = new TextButton ("claimButton"));
    claimButton->setButtonText (TRANS("Claim"));
    claimButton->addListener (this);

    drawable1 = Drawable::createFromImageData (burstcoupon_svg, burstcoupon_svgSize);

    //[UserPreSize]
	serverComboBox->setEditableText(true);
	recipientEditor->addListener(this);
	passPhraseTextEditor->addListener(this);
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
	view = 0;
	//deadlineSlider->setRange(1, 32767, 1);
	walletLabel5->setText("Claim password", dontSendNotification);
	walletLabel10->setText("Password", dontSendNotification);

	versionLabel->setText("v1." SVNRevision, dontSendNotification);

	options.commonToAllUsers = false;
	options.applicationName = ProjectInfo::projectName;
	options.folderName = "CurbShifter";
	options.filenameSuffix = "settings";
	options.osxLibrarySubFolder = "Application Support";
	options.storageFormat = PropertiesFile::storeAsXML;
	appProp.setStorageParameters(options);

	String server = GetAppValue("server");
	if (server.isEmpty()) server = "http://127.0.0.1:8125/";
	serverComboBox->setText(server, dontSendNotification);

	recipientEditor->setText(Decrypt(GetAppValue("recipient")), dontSendNotification);

	passPhraseTextEditor->setPasswordCharacter(0x2022);
	passPhraseTextEditor->setText(Decrypt(GetAppValue("passPhraseEnc")), dontSendNotification);
	passPhraseTextEditor->addListener(this);
	savePassPhraseToggleButton->setToggleState(GetAppValue("savePassPhrase").getIntValue() > 0, dontSendNotification);

	recipientEditor->setTextToShowWhenEmpty("BURST-XXXX-XXXX-XXXX-XXXXX", Colours::lightgrey);
	recipientEditor->setInputRestrictions(27, "0123456789-abcdefghjklmnopqrstuvwxyzABCDEFGHJKLMNOPQRSTUVWXYZ"); // PREFIX -XXXX-XXXX-XXXX-XXXXX // "1234567890"  including 0 and 1 because numerical option. and O because of CLOUD prefix

	couponCodeTextEditor->setInputRestrictions(0, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ+/=");

	//File library_path(File::getCurrentWorkingDirectory());
	File library_path(File::getSpecialLocation(File::hostApplicationPath).getParentDirectory());

    ToLog("DIR LIB: " + library_path.getFullPathName());
    
#if defined(_WIN64) || defined(_WIN32)
	library_path = library_path.getChildFile("BurstLib.dll");
#elif defined(__APPLE__)
	library_path = library_path.getParentDirectory().getChildFile("Resources").getChildFile("BurstLib.dylib");
#endif

    bool libLoaded = false;
    if (library_path.existsAsFile())
    {
        void *dll_handle = BurstLib_LoadDLL(library_path.getFullPathName().toRawUTF8(), &burstLib);// Call the library functions
        if (!dll_handle || burstLib.GetHandle == nullptr)
            ToLog("BurstLib library not found!");
        else
        {
            apiHandle = burstLib.GetHandle();
            if (apiHandle)
            {
                ToLog(("BurstLib version ") + burstLib.GetBurstLibVersionNumber(apiHandle));
                libLoaded = true;
            }
            else ToLog("Failed to create API handle!");
        }
    }
	if (!libLoaded)
	{
		NativeMessageBox::showMessageBox(AlertWindow::WarningIcon, ProjectInfo::projectName, "No BurstLib found, or it failed to load !\n" + library_path.getFullPathName());
		juce::JUCEApplication::quit();
	}
	else
	{
		burstLib.SetNode(apiHandle, server.toRawUTF8(), server.getNumBytesAsUTF8());
		burstLib.SetSecretPhrase(apiHandle, passPhraseTextEditor->getText().toRawUTF8(), passPhraseTextEditor->getText().getNumBytesAsUTF8());
	}

	deadlineSlider->setValue(1440.f, dontSendNotification);
	feeSlider->setValue(1.f, dontSendNotification);

	makeButton->setColour(TextButton::buttonColourId, (Colour(0xffffffff)));
	makeButton->setColour(TextButton::buttonOnColourId, (Colour(0xffffffff)));
	makeButton->setColour(TextButton::textColourOnId, (Colour(0xff000000)));
	makeButton->setColour(TextButton::textColourOffId, (Colour(0xff000000)));


	wizlaf = new BurstCouponLookAndFeel();
	Typeface::Ptr typefacePtr = Typeface::createSystemTypefaceFor(BinaryData::NotoSansRegular_ttf, BinaryData::NotoSansRegular_ttfSize);
	Font f(typefacePtr);
	wizlaf->setFont(f);
	wizlaf->setColour(TreeView::selectedItemBackgroundColourId, Colour(0xff83acf0));
	wizlaf->setColour(TextEditor::highlightColourId, Colour(0xff83acf0));
	wizlaf->setColour(TextEditor::highlightedTextColourId, Colour(0xff141305));
	wizlaf->setColour(TextEditor::backgroundColourId, Colour(0xfff6f6f6));
	wizlaf->setColour(TextEditor::textColourId, Colours::black);
	wizlaf->setColour(TextEditor::focusedOutlineColourId, Colour(0xfface1ef));
	wizlaf->setColour(TextEditor::shadowColourId, Colour(0xffbbbbbb));
	wizlaf->setColour(ListBox::outlineColourId, Colour(0xffe4e4e4));
	wizlaf->setColour(ListBox::backgroundColourId, Colour(0xbefdfdfd));
	wizlaf->setColour(Label::textColourId, Colour(0xffffffff));
	wizlaf->setColour(juce::TextButton::buttonOnColourId, Colour(0xfface1ef));
	wizlaf->setColour(juce::TextButton::buttonColourId, Colour(0xff88bbc8));
	wizlaf->setColour(juce::TextButton::textColourOnId, Colour(0xffffffff));
	wizlaf->setColour(juce::TextButton::textColourOffId, Colour(0xffffffff));
	wizlaf->setColour(juce::TextButton::buttonOnColourId, Colour(0xfface1ef));
	wizlaf->setColour(ProgressBar::foregroundColourId, Colour(0xfface1ef));
	LookAndFeel::setDefaultLookAndFeel(wizlaf);
	wizlaf->Init();

	SetView(0);

	startTimer(5 * 1000);
    //[/Constructor]
}

InterfaceComponent::~InterfaceComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    makeButton = nullptr;
    recipientEditor = nullptr;
    serverComboBox = nullptr;
    passPhraseLabel = nullptr;
    savePassPhraseToggleButton = nullptr;
    versionLabel = nullptr;
    walletLabel = nullptr;
    passPhraseTextEditor = nullptr;
    valueSlider = nullptr;
    walletLabel2 = nullptr;
    makePasswordTextEditor = nullptr;
    walletLabel3 = nullptr;
    walletLabel4 = nullptr;
    walletLabel5 = nullptr;
    deadlineSlider = nullptr;
    walletLabel6 = nullptr;
    walletLabel7 = nullptr;
    feeSlider = nullptr;
    walletLabel8 = nullptr;
    walletLabel9 = nullptr;
    redeemButton = nullptr;
    passwordTextEditor = nullptr;
    walletLabel10 = nullptr;
    couponCodeTextEditor = nullptr;
    walletLabel11 = nullptr;
    createButton = nullptr;
    claimButton = nullptr;
    drawable1 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void InterfaceComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
	/*
    //[/UserPrePaint]

    g.fillAll (Colour (0xff00579d));

    g.setColour (Colours::white);
    g.fillRect (0, 0, 600, 124);

    g.setColour (Colour (0xfff2f2f2));
    g.fillRect (0, 124, 600, 276);

    g.setColour (Colours::black);
    jassert (drawable1 != 0);
    if (drawable1 != 0)
        drawable1->drawWithin (g, Rectangle<float> (20, 18, 169, 68),
                               RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize, 1.000f);

    //[UserPaint] Add your own custom painting code here..
	*/
	g.fillAll(Colour(0xff00579d));

	g.setColour(Colours::white);
	g.fillRect(0, 0, 600, 124);

	if (view == 1)
	{
		g.setColour(Colour(0xfff2f2f2));
		g.fillRect(0, 124, 600, 276);
	}

	g.setColour(Colours::black);
	jassert(drawable1 != 0);
	if (drawable1 != 0)
		drawable1->drawWithin(g, juce::Rectangle<float>(20, 18, 169, 68),
		RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize, 1.000f);	
    //[/UserPaint]
}

void InterfaceComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    makeButton->setBounds (164, 342, 424, 24);
    recipientEditor->setBounds (164, 184, 424, 24);
    serverComboBox->setBounds (264, 53, 304, 24);
    passPhraseLabel->setBounds (14, 154, 142, 24);
    savePassPhraseToggleButton->setBounds (492, 154, 96, 24);
    versionLabel->setBounds (197, 68, 40, 20);
    walletLabel->setBounds (264, 21, 55, 24);
    passPhraseTextEditor->setBounds (164, 154, 320, 24);
    valueSlider->setBounds (164, 216, 152, 24);
    walletLabel2->setBounds (324, 216, 80, 24);
    makePasswordTextEditor->setBounds (164, 312, 424, 24);
    walletLabel3->setBounds (68, 216, 88, 24);
    walletLabel4->setBounds (12, 184, 144, 24);
    walletLabel5->setBounds (20, 312, 136, 24);
    deadlineSlider->setBounds (164, 249, 152, 24);
    walletLabel6->setBounds (324, 249, 80, 24);
    walletLabel7->setBounds (68, 249, 88, 24);
    feeSlider->setBounds (164, 281, 152, 24);
    walletLabel8->setBounds (324, 281, 152, 24);
    walletLabel9->setBounds (68, 281, 88, 24);
    redeemButton->setBounds (165, 480, 424, 24);
    passwordTextEditor->setBounds (165, 450, 424, 24);
    walletLabel10->setBounds (22, 450, 136, 24);
    couponCodeTextEditor->setBounds (165, 422, 424, 24);
    walletLabel11->setBounds (22, 422, 136, 24);
    createButton->setBounds (0, 100, 300, 24);
    claimButton->setBounds (300, 100, 300, 24);
    //[UserResized] Add your own custom resize handling here..
	int yOffset = walletLabel10->getY() - walletLabel4->getY();
	juce::Rectangle<int> r = walletLabel10->getBounds().translated(0, -yOffset);
	walletLabel10->setBounds(r);
	r = walletLabel11->getBounds().translated(0, -yOffset);
	walletLabel11->setBounds(r);
	r = couponCodeTextEditor->getBounds().translated(0, -yOffset);
	couponCodeTextEditor->setBounds(r);
	r = passwordTextEditor->getBounds().translated(0, -yOffset);
	passwordTextEditor->setBounds(r);
	r = redeemButton->getBounds().translated(0, -yOffset);
	redeemButton->setBounds(r);
    //[/UserResized]
}

void InterfaceComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == makeButton)
    {
        //[UserButtonCode_makeButton] -- add your button handler code here..
		// save a file with the coupon data
		FileChooser myChooser("Save location...", File::getSpecialLocation(File::userDesktopDirectory), "*.txt");
		if (myChooser.browseForFileToSave(true))
		{
			File file(myChooser.getResult());
			if (file.existsAsFile())
				file.deleteFile();

			String recipient(recipientEditor->getText().trim());
			String makePassword = makePasswordTextEditor->getText();
			long long amountNQT = (100000000 * valueSlider->getValue());
			long long feeNQT = (735000 * feeSlider->getValue());
			long long deadlineMinutes = deadlineSlider->getValue();

			char sendMoneyReturnVal[STR_SIZE];
			int sendMoneyReturnSize = STR_SIZE;
			burstLib.sendMoney(apiHandle, 
				&sendMoneyReturnVal[0], sendMoneyReturnSize,
				recipient.toRawUTF8(), recipient.getNumBytesAsUTF8(),
				amountNQT,
				feeNQT,
				deadlineMinutes,
				false);

			char couponHEX[STR_SIZE];
			int couponHEXSize = STR_SIZE;
			burstLib.CreateCoupon(apiHandle,
				&couponHEX[0], couponHEXSize,
				&sendMoneyReturnVal[0], sendMoneyReturnSize,
				makePassword.toRawUTF8(), makePassword.getNumBytesAsUTF8());

			String couponDataEncryptedBase64(&couponHEX[0], couponHEXSize);
			if (couponDataEncryptedBase64.isNotEmpty())
			{
				char accountInfoVal[STR_SIZE];
				int accountInfoSize = STR_SIZE;
				burstLib.GetAccount(apiHandle,
					&accountInfoVal[0], accountInfoSize);
				const char *key = "accountRS";
				char myAccountRS[STR_SIZE];
				int myAccountRSSize = STR_SIZE;
				burstLib.GetJSONvalue(apiHandle,
					&myAccountRS[0], myAccountRSSize,
					&accountInfoVal[0], accountInfoSize,
					key, strlen("accountRS"));

				file.appendText("Coupon code:\n");
				file.appendText(couponDataEncryptedBase64);
								
				file.appendText("\n\nLink:\n");
				file.appendText("https://curbshifter.github.io/BurstCoupon/?coupon=" + couponDataEncryptedBase64);

				file.appendText("\n\nExpires:\n");
				file.appendText(Time(Time::currentTimeMillis() + (deadlineSlider->getValue() * 60 * 1000)).toString(true, true, false));

				file.appendText("\n\nFrom: ");
				file.appendText(String(&myAccountRS[0], myAccountRSSize));

				file.appendText("\nTo: ");
				file.appendText(String(recipient));

				file.appendText("\n\namountNQT:\n");
				file.appendText(String(amountNQT));

				file.appendText("\n\nfeeNQT:\n");
				file.appendText(String(feeNQT));

				file.appendText("\n\n**********************************************************\nCoupon password:\n");
				file.appendText(makePasswordTextEditor->getText());
				file.appendText("\n**********************************************************\n");

				//couponCodeTextEditor->setText(couponDataEncryptedBase64, dontSendNotification);
				//passwordTextEditor->setText(makePasswordTextEditor->getText(), dontSendNotification);

				NativeMessageBox::showMessageBox(AlertWindow::InfoIcon, ProjectInfo::projectName, "Coupon saved\n" + file.getFullPathName());
			}
			else NativeMessageBox::showMessageBox(AlertWindow::WarningIcon, ProjectInfo::projectName, "Failed to make coupon. Check connection/deadline/address.\n");
		}
        //[/UserButtonCode_makeButton]
    }
    else if (buttonThatWasClicked == savePassPhraseToggleButton)
    {
        //[UserButtonCode_savePassPhraseToggleButton] -- add your button handler code here..
		SetAppValue("savePassPhrase", String(savePassPhraseToggleButton->getToggleState()));

		if (savePassPhraseToggleButton->getToggleState())
			SetAppValue("passPhraseEnc", Encrypt(passPhraseTextEditor->getText()));
		else SetAppValue("passPhraseEnc", "");
        //[/UserButtonCode_savePassPhraseToggleButton]
    }
    else if (buttonThatWasClicked == redeemButton)
    {
        //[UserButtonCode_redeemButton] -- add your button handler code here..
		String password = passwordTextEditor->getText();
		String couponCode = couponCodeTextEditor->getText();

		char txId[STR_SIZE];
		int txIdSize = STR_SIZE;
		if (burstLib.RedeemCoupon(apiHandle,
			&txId[0], txIdSize,
			couponCode.toRawUTF8(), couponCode.getNumBytesAsUTF8(),
			password.toRawUTF8(), password.getNumBytesAsUTF8()))
		{

		}


		//String txId = burstLib.RedeemCoupon(couponCode, password);
		//if (txId.isNotEmpty())
		if (txIdSize > 0)
			NativeMessageBox::showMessageBox(AlertWindow::InfoIcon, ProjectInfo::projectName, "Coupon redeemed!\ntx ID " + String(&txId[0], txIdSize));
		else NativeMessageBox::showMessageBox(AlertWindow::WarningIcon, ProjectInfo::projectName, "Coupon or password is invalid!");
        //[/UserButtonCode_redeemButton]
    }
    else if (buttonThatWasClicked == createButton)
    {
        //[UserButtonCode_createButton] -- add your button handler code here..
		SetView(0);
        //[/UserButtonCode_createButton]
    }
    else if (buttonThatWasClicked == claimButton)
    {
        //[UserButtonCode_claimButton] -- add your button handler code here..
		SetView(1);
        //[/UserButtonCode_claimButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void InterfaceComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == serverComboBox)
    {
        //[UserComboBoxCode_serverComboBox] -- add your combo box handling code here..
		String server = serverComboBox->getText();
		SetAppValue("server", server);
		burstLib.SetNode(apiHandle, server.toRawUTF8(), server.getNumBytesAsUTF8());
		//[/UserComboBoxCode_serverComboBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void InterfaceComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == valueSlider)
    {
        //[UserSliderCode_valueSlider] -- add your slider handling code here..
        //[/UserSliderCode_valueSlider]
    }
    else if (sliderThatWasMoved == deadlineSlider)
    {
        //[UserSliderCode_deadlineSlider] -- add your slider handling code here..
        //[/UserSliderCode_deadlineSlider]
    }
    else if (sliderThatWasMoved == feeSlider)
    {
        //[UserSliderCode_feeSlider] -- add your slider handling code here..
        //[/UserSliderCode_feeSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void InterfaceComponent::textEditorTextChanged(TextEditor &editor) //Called when the user changes the text in some way.
{
	if (passPhraseTextEditor == &editor)
	{
		if (savePassPhraseToggleButton->getToggleState())
			SetAppValue("passPhraseEnc", Encrypt(editor.getText()));
		else SetAppValue("passPhraseEnc", "");
	}
	if (recipientEditor == &editor)
	{
		String txt = editor.getText().toUpperCase().trim();
	/*	if (txt.isNotEmpty() && !txt.startsWith("BURST-"))
			txt = "BURST-" + txt; TODO: make this more dummy proof*/

		SetAppValue("recipient", Encrypt(txt));
		editor.setText(txt, dontSendNotification);
	}
}

void InterfaceComponent::textEditorReturnKeyPressed(TextEditor &editor) //Called when the user presses the return key.
{
}

void InterfaceComponent::textEditorEscapeKeyPressed(TextEditor &/*editor*/) //Called when the user presses the escape key.
{
}

void InterfaceComponent::textEditorFocusLost(TextEditor &editor) //Called when the text editor loses focus.
{
	if (passPhraseTextEditor == &editor)
		burstLib.SetSecretPhrase(apiHandle, passPhraseTextEditor->getText().toRawUTF8(), passPhraseTextEditor->getText().getNumBytesAsUTF8());
}

String InterfaceComponent::GetAppValue(const String type)
{
	String ret;
	PropertiesFile* props2 = appProp.getUserSettings();
	if (props2){
		ret = props2->getValue(type);
	}
	return ret.replace("&quot;", "\"");
}

void InterfaceComponent::SetAppValue(const String type, const String value)
{
	PropertiesFile* props2 = appProp.getUserSettings();
	if (props2){
		props2->setValue(type, value.replace("\"", "&quot;"));
	}
	appProp.closeFiles();
}

#define BIKELOCK "BIKELOCK95467231"
String InterfaceComponent::Encrypt(String input)
{
	if (input.isEmpty())
		return String::empty;

	MemoryBlock memoryBlock;
	memoryBlock.loadFromHexString(String::toHexString(input.toUTF8(), (int)input.getNumBytesAsUTF8()));

	String encryptionKey(BIKELOCK, strlen(BIKELOCK));
	BlowFish blowFish(encryptionKey.toUTF8(), (int)encryptionKey.getNumBytesAsUTF8());
	blowFish.encrypt(memoryBlock);

	return memoryBlock.toBase64Encoding();
}

String InterfaceComponent::Decrypt(String input)
{
	if (input.isEmpty())
		return String::empty;

	MemoryBlock memoryBlock;
	memoryBlock.fromBase64Encoding(input);

	String encryptionKey(BIKELOCK, strlen(BIKELOCK));
	BlowFish blowFish(encryptionKey.toUTF8(), (int)encryptionKey.getNumBytesAsUTF8());
	blowFish.decrypt(memoryBlock);

	return memoryBlock.toString();
}

void InterfaceComponent::timerCallback()
{
	repaint();
}

void InterfaceComponent::SetView(int viewNr)
{
	view = viewNr;
	if (view == 0)
	{
		createButton->setColour(TextButton::buttonColourId, (Colour(0xff00579d)));
		createButton->setColour(TextButton::buttonOnColourId, (Colour(0xff00579d)));
		createButton->setColour(TextButton::textColourOnId, (Colour(0xffffffff)));
		createButton->setColour(TextButton::textColourOffId, (Colour(0xffffffff)));

		claimButton->setColour(TextButton::buttonColourId, (Colour(0xffffffff)));
		claimButton->setColour(TextButton::buttonOnColourId, (Colour(0xffffffff)));
		claimButton->setColour(TextButton::textColourOnId, (Colour(0xff000000)));
		claimButton->setColour(TextButton::textColourOffId, (Colour(0xff000000)));

		bool on = false;
		walletLabel10->setVisible(on);
		walletLabel11->setVisible(on);
		couponCodeTextEditor->setVisible(on);
		passwordTextEditor->setVisible(on);
		redeemButton->setVisible(on);

		on = true;
		makeButton->setVisible(on);
		recipientEditor->setVisible(on);
		passPhraseLabel->setVisible(on);
		savePassPhraseToggleButton->setVisible(on);
		passPhraseTextEditor->setVisible(on);
		valueSlider->setVisible(on);
		walletLabel2->setVisible(on);
		makePasswordTextEditor->setVisible(on);
		walletLabel3->setVisible(on);
		walletLabel4->setVisible(on);
		walletLabel5->setVisible(on);
		deadlineSlider->setVisible(on);
		walletLabel6->setVisible(on);
		walletLabel7->setVisible(on);
		feeSlider->setVisible(on);
		walletLabel8->setVisible(on);
		walletLabel9->setVisible(on);
	}
	else
	{
		claimButton->setColour(TextButton::buttonColourId, (Colour(0xff00579d)));
		claimButton->setColour(TextButton::buttonOnColourId, (Colour(0xff00579d)));
		claimButton->setColour(TextButton::textColourOnId, (Colour(0xffffffff)));
		claimButton->setColour(TextButton::textColourOffId, (Colour(0xffffffff)));

		createButton->setColour(TextButton::buttonColourId, (Colour(0xffffffff)));
		createButton->setColour(TextButton::buttonOnColourId, (Colour(0xffffffff)));
		createButton->setColour(TextButton::textColourOnId, (Colour(0xff000000)));
		createButton->setColour(TextButton::textColourOffId, (Colour(0xff000000)));

		bool on = true;
		walletLabel10->setVisible(on);
		walletLabel11->setVisible(on);
		couponCodeTextEditor->setVisible(on);
		passwordTextEditor->setVisible(on);
		redeemButton->setVisible(on);

		on = false;
		makeButton->setVisible(on);
		recipientEditor->setVisible(on);
		passPhraseLabel->setVisible(on);
		savePassPhraseToggleButton->setVisible(on);
		passPhraseTextEditor->setVisible(on);
		valueSlider->setVisible(on);
		walletLabel2->setVisible(on);
		makePasswordTextEditor->setVisible(on);
		walletLabel3->setVisible(on);
		walletLabel4->setVisible(on);
		walletLabel5->setVisible(on);
		deadlineSlider->setVisible(on);
		walletLabel6->setVisible(on);
		walletLabel7->setVisible(on);
		feeSlider->setVisible(on);
		walletLabel8->setVisible(on);
		walletLabel9->setVisible(on);
	}
	repaint();
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="InterfaceComponent" componentName=""
                 parentClasses="public Component, public TextEditorListener, public Timer"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ff00579d">
    <RECT pos="0 0 600 124" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="0 124 600 276" fill="solid: fff2f2f2" hasStroke="0"/>
    <IMAGE pos="20 18 169 68" resource="burstcoupon_svg" opacity="1" mode="2"/>
  </BACKGROUND>
  <TEXTBUTTON name="new button" id="477f53cded383b1a" memberName="makeButton"
              virtualName="" explicitFocusOrder="0" pos="164 342 424 24" buttonText="Make coupon"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="recipientEditor" id="51fb7048fa922fc7" memberName="recipientEditor"
              virtualName="" explicitFocusOrder="0" pos="164 184 424 24" textcol="ff000000"
              bkgcol="ffffffff" caretcol="ff222222" initialText="BURST-" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <COMBOBOX name="new combo box" id="98ba1d24bcdc2daa" memberName="serverComboBox"
            virtualName="" explicitFocusOrder="0" pos="264 53 304 24" editable="0"
            layout="33" items="http://127.0.0.1:8125/&#10;https://wallet1.burst-team.us:2083/&#10;https://wallet.burst.cryptoguru.org:8125/&#10;https://wallet.dev.burst-test.net/"
            textWhenNonSelected="http://127.0.0.1:8125/" textWhenNoItems="(no choices)"/>
  <LABEL name="passPhraseLabel" id="b374e0cf387af521" memberName="passPhraseLabel"
         virtualName="" explicitFocusOrder="0" pos="14 154 142 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Secret pass phrase"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="34"/>
  <TOGGLEBUTTON name="new toggle button" id="1d7bff6e655d4d32" memberName="savePassPhraseToggleButton"
                virtualName="" explicitFocusOrder="0" pos="492 154 96 24" tooltip="Saves your pass phrase on this computer. It will be obscured but offers no guarantees of protection !"
                txtcol="ffffffff" buttonText="remember" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <LABEL name="new label" id="fb4c396e279f7faa" memberName="versionLabel"
         virtualName="" explicitFocusOrder="0" pos="197 68 40 20" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="v0.1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="12" bold="0" italic="0" justification="33"/>
  <LABEL name="walletLabel" id="ee30c01a1dd859a1" memberName="walletLabel"
         virtualName="" explicitFocusOrder="0" pos="264 21 55 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Wallet" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="f0cbabb6811d2f5" memberName="passPhraseTextEditor"
              virtualName="" explicitFocusOrder="0" pos="164 154 320 24" tooltip="enter your pass phrase here"
              initialText="" multiline="0" retKeyStartsLine="0" readonly="0"
              scrollbars="0" caret="1" popupmenu="1"/>
  <SLIDER name="new slider" id="42dbdc403b9a7c0b" memberName="valueSlider"
          virtualName="" explicitFocusOrder="0" pos="164 216 152 24" min="1"
          max="10000" int="1" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="walletLabel" id="dea9f7c71b0b116a" memberName="walletLabel2"
         virtualName="" explicitFocusOrder="0" pos="324 216 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="BURST" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="bcedc9790daccc13" memberName="makePasswordTextEditor"
              virtualName="" explicitFocusOrder="0" pos="164 312 424 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="walletLabel" id="c0490f2e7b883a0c" memberName="walletLabel3"
         virtualName="" explicitFocusOrder="0" pos="68 216 88 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Value" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="walletLabel" id="f17e18a8f3d265d3" memberName="walletLabel4"
         virtualName="" explicitFocusOrder="0" pos="12 184 144 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Recipient" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="walletLabel" id="fa7ee5fb747ac1a2" memberName="walletLabel5"
         virtualName="" explicitFocusOrder="0" pos="20 312 136 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Redeem password"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="34"/>
  <SLIDER name="new slider" id="82d655075e2a363a" memberName="deadlineSlider"
          virtualName="" explicitFocusOrder="0" pos="164 249 152 24" min="1"
          max="1440" int="1" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="walletLabel" id="300c5def36e4a52e" memberName="walletLabel6"
         virtualName="" explicitFocusOrder="0" pos="324 249 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="minutes" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="walletLabel" id="3d5e0834f99a90b6" memberName="walletLabel7"
         virtualName="" explicitFocusOrder="0" pos="68 249 88 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Deadline" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <SLIDER name="new slider" id="a39cfcda962a6323" memberName="feeSlider"
          virtualName="" explicitFocusOrder="0" pos="164 281 152 24" min="1"
          max="1020" int="1" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="walletLabel" id="d6000bbdf5aac3db" memberName="walletLabel8"
         virtualName="" explicitFocusOrder="0" pos="324 281 152 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="slot * 735000 planck"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="walletLabel" id="d60ea3e3d775da55" memberName="walletLabel9"
         virtualName="" explicitFocusOrder="0" pos="68 281 88 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Fee slot" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <TEXTBUTTON name="new button" id="9cad9237d3ba07e5" memberName="redeemButton"
              virtualName="" explicitFocusOrder="0" pos="165 480 424 24" buttonText="Claim coupon"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="dce08a74039e5bb6" memberName="passwordTextEditor"
              virtualName="" explicitFocusOrder="0" pos="165 450 424 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="walletLabel" id="f37c689a96c641d3" memberName="walletLabel10"
         virtualName="" explicitFocusOrder="0" pos="22 450 136 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Coupon password"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="34"/>
  <TEXTEDITOR name="new text editor" id="e6718a6abf74ea5c" memberName="couponCodeTextEditor"
              virtualName="" explicitFocusOrder="0" pos="165 422 424 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="walletLabel" id="92fa9ed24dbb11fc" memberName="walletLabel11"
         virtualName="" explicitFocusOrder="0" pos="22 422 136 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Coupon code" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <TEXTBUTTON name="createButton" id="b07ddfdfd48c3edc" memberName="createButton"
              virtualName="" explicitFocusOrder="0" pos="0 100 300 24" buttonText="Create"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="claimButton" id="c25e4b344c222f69" memberName="claimButton"
              virtualName="" explicitFocusOrder="0" pos="300 100 300 24" buttonText="Claim"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: burstcoupon_svg, 12716, "img/burst-coupon.svg"
static const unsigned char resource_InterfaceComponent_burstcoupon_svg[] = { 60,63,120,109,108,32,118,101,114,115,105,111,110,61,34,49,46,48,34,32,101,110,99,111,100,105,110,103,61,34,85,84,70,45,56,34,
32,115,116,97,110,100,97,108,111,110,101,61,34,110,111,34,63,62,10,60,33,45,45,32,71,101,110,101,114,97,116,111,114,58,32,65,100,111,98,101,32,73,108,108,117,115,116,114,97,116,111,114,32,49,52,46,48,
46,48,44,32,83,86,71,32,69,120,112,111,114,116,32,80,108,117,103,45,73,110,32,46,32,83,86,71,32,86,101,114,115,105,111,110,58,32,54,46,48,48,32,66,117,105,108,100,32,52,51,51,54,51,41,32,32,45,45,62,10,
10,60,115,118,103,10,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,32,120,
109,108,110,115,58,99,99,61,34,104,116,116,112,58,47,47,99,114,101,97,116,105,118,101,99,111,109,109,111,110,115,46,111,114,103,47,110,115,35,34,10,32,32,32,120,109,108,110,115,58,114,100,102,61,34,104,
116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,10,32,32,32,120,109,108,110,115,58,115,118,103,61,34,
104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,50,48,48,48,47,115,118,103,34,10,32,32,32,120,109,108,110,115,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,50,
48,48,48,47,115,118,103,34,10,32,32,32,120,109,108,110,115,58,115,111,100,105,112,111,100,105,61,34,104,116,116,112,58,47,47,115,111,100,105,112,111,100,105,46,115,111,117,114,99,101,102,111,114,103,101,
46,110,101,116,47,68,84,68,47,115,111,100,105,112,111,100,105,45,48,46,100,116,100,34,10,32,32,32,120,109,108,110,115,58,105,110,107,115,99,97,112,101,61,34,104,116,116,112,58,47,47,119,119,119,46,105,
110,107,115,99,97,112,101,46,111,114,103,47,110,97,109,101,115,112,97,99,101,115,47,105,110,107,115,99,97,112,101,34,10,32,32,32,118,101,114,115,105,111,110,61,34,49,46,49,34,10,32,32,32,105,100,61,34,
67,97,108,113,117,101,95,49,34,10,32,32,32,120,61,34,48,112,120,34,10,32,32,32,121,61,34,48,112,120,34,10,32,32,32,119,105,100,116,104,61,34,55,48,48,46,52,54,53,112,120,34,10,32,32,32,104,101,105,103,
104,116,61,34,50,49,56,46,57,56,56,112,120,34,10,32,32,32,118,105,101,119,66,111,120,61,34,48,32,48,32,55,48,48,46,52,54,53,32,50,49,56,46,57,56,56,34,10,32,32,32,101,110,97,98,108,101,45,98,97,99,107,
103,114,111,117,110,100,61,34,110,101,119,32,48,32,48,32,55,48,48,46,52,54,53,32,50,49,56,46,57,56,56,34,10,32,32,32,120,109,108,58,115,112,97,99,101,61,34,112,114,101,115,101,114,118,101,34,10,32,32,
32,115,111,100,105,112,111,100,105,58,100,111,99,110,97,109,101,61,34,98,117,114,115,116,45,99,111,117,112,111,110,46,115,118,103,34,10,32,32,32,105,110,107,115,99,97,112,101,58,118,101,114,115,105,111,
110,61,34,48,46,57,50,46,49,32,114,49,53,51,55,49,34,62,60,109,101,116,97,100,97,116,97,10,32,32,32,32,32,105,100,61,34,109,101,116,97,100,97,116,97,49,57,34,62,60,114,100,102,58,82,68,70,62,60,99,99,
58,87,111,114,107,10,32,32,32,32,32,32,32,32,32,114,100,102,58,97,98,111,117,116,61,34,34,62,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,115,118,103,43,120,109,108,60,47,100,99,58,102,
111,114,109,97,116,62,60,100,99,58,116,121,112,101,10,32,32,32,32,32,32,32,32,32,32,32,114,100,102,58,114,101,115,111,117,114,99,101,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,
99,47,100,99,109,105,116,121,112,101,47,83,116,105,108,108,73,109,97,103,101,34,32,47,62,60,100,99,58,116,105,116,108,101,62,60,47,100,99,58,116,105,116,108,101,62,60,47,99,99,58,87,111,114,107,62,60,
47,114,100,102,58,82,68,70,62,60,47,109,101,116,97,100,97,116,97,62,60,100,101,102,115,10,32,32,32,32,32,105,100,61,34,100,101,102,115,49,55,34,62,60,109,97,114,107,101,114,10,32,32,32,32,32,32,32,115,
116,121,108,101,61,34,111,118,101,114,102,108,111,119,58,118,105,115,105,98,108,101,34,10,32,32,32,32,32,32,32,105,100,61,34,83,99,105,115,115,111,114,115,34,10,32,32,32,32,32,32,32,111,114,105,101,110,
116,61,34,97,117,116,111,34,10,32,32,32,32,32,32,32,114,101,102,89,61,34,48,34,10,32,32,32,32,32,32,32,114,101,102,88,61,34,48,34,62,60,112,97,116,104,10,32,32,32,32,32,32,32,32,32,115,116,121,108,101,
61,34,109,97,114,107,101,114,45,115,116,97,114,116,58,110,111,110,101,34,10,32,32,32,32,32,32,32,32,32,105,100,61,34,115,99,104,101,114,101,34,10,32,32,32,32,32,32,32,32,32,100,61,34,77,32,57,46,48,56,
57,56,56,53,55,44,45,51,46,54,48,54,49,48,49,56,32,67,32,56,46,49,49,57,56,56,52,57,44,45,52,46,55,55,54,57,57,55,54,32,54,46,51,54,57,55,54,48,55,44,45,52,46,55,51,53,56,50,57,52,32,53,46,48,54,50,51,
53,53,56,44,45,52,46,50,51,50,55,55,51,52,32,108,32,45,56,46,50,49,50,52,48,52,54,44,51,46,48,55,55,57,48,50,57,32,99,32,45,50,46,51,56,56,50,57,51,51,44,45,49,46,51,48,54,55,49,51,53,32,45,52,46,55,52,
56,50,56,55,51,44,45,48,46,57,51,50,53,51,55,50,32,45,52,46,55,52,56,50,56,55,51,44,45,49,46,53,54,56,55,56,55,51,32,48,44,45,48,46,52,57,55,51,49,54,52,32,48,46,52,53,54,54,54,54,50,44,45,48,46,51,56,
56,51,50,50,50,32,48,46,51,56,56,51,48,54,56,44,45,49,46,54,56,51,49,57,52,49,32,45,48,46,48,54,53,54,51,53,44,45,49,46,50,52,51,50,55,54,55,32,45,49,46,51,54,51,53,55,55,49,44,45,50,46,49,54,51,48,55,
57,54,32,45,50,46,53,57,48,51,57,56,55,44,45,50,46,48,56,49,54,52,51,53,32,45,49,46,50,50,55,50,55,49,44,45,48,46,48,48,55,51,53,32,45,50,46,52,57,57,52,51,57,44,48,46,57,51,51,49,54,49,51,32,45,50,46,
53,49,48,51,52,49,44,50,46,50,51,48,48,54,49,49,32,45,48,46,48,57,49,52,51,44,49,46,51,48,54,51,56,54,52,32,49,46,48,48,55,50,48,57,44,50,46,53,49,57,54,56,57,54,32,50,46,51,48,54,55,54,52,44,50,46,54,
48,53,50,51,49,54,32,49,46,53,50,50,51,52,48,54,44,48,46,50,50,54,54,54,49,54,32,52,46,50,49,56,50,53,56,44,45,48,46,54,57,53,53,53,54,54,32,53,46,52,56,50,57,52,53,44,49,46,53,55,48,56,54,48,48,54,32,
45,48,46,57,52,50,50,56,52,55,44,49,46,55,51,56,50,53,55,55,52,32,45,50,46,54,49,52,48,50,52,52,44,49,46,55,52,51,48,55,54,55,52,32,45,52,46,49,50,53,53,49,48,55,44,49,46,54,53,54,48,55,48,51,52,32,45,
49,46,50,53,52,56,55,52,51,44,45,48,46,48,55,50,50,51,53,32,45,50,46,55,54,50,48,57,51,51,44,48,46,50,56,55,51,57,55,57,32,45,51,46,51,54,48,54,52,56,51,44,49,46,53,50,48,56,54,48,53,32,45,48,46,53,55,
56,51,54,55,44,49,46,49,56,50,48,56,54,50,32,45,48,46,48,49,49,50,44,50,46,56,54,52,54,48,50,50,32,49,46,51,49,54,55,52,57,44,51,46,50,50,54,52,49,50,32,49,46,51,52,48,49,57,49,50,44,48,46,52,57,49,56,
50,55,55,32,51,46,49,56,48,54,54,56,57,44,45,48,46,49,50,57,55,49,49,32,51,46,52,57,57,51,55,50,50,44,45,49,46,54,55,48,55,50,52,50,32,48,46,50,52,53,54,53,56,53,44,45,49,46,49,56,55,56,50,51,32,45,48,
46,53,57,53,51,54,53,57,44,45,49,46,55,52,53,57,53,55,52,32,45,48,46,50,55,50,53,48,55,52,44,45,50,46,49,55,55,49,53,51,55,32,48,46,50,52,51,54,49,51,53,44,45,48,46,51,50,53,51,54,32,49,46,55,57,48,55,
56,48,54,44,45,48,46,49,51,54,56,52,53,50,32,52,46,53,52,55,49,48,53,51,44,45,49,46,51,55,52,56,50,52,52,32,76,32,53,46,54,55,54,51,52,54,56,44,52,46,50,51,51,48,54,56,56,32,67,32,54,46,56,48,48,48,49,
54,52,44,52,46,53,52,54,55,54,55,50,32,56,46,49,55,51,48,54,56,53,44,52,46,53,51,54,50,54,52,54,32,57,46,49,54,56,52,52,51,51,44,51,46,52,51,49,51,54,49,52,32,76,32,45,48,46,48,53,49,54,52,48,57,51,44,
45,48,46,48,53,51,55,50,50,50,50,32,57,46,48,56,57,56,56,53,55,44,45,51,46,54,48,54,49,48,49,56,32,122,32,109,32,45,49,56,46,51,48,55,56,48,49,54,44,45,49,46,57,48,48,53,48,52,32,99,32,49,46,50,57,52,
53,53,57,44,48,46,55,50,50,55,57,57,56,32,49,46,49,56,56,56,51,57,50,44,50,46,54,56,51,53,55,48,50,32,45,48,46,49,53,54,52,50,55,50,44,51,46,48,54,51,50,56,56,57,32,45,49,46,50,49,54,53,49,55,57,44,48,
46,52,50,51,54,54,49,32,45,50,46,55,55,49,48,50,54,57,44,45,48,46,55,53,56,57,54,57,52,32,45,50,46,51,56,51,49,55,55,57,44,45,50,46,48,55,55,52,54,52,56,32,48,46,50,50,55,49,52,56,44,45,49,46,48,56,49,
56,53,49,57,32,49,46,54,53,51,51,56,55,44,45,49,46,52,56,48,54,51,50,32,50,46,53,51,57,54,48,53,49,44,45,48,46,57,56,53,56,50,52,49,32,122,32,109,32,48,46,48,53,54,50,54,52,44,56,46,48,49,55,51,54,52,
57,32,99,32,49,46,51,53,48,56,51,48,49,44,48,46,52,57,56,56,54,52,56,32,49,46,49,50,49,52,52,50,57,44,50,46,55,56,52,52,51,53,54,32,45,48,46,50,53,50,50,50,48,55,44,51,46,48,57,49,54,48,57,32,45,48,46,
57,49,49,48,53,57,52,44,48,46,51,49,54,51,51,57,49,32,45,50,46,50,49,51,53,52,57,52,44,45,48,46,49,51,56,55,57,55,54,32,45,50,46,51,48,53,54,57,54,52,44,45,49,46,50,49,50,49,51,57,52,32,45,48,46,49,55,
55,54,48,57,44,45,49,46,51,48,53,48,53,53,32,49,46,51,53,54,48,56,53,44,45,50,46,52,56,52,49,52,56,50,32,50,46,53,53,55,57,49,55,49,44,45,49,46,56,55,57,52,54,57,54,32,122,34,32,47,62,60,47,109,97,114,
107,101,114,62,60,47,100,101,102,115,62,60,115,111,100,105,112,111,100,105,58,110,97,109,101,100,118,105,101,119,10,32,32,32,32,32,112,97,103,101,99,111,108,111,114,61,34,35,102,102,102,102,102,102,34,
10,32,32,32,32,32,98,111,114,100,101,114,99,111,108,111,114,61,34,35,54,54,54,54,54,54,34,10,32,32,32,32,32,98,111,114,100,101,114,111,112,97,99,105,116,121,61,34,49,34,10,32,32,32,32,32,111,98,106,101,
99,116,116,111,108,101,114,97,110,99,101,61,34,49,48,34,10,32,32,32,32,32,103,114,105,100,116,111,108,101,114,97,110,99,101,61,34,49,48,34,10,32,32,32,32,32,103,117,105,100,101,116,111,108,101,114,97,
110,99,101,61,34,49,48,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,112,97,103,101,111,112,97,99,105,116,121,61,34,48,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,112,97,103,101,115,
104,97,100,111,119,61,34,50,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,119,105,110,100,111,119,45,119,105,100,116,104,61,34,49,57,50,48,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,
119,105,110,100,111,119,45,104,101,105,103,104,116,61,34,49,48,50,55,34,10,32,32,32,32,32,105,100,61,34,110,97,109,101,100,118,105,101,119,49,53,34,10,32,32,32,32,32,115,104,111,119,103,114,105,100,61,
34,102,97,108,115,101,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,122,111,111,109,61,34,50,46,52,54,55,57,57,53,56,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,99,120,61,34,51,50,49,
46,48,54,53,50,53,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,99,121,61,34,49,49,51,46,57,54,51,55,56,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,119,105,110,100,111,119,45,120,61,
34,49,57,49,50,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,119,105,110,100,111,119,45,121,61,34,45,56,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,119,105,110,100,111,119,45,109,97,
120,105,109,105,122,101,100,61,34,49,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,99,117,114,114,101,110,116,45,108,97,121,101,114,61,34,103,52,53,51,54,34,32,47,62,60,103,10,32,32,32,32,32,105,
100,61,34,103,49,50,34,10,32,32,32,32,32,116,114,97,110,115,102,111,114,109,61,34,109,97,116,114,105,120,40,48,46,53,44,48,44,48,44,48,46,53,44,54,55,46,48,55,51,50,51,49,44,50,55,46,52,55,51,49,50,55,
41,34,62,60,112,97,116,104,10,32,32,32,32,32,32,32,100,61,34,77,32,50,51,48,46,53,53,53,44,51,53,46,53,51,56,32,67,32,50,50,51,46,55,51,54,44,50,55,46,51,52,49,32,50,49,49,46,50,49,52,44,50,51,46,51,53,
53,32,49,57,50,46,50,55,52,44,50,51,46,51,53,53,32,72,32,49,52,49,46,52,48,57,32,76,32,49,50,56,46,55,57,49,44,57,49,46,52,52,32,55,56,46,50,51,52,44,57,49,46,52,49,54,32,55,50,46,53,57,54,44,49,49,55,
46,55,32,72,32,49,53,46,54,54,50,32,108,32,56,53,46,49,49,55,44,50,55,46,49,56,56,32,53,46,55,56,54,44,45,50,52,46,54,51,57,32,104,32,49,54,46,56,56,54,32,108,32,45,49,51,46,57,51,56,44,55,53,46,50,51,
57,32,104,32,53,51,46,56,52,52,32,99,32,51,51,46,52,55,50,44,48,32,53,51,46,56,51,50,44,45,49,52,46,52,48,53,32,53,56,46,56,55,55,44,45,52,49,46,54,54,50,32,108,32,50,46,53,49,55,44,45,49,51,46,54,50,
53,32,99,32,51,46,51,52,44,45,49,56,46,48,48,52,32,45,49,46,50,53,51,44,45,50,57,46,57,49,57,32,45,49,52,46,48,51,50,44,45,51,54,46,50,53,54,32,49,51,46,48,54,55,44,45,54,46,50,48,51,32,50,48,46,54,52,
55,44,45,49,54,46,56,57,54,32,50,51,46,54,56,56,44,45,51,51,46,50,53,51,32,108,32,49,46,49,48,55,44,45,53,46,57,55,50,32,99,32,50,46,51,54,54,44,45,49,50,46,55,56,49,32,48,46,55,52,52,44,45,50,50,46,51,
50,55,32,45,52,46,57,53,57,44,45,50,57,46,49,56,50,32,122,32,109,32,45,52,50,46,54,54,55,44,49,48,50,46,48,57,54,32,45,50,46,55,44,49,52,46,53,54,56,32,99,32,45,49,46,57,50,51,44,49,48,46,52,49,56,32,
45,54,46,56,48,50,44,49,52,46,52,55,57,32,45,49,55,46,52,48,51,44,49,52,46,52,55,57,32,104,32,45,49,53,46,53,56,51,32,108,32,56,46,54,48,51,44,45,52,54,46,52,52,57,32,104,32,49,50,46,51,55,49,32,99,32,
55,46,49,48,55,44,48,32,49,49,46,51,57,50,44,49,46,49,55,50,32,49,51,46,52,56,52,44,51,46,54,56,57,32,50,46,48,55,52,44,50,46,52,57,54,32,50,46,52,55,54,44,54,46,57,56,32,49,46,50,50,56,44,49,51,46,55,
49,51,32,122,32,109,32,57,46,57,53,53,44,45,55,49,46,49,56,52,32,45,49,46,55,50,53,44,57,46,51,49,50,32,99,32,45,50,46,48,51,54,44,49,48,46,57,56,54,32,45,56,46,49,48,50,44,49,53,46,54,55,52,32,45,50,
48,46,50,56,50,44,49,53,46,54,55,52,32,104,32,45,57,46,54,57,55,32,108,32,55,46,50,55,55,44,45,51,57,46,50,57,54,32,104,32,49,51,46,53,53,52,32,99,32,52,46,56,52,52,44,48,32,56,46,48,49,53,44,48,46,57,
56,32,57,46,54,57,51,44,50,46,57,57,57,32,49,46,56,48,50,44,50,46,49,54,55,32,50,46,49,56,57,44,53,46,56,54,56,32,49,46,49,56,44,49,49,46,51,49,49,32,122,34,10,32,32,32,32,32,32,32,105,100,61,34,112,97,
116,104,50,34,10,32,32,32,32,32,32,32,105,110,107,115,99,97,112,101,58,99,111,110,110,101,99,116,111,114,45,99,117,114,118,97,116,117,114,101,61,34,48,34,10,32,32,32,32,32,32,32,115,116,121,108,101,61,
34,102,105,108,108,58,35,50,54,50,54,50,54,34,32,47,62,60,112,97,116,104,10,32,32,32,32,32,32,32,100,61,34,109,32,50,55,49,46,53,50,52,44,49,57,55,46,54,52,50,32,99,32,45,49,55,46,50,53,51,44,48,32,45,
50,57,46,54,54,53,44,45,52,46,51,57,32,45,51,54,46,56,57,44,45,49,51,46,48,52,57,32,45,54,46,52,51,52,44,45,55,46,55,49,49,32,45,56,46,52,53,54,44,45,49,56,46,52,51,56,32,45,54,46,48,48,57,44,45,51,49,
46,56,55,56,32,76,32,50,53,50,46,49,57,52,44,50,51,46,52,32,104,32,51,55,46,50,56,32,108,32,45,50,52,46,48,51,44,49,51,49,46,56,54,50,32,99,32,45,48,46,56,53,51,44,52,46,54,55,57,32,45,48,46,52,48,55,
44,56,46,49,48,52,32,49,46,51,50,53,44,49,48,46,49,56,32,49,46,55,53,50,44,50,46,49,48,49,32,53,46,49,50,56,44,51,46,49,54,53,32,49,48,46,48,51,53,44,51,46,49,54,53,32,49,48,46,49,54,49,44,48,32,49,53,
46,52,57,44,45,52,46,51,56,55,32,49,55,46,50,56,44,45,49,52,46,50,50,52,32,76,32,51,49,55,46,57,53,55,44,50,51,46,52,32,104,32,51,53,46,53,49,56,32,108,32,45,50,51,46,55,50,50,44,49,51,48,46,49,57,52,
32,99,32,45,53,46,49,56,44,50,56,46,52,48,53,32,45,50,53,46,56,53,57,44,52,52,46,48,52,56,32,45,53,56,46,50,50,57,44,52,52,46,48,52,56,32,122,34,10,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,52,
34,10,32,32,32,32,32,32,32,105,110,107,115,99,97,112,101,58,99,111,110,110,101,99,116,111,114,45,99,117,114,118,97,116,117,114,101,61,34,48,34,10,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,105,
108,108,58,35,50,54,50,54,50,54,34,32,47,62,60,112,97,116,104,10,32,32,32,32,32,32,32,100,61,34,77,32,52,53,50,46,50,48,54,44,51,53,46,53,54,50,32,67,32,52,52,53,46,51,55,56,44,50,55,46,51,55,53,32,52,
51,50,46,56,55,50,44,50,51,46,51,57,53,32,52,49,51,46,57,55,53,44,50,51,46,51,57,53,32,72,32,51,54,51,46,50,32,108,32,45,51,49,46,51,53,52,44,49,55,50,46,48,56,55,32,104,32,51,55,46,50,55,32,108,32,49,
50,46,52,49,49,44,45,54,56,46,48,53,57,32,104,32,57,46,49,48,54,32,99,32,54,46,55,54,49,44,48,32,49,49,46,49,50,53,44,49,46,50,57,51,32,49,51,46,51,52,51,44,51,46,57,53,49,32,50,46,50,56,52,44,50,46,55,
51,56,32,50,46,55,55,56,44,55,46,52,53,50,32,49,46,53,49,44,49,52,46,52,48,55,32,108,32,45,52,46,55,57,53,44,50,54,46,50,54,54,32,99,32,45,50,46,53,50,52,44,49,51,46,56,54,57,32,45,49,46,56,53,44,49,54,
46,56,50,51,32,45,48,46,56,50,54,44,50,49,46,50,57,53,32,108,32,48,46,52,56,56,44,50,46,49,52,32,104,32,51,56,46,50,53,50,32,108,32,45,49,46,48,57,56,44,45,51,46,50,51,56,32,99,32,45,49,46,57,52,44,45,
53,46,55,50,55,32,45,49,46,49,53,57,44,45,49,49,46,50,55,49,32,48,46,50,53,54,44,45,49,57,46,48,55,53,32,108,32,52,46,55,48,54,44,45,50,53,46,55,57,53,32,99,32,50,46,49,52,54,44,45,49,49,46,55,53,57,32,
51,46,48,52,44,45,50,55,46,55,51,32,45,49,49,46,55,50,57,44,45,51,53,46,57,49,49,32,49,51,46,50,51,49,44,45,54,46,50,53,50,32,50,49,46,49,51,54,44,45,49,55,46,50,57,32,50,52,46,49,44,45,51,51,46,53,57,
50,32,108,32,50,46,51,57,53,44,45,49,51,46,49,50,52,32,99,32,50,46,51,51,44,45,49,50,46,55,56,56,32,48,46,54,56,54,44,45,50,50,46,51,51,51,32,45,53,46,48,50,57,44,45,50,57,46,49,56,53,32,122,32,77,32,
52,49,57,46,54,53,44,54,54,46,52,57,32,52,49,54,46,54,52,44,56,50,46,57,55,54,32,99,32,45,49,46,57,57,56,44,49,48,46,57,55,54,32,45,56,46,48,51,53,44,49,53,46,54,53,54,32,45,50,48,46,49,56,52,44,49,53,
46,54,53,54,32,104,32,45,57,46,54,56,56,32,108,32,56,46,52,55,50,44,45,52,54,46,52,52,52,32,104,32,49,51,46,53,49,52,32,99,32,52,46,56,51,44,48,32,55,46,57,57,54,44,48,46,57,55,57,32,57,46,54,55,57,44,
50,46,57,57,54,32,49,46,56,49,44,50,46,49,54,55,32,50,46,50,48,56,44,53,46,56,54,54,32,49,46,50,49,55,44,49,49,46,51,48,54,32,122,34,10,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,54,34,10,32,32,
32,32,32,32,32,105,110,107,115,99,97,112,101,58,99,111,110,110,101,99,116,111,114,45,99,117,114,118,97,116,117,114,101,61,34,48,34,10,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,105,108,108,58,
35,50,54,50,54,50,54,34,32,47,62,60,112,97,116,104,10,32,32,32,32,32,32,32,100,61,34,109,32,52,57,48,46,50,53,51,44,49,57,55,46,51,57,54,32,99,32,45,49,55,46,50,53,53,44,48,32,45,50,57,46,54,54,54,44,
45,52,46,51,57,32,45,51,54,46,56,56,57,44,45,49,51,46,48,52,55,32,45,54,46,52,51,52,44,45,55,46,55,48,57,32,45,56,46,52,53,50,44,45,49,56,46,52,51,51,32,45,54,46,48,48,53,44,45,51,49,46,56,55,52,32,108,
32,50,46,50,52,51,44,45,49,50,46,50,55,54,32,104,32,51,53,46,53,49,50,32,108,32,45,50,46,55,48,52,44,49,52,46,56,50,52,32,99,32,45,48,46,56,53,51,44,52,46,54,56,51,32,45,48,46,52,48,52,44,56,46,49,48,
57,32,49,46,51,50,57,44,49,48,46,49,56,56,32,49,46,55,53,51,44,50,46,49,48,50,32,53,46,49,50,57,44,51,46,49,54,55,32,49,48,46,48,51,50,44,51,46,49,54,55,32,49,48,46,49,54,50,44,48,32,49,53,46,52,57,49,
44,45,52,46,51,57,49,32,49,55,46,50,55,55,44,45,49,52,46,50,51,50,32,49,46,56,52,55,44,45,49,48,46,49,48,52,32,45,48,46,55,53,56,44,45,49,56,46,49,51,50,32,45,50,48,46,49,49,54,44,45,51,51,46,57,54,54,
32,45,50,51,46,51,52,49,44,45,49,57,46,50,50,51,32,45,51,48,46,54,49,54,44,45,51,52,46,48,51,49,32,45,50,54,46,56,53,53,44,45,53,52,46,54,52,51,32,53,46,49,55,56,44,45,50,56,46,52,48,52,32,50,53,46,54,
52,54,44,45,52,52,46,48,52,56,32,53,55,46,54,51,52,44,45,52,52,46,48,52,56,32,49,54,46,57,55,57,44,48,32,50,57,46,50,48,53,44,52,46,51,51,54,32,51,54,46,51,51,57,44,49,50,46,56,56,53,32,54,46,52,51,51,
44,55,46,55,48,56,32,56,46,52,52,50,44,49,56,46,52,56,56,32,53,46,57,55,55,44,51,50,46,48,52,50,32,108,32,45,49,46,51,50,56,44,55,46,50,54,56,32,72,32,53,50,55,46,49,57,32,108,32,49,46,55,56,44,45,57,
46,56,49,53,32,99,32,48,46,57,44,45,52,46,57,51,56,32,48,46,52,55,52,44,45,56,46,53,32,45,49,46,50,55,49,44,45,49,48,46,53,57,51,32,45,49,46,54,56,50,44,45,50,46,48,49,54,32,45,52,46,55,55,49,44,45,50,
46,57,57,53,32,45,57,46,52,52,55,44,45,50,46,57,57,53,32,45,57,46,55,53,54,44,48,32,45,49,52,46,57,50,49,44,52,46,52,54,50,32,45,49,54,46,55,52,54,44,49,52,46,52,54,54,32,45,49,46,56,51,57,44,49,48,46,
49,48,52,32,48,46,55,55,44,49,56,46,49,51,50,32,50,48,46,49,50,54,44,51,51,46,57,54,55,32,50,51,46,51,51,56,44,49,57,46,50,49,55,32,51,48,46,54,49,52,44,51,52,46,48,50,52,32,50,54,46,56,53,52,44,53,52,
46,54,52,51,32,45,53,46,49,56,57,44,50,56,46,51,57,56,32,45,50,53,46,56,55,44,52,52,46,48,51,57,32,45,53,56,46,50,51,51,44,52,52,46,48,51,57,32,122,34,10,32,32,32,32,32,32,32,105,100,61,34,112,97,116,
104,56,34,10,32,32,32,32,32,32,32,105,110,107,115,99,97,112,101,58,99,111,110,110,101,99,116,111,114,45,99,117,114,118,97,116,117,114,101,61,34,48,34,10,32,32,32,32,32,32,32,115,116,121,108,101,61,34,
102,105,108,108,58,35,50,54,50,54,50,54,34,32,47,62,60,112,97,116,104,10,32,32,32,32,32,32,32,100,61,34,109,32,54,49,51,46,48,53,51,44,49,57,53,46,52,56,49,32,104,32,45,51,55,46,50,55,54,32,108,32,50,
54,46,49,49,44,45,49,52,51,46,50,57,51,32,104,32,45,51,51,46,55,54,57,32,108,32,53,46,50,54,44,45,50,56,46,55,56,57,32,104,32,49,48,52,46,55,57,54,32,108,32,45,53,46,50,52,56,44,50,56,46,55,56,57,32,104,
32,45,51,51,46,55,53,55,32,122,34,10,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,49,48,34,10,32,32,32,32,32,32,32,105,110,107,115,99,97,112,101,58,99,111,110,110,101,99,116,111,114,45,99,117,114,
118,97,116,117,114,101,61,34,48,34,10,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,105,108,108,58,35,50,54,50,54,50,54,34,32,47,62,60,47,103,62,60,103,10,32,32,32,32,32,105,100,61,34,103,52,53,51,
54,34,62,60,103,10,32,32,32,32,32,32,32,97,114,105,97,45,108,97,98,101,108,61,34,67,111,117,112,111,110,34,10,32,32,32,32,32,32,32,116,114,97,110,115,102,111,114,109,61,34,109,97,116,114,105,120,40,49,
46,48,56,50,56,51,56,50,44,48,44,45,48,46,49,54,50,56,51,55,55,57,44,48,46,57,50,51,52,57,57,48,49,44,48,44,48,41,34,10,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,111,110,116,45,115,116,121,108,
101,58,110,111,114,109,97,108,59,102,111,110,116,45,118,97,114,105,97,110,116,58,110,111,114,109,97,108,59,102,111,110,116,45,119,101,105,103,104,116,58,110,111,114,109,97,108,59,102,111,110,116,45,115,
116,114,101,116,99,104,58,110,111,114,109,97,108,59,102,111,110,116,45,115,105,122,101,58,54,53,46,50,52,56,54,51,52,51,52,112,120,59,108,105,110,101,45,104,101,105,103,104,116,58,49,46,50,53,59,102,111,
110,116,45,102,97,109,105,108,121,58,39,67,104,114,105,115,116,109,97,115,32,67,97,114,100,39,59,45,105,110,107,115,99,97,112,101,45,102,111,110,116,45,115,112,101,99,105,102,105,99,97,116,105,111,110,
58,39,67,104,114,105,115,116,109,97,115,32,67,97,114,100,39,59,108,101,116,116,101,114,45,115,112,97,99,105,110,103,58,48,112,120,59,119,111,114,100,45,115,112,97,99,105,110,103,58,48,112,120,59,102,105,
108,108,58,35,50,54,50,54,50,54,59,102,105,108,108,45,111,112,97,99,105,116,121,58,49,59,115,116,114,111,107,101,58,110,111,110,101,59,115,116,114,111,107,101,45,119,105,100,116,104,58,49,46,54,51,49,
50,49,53,56,49,34,10,32,32,32,32,32,32,32,105,100,61,34,116,101,120,116,52,52,57,56,34,62,60,112,97,116,104,10,32,32,32,32,32,32,32,32,32,100,61,34,109,32,50,50,52,46,55,48,50,50,53,44,49,56,55,46,50,
48,53,57,50,32,113,32,45,53,46,49,53,52,54,53,44,48,32,45,55,46,56,57,53,48,57,44,45,50,46,57,51,54,49,57,32,45,50,46,54,55,53,49,57,44,45,50,46,57,51,54,49,56,32,45,50,46,54,55,53,49,57,44,45,56,46,50,
56,54,53,55,32,118,32,45,50,52,46,53,51,51,52,57,32,113,32,48,44,45,53,46,51,53,48,51,57,32,50,46,54,55,53,49,57,44,45,56,46,50,56,54,53,56,32,50,46,55,52,48,52,52,44,45,50,46,57,51,54,49,56,32,55,46,
56,57,53,48,57,44,45,50,46,57,51,54,49,56,32,53,46,49,53,52,54,52,44,48,32,55,46,56,50,57,56,51,44,50,46,57,51,54,49,56,32,50,46,55,52,48,52,52,44,50,46,57,51,54,49,57,32,50,46,55,52,48,52,52,44,56,46,
50,56,54,53,56,32,118,32,52,46,56,50,56,52,32,104,32,45,54,46,55,56,53,56,53,32,118,32,45,53,46,50,56,53,49,52,32,113,32,48,44,45,52,46,50,52,49,49,54,32,45,51,46,53,56,56,54,56,44,45,52,46,50,52,49,49,
54,32,45,51,46,53,56,56,54,55,44,48,32,45,51,46,53,56,56,54,55,44,52,46,50,52,49,49,54,32,118,32,50,53,46,53,49,50,50,50,32,113,32,48,44,52,46,49,55,53,57,49,32,51,46,53,56,56,54,55,44,52,46,49,55,53,
57,49,32,51,46,53,56,56,54,56,44,48,32,51,46,53,56,56,54,56,44,45,52,46,49,55,53,57,49,32,118,32,45,54,46,57,56,49,54,49,32,104,32,54,46,55,56,53,56,53,32,118,32,54,46,52,53,57,54,50,32,113,32,48,44,53,
46,51,53,48,51,57,32,45,50,46,55,52,48,52,52,44,56,46,50,56,54,53,55,32,45,50,46,54,55,53,49,57,44,50,46,57,51,54,49,57,32,45,55,46,56,50,57,56,51,44,50,46,57,51,54,49,57,32,122,34,10,32,32,32,32,32,32,
32,32,32,115,116,121,108,101,61,34,102,111,110,116,45,115,116,121,108,101,58,110,111,114,109,97,108,59,102,111,110,116,45,118,97,114,105,97,110,116,58,110,111,114,109,97,108,59,102,111,110,116,45,119,
101,105,103,104,116,58,110,111,114,109,97,108,59,102,111,110,116,45,115,116,114,101,116,99,104,58,110,111,114,109,97,108,59,102,111,110,116,45,102,97,109,105,108,121,58,39,66,101,98,97,115,32,78,101,117,
101,39,59,45,105,110,107,115,99,97,112,101,45,102,111,110,116,45,115,112,101,99,105,102,105,99,97,116,105,111,110,58,39,66,101,98,97,115,32,78,101,117,101,39,59,102,105,108,108,58,35,50,54,50,54,50,54,
59,102,105,108,108,45,111,112,97,99,105,116,121,58,49,59,115,116,114,111,107,101,45,119,105,100,116,104,58,49,46,54,51,49,50,49,53,56,49,34,10,32,32,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,52,
53,51,56,34,32,47,62,60,112,97,116,104,10,32,32,32,32,32,32,32,32,32,100,61,34,109,32,50,53,48,46,48,54,56,54,55,44,49,56,55,46,50,48,53,57,50,32,113,32,45,53,46,50,56,53,49,52,44,48,32,45,56,46,48,57,
48,56,51,44,45,51,46,48,48,49,52,51,32,45,50,46,56,48,53,54,57,44,45,51,46,48,48,49,52,52,32,45,50,46,56,48,53,54,57,44,45,56,46,52,56,50,51,51,32,118,32,45,50,52,46,48,49,49,52,57,32,113,32,48,44,45,
53,46,52,56,48,56,57,32,50,46,56,48,53,54,57,44,45,56,46,52,56,50,51,51,32,50,46,56,48,53,54,57,44,45,51,46,48,48,49,52,51,32,56,46,48,57,48,56,51,44,45,51,46,48,48,49,52,51,32,53,46,50,56,53,49,52,44,
48,32,56,46,48,57,48,56,51,44,51,46,48,48,49,52,51,32,50,46,56,48,53,54,57,44,51,46,48,48,49,52,52,32,50,46,56,48,53,54,57,44,56,46,52,56,50,51,51,32,118,32,50,52,46,48,49,49,52,57,32,113,32,48,44,53,
46,52,56,48,56,57,32,45,50,46,56,48,53,54,57,44,56,46,52,56,50,51,51,32,45,50,46,56,48,53,54,57,44,51,46,48,48,49,52,51,32,45,56,46,48,57,48,56,51,44,51,46,48,48,49,52,51,32,122,32,109,32,48,44,45,54,
46,53,50,52,56,54,32,113,32,51,46,55,49,57,49,55,44,48,32,51,46,55,49,57,49,55,44,45,52,46,53,48,50,49,54,32,118,32,45,50,52,46,57,50,52,57,55,32,113,32,48,44,45,52,46,53,48,50,49,54,32,45,51,46,55,49,
57,49,55,44,45,52,46,53,48,50,49,54,32,45,51,46,55,49,57,49,55,44,48,32,45,51,46,55,49,57,49,55,44,52,46,53,48,50,49,54,32,118,32,50,52,46,57,50,52,57,55,32,113,32,48,44,52,46,53,48,50,49,54,32,51,46,
55,49,57,49,55,44,52,46,53,48,50,49,54,32,122,34,10,32,32,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,111,110,116,45,115,116,121,108,101,58,110,111,114,109,97,108,59,102,111,110,116,45,118,97,114,
105,97,110,116,58,110,111,114,109,97,108,59,102,111,110,116,45,119,101,105,103,104,116,58,110,111,114,109,97,108,59,102,111,110,116,45,115,116,114,101,116,99,104,58,110,111,114,109,97,108,59,102,111,110,
116,45,102,97,109,105,108,121,58,39,66,101,98,97,115,32,78,101,117,101,39,59,45,105,110,107,115,99,97,112,101,45,102,111,110,116,45,115,112,101,99,105,102,105,99,97,116,105,111,110,58,39,66,101,98,97,
115,32,78,101,117,101,39,59,102,105,108,108,58,35,50,54,50,54,50,54,59,102,105,108,108,45,111,112,97,99,105,116,121,58,49,59,115,116,114,111,107,101,45,119,105,100,116,104,58,49,46,54,51,49,50,49,53,56,
49,34,10,32,32,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,52,53,52,48,34,32,47,62,60,112,97,116,104,10,32,32,32,32,32,32,32,32,32,100,61,34,109,32,50,55,54,46,50,53,56,56,54,44,49,56,55,46,50,48,
53,57,50,32,113,32,45,53,46,50,49,57,56,57,44,48,32,45,55,46,57,54,48,51,51,44,45,50,46,57,51,54,49,57,32,45,50,46,55,52,48,52,52,44,45,51,46,48,48,49,52,51,32,45,50,46,55,52,48,52,52,44,45,56,46,53,52,
55,53,55,32,118,32,45,51,52,46,56,52,50,55,55,32,104,32,55,46,49,55,55,51,53,32,118,32,51,53,46,51,54,52,55,54,32,113,32,48,44,50,46,51,52,56,57,53,32,48,46,57,49,51,52,56,44,51,46,51,57,50,57,51,32,48,
46,57,55,56,55,51,44,49,46,48,52,51,57,56,32,50,46,55,52,48,52,52,44,49,46,48,52,51,57,56,32,49,46,55,54,49,55,49,44,48,32,50,46,54,55,53,49,57,44,45,49,46,48,52,51,57,56,32,48,46,57,55,56,55,51,44,45,
49,46,48,52,51,57,56,32,48,46,57,55,56,55,51,44,45,51,46,51,57,50,57,51,32,118,32,45,51,53,46,51,54,52,55,54,32,104,32,54,46,57,49,54,51,54,32,118,32,51,52,46,56,52,50,55,55,32,113,32,48,44,53,46,53,52,
54,49,52,32,45,50,46,55,52,48,52,52,44,56,46,53,52,55,53,55,32,45,50,46,55,52,48,52,53,44,50,46,57,51,54,49,57,32,45,55,46,57,54,48,51,52,44,50,46,57,51,54,49,57,32,122,34,10,32,32,32,32,32,32,32,32,32,
115,116,121,108,101,61,34,102,111,110,116,45,115,116,121,108,101,58,110,111,114,109,97,108,59,102,111,110,116,45,118,97,114,105,97,110,116,58,110,111,114,109,97,108,59,102,111,110,116,45,119,101,105,103,
104,116,58,110,111,114,109,97,108,59,102,111,110,116,45,115,116,114,101,116,99,104,58,110,111,114,109,97,108,59,102,111,110,116,45,102,97,109,105,108,121,58,39,66,101,98,97,115,32,78,101,117,101,39,59,
45,105,110,107,115,99,97,112,101,45,102,111,110,116,45,115,112,101,99,105,102,105,99,97,116,105,111,110,58,39,66,101,98,97,115,32,78,101,117,101,39,59,102,105,108,108,58,35,50,54,50,54,50,54,59,102,105,
108,108,45,111,112,97,99,105,116,121,58,49,59,115,116,114,111,107,101,45,119,105,100,116,104,58,49,46,54,51,49,50,49,53,56,49,34,10,32,32,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,52,53,52,50,
34,32,47,62,60,112,97,116,104,10,32,32,32,32,32,32,32,32,32,100,61,34,109,32,50,57,50,46,48,55,49,52,54,44,49,52,48,46,56,55,57,51,57,32,104,32,49,48,46,53,55,48,50,56,32,113,32,53,46,51,53,48,51,57,44,
48,32,56,46,48,50,53,53,57,44,50,46,56,55,48,57,52,32,50,46,54,55,53,49,57,44,50,46,56,55,48,57,52,32,50,46,54,55,53,49,57,44,56,46,52,49,55,48,56,32,118,32,52,46,53,48,50,49,53,32,113,32,48,44,53,46,
53,52,54,49,52,32,45,50,46,54,55,53,49,57,44,56,46,52,49,55,48,56,32,45,50,46,54,55,53,50,44,50,46,56,55,48,57,52,32,45,56,46,48,50,53,53,57,44,50,46,56,55,48,57,52,32,104,32,45,51,46,51,57,50,57,51,32,
118,32,49,56,46,53,57,53,56,54,32,104,32,45,55,46,49,55,55,51,53,32,122,32,109,32,49,48,46,53,55,48,50,56,44,50,48,46,53,53,51,51,50,32,113,32,49,46,55,54,49,55,50,44,48,32,50,46,54,48,57,57,53,44,45,
48,46,57,55,56,55,51,32,48,46,57,49,51,52,56,44,45,48,46,57,55,56,55,51,32,48,46,57,49,51,52,56,44,45,51,46,51,50,55,54,56,32,118,32,45,53,46,52,49,53,54,51,32,113,32,48,44,45,50,46,51,52,56,57,54,32,
45,48,46,57,49,51,52,56,44,45,51,46,51,50,55,54,56,32,45,48,46,56,52,56,50,51,44,45,48,46,57,55,56,55,51,32,45,50,46,54,48,57,57,53,44,45,48,46,57,55,56,55,51,32,104,32,45,51,46,51,57,50,57,51,32,118,
32,49,52,46,48,50,56,52,53,32,122,34,10,32,32,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,111,110,116,45,115,116,121,108,101,58,110,111,114,109,97,108,59,102,111,110,116,45,118,97,114,105,97,110,
116,58,110,111,114,109,97,108,59,102,111,110,116,45,119,101,105,103,104,116,58,110,111,114,109,97,108,59,102,111,110,116,45,115,116,114,101,116,99,104,58,110,111,114,109,97,108,59,102,111,110,116,45,102,
97,109,105,108,121,58,39,66,101,98,97,115,32,78,101,117,101,39,59,45,105,110,107,115,99,97,112,101,45,102,111,110,116,45,115,112,101,99,105,102,105,99,97,116,105,111,110,58,39,66,101,98,97,115,32,78,101,
117,101,39,59,102,105,108,108,58,35,50,54,50,54,50,54,59,102,105,108,108,45,111,112,97,99,105,116,121,58,49,59,115,116,114,111,107,101,45,119,105,100,116,104,58,49,46,54,51,49,50,49,53,56,49,34,10,32,
32,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,52,53,52,52,34,32,47,62,60,112,97,116,104,10,32,32,32,32,32,32,32,32,32,100,61,34,109,32,51,50,55,46,54,55,56,56,54,44,49,56,55,46,50,48,53,57,50,32,
113,32,45,53,46,50,56,53,49,52,44,48,32,45,56,46,48,57,48,56,51,44,45,51,46,48,48,49,52,51,32,45,50,46,56,48,53,54,57,44,45,51,46,48,48,49,52,52,32,45,50,46,56,48,53,54,57,44,45,56,46,52,56,50,51,51,32,
118,32,45,50,52,46,48,49,49,52,57,32,113,32,48,44,45,53,46,52,56,48,56,57,32,50,46,56,48,53,54,57,44,45,56,46,52,56,50,51,51,32,50,46,56,48,53,54,57,44,45,51,46,48,48,49,52,51,32,56,46,48,57,48,56,51,
44,45,51,46,48,48,49,52,51,32,53,46,50,56,53,49,52,44,48,32,56,46,48,57,48,56,51,44,51,46,48,48,49,52,51,32,50,46,56,48,53,54,57,44,51,46,48,48,49,52,52,32,50,46,56,48,53,54,57,44,56,46,52,56,50,51,51,
32,118,32,50,52,46,48,49,49,52,57,32,113,32,48,44,53,46,52,56,48,56,57,32,45,50,46,56,48,53,54,57,44,56,46,52,56,50,51,51,32,45,50,46,56,48,53,54,57,44,51,46,48,48,49,52,51,32,45,56,46,48,57,48,56,51,
44,51,46,48,48,49,52,51,32,122,32,109,32,48,44,45,54,46,53,50,52,56,54,32,113,32,51,46,55,49,57,49,55,44,48,32,51,46,55,49,57,49,55,44,45,52,46,53,48,50,49,54,32,118,32,45,50,52,46,57,50,52,57,55,32,113,
32,48,44,45,52,46,53,48,50,49,54,32,45,51,46,55,49,57,49,55,44,45,52,46,53,48,50,49,54,32,45,51,46,55,49,57,49,55,44,48,32,45,51,46,55,49,57,49,55,44,52,46,53,48,50,49,54,32,118,32,50,52,46,57,50,52,57,
55,32,113,32,48,44,52,46,53,48,50,49,54,32,51,46,55,49,57,49,55,44,52,46,53,48,50,49,54,32,122,34,10,32,32,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,111,110,116,45,115,116,121,108,101,58,110,
111,114,109,97,108,59,102,111,110,116,45,118,97,114,105,97,110,116,58,110,111,114,109,97,108,59,102,111,110,116,45,119,101,105,103,104,116,58,110,111,114,109,97,108,59,102,111,110,116,45,115,116,114,101,
116,99,104,58,110,111,114,109,97,108,59,102,111,110,116,45,102,97,109,105,108,121,58,39,66,101,98,97,115,32,78,101,117,101,39,59,45,105,110,107,115,99,97,112,101,45,102,111,110,116,45,115,112,101,99,105,
102,105,99,97,116,105,111,110,58,39,66,101,98,97,115,32,78,101,117,101,39,59,102,105,108,108,58,35,50,54,50,54,50,54,59,102,105,108,108,45,111,112,97,99,105,116,121,58,49,59,115,116,114,111,107,101,45,
119,105,100,116,104,58,49,46,54,51,49,50,49,53,56,49,34,10,32,32,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,52,53,52,54,34,32,47,62,60,112,97,116,104,10,32,32,32,32,32,32,32,32,32,100,61,34,109,
32,51,52,51,46,52,50,57,50,55,44,49,52,48,46,56,55,57,51,57,32,104,32,57,46,48,48,52,51,49,32,108,32,54,46,57,56,49,54,44,50,55,46,51,51,57,49,56,32,104,32,48,46,49,51,48,53,32,118,32,45,50,55,46,51,51,
57,49,56,32,104,32,54,46,51,57,52,51,55,32,118,32,52,53,46,54,55,52,48,53,32,104,32,45,55,46,51,55,51,49,32,108,32,45,56,46,54,49,50,56,50,44,45,51,51,46,51,52,50,48,54,32,104,32,45,48,46,49,51,48,53,
32,118,32,51,51,46,51,52,50,48,54,32,104,32,45,54,46,51,57,52,51,54,32,122,34,10,32,32,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,111,110,116,45,115,116,121,108,101,58,110,111,114,109,97,108,59,
102,111,110,116,45,118,97,114,105,97,110,116,58,110,111,114,109,97,108,59,102,111,110,116,45,119,101,105,103,104,116,58,110,111,114,109,97,108,59,102,111,110,116,45,115,116,114,101,116,99,104,58,110,111,
114,109,97,108,59,102,111,110,116,45,102,97,109,105,108,121,58,39,66,101,98,97,115,32,78,101,117,101,39,59,45,105,110,107,115,99,97,112,101,45,102,111,110,116,45,115,112,101,99,105,102,105,99,97,116,105,
111,110,58,39,66,101,98,97,115,32,78,101,117,101,39,59,102,105,108,108,58,35,50,54,50,54,50,54,59,102,105,108,108,45,111,112,97,99,105,116,121,58,49,59,115,116,114,111,107,101,45,119,105,100,116,104,58,
49,46,54,51,49,50,49,53,56,49,34,10,32,32,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,52,53,52,56,34,32,47,62,60,47,103,62,60,47,103,62,60,103,10,32,32,32,32,32,105,100,61,34,108,97,121,101,114,
49,34,10,32,32,32,32,32,116,114,97,110,115,102,111,114,109,61,34,109,97,116,114,105,120,40,48,44,45,49,46,49,54,52,54,49,55,44,49,46,49,54,52,54,49,55,44,48,44,45,55,55,48,46,54,57,54,57,50,44,49,55,51,
46,56,49,54,53,50,41,34,10,32,32,32,32,32,115,116,121,108,101,61,34,102,105,108,108,58,35,50,54,50,54,50,54,59,102,105,108,108,45,111,112,97,99,105,116,121,58,49,34,62,60,103,10,32,32,32,32,32,32,32,105,
100,61,34,103,52,53,57,51,34,10,32,32,32,32,32,32,32,116,114,97,110,115,102,111,114,109,61,34,109,97,116,114,105,120,40,52,46,50,54,49,48,56,52,54,44,45,49,46,50,51,53,49,50,54,51,44,49,46,50,51,53,49,
50,54,51,44,52,46,50,54,49,48,56,52,54,44,45,49,51,51,55,46,55,54,53,57,44,45,50,57,57,52,46,57,55,51,54,41,34,10,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,105,108,108,58,35,50,54,50,54,50,54,
59,102,105,108,108,45,111,112,97,99,105,116,121,58,49,34,62,60,112,97,116,104,10,32,32,32,32,32,32,32,32,32,115,116,121,108,101,61,34,102,105,108,108,58,35,50,54,50,54,50,54,59,102,105,108,108,45,111,
112,97,99,105,116,121,58,49,59,109,97,114,107,101,114,45,115,116,97,114,116,58,110,111,110,101,34,10,32,32,32,32,32,32,32,32,32,105,100,61,34,112,97,116,104,52,53,57,57,34,10,32,32,32,32,32,32,32,32,32,
100,61,34,109,32,53,57,46,55,51,49,54,54,53,44,57,53,54,46,52,48,48,53,55,32,99,32,45,48,46,54,48,57,55,56,52,44,45,49,46,51,57,50,56,54,32,45,50,46,51,48,51,52,57,49,44,45,49,46,56,51,53,53,54,32,45,
51,46,54,57,56,57,48,50,44,45,49,46,55,49,50,50,54,32,108,32,45,56,46,55,52,50,54,48,52,44,48,46,54,57,53,54,54,32,99,32,45,49,46,57,51,53,55,51,54,44,45,49,46,57,49,52,50,53,32,45,52,46,51,48,55,52,54,
54,44,45,50,46,50,48,52,57,32,45,52,46,49,51,50,49,51,54,44,45,50,46,56,49,54,53,49,32,48,46,49,51,55,48,52,52,44,45,48,46,52,55,56,48,54,32,48,46,53,52,53,57,57,51,44,45,48,46,50,52,55,52,53,32,48,46,
56,51,55,49,48,53,44,45,49,46,53,49,49,48,50,32,48,46,50,55,57,53,49,49,44,45,49,46,50,49,51,50,51,32,45,48,46,55,49,52,55,48,57,44,45,50,46,52,53,53,48,57,32,45,49,46,57,49,54,52,55,49,44,45,50,46,55,
49,52,56,56,32,45,49,46,49,55,55,55,50,55,44,45,48,46,51,52,53,50,54,32,45,50,46,54,53,57,56,49,52,44,48,46,50,48,56,50,55,32,45,51,46,48,50,55,54,55,55,44,49,46,52,53,49,57,53,32,45,48,46,52,52,55,56,
56,50,44,49,46,50,51,48,54,49,32,48,46,50,55,51,56,54,57,44,50,46,54,57,57,54,57,32,49,46,52,57,57,53,51,53,44,51,46,49,52,48,48,51,32,49,46,52,48,48,57,51,56,44,48,46,54,51,55,52,32,52,46,50,52,54,54,
48,55,44,48,46,52,57,51,55,57,32,52,46,56,51,55,55,55,56,44,51,46,48,50,48,57,54,32,45,49,46,51,56,52,56,48,55,44,49,46,52,49,49,50,57,32,45,50,46,57,57,51,49,52,56,44,48,46,57,53,53,50,53,32,45,52,46,
52,50,50,49,51,55,44,48,46,52,53,53,49,32,45,49,46,49,56,54,51,56,50,44,45,48,46,52,49,53,50,52,32,45,50,46,55,51,52,51,52,55,44,45,48,46,52,56,52,56,55,32,45,51,46,54,52,57,54,50,57,44,48,46,53,51,53,
56,57,32,45,48,46,56,56,49,55,49,55,44,48,46,57,55,54,57,52,32,45,48,46,56,48,48,49,53,56,44,50,46,55,53,48,54,32,48,46,51,55,54,54,55,53,44,51,46,52,54,52,51,52,32,49,46,49,53,50,55,55,44,48,46,56,52,
50,49,32,51,46,48,57,51,50,54,51,44,48,46,55,53,49,56,32,51,46,56,50,52,50,55,57,44,45,48,46,54,52,49,55,50,32,48,46,53,54,51,52,55,50,44,45,49,46,48,55,52,49,52,32,45,48,46,48,57,49,49,57,44,45,49,46,
56,52,50,52,50,32,48,46,51,51,55,57,57,53,44,45,50,46,49,54,55,57,54,32,48,46,51,50,51,56,52,44,45,48,46,50,52,53,54,51,32,49,46,55,53,57,49,53,53,44,48,46,51,54,49,57,52,32,52,46,55,52,57,57,48,54,44,
45,48,46,48,54,56,54,32,108,32,55,46,54,56,52,54,57,51,44,53,46,52,54,51,57,56,32,99,32,48,46,57,57,51,55,49,57,44,48,46,54,49,49,49,57,32,50,46,51,49,54,53,48,51,44,48,46,57,55,57,52,55,32,51,46,53,55,
55,56,49,52,44,48,46,49,57,49,54,52,32,108,32,45,55,46,57,48,50,55,50,54,44,45,53,46,56,57,48,57,32,57,46,55,54,54,53,48,50,44,45,48,46,56,57,53,55,52,32,122,32,109,32,45,49,55,46,48,55,53,50,52,50,44,
45,54,46,56,55,49,57,52,32,99,32,49,46,48,52,53,50,53,54,44,49,46,48,53,49,53,53,32,48,46,52,48,51,51,48,54,44,50,46,57,48,55,50,55,32,45,48,46,57,57,52,53,49,50,44,50,46,57,48,49,53,55,32,45,49,46,50,
56,54,49,54,51,44,48,46,48,55,50,32,45,50,46,52,53,52,53,57,49,44,45,49,46,52,57,51,49,56,32,45,49,46,55,49,56,52,50,53,44,45,50,46,54,53,51,55,53,32,48,46,53,49,54,52,55,54,44,45,48,46,57,55,55,51,55,
32,49,46,57,57,55,51,56,52,44,45,48,46,57,54,55,54,57,32,50,46,55,49,50,57,51,55,44,45,48,46,50,52,55,56,50,32,122,32,109,32,45,50,46,49,53,53,50,51,53,44,55,46,55,50,50,52,53,32,99,32,49,46,49,54,49,
48,53,56,44,48,46,56,53,49,55,57,32,48,46,51,49,48,55,50,52,44,50,46,57,56,53,54,54,32,45,49,46,48,57,52,52,44,50,46,57,48,50,52,32,45,48,46,57,54,50,57,53,56,44,48,46,48,53,51,32,45,50,46,48,56,57,53,
57,56,44,45,48,46,55,52,51,52,32,45,49,46,56,56,50,51,57,57,44,45,49,46,56,48,48,53,56,32,48,46,49,56,56,56,57,55,44,45,49,46,51,48,51,52,55,32,49,46,57,56,56,49,50,57,44,45,50,46,48,49,52,50,55,32,50,
46,57,55,54,55,57,57,44,45,49,46,49,48,49,56,50,32,122,34,10,32,32,32,32,32,32,32,32,32,105,110,107,115,99,97,112,101,58,99,111,110,110,101,99,116,111,114,45,99,117,114,118,97,116,117,114,101,61,34,48,
34,32,47,62,60,47,103,62,60,47,103,62,60,112,97,116,104,10,32,32,32,32,32,115,116,121,108,101,61,34,102,105,108,108,58,110,111,110,101,59,115,116,114,111,107,101,58,35,50,54,50,54,50,54,59,115,116,114,
111,107,101,45,119,105,100,116,104,58,52,46,53,57,57,57,57,57,57,59,115,116,114,111,107,101,45,108,105,110,101,99,97,112,58,98,117,116,116,59,115,116,114,111,107,101,45,108,105,110,101,106,111,105,110,
58,109,105,116,101,114,59,115,116,114,111,107,101,45,109,105,116,101,114,108,105,109,105,116,58,52,59,115,116,114,111,107,101,45,100,97,115,104,97,114,114,97,121,58,49,51,46,56,44,32,52,46,54,59,115,116,
114,111,107,101,45,100,97,115,104,111,102,102,115,101,116,58,48,59,115,116,114,111,107,101,45,111,112,97,99,105,116,121,58,49,34,10,32,32,32,32,32,100,61,34,77,32,52,50,48,46,48,55,57,57,53,44,56,55,46,
48,51,50,57,53,50,32,86,32,50,53,46,50,52,48,53,57,55,32,72,32,49,48,55,46,57,51,51,34,10,32,32,32,32,32,105,100,61,34,112,97,116,104,52,53,51,50,34,10,32,32,32,32,32,105,110,107,115,99,97,112,101,58,
99,111,110,110,101,99,116,111,114,45,99,117,114,118,97,116,117,114,101,61,34,48,34,32,47,62,60,47,115,118,103,62,0,0};

const char* InterfaceComponent::burstcoupon_svg = (const char*) resource_InterfaceComponent_burstcoupon_svg;
const int InterfaceComponent::burstcoupon_svgSize = 12716;


//[EndFile] You can add extra defines here...
//[/EndFile]
