
void CRYPTO_cbc128_encrypt
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
               code *param_6)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  if (param_3 == 0) {
    return;
  }
  puVar5 = param_5;
  if (0xf < param_3) {
    uVar2 = param_3 - 0x10 >> 4;
    lVar1 = uVar2 + 1;
    puVar5 = param_2;
    puVar4 = param_5;
    puVar6 = param_1;
    do {
      puVar3 = puVar5;
      puVar7 = puVar6 + 2;
      *puVar3 = *puVar6 ^ *puVar4;
      puVar3[1] = puVar6[1] ^ puVar4[1];
      (*param_6)(puVar3,puVar3,param_4);
      puVar5 = puVar3 + 2;
      puVar4 = puVar3;
      puVar6 = puVar7;
    } while (puVar7 != param_1 + lVar1 * 2);
    puVar4 = param_2 + uVar2 * 2;
    uVar2 = param_3 & 0xf;
    param_3 = (ulong)((uint)param_3 & 0xf);
    param_1 = param_1 + lVar1 * 2;
    param_2 = param_2 + lVar1 * 2;
    puVar5 = puVar4;
    if (uVar2 == 0) goto LAB_00422307;
  }
  puVar4 = param_2;
  uVar2 = 0;
  do {
    *(byte *)((long)puVar4 + uVar2) =
         *(byte *)((long)param_1 + uVar2) ^ *(byte *)((long)puVar5 + uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < param_3);
  uVar2 = 1;
  if (param_3 != 0) {
    uVar2 = param_3;
  }
  do {
    *(undefined1 *)((long)puVar4 + uVar2) = *(undefined1 *)((long)puVar5 + uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x10);
  (*param_6)(puVar4,puVar4,param_4);
LAB_00422307:
  if (param_5 != puVar4) {
    uVar2 = puVar4[1];
    *param_5 = *puVar4;
    param_5[1] = uVar2;
  }
  return;
}

