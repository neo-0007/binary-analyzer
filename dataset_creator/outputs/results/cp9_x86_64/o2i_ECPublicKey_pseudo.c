
EC_KEY * o2i_ECPublicKey(EC_KEY **key,uchar **in,long len)

{
  int iVar1;
  EC_KEY *pEVar2;
  
  if (((key != (EC_KEY **)0x0) && (pEVar2 = *key, pEVar2 != (EC_KEY *)0x0)) &&
     (*(long *)(pEVar2 + 0x18) != 0)) {
    iVar1 = EC_KEY_oct2key(pEVar2,*in,len,0);
    if (iVar1 == 0) {
      ERR_new();
      pEVar2 = (EC_KEY *)0x0;
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x476,"o2i_ECPublicKey");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      *in = *in + len;
    }
    return pEVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_asn1.c",0x470,"o2i_ECPublicKey");
  ERR_set_error(0x10,0xc0102,0);
  return (EC_KEY *)0x0;
}

