
int ec_spki_pub_to_der(EC_KEY *param_1,uchar **param_2)

{
  int iVar1;
  EC_POINT *pEVar2;
  
  pEVar2 = EC_KEY_get0_public_key(param_1);
  if (pEVar2 != (EC_POINT *)0x0) {
    iVar1 = i2o_ECPublicKey(param_1,param_2);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x2c1,
                "ec_spki_pub_to_der");
  ERR_set_error(0x39,0xdc,0);
  return 0;
}

