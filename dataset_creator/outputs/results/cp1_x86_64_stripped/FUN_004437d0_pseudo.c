
long FUN_004437d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x3c0,"../providers/implementations/ciphers/cipher_aes_gcm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = FUN_00443b90(param_2);
      FUN_00487fd0(param_1,lVar2,param_2,uVar3);
    }
  }
  return lVar2;
}

