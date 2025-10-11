
EC_KEY * d2i_ECParameters(EC_KEY **key,uchar **in,long len)

{
  int iVar1;
  EC_GROUP *pEVar2;
  EC_KEY *key_00;
  
  if ((in == (uchar **)0x0) || (*in == (uchar *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_asn1.c",0x449,"d2i_ECParameters");
    ERR_set_error(0x10,0xc0102,0);
    return (EC_KEY *)0x0;
  }
  if ((key == (EC_KEY **)0x0) || (key_00 = *key, key_00 == (EC_KEY *)0x0)) {
    key_00 = EC_KEY_new();
    if (key_00 == (EC_KEY *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x44f,"d2i_ECParameters");
      ERR_set_error(0x10,0xc0100,0);
      return (EC_KEY *)0x0;
    }
    pEVar2 = d2i_ECPKParameters((EC_GROUP **)(key_00 + 0x18),in,len);
    if (pEVar2 != (EC_GROUP *)0x0) {
      iVar1 = EC_GROUP_get_curve_name(*(EC_GROUP **)(key_00 + 0x18));
      if (iVar1 == 0x494) goto LAB_004de0f0;
      goto LAB_004de0b2;
    }
    if (key == (EC_KEY **)0x0) goto LAB_004de0da;
  }
  else {
    pEVar2 = d2i_ECPKParameters((EC_GROUP **)(key_00 + 0x18),in,len);
    if (pEVar2 != (EC_GROUP *)0x0) {
      iVar1 = EC_GROUP_get_curve_name(*(EC_GROUP **)(key_00 + 0x18));
      if (iVar1 != 0x494) {
        *(long *)(key_00 + 0x68) = *(long *)(key_00 + 0x68) + 1;
        goto LAB_004de05c;
      }
LAB_004de0f0:
      EC_KEY_set_flags(key_00,4);
LAB_004de0b2:
      *(long *)(key_00 + 0x68) = *(long *)(key_00 + 0x68) + 1;
      if (key == (EC_KEY **)0x0) {
        return key_00;
      }
LAB_004de05c:
      *key = key_00;
      return key_00;
    }
  }
  if (*key == key_00) {
    *(long *)(key_00 + 0x68) = *(long *)(key_00 + 0x68) + 1;
    return (EC_KEY *)0x0;
  }
LAB_004de0da:
  EC_KEY_free(key_00);
  return (EC_KEY *)0x0;
}

