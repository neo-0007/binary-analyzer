
undefined8 CRYPTO_ocb128_copy_ctx(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  void *__dest;
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  if (param_3 != 0) {
    param_1[2] = param_3;
  }
  if (param_4 != 0) {
    param_1[3] = param_4;
  }
  uVar1 = 1;
  if (param_2[0xb] != 0) {
    __dest = CRYPTO_malloc((int)(param_2[6] << 4),"../crypto/modes/ocb128.c",0xcd);
    param_1[0xb] = __dest;
    if (__dest == (void *)0x0) {
      ERR_new();
      uVar1 = 0;
      ERR_set_debug("../crypto/modes/ocb128.c",0xce,"CRYPTO_ocb128_copy_ctx");
      ERR_set_error(0xf,0xc0100,0);
    }
    else {
      memcpy(__dest,(void *)param_2[0xb],(param_2[5] + 1) * 0x10);
    }
  }
  return uVar1;
}

