
long FUN_0044ca80(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043b840();
  lVar2 = 0;
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x248,"../providers/implementations/ciphers/cipher_tdes_common.c",0x1f);
    if (lVar2 != 0) {
      FUN_00486970(lVar2,param_3,param_4,param_5,param_2,param_6,param_7,param_1);
    }
  }
  return lVar2;
}

