
long FUN_00449350(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x1d8,"../providers/implementations/ciphers/cipher_camellia.c",0x46);
    if (lVar2 != 0) {
      uVar3 = FUN_00449cb0(0x100);
      FUN_00486970(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
  }
  return lVar2;
}

