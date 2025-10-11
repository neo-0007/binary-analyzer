
ulong ec_pkey_ctrl(uint *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 9) {
    uVar2 = (ulong)*param_1;
    if ((*param_1 != 0) && (uVar2 = 0, *(long *)(param_1 + 0x18) == 0)) {
      uVar3 = evp_pkey_get0_EC_KEY_int();
      uVar2 = EC_KEY_oct2key(uVar3,param_4,param_3,0);
      return uVar2;
    }
  }
  else {
    if (param_2 == 10) {
      uVar3 = EVP_PKEY_get0_EC_KEY();
      uVar2 = EC_KEY_key2buf(uVar3,4,param_4,0);
      return uVar2;
    }
    uVar2 = 0xfffffffe;
    if (param_2 == 3) {
      iVar1 = EVP_PKEY_get_id();
      if (iVar1 != 0x494) {
        *param_4 = 0x2a0;
        return 1;
      }
      *param_4 = 0x477;
      uVar2 = 2;
    }
  }
  return uVar2;
}

