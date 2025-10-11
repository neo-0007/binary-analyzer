
long FUN_004482c0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x1d8,"../providers/implementations/ciphers/cipher_aria.c",0x52);
    if (lVar2 != 0) {
      uVar3 = FUN_00448a50(0x100);
      FUN_00486970(lVar2,0x100,8,0x80,5,0,uVar3,param_1);
    }
  }
  return lVar2;
}

