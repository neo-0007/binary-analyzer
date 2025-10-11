
void FUN_0070bdf0(undefined4 *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  int iVar10;
  
  iVar10 = 0;
  puVar6 = (ulong *)(param_1 + 4);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x18);
  do {
    uVar5 = *puVar6;
    if (uVar5 != 0) {
      do {
        if ((uVar5 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0070bdd0("int_mallinfo(): unaligned fastbin chunk detected");
        }
        puVar1 = (ulong *)(uVar5 + 0x10);
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + (*(ulong *)(uVar5 + 8) & 0xfffffffffffffff8);
        uVar4 = uVar5 + 0x10 >> 0xc;
        uVar5 = *puVar1 ^ uVar4;
      } while (*puVar1 != uVar4);
    }
    puVar6 = puVar6 + 1;
  } while (puVar8 != puVar6);
  iVar3 = 1;
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x18) + 8) & 0xfffffffffffffff8;
  lVar7 = uVar5 + lVar9;
  do {
    for (puVar6 = (ulong *)puVar8[3]; puVar8 != puVar6; puVar6 = (ulong *)puVar6[3]) {
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + (puVar6[1] & 0xfffffffffffffff8);
    }
    puVar8 = puVar8 + 2;
  } while (puVar8 != (ulong *)(param_1 + 0x214));
  lVar2 = *(long *)(param_1 + 0x222);
  param_2[2] = param_2[2] + (long)iVar10;
  param_2[8] = param_2[8] + lVar7;
  *param_2 = lVar2 + *param_2;
  param_2[1] = (long)iVar3 + param_2[1];
  param_2[6] = lVar9 + param_2[6];
  param_2[7] = (param_2[7] + lVar2) - lVar7;
  lVar9 = DAT_0093e110;
  if (param_1 == &DAT_0093e160) {
    lVar7 = (long)DAT_0093e0fc;
    param_2[5] = 0;
    param_2[9] = uVar5;
    param_2[3] = lVar7;
    param_2[4] = lVar9;
  }
  return;
}

