# Burst Coupon

Create and claim password protected coupons for the [Burstcoin blockchain](http://burst-coin.org/).

![BurstCoupon](https://github.com/CurbShifter/BurstCoupon/blob/master/Source/img/burst-coupon.png)

*[DRAFT - WORK IN PROGRESS]*

Concept
-
The Burstcoin API allows you to first create and then sign a transaction locally, which keeps your password safe. Usually after signing you would broadcast the transaction to enter it into the memory pool of the nodes, so it can be included on the blockchain. 

This coupon model delays the transaction broadcasting by encrypting the signed transaction bytes with a password. The recipient of the coupon will need the arbitrary chosen password to broadcast the transaction that is within it. 


Coupons expire
-
A coupon will always expire and becomes invalid. Which means the coupon creator can leverage the transaction through the password and the transaction deadline. The current maximum accepted deadline for a transaction is 24 hours. Which means the coupon can only be created and be valid for max 1440 minutes. 

When the coupon expires without a claim, then no funds are affected it's like the transaction never existed.

Usage
-
To create a coupon you need the dApp. Build it from source or [download it here](https://github.com/CurbShifter/BurstCoupon/releases "download"). Open the zip or dmg package and copy the dApp to a location of your choice. And double click to run it. 

Select or enter the wallet server address in top of the interface. 

The create page lets you prepare a transaction as you would in a burst wallet.
 
- Enter your secret pass phrase (it will only be used locally to sign the transaction).  
- Enter the recipient BURST address. 
- Select the value in BURST you are sending with the coupon. 
- The deadline in minutes, the coupon will expire at this time!
- The fee slot, recommended to keep this high enough to ensure the coupon is never rejected by the mempool. 
- The last input box 'Claim password' will determine the password that needs to be entered to release the coupons transaction. Click make coupon and you will be asked for a location to save the coupon data.

The claim page is very straight forward. Enter the coupon code and the password can click Claim coupon. You will be prompted on the success or failure. 

Claim page
-
The recipient does not need the dApp binary to claim the coupon. Only the single static 
[Burst Coupon Claim page](https://curbshifter.github.io/BurstCoupon/ "Burst Coupon Claim page") [source file](https://github.com/CurbShifter/BurstCoupon/blob/master/docs/index.html) is needed. The page only runs self contained client-side javascript to decrypt the coupon and post the transaction to a node.

It is possible to give the recipient a link like this:

https://curbshifter.github.io/BurstCoupon/?coupon=XXXX

The 'XXXX' at the end should be replaced the with coupon code. Which saves the recipient the trouble of entering the code in the page. (Please feel free to host your own forked branded coupon claim page it should work the same).

The page is static HTML/js and .

Trust-less coupons from trusted issuers
-
The coupon recipient needs to trust the coupon issuer to give a valid coupon with the expected transaction. As the recipient is not able to see the contents of the transaction before decryption.

When the coupon is claimed/broadcasted, the wallet of the coupon issuer needs to have enough balance to have the transaction accepted into the memory pool.

Possible applications
-
- Airdrops / Automated faucets using the password to prevent/discourage abuse.
- Rewards for challenges (possibly for entry cost). For example based on puzzles or (online) detective work to retrieve the password. (generate site traffic!).
- Triggering of smart contracts (via 3rd party).
- Increase anonymity of transaction broadcasts, by mempool entry through other nodes. Can be a model for (payed) coupon sharing and broadcasting.

Future
-
Adding more transaction types and arguments. Such as transaction references. This could allow escrows to be released by 1 party broadcasting both transactions (to sign the escrow and release the funds). Where the other party only has the option to relay the password without the need to access a node.

Technical process
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

	sha256 by Brad Conte https://github.com/B-Con/crypto-algorithms
	CURVE25519 Modified by mko, by Matthijs van Duin, based on work by Daniel J Bernstein

Inquiries
-
Implementations as background service can be discussed. You can reach me through discord  [https://discord.gg/KsFf3jb](https://discord.gg/KsFf3jb "https://discord.gg/KsFf3jb") username: @CurbShifter#9411

----------

Released under GPL v3 License - Copyright (c) 2018 CurbShifter

