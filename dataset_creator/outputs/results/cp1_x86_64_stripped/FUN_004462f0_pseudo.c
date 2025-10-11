
undefined8
FUN_004462f0(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4,long param_5,
            ulong param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  uVar2 = FUN_0043b840();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_6 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_4 < param_6) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_wrp.c",0xe4,"aes_wrap_cipher");
    FUN_0051f8f0(0x39,0x6a,0);
    return 0;
  }
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  if (param_5 == 0) {
    return 0;
  }
  if ((bVar1 & 2) == 0) {
    if ((0xf < param_6) && ((param_6 & 7) == 0)) {
      if (param_2 != 0) goto LAB_00446369;
      iVar4 = (int)param_6 + -8;
LAB_00446401:
      uVar3 = (ulong)iVar4;
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_004463ad;
    }
    FUN_0051f420();
    uVar2 = 0xa2;
LAB_00446499:
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_wrp.c",uVar2,
                 "aes_wrap_cipher_internal");
    FUN_0051f8f0(0x39,0xe6,0);
  }
  else {
    if ((bVar1 & 1) == 0) {
      if ((param_6 & 7) != 0) {
        FUN_0051f420();
        uVar2 = 0xa8;
        goto LAB_00446499;
      }
      if (param_2 == 0) goto LAB_004463fe;
    }
    else if (param_2 == 0) {
      param_6 = param_6 + 7 & 0xfffffffffffffff8;
LAB_004463fe:
      iVar4 = (int)param_6 + 8;
      goto LAB_00446401;
    }
LAB_00446369:
    lVar5 = (long)param_1 + 0x94;
    if ((bVar1 & 4) == 0) {
      lVar5 = 0;
    }
    uVar3 = (*(code *)param_1[0x37])(param_1 + 0x18,lVar5,param_2,param_5,param_6,*param_1);
    if (uVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_wrp.c",0xc0,
                   "aes_wrap_cipher_internal");
      FUN_0051f8f0(0x39,0x66,0);
    }
    else {
      if (uVar3 < 0x80000000) goto LAB_004463ad;
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_wrp.c",0xc4,
                   "aes_wrap_cipher_internal");
      FUN_0051f8f0(0x39,0xd9,0);
    }
  }
  uVar3 = 0xffffffffffffffff;
LAB_004463ad:
  *param_3 = uVar3;
  return 1;
}

