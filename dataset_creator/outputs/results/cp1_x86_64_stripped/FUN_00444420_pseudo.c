
undefined8 * FUN_00444420(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  puVar2 = (undefined8 *)0x0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_0041ad90(0x3b0,"../providers/implementations/ciphers/cipher_aes_ocb.c",0x156);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",0x158,"aes_ocb_dupctx");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      puVar4 = param_1;
      puVar5 = puVar2;
      for (lVar3 = 0x76; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
        puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
      }
      iVar1 = FUN_005519a0(puVar2 + 0x56,param_1 + 0x56,puVar2 + 0x18,puVar2 + 0x37);
      if (iVar1 == 0) {
        FUN_0041ad60(puVar2,"../providers/implementations/ciphers/cipher_aes_ocb.c",0x15d);
        return (undefined8 *)0x0;
      }
    }
  }
  return puVar2;
}

