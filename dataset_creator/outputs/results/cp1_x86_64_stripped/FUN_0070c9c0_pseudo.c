
void FUN_0070c9c0(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  
  plVar9 = (long *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 8) = 0;
  do {
    LOCK();
    puVar6 = (ulong *)*plVar9;
    *plVar9 = 0;
    UNLOCK();
    if (puVar6 != (ulong *)0x0) {
      do {
        if (((ulong)puVar6 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0070bdd0("malloc_consolidate(): unaligned fastbin chunk detected");
        }
        uVar3 = puVar6[1];
        if (plVar9 != (long *)(param_1 + 0x10 + (ulong)(((uint)(uVar3 >> 4) & 0xfffffff) - 2) * 8))
        {
                    /* WARNING: Subroutine does not return */
          FUN_0070bdd0("malloc_consolidate(): invalid chunk size");
        }
        uVar4 = puVar6[2];
        puVar1 = puVar6 + 2;
        uVar7 = uVar3 & 0xfffffffffffffff8;
        puVar2 = (ulong *)((long)puVar6 + uVar7);
        uVar5 = puVar2[1];
        uVar8 = uVar5 & 0xfffffffffffffff8;
        if ((uVar3 & 1) == 0) {
          uVar3 = *puVar6;
          puVar6 = (ulong *)((long)puVar6 - uVar3);
          uVar7 = uVar7 + uVar3;
          if ((puVar6[1] & 0xfffffffffffffff8) != uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_0070bdd0("corrupted size vs. prev_size in fastbins");
          }
          FUN_0070c8e0(puVar6);
        }
        if (*(ulong **)(param_1 + 0x60) == puVar2) {
          puVar6[1] = uVar7 + uVar8 | 1;
          *(ulong **)(param_1 + 0x60) = puVar6;
        }
        else {
          if ((*(byte *)((long)puVar2 + uVar8 + 8) & 1) == 0) {
            uVar7 = uVar7 + uVar8;
            puVar10 = (ulong *)((long)puVar6 + uVar7);
            FUN_0070c8e0(puVar2);
          }
          else {
            puVar2[1] = uVar5 & 0xfffffffffffffffe;
            puVar10 = puVar2;
          }
          uVar3 = *(ulong *)(param_1 + 0x70);
          *(ulong **)(param_1 + 0x70) = puVar6;
          *(ulong **)(uVar3 + 0x18) = puVar6;
          if (0x3ff < uVar7) {
            *(undefined1 (*) [16])(puVar6 + 4) = (undefined1  [16])0x0;
          }
          puVar6[2] = uVar3;
          puVar6[3] = (ulong)(param_1 + 0x60);
          puVar6[1] = uVar7 | 1;
          *puVar10 = uVar7;
        }
        puVar6 = (ulong *)(uVar4 ^ (ulong)puVar1 >> 0xc);
      } while (uVar4 != (ulong)puVar1 >> 0xc);
    }
    plVar9 = plVar9 + 1;
    if ((long *)(param_1 + 0x60) == plVar9) {
      return;
    }
  } while( true );
}

