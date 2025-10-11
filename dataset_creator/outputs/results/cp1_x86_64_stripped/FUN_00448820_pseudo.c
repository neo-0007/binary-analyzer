
long FUN_00448820(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x3d8,"../providers/implementations/ciphers/cipher_aria_gcm.c",0x17);
    if (lVar2 != 0) {
      uVar3 = FUN_00448910(param_2);
      FUN_00487fd0(param_1,lVar2,param_2,uVar3);
    }
  }
  return lVar2;
}

