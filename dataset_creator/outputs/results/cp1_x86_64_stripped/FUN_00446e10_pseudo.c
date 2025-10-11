
undefined8
FUN_00446e10(long param_1,long param_2,ulong *param_3,undefined8 param_4,long param_5,ulong param_6)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if ((((iVar1 != 0) && (*(long *)(param_1 + 0x2b0) != 0)) && (*(long *)(param_1 + 0x2b8) != 0)) &&
     ((((*(byte *)(param_1 + 0x3c) & 4) != 0 && (param_2 != 0 && param_5 != 0)) && (0xf < param_6)))
     ) {
    if (param_6 < 0x1000001) {
      if (*(code **)(param_1 + 0x2d0) == (code *)0x0) {
        iVar1 = FUN_00553630(param_1 + 0x2b0,param_1 + 0x94,param_5,param_2,param_6,
                             *(byte *)(param_1 + 0x3c) >> 1 & 1);
        if (iVar1 != 0) {
          return 0;
        }
      }
      else {
        (**(code **)(param_1 + 0x2d0))
                  (param_5,param_2,param_6,*(long *)(param_1 + 0x2b0),*(long *)(param_1 + 0x2b8),
                   param_1 + 0x94);
      }
      *param_3 = param_6;
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_xts.c",0xb2,"aes_xts_cipher");
    FUN_0051f8f0(0x39,0x94,0);
  }
  return 0;
}

