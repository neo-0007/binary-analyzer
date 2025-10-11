
undefined8 FUN_00449bc0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  param_1[0x16] = param_1 + 0x18;
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = FUN_004c7580(param_2,param_3 * 8,param_1 + 0x18);
  if (-1 < iVar2) {
    if (((*(byte *)((long)param_1 + 0x3c) & 2) == 0) && (iVar1 - 1U < 2)) {
      *param_1 = FUN_004c7600;
    }
    else {
      *param_1 = FUN_004c75e0;
    }
    if (iVar1 == 2) {
      pcVar3 = FUN_004c7280;
    }
    else {
      pcVar3 = (code *)0x0;
    }
    param_1[1] = pcVar3;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/ciphers/cipher_camellia_hw.c",0x1e,
               "cipher_hw_camellia_initkey");
  FUN_0051f8f0(0x39,0x65,0);
  return 0;
}

