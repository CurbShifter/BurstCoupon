![BurstCoupon](https://github.com/CurbShifter/BurstCoupon/blob/master/Source/img/burst-coupon.png)

BurstCoupon
-
Create and claim password protected coupons as extension for the [Burstcoin blockchain](http://burst-coin.org/).

Concept
-
With the Burstcoin API you can first create and then sign a transaction locally, which keeps your password safe. Usually after signing you would broadcast the transaction immediately to enter it into the public memory pool of the nodes, so it can be included on the blockchain. 

The model demonstrated here with BurstCoupon, delays the transaction broadcast by encrypting the signed transaction bytes with a arbitrary password. Turning it into a 'coupon'. The recipient of the coupon will then need the password, to broadcast the transaction that is within it. The transaction now has a lock that can be controlled by a 3rd party without access to the senders wallet.

Deadlines
-
The name 'coupon' was chosen because unlike tokens for example, it is common that coupons will expire. As will BurstCoupons due to the transaction deadline. Which means the coupon creator can leverage the  transaction through a password and the deadline. The current maximum accepted deadline for a transaction is 24 hours. Which means the coupon can only be valid for max 1440 minutes from the moment it is created. Coupon deadlines any lower than 30 minutes would not be sensible. Network traffic need to be considered for timely inclusion in a block.

When the coupon expires without a claim/broadcast, no funds are affected. It's like the transaction never existed. No double spending is possible either. The memory pool would be aware of the signature and will return the existing transaction reference.

Potential applications
-
Through this code / concept the following applications can be developed; 

- Efficient airdrops / automated faucets using the password to prevent/discourage abuse.
- Conditional triggering of smart contract / AT via 3rd party without access to the private wallet key.
- Increase anonymity of transaction broadcasts. By memory pool entry through other IP / nodes. Can be a model for (payed) coupon sharing and broadcasting on local nodes.
- Rewards for challenges (possibly for entry cost). For example based on puzzles or (online) detective work to retrieve the password. (generate site traffic!).
- Scratch tickets, buy coupons with 'variable' value.
- ...[insert your awesome idea ! my contact details are below.]

Trusted creator
-
The coupon execution is trust-less. But the recipient needs to trust the coupon issuer to give a valid coupon with the expected transaction. As the recipient is not able to validate the contents of the transaction before decryption.

When the coupon is claimed/broadcast, the wallet of the coupon issuer needs to have enough balance to have the transaction accepted into the memory pool !

----

Usage of BurstCoupon
-
To create a coupon you need the dApp binary. Build it from source or [download it here](https://github.com/CurbShifter/BurstCoupon/releases "download"). Open the zip or dmg package and copy the dApp to a location of your choice. And double click to run it. 

Select or enter the wallet server address in top of the interface. 

The create page lets you prepare a transaction as you would in a burst wallet.
 
- Enter your secret pass phrase. (used to locally sign the transaction). 
- Enter the recipient BURST address. 
- Select the value in BURST you are sending with the coupon. 
- The deadline in minutes, the coupon will expire at this time after creation!
- The fee slot, it is recommended to keep this high enough to ensure the coupon is not ignored by the miners. 
- The last input box 'Claim password' will determine the password that needs to be entered to release the coupons transaction. 
- Click make coupon and you will be asked for a location to save the coupon data.

example output:

		Coupon code:
		BPgOa6JkjJZDqWHVs8vPucZ68G8..........ect
		
		Link:
		https://curbshifter.github.io/BurstCoupon/?coupon=BPgOa6JkjJZDqWHVs8..........ect
		
		Expires:
		3 Sep 2018 8:31pm
		
		From: BURST-WN56-VW53-7B6V-9YAFW
		To: BURST-TNN3-ZP8C-5D32-ALB2X
		
		amountNQT:
		100000000
		
		feeNQT:
		735000
		
		**********************************************************
		Coupon password:
		test
		**********************************************************

The claim page is very straight forward. Enter the coupon code and the password can click Claim coupon. You will be prompted on the success or failure. 

IMPORTANT: You have the option to let the dApp 'remember' the pass phrase. But the local storage is only obscured and currently not recommended for use.

Online claim page
-
The recipient does not need the dApp binary to claim the coupon. Only the [Burst Coupon Claim page](https://curbshifter.github.io/BurstCoupon/ "White label Burst Coupon Claim page") is needed [[source]](https://github.com/CurbShifter/BurstCoupon/blob/master/BurstCoupon-Claim.html "HTML/js source"). The single static html page runs only client-sided javascript to decrypt the coupon and post the transaction to a node.

With this page it is possible to give the recipient a link including the coupon code. Like in the example output shown above. Which makes the concept a lot more portable and applicable. You can use the page/code to host your own branded Burst claim page.

----
Basic process
-
Creating the coupon:

- Enter the tx information. (address, value, deadline ect)
- Request tx bytes from node.
- Sign the tx locally.
- Take the arbitrary coupon password and create SHA256 hash.
- Use this hash as encryption key.
- Encrypt the signed tx with CBC blowfish.
- Encode the bytes to base64 for distribution.

Claiming the coupon

- Take the coupon code and decode from base64 into binary.
- CBC Blowfish Decrypt the data, using the SHA256 of the given password.
- only continue if the data is 176 bytes long and just contains hex characters.
- Broadcast the tx bytes to the node.

Future development
-
Depending on community demand or business requests;

- Adding other transaction types like;
- multi-outs a group can benefit from 1 coupon. 
- (Encrypted) Messages. Possible 3rd party release of the message/info.
- Adding transaction references. This could allow escrows to be released by 1 party broadcasting both transactions (to sign the escrow and release the funds). Where the other party has the option to only relay the password without the need to access a node.
- A static html page to make coupons removing the need of a dApp binary.
- Data encryption only for the signature. To be able to readout tx data. For displaying details during the claim process.

Building
-
The msvc2013 / xcode projects are included. You will need to download and include these libraries;

    Juce https://www.juce.com
    boost++ https://www.boost.org/

Included in source:

	sha256 by Brad Conte https://github.com/B-Con/crypto-algorithms
	CURVE25519 Modified by mko, by Matthijs van Duin, based on work by Daniel J Bernstein

	js:
	sha256 https://github.com/emn178/js-sha256 (MIT)
	Blowfish Alexandr Gorlov https://github.com/agorlov/javascript-blowfish (MIT)


----
You can reach me through github or discord  [https://discord.gg/KsFf3jb](https://discord.gg/KsFf3jb "https://discord.gg/KsFf3jb") username: @CurbShifter#9411

Please support the developers of the software you use. Value for value. BURST-WN56-VW53-7B6V-9YAFW

----------

Released under GPL v3 License - Copyright (c) 2018 CurbShifter

