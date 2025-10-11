
void FUN_0070bdd0(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong *puVar10;
  long lVar11;
  int iVar12;
  
  plVar6 = (long *)0x7feb40;
  puVar9 = (undefined4 *)0x1;
  FUN_00702e20(1,"%s\n",param_1);
  iVar12 = 0;
  puVar7 = (ulong *)(puVar9 + 4);
  lVar11 = 0;
  puVar10 = (ulong *)(puVar9 + 0x18);
  do {
    uVar5 = *puVar7;
    if (uVar5 != 0) {
      do {
        if ((uVar5 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0070bdd0("int_mallinfo(): unaligned fastbin chunk detected");
        }
        puVar1 = (ulong *)(uVar5 + 0x10);
        iVar12 = iVar12 + 1;
        lVar11 = lVar11 + (*(ulong *)(uVar5 + 8) & 0xfffffffffffffff8);
        uVar4 = uVar5 + 0x10 >> 0xc;
        uVar5 = *puVar1 ^ uVar4;
      } while (*puVar1 != uVar4);
    }
    puVar7 = puVar7 + 1;
  } while (puVar10 != puVar7);
  iVar3 = 1;
  uVar5 = *(ulong *)(*(long *)(puVar9 + 0x18) + 8) & 0xfffffffffffffff8;
  lVar8 = uVar5 + lVar11;
  do {
    for (puVar7 = (ulong *)puVar10[3]; puVar10 != puVar7; puVar7 = (ulong *)puVar7[3]) {
      iVar3 = iVar3 + 1;
      lVar8 = lVar8 + (puVar7[1] & 0xfffffffffffffff8);
    }
    puVar10 = puVar10 + 2;
  } while (puVar10 != (ulong *)(puVar9 + 0x214));
  lVar2 = *(long *)(puVar9 + 0x222);
  plVar6[2] = plVar6[2] + (long)iVar12;
  plVar6[8] = plVar6[8] + lVar8;
  *plVar6 = lVar2 + *plVar6;
  plVar6[1] = (long)iVar3 + plVar6[1];
  plVar6[6] = lVar11 + plVar6[6];
  plVar6[7] = (plVar6[7] + lVar2) - lVar8;
  lVar11 = DAT_0093e110;
  if (puVar9 == &DAT_0093e160) {
    lVar8 = (long)DAT_0093e0fc;
    plVar6[5] = 0;
    plVar6[9] = uVar5;
    plVar6[3] = lVar8;
    plVar6[4] = lVar11;
  }
  return;
}

