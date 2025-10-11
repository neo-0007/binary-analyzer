
undefined8 * EVP_CIPHER_meth_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1[0xf] == 0) {
    puVar3 = (undefined8 *)
             EVP_CIPHER_meth_new(*(undefined4 *)param_1,*(undefined4 *)((long)param_1 + 4),
                                 *(undefined4 *)(param_1 + 1));
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = param_1[1];
      uVar1 = puVar3[0x11];
      *puVar3 = *param_1;
      puVar3[1] = uVar2;
      uVar2 = param_1[3];
      puVar3[2] = param_1[2];
      puVar3[3] = uVar2;
      uVar2 = param_1[5];
      puVar3[4] = param_1[4];
      puVar3[5] = uVar2;
      uVar2 = param_1[7];
      puVar3[6] = param_1[6];
      puVar3[7] = uVar2;
      uVar2 = param_1[9];
      puVar3[8] = param_1[8];
      puVar3[9] = uVar2;
      uVar2 = param_1[0xb];
      puVar3[10] = param_1[10];
      puVar3[0xb] = uVar2;
      uVar2 = param_1[0xd];
      puVar3[0xc] = param_1[0xc];
      puVar3[0xd] = uVar2;
      uVar2 = param_1[0xf];
      puVar3[0xe] = param_1[0xe];
      puVar3[0xf] = uVar2;
      uVar2 = param_1[0x11];
      puVar3[0x10] = param_1[0x10];
      puVar3[0x11] = uVar2;
      uVar2 = param_1[0x13];
      puVar3[0x12] = param_1[0x12];
      puVar3[0x13] = uVar2;
      uVar2 = param_1[0x15];
      puVar3[0x14] = param_1[0x14];
      puVar3[0x15] = uVar2;
      uVar2 = param_1[0x17];
      puVar3[0x16] = param_1[0x16];
      puVar3[0x17] = uVar2;
      uVar2 = param_1[0x19];
      puVar3[0x18] = param_1[0x18];
      puVar3[0x19] = uVar2;
      uVar2 = param_1[0x1b];
      puVar3[0x1a] = param_1[0x1a];
      puVar3[0x1b] = uVar2;
      uVar2 = param_1[0x1d];
      puVar3[0x1c] = param_1[0x1c];
      puVar3[0x1d] = uVar2;
      uVar2 = param_1[0x1f];
      puVar3[0x1e] = param_1[0x1e];
      puVar3[0x1f] = uVar2;
      puVar3[0x11] = uVar1;
      *(undefined4 *)(puVar3 + 3) = 2;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}

