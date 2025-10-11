
void shake_init(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 8);
  uVar2 = EVP_MD_CTX_get0_md_data();
  ossl_sha3_init(uVar2,0x1f,(long)(iVar1 << 3));
  return;
}

