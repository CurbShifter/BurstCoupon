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

#ifndef __JUCE_HEADER_D83B56D27656EC18__
#define __JUCE_HEADER_D83B56D27656EC18__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "LookAndFeel.h"

#include "BurstLib.h"
//typedef unsigned long long burstlibPtr;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class InterfaceComponent  : public Component,
                            public TextEditorListener,
                            public Timer,
                            public ButtonListener,
                            public ComboBoxListener,
                            public SliderListener
{
public:
    //==============================================================================
    InterfaceComponent ();
    ~InterfaceComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void textEditorTextChanged(TextEditor &editor); //Called when the user changes the text in some way.
	void textEditorReturnKeyPressed(TextEditor &editor); //Called when the user presses the return key.
	void textEditorEscapeKeyPressed(TextEditor &editor); //Called when the user presses the escape key.
	void textEditorFocusLost(TextEditor &editor); //Called when the text editor loses focus.

	String Encrypt(String input);
	String Decrypt(String input);

	ApplicationProperties appProp;
	PropertiesFile::Options options;
	String GetAppValue(const String type);
	void SetAppValue(const String type, const String value);

	void SetView(int viewNr);
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;

    // Binary resources:
    static const char* burstcoupon_svg;
    static const int burstcoupon_svgSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	void timerCallback();

	burstlibPtr apiHandle;
	BurstLib_FunctionHandles burstLib;

	void log(String message);
	ScopedPointer<BurstCouponLookAndFeel> wizlaf;
	//String myAccount;
	//String myReedSolomon;

	int view;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> makeButton;
    ScopedPointer<TextEditor> recipientEditor;
    ScopedPointer<ComboBox> serverComboBox;
    ScopedPointer<Label> passPhraseLabel;
    ScopedPointer<ToggleButton> savePassPhraseToggleButton;
    ScopedPointer<Label> versionLabel;
    ScopedPointer<Label> walletLabel;
    ScopedPointer<TextEditor> passPhraseTextEditor;
    ScopedPointer<Slider> valueSlider;
    ScopedPointer<Label> walletLabel2;
    ScopedPointer<TextEditor> makePasswordTextEditor;
    ScopedPointer<Label> walletLabel3;
    ScopedPointer<Label> walletLabel4;
    ScopedPointer<Label> walletLabel5;
    ScopedPointer<Slider> deadlineSlider;
    ScopedPointer<Label> walletLabel6;
    ScopedPointer<Label> walletLabel7;
    ScopedPointer<Slider> feeSlider;
    ScopedPointer<Label> walletLabel8;
    ScopedPointer<Label> walletLabel9;
    ScopedPointer<TextButton> redeemButton;
    ScopedPointer<TextEditor> passwordTextEditor;
    ScopedPointer<Label> walletLabel10;
    ScopedPointer<TextEditor> couponCodeTextEditor;
    ScopedPointer<Label> walletLabel11;
    ScopedPointer<TextButton> createButton;
    ScopedPointer<TextButton> claimButton;
    ScopedPointer<Drawable> drawable1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (InterfaceComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_D83B56D27656EC18__
