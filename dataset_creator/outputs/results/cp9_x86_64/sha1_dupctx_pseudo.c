
undefined8 * sha1_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = ossl_prov_is_running();
  puVar3 = (undefined8 *)0x0;
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)
             CRYPTO_malloc(0x60,"../providers/implementations/digests/sha2_prov.c",0x3d);
    if (puVar3 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      *puVar3 = *param_1;
      puVar3[1] = uVar1;
      uVar1 = param_1[3];
      puVar3[2] = param_1[2];
      puVar3[3] = uVar1;
      uVar1 = param_1[5];
      puVar3[4] = param_1[4];
      puVar3[5] = uVar1;
      uVar1 = param_1[7];
      puVar3[6] = param_1[6];
      puVar3[7] = uVar1;
      uVar1 = param_1[9];
      puVar3[8] = param_1[8];
      puVar3[9] = uVar1;
      uVar1 = param_1[0xb];
      puVar3[10] = param_1[10];
      puVar3[0xb] = uVar1;
    }
  }
  return puVar3;
}

