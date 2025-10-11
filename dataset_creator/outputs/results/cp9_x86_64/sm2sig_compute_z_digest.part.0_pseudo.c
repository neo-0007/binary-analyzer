
bool sm2sig_compute_z_digest_part_0(long param_1)

{
  int iVar1;
  void *d;
  bool bVar2;
  
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  d = (void *)CRYPTO_zalloc(*(undefined8 *)(param_1 + 0x170),
                            "../providers/implementations/signature/sm2_sig.c",0x104);
  if (d != (void *)0x0) {
    iVar1 = ossl_sm2_compute_z_digest
                      (d,*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x178),
                       *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x168),d,*(size_t *)(param_1 + 0x170));
      bVar2 = iVar1 != 0;
      goto LAB_0047fdcc;
    }
  }
  bVar2 = false;
LAB_0047fdcc:
  CRYPTO_free(d);
  return bVar2;
}

