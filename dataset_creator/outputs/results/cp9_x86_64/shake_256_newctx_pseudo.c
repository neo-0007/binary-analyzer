
long shake_256_newctx(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    lVar3 = CRYPTO_zalloc(0x1a0,"../providers/implementations/digests/sha3_prov.c",0x148);
    if (lVar3 != 0) {
      ossl_sha3_init(lVar3,0x1f,0x100);
      uVar1 = sha3_generic_md._8_8_;
      *(undefined8 *)(lVar3 + 400) = sha3_generic_md._0_8_;
      *(undefined8 *)(lVar3 + 0x198) = uVar1;
    }
  }
  return lVar3;
}

