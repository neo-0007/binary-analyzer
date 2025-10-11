
undefined8 FUN_00443db0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  
  param_1[0x16] = param_1 + 0x18;
  if ((*(int *)(param_1 + 2) - 1U < 2) && ((*(byte *)((long)param_1 + 0x3c) & 2) == 0)) {
    iVar1 = FUN_00498be0(param_2,param_3 * 8,param_1 + 0x18);
    *param_1 = FUN_00494f10;
    pcVar2 = (code *)0x0;
    if (*(int *)(param_1 + 2) == 2) {
LAB_00443e40:
      pcVar2 = FUN_00498270;
    }
  }
  else {
    iVar1 = FUN_00498c50();
    *param_1 = FUN_00494ec0;
    if (*(int *)(param_1 + 2) == 2) goto LAB_00443e40;
    if (*(int *)(param_1 + 2) != 5) {
      param_1[1] = 0;
      goto joined_r0x00443e53;
    }
    pcVar2 = FUN_00495dc0;
  }
  param_1[1] = pcVar2;
joined_r0x00443e53:
  if (iVar1 < 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_hw_aesni.inc",0x30,
                 "cipher_hw_aesni_initkey");
    FUN_0051f8f0(0x39,0x65,0);
    return 0;
  }
  return 1;
}

