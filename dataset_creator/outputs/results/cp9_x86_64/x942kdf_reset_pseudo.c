
void x942kdf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = *param_1;
  ossl_prov_digest_reset(param_1 + 1);
  CRYPTO_clear_free(param_1[4],param_1[5],"../providers/implementations/kdfs/x942kdf.c",0x15e);
  CRYPTO_clear_free(param_1[6],param_1[7],"../providers/implementations/kdfs/x942kdf.c",0x15f);
  CRYPTO_clear_free(param_1[8],param_1[0xc],"../providers/implementations/kdfs/x942kdf.c",0x160);
  CRYPTO_clear_free(param_1[9],param_1[0xd],"../providers/implementations/kdfs/x942kdf.c",0x161);
  CRYPTO_clear_free(param_1[10],param_1[0xe],"../providers/implementations/kdfs/x942kdf.c",0x162);
  CRYPTO_clear_free(param_1[0xb],param_1[0xf],"../providers/implementations/kdfs/x942kdf.c",0x163);
  param_1[0x13] = 0;
  param_1[1] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)(param_1 + 1) -
                       (int)(undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8)) + 0x98U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 0x13) = 1;
  return;
}

