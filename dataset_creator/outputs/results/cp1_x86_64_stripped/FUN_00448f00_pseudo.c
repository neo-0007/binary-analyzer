
long FUN_00448f00(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x1d8,"../providers/implementations/ciphers/cipher_camellia.c",0x34);
    if (lVar2 != 0) {
      uVar3 = FUN_00449c90(0x100);
      FUN_00486970(lVar2,0x100,0x80,0,1,0,uVar3,param_1);
    }
  }
  return lVar2;
}

