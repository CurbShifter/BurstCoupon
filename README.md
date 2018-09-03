# Burst Coupon

Create and claim password protected coupons for the [Burstcoin blockchain](http://burst-coin.org/).

![BurstCoupon](https://github.com/CurbShifter/BurstCoupon/blob/master/Source/img/burst-coupon.png)

*[DRAFT]*

Concept
-
With the Burstcoin API you can first create and then sign a transaction locally, which keeps your password safe. Usually after signing you would broadcast the transaction immediately to enter it into the public memory pool of the nodes, so it can be included on the blockchain. 

The model demonstrated here with BurstCoupon, delays the transaction broadcast by encrypting the signed transaction bytes with a arbitrary password. Turning it into a 'coupon'. The recipient of the coupon will then need the password, to broadcast the transaction that is within it. The transaction now has a lock that can be controlled by a 3rd party without access to the senders wallet.

Deadlines
-
A coupon will expire due to the transaction deadline. Which means the coupon creator can leverage the  transaction through a password and the deadline. The current maximum accepted deadline for a transaction is 24 hours. Which means the coupon can only be valid for max 1440 minutes from the moment it is created. Coupon deadlines any lower than 30 minutes would not be sensible. Network traffic need to be considered for timely inclusion in a block.

When the coupon expires without a claim/broadcast, no funds are affected. It's like the transaction never existed. No double spending is possible either. The memory pool would be aware of the signature and will return the existing transaction reference.

Potential
-
Through this code / concept the following applications can be developed; 

- Airdrops / Automated faucets using the password to prevent/discourage abuse.
- Conditional triggering of smart contract / AT via 3rd party without access to the wallet.
- Increase anonymity of transaction broadcasts, by memory pool entry through other IP / nodes. Can be a model for (payed) coupon sharing and broadcasting.
- Rewards for challenges (possibly for entry cost). For example based on puzzles or (online) detective work to retrieve the password. (generate site traffic!).
- Scratch tickets, buy coupons with 'variable' value.

Usage of BurstCoupon
-
To create a coupon you need the dApp binary. Build it from source or [download it here](https://github.com/CurbShifter/BurstCoupon/releases "download"). Open the zip or dmg package and copy the dApp to a location of your choice. And double click to run it. 

Select or enter the wallet server address in top of the interface. 

The create page lets you prepare a transaction as you would in a burst wallet.
 
- Enter your secret pass phrase (it will only be used locally to sign the transaction).  
- Enter the recipient BURST address. 
- Select the value in BURST you are sending with the coupon. 
- The deadline in minutes, the coupon will expire at this time after creation!
- The fee slot, it is recommended to keep this high enough to ensure the coupon is not ignored by the miners. 
- The last input box 'Claim password' will determine the password that needs to be entered to release the coupons transaction. Click make coupon and you will be asked for a location to save the coupon data.

The claim page is very straight forward. Enter the coupon code and the password can click Claim coupon. You will be prompted on the success or failure. 

Claim page
-
The recipient does not need the dApp binary to claim the coupon. Only the [Burst Coupon Claim page](https://curbshifter.github.io/BurstCoupon/ "Burst Coupon Claim page") is needed [[source]](https://github.com/CurbShifter/BurstCoupon/blob/master/BurstCoupon-Claim.html "Burst Coupon Claim page Source"). The single static html page runs only client-sided javascript to decrypt the coupon and post the transaction to a node.

With this page it is possible to give the recipient a link like this:

https://curbshifter.github.io/BurstCoupon/?coupon=XXXX

The 'XXXX' at the end should be replaced the with coupon code. Which saves the recipient the trouble of entering the code in the page. You may use the page/code to host your own branded page.

Trusted creator
-
The coupon execution is trust-less. But one needs to trust the coupon issuer to give a valid coupon with the expected transaction. As the recipient is not able to validate the contents of the transaction before decryption.

When the coupon is claimed/broadcast, the wallet of the coupon issuer needs to have enough balance to have the transaction accepted into the memory pool !



Future
-
- Adding other transaction types like multi-outs. 
- Adding arguments such as transaction references. This could allow escrows to be released by 1 party broadcasting both transactions (to sign the escrow and release the funds). Where the other party only has the option to relay the password without the need to access a node.
- A static html page to make coupons without the need of a dApp binary.
- Partial data encryption (only signature) to readout tx data to display details during the claim process

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
You can reach me through gh or discord  [https://discord.gg/KsFf3jb](https://discord.gg/KsFf3jb "https://discord.gg/KsFf3jb") username: @CurbShifter#9411

Please support the developers of the software you use. My wallet address: BURST-WN56-VW53-7B6V-9YAFW

----------

Released under GPL v3 License - Copyright (c) 2018 CurbShifter

