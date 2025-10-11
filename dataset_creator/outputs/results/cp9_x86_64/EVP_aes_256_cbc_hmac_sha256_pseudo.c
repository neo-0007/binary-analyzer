
undefined1  [16] EVP_aes_256_cbc_hmac_sha256(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [16];
  ulong uStack_10;
  
  if ((DAT_0093e59c._3_1_ & 2) == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    return auVar2 << 0x40;
  }
  iVar3 = aesni_cbc_sha256_enc(0,0,0,0,0,0,0);
  if (iVar3 != 0) {
    auVar4._8_8_ = uStack_10;
    auVar4._0_8_ = aesni_256_cbc_hmac_sha256_cipher;
    return auVar4;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uStack_10;
  return auVar1 << 0x40;
}

