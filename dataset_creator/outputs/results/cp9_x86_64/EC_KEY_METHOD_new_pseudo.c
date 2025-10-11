
void EC_KEY_METHOD_new(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x78,"../crypto/ec/ec_kmeth.c",0xb8);
  if (puVar2 != (undefined8 *)0x0) {
    if (param_1 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      *puVar2 = *param_1;
      puVar2[1] = uVar1;
      uVar1 = param_1[3];
      puVar2[2] = param_1[2];
      puVar2[3] = uVar1;
      uVar1 = param_1[5];
      puVar2[4] = param_1[4];
      puVar2[5] = uVar1;
      uVar1 = param_1[7];
      puVar2[6] = param_1[6];
      puVar2[7] = uVar1;
      uVar1 = param_1[9];
      puVar2[8] = param_1[8];
      puVar2[9] = uVar1;
      uVar1 = param_1[0xb];
      puVar2[10] = param_1[10];
      puVar2[0xb] = uVar1;
      uVar1 = param_1[0xd];
      puVar2[0xc] = param_1[0xc];
      puVar2[0xd] = uVar1;
      puVar2[0xe] = param_1[0xe];
    }
    *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) | 1;
  }
  return;
}

