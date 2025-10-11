
undefined8
aes_wrap_cipher(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4,long param_5,
               ulong param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_6 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_4 < param_6) {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/cipher_aes_wrp.c",0xe4,"aes_wrap_cipher");
    ERR_set_error(0x39,0x6a,0);
    return 0;
  }
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  if (param_5 == 0) {
    return 0;
  }
  if ((bVar1 & 2) == 0) {
    if ((0xf < param_6) && ((param_6 & 7) == 0)) {
      if (param_2 != 0) goto LAB_00444009;
      iVar4 = (int)param_6 + -8;
LAB_004440a1:
      uVar3 = (ulong)iVar4;
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_0044404d;
    }
    ERR_new();
    uVar2 = 0xa2;
LAB_00444139:
    ERR_set_debug("../providers/implementations/ciphers/cipher_aes_wrp.c",uVar2,
                  "aes_wrap_cipher_internal");
    ERR_set_error(0x39,0xe6,0);
  }
  else {
    if ((bVar1 & 1) == 0) {
      if ((param_6 & 7) != 0) {
        ERR_new();
        uVar2 = 0xa8;
        goto LAB_00444139;
      }
      if (param_2 == 0) goto LAB_0044409e;
    }
    else if (param_2 == 0) {
      param_6 = param_6 + 7 & 0xfffffffffffffff8;
LAB_0044409e:
      iVar4 = (int)param_6 + 8;
      goto LAB_004440a1;
    }
LAB_00444009:
    lVar5 = (long)param_1 + 0x94;
    if ((bVar1 & 4) == 0) {
      lVar5 = 0;
    }
    uVar3 = (*(code *)param_1[0x37])(param_1 + 0x18,lVar5,param_2,param_5,param_6,*param_1);
    if (uVar3 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_wrp.c",0xc0,
                    "aes_wrap_cipher_internal");
      ERR_set_error(0x39,0x66,0);
    }
    else {
      if (uVar3 < 0x80000000) goto LAB_0044404d;
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_wrp.c",0xc4,
                    "aes_wrap_cipher_internal");
      ERR_set_error(0x39,0xd9,0);
    }
  }
  uVar3 = 0xffffffffffffffff;
LAB_0044404d:
  *param_3 = uVar3;
  return 1;
}

