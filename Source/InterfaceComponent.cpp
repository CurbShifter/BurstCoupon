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
//#include "Version.h"
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
    serverComboBox->addItem (TRANS("https://wallet.burst.cryptoguru.org:8125/"), 2);
    serverComboBox->addItem (TRANS("https://wallet.dev.burst-test.net/"), 3);
    serverComboBox->addListener (this);

    addAndMakeVisible (passPhraseLabel = new Label ("passPhraseLabel",
                                                    TRANS("Secret pass phrase")));
    passPhraseLabel->setFont (Font (15.00f, Font::plain));
    passPhraseLabel->setJustificationType (Justification::centredRight);
    passPhraseLabel->setEditable (false, false, false);
    passPhraseLabel->setColour (Label::textColourId, Colours::black);
    passPhraseLabel->setColour (TextEditor::textColourId, Colours::black);
    passPhraseLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (savePassPhraseToggleButton = new ToggleButton ("new toggle button"));
    savePassPhraseToggleButton->setTooltip (TRANS("Saves your pass phrase on this computer. It will be obscured but offers no guarantees of protection !"));
    savePassPhraseToggleButton->setButtonText (TRANS("remember"));
    savePassPhraseToggleButton->addListener (this);
    savePassPhraseToggleButton->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (versionLabel = new Label ("new label",
                                                 TRANS("v0.1")));
    versionLabel->setFont (Font (12.00f, Font::bold));
    versionLabel->setJustificationType (Justification::centredLeft);
    versionLabel->setEditable (false, false, false);
    versionLabel->setColour (Label::textColourId, Colours::black);
    versionLabel->setColour (TextEditor::textColourId, Colours::black);
    versionLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel = new Label ("walletLabel",
                                                TRANS("Wallet")));
    walletLabel->setFont (Font (15.00f, Font::plain));
    walletLabel->setJustificationType (Justification::centredRight);
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

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("BurstCoupon")));
    label->setFont (Font (37.00f, Font::plain));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::black);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

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
    walletLabel2->setColour (Label::textColourId, Colours::black);
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
    walletLabel3->setColour (Label::textColourId, Colours::black);
    walletLabel3->setColour (TextEditor::textColourId, Colours::black);
    walletLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel4 = new Label ("walletLabel",
                                                 TRANS("Recipient")));
    walletLabel4->setFont (Font (15.00f, Font::plain));
    walletLabel4->setJustificationType (Justification::centredRight);
    walletLabel4->setEditable (false, false, false);
    walletLabel4->setColour (Label::textColourId, Colours::black);
    walletLabel4->setColour (TextEditor::textColourId, Colours::black);
    walletLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel5 = new Label ("walletLabel",
                                                 TRANS("Redeem password")));
    walletLabel5->setFont (Font (15.00f, Font::plain));
    walletLabel5->setJustificationType (Justification::centredRight);
    walletLabel5->setEditable (false, false, false);
    walletLabel5->setColour (Label::textColourId, Colours::black);
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
    walletLabel6->setColour (Label::textColourId, Colours::black);
    walletLabel6->setColour (TextEditor::textColourId, Colours::black);
    walletLabel6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel7 = new Label ("walletLabel",
                                                 TRANS("Deadline")));
    walletLabel7->setFont (Font (15.00f, Font::plain));
    walletLabel7->setJustificationType (Justification::centredRight);
    walletLabel7->setEditable (false, false, false);
    walletLabel7->setColour (Label::textColourId, Colours::black);
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
    walletLabel8->setColour (Label::textColourId, Colours::black);
    walletLabel8->setColour (TextEditor::textColourId, Colours::black);
    walletLabel8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (walletLabel9 = new Label ("walletLabel",
                                                 TRANS("Fee slot")));
    walletLabel9->setFont (Font (15.00f, Font::plain));
    walletLabel9->setJustificationType (Justification::centredRight);
    walletLabel9->setEditable (false, false, false);
    walletLabel9->setColour (Label::textColourId, Colours::black);
    walletLabel9->setColour (TextEditor::textColourId, Colours::black);
    walletLabel9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (redeemButton = new TextButton ("new button"));
    redeemButton->setButtonText (TRANS("Redeem coupon"));
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


    //[UserPreSize]
	serverComboBox->setEditableText(true);
	passPhraseTextEditor->addListener(this);
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
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

	passPhraseTextEditor->setPasswordCharacter(0x2022);
	passPhraseTextEditor->setText(Decrypt(GetAppValue("passPhraseEnc")), dontSendNotification);
	passPhraseTextEditor->addListener(this);
	savePassPhraseToggleButton->setToggleState(GetAppValue("savePassPhrase").getIntValue() > 0, dontSendNotification);

	burstAPI.SetHost(server);
	burstAPI.SetSecretPhrase(passPhraseTextEditor->getText());

	myReedSolomon = burstAPI.getReedSolomon();
	myAccount = burstAPI.GetAccountId()["account"].toString();

	deadlineSlider->setValue(1440.f, dontSendNotification);
	feeSlider->setValue(1.f, dontSendNotification);

	wizlaf = new CloudBurstLookAndFeel();
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
    label = nullptr;
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


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void InterfaceComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffd3edff));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void InterfaceComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    makeButton->setBounds (168, 275, 424, 24);
    recipientEditor->setBounds (168, 117, 424, 24);
    serverComboBox->setBounds (168, 48, 424, 24);
    passPhraseLabel->setBounds (18, 87, 142, 24);
    savePassPhraseToggleButton->setBounds (496, 88, 96, 24);
    versionLabel->setBounds (240, 24, 54, 20);
    walletLabel->setBounds (9, 49, 151, 24);
    passPhraseTextEditor->setBounds (168, 87, 320, 24);
    label->setBounds (0, 0, 232, 40);
    valueSlider->setBounds (168, 149, 152, 24);
    walletLabel2->setBounds (328, 149, 80, 24);
    makePasswordTextEditor->setBounds (168, 245, 424, 24);
    walletLabel3->setBounds (72, 149, 88, 24);
    walletLabel4->setBounds (16, 117, 144, 24);
    walletLabel5->setBounds (24, 245, 136, 24);
    deadlineSlider->setBounds (168, 182, 152, 24);
    walletLabel6->setBounds (328, 182, 80, 24);
    walletLabel7->setBounds (72, 182, 88, 24);
    feeSlider->setBounds (168, 214, 152, 24);
    walletLabel8->setBounds (328, 214, 152, 24);
    walletLabel9->setBounds (72, 214, 88, 24);
    redeemButton->setBounds (168, 370, 424, 24);
    passwordTextEditor->setBounds (168, 340, 424, 24);
    walletLabel10->setBounds (25, 340, 136, 24);
    couponCodeTextEditor->setBounds (168, 312, 424, 24);
    walletLabel11->setBounds (25, 312, 136, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void InterfaceComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == makeButton)
    {
        //[UserButtonCode_makeButton] -- add your button handler code here..
		String recipient(recipientEditor->getText().trim());
		String amountNQT((uint64)(100000000 * valueSlider->getValue()));
		String feeNQT((uint64)(735000 * feeSlider->getValue()));
		String deadlineMinutes(deadlineSlider->getValue());
		bool broadcast = false;
		String txSignedHex = burstAPI.SendMoney(recipient, amountNQT, feeNQT, deadlineMinutes, broadcast);
		String makePassword = makePasswordTextEditor->getText();
		makePassword = makePassword.substring(0, 72);
		//makePassword = makePassword.paddedRight('0', 72);

		var accountInfo = burstAPI.GetAccountId();
		String myAccount = accountInfo["account"].toString();
		String myAccountRS = accountInfo["accountRS"].toString();
		String publicKey = accountInfo["publicKey"].toString();

		// save a file with the coupon data
		FileChooser myChooser("Save location...", File::getSpecialLocation(File::userDesktopDirectory), "*.txt");		
		if (myChooser.browseForFileToSave(true))
		{
			File file(myChooser.getResult());
			if (file.existsAsFile())
				file.deleteFile();

			MemoryBlock coupondata;
			coupondata.loadFromHexString(txSignedHex);

			MemoryBlock publicKeyBinary;
			publicKeyBinary.loadFromHexString(publicKey);
			coupondata.append(publicKeyBinary.getData(), publicKeyBinary.getSize());			

			BlowFish blowFish(makePassword.toUTF8(), (int)makePassword.getNumBytesAsUTF8());
			blowFish.encrypt(coupondata);
			String couponDataHexEncrypted = String::toHexString(coupondata.getData(), coupondata.getSize()).removeCharacters(" ");
			
			if (burstAPI.VerifyCoupon(couponDataHexEncrypted, makePassword))
			{
				file.appendText("\n\nCoupon code:\n");
				file.appendText(couponDataHexEncrypted);

				file.appendText("\n\nExpires:\n");
				file.appendText(Time(Time::currentTimeMillis() + (deadlineSlider->getValue() * 60 * 1000)).toString(true, true, false));

				file.appendText("\n\nFrom:\n");
				file.appendText(myAccountRS);

				file.appendText("\n\nTo:\n");
				file.appendText(recipient);

				file.appendText("\n\namountNQT:\n");
				file.appendText(amountNQT);

				file.appendText("\n\nfeeNQT:\n");
				file.appendText(feeNQT);

				file.appendText("\n\n**********************************************************\nCoupon password:\n");
				file.appendText(makePasswordTextEditor->getText());
				file.appendText("\n**********************************************************\n");

				NativeMessageBox::showMessageBox(AlertWindow::InfoIcon, ProjectInfo::projectName, "Coupon saved\n" + file.getFullPathName());
			}
			else NativeMessageBox::showMessageBox(AlertWindow::WarningIcon, ProjectInfo::projectName, "Error Coupon not able to verify signature");
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
		//password = password.paddedRight('0', 72);
		String couponCode = couponCodeTextEditor->getText();

		if (burstAPI.VerifyCoupon(couponCode, password))
		{
			//burstAPI.Broadcast(couponDataHex);
			String txId = burstAPI.RedeemCoupon(couponCode, password);
			if (txId.isNotEmpty())
				NativeMessageBox::showMessageBox(AlertWindow::InfoIcon, ProjectInfo::projectName, "Coupon redeemed!");
			else NativeMessageBox::showMessageBox(AlertWindow::WarningIcon, ProjectInfo::projectName, "Coupon or password is invalid!");
		}
		else NativeMessageBox::showMessageBox(AlertWindow::WarningIcon, ProjectInfo::projectName, "Coupon or password is invalid!");
        //[/UserButtonCode_redeemButton]
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
		burstAPI.SetHost(server);
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

		myReedSolomon = burstAPI.getReedSolomon();
		myAccount = burstAPI.rsConvert(myReedSolomon)["account"].toString();
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
		burstAPI.SetSecretPhrase(passPhraseTextEditor->getText());
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
  <BACKGROUND backgroundColour="ffd3edff"/>
  <TEXTBUTTON name="new button" id="477f53cded383b1a" memberName="makeButton"
              virtualName="" explicitFocusOrder="0" pos="168 275 424 24" buttonText="Make coupon"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="recipientEditor" id="51fb7048fa922fc7" memberName="recipientEditor"
              virtualName="" explicitFocusOrder="0" pos="168 117 424 24" textcol="ff000000"
              bkgcol="ffffffff" caretcol="ff222222" initialText="BURST-" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <COMBOBOX name="new combo box" id="98ba1d24bcdc2daa" memberName="serverComboBox"
            virtualName="" explicitFocusOrder="0" pos="168 48 424 24" editable="0"
            layout="33" items="http://127.0.0.1:8125/&#10;https://wallet.burst.cryptoguru.org:8125/&#10;https://wallet.dev.burst-test.net/"
            textWhenNonSelected="http://127.0.0.1:8125/" textWhenNoItems="(no choices)"/>
  <LABEL name="passPhraseLabel" id="b374e0cf387af521" memberName="passPhraseLabel"
         virtualName="" explicitFocusOrder="0" pos="18 87 142 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Secret pass phrase"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="34"/>
  <TOGGLEBUTTON name="new toggle button" id="1d7bff6e655d4d32" memberName="savePassPhraseToggleButton"
                virtualName="" explicitFocusOrder="0" pos="496 88 96 24" tooltip="Saves your pass phrase on this computer. It will be obscured but offers no guarantees of protection !"
                txtcol="ff000000" buttonText="remember" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <LABEL name="new label" id="fb4c396e279f7faa" memberName="versionLabel"
         virtualName="" explicitFocusOrder="0" pos="240 24 54 20" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="v0.1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="12" bold="1" italic="0" justification="33"/>
  <LABEL name="walletLabel" id="ee30c01a1dd859a1" memberName="walletLabel"
         virtualName="" explicitFocusOrder="0" pos="9 49 151 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Wallet" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <TEXTEDITOR name="new text editor" id="f0cbabb6811d2f5" memberName="passPhraseTextEditor"
              virtualName="" explicitFocusOrder="0" pos="168 87 320 24" tooltip="enter your pass phrase here"
              initialText="" multiline="0" retKeyStartsLine="0" readonly="0"
              scrollbars="0" caret="1" popupmenu="1"/>
  <LABEL name="new label" id="5f5cc65ef737b46b" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="0 0 232 40" textCol="ff000000" edTextCol="ff000000"
         edBkgCol="0" labelText="BurstCoupon" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="37" bold="0" italic="0" justification="36"/>
  <SLIDER name="new slider" id="42dbdc403b9a7c0b" memberName="valueSlider"
          virtualName="" explicitFocusOrder="0" pos="168 149 152 24" min="1"
          max="10000" int="1" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="walletLabel" id="dea9f7c71b0b116a" memberName="walletLabel2"
         virtualName="" explicitFocusOrder="0" pos="328 149 80 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="BURST" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="bcedc9790daccc13" memberName="makePasswordTextEditor"
              virtualName="" explicitFocusOrder="0" pos="168 245 424 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="walletLabel" id="c0490f2e7b883a0c" memberName="walletLabel3"
         virtualName="" explicitFocusOrder="0" pos="72 149 88 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Value" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="walletLabel" id="f17e18a8f3d265d3" memberName="walletLabel4"
         virtualName="" explicitFocusOrder="0" pos="16 117 144 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Recipient" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="walletLabel" id="fa7ee5fb747ac1a2" memberName="walletLabel5"
         virtualName="" explicitFocusOrder="0" pos="24 245 136 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Redeem password"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="34"/>
  <SLIDER name="new slider" id="82d655075e2a363a" memberName="deadlineSlider"
          virtualName="" explicitFocusOrder="0" pos="168 182 152 24" min="1"
          max="1440" int="1" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="walletLabel" id="300c5def36e4a52e" memberName="walletLabel6"
         virtualName="" explicitFocusOrder="0" pos="328 182 80 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="minutes" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="walletLabel" id="3d5e0834f99a90b6" memberName="walletLabel7"
         virtualName="" explicitFocusOrder="0" pos="72 182 88 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Deadline" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <SLIDER name="new slider" id="a39cfcda962a6323" memberName="feeSlider"
          virtualName="" explicitFocusOrder="0" pos="168 214 152 24" min="1"
          max="1020" int="1" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="walletLabel" id="d6000bbdf5aac3db" memberName="walletLabel8"
         virtualName="" explicitFocusOrder="0" pos="328 214 152 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="slot * 735000 planck"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="walletLabel" id="d60ea3e3d775da55" memberName="walletLabel9"
         virtualName="" explicitFocusOrder="0" pos="72 214 88 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Fee slot" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <TEXTBUTTON name="new button" id="9cad9237d3ba07e5" memberName="redeemButton"
              virtualName="" explicitFocusOrder="0" pos="168 370 424 24" buttonText="Redeem coupon"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="dce08a74039e5bb6" memberName="passwordTextEditor"
              virtualName="" explicitFocusOrder="0" pos="168 340 424 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="walletLabel" id="f37c689a96c641d3" memberName="walletLabel10"
         virtualName="" explicitFocusOrder="0" pos="25 340 136 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Coupon password"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="34"/>
  <TEXTEDITOR name="new text editor" id="e6718a6abf74ea5c" memberName="couponCodeTextEditor"
              virtualName="" explicitFocusOrder="0" pos="168 312 424 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="walletLabel" id="92fa9ed24dbb11fc" memberName="walletLabel11"
         virtualName="" explicitFocusOrder="0" pos="25 312 136 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Coupon code" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
