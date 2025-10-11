
long FUN_00448660(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x1b0,"../providers/implementations/ciphers/cipher_aria_ccm.c",0x19);
    if (lVar2 != 0) {
      uVar3 = FUN_00448760(0x100);
      FUN_00487a20(lVar2,0x100,uVar3);
    }
  }
  return lVar2;
}

