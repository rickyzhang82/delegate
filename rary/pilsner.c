const char *SIGN_pilsner_c="{FILESIGN=pilsner.c:20100529114244+0900:35fab70b929d5b71:Author@DeleGate.ORG:1JR6QH3TJwPPd+skwGU16N9ygzM2AzYDwDB2bW6gV7siwdYiAs3Im86PDI8c/+HU56dZrE7SuQxou+u9OHByMcVfha7Kl8jEkuHfHGzr0SbwSfZ3kSIumhpeWZYckl+ZL5dRznZaAbi2Bicym/V3FKrnr4DTXzSklgdf49Uj5So=}";
/*////////////////////////////////////////////////////////////////////////
Copyright (c) 2009 National Institute of Advanced Industrial Science and Technology (AIST)
AIST-Product-ID: 2000-ETL-198715-01, H14PRO-049, H15PRO-165, H18PRO-443

Permission to use this material for noncommercial and/or evaluation
purpose, copy this material for your own use, and distribute the copies
via publicly accessible on-line media, without fee, is hereby granted
provided that the above copyright notice and this permission notice
appear in all copies.
AIST MAKES NO REPRESENTATIONS ABOUT THE ACCURACY OR SUITABILITY OF THIS
MATERIAL FOR ANY PURPOSE.  IT IS PROVIDED "AS IS", WITHOUT ANY EXPRESS
OR IMPLIED WARRANTIES.
/////////////////////////////////////////////////////////////////////////
Content-Type:	program/C; charset=US-ASCII
Program:	pilsner.c
Author:		Yutaka Sato <y.sato@delegate.org>
Description:
	this might be the kernel of DeleGate/10.X :)

History:
	090128	created
//////////////////////////////////////////////////////////////////////#*/

const char PL_VHOST[] = "vhost";
int pils(const char *ops,const char *src,char *dst,int dsz);

/* '"DIGEST-OFF"' */
