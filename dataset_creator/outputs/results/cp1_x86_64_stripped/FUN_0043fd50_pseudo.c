
long FUN_0043fd50(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x348,"../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",
                         0x164);
    if (lVar2 != 0) {
      uVar3 = FUN_00443440();
      FUN_00486970(lVar2,0x100,0x80,0x80,2,9,uVar3,param_1);
      *(undefined8 *)(lVar2 + 0x1d0) = *(undefined8 *)(lVar2 + 0xa8);
    }
  }
  return lVar2;
}

