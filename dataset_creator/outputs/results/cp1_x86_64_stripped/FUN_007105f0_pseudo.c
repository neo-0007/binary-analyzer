
void FUN_007105f0(void)

{
  ulong *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  long in_FS_OFFSET;
  bool bVar10;
  
  lVar3 = *(long *)(in_FS_OFFSET + -0x30);
  *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  if (lVar3 != 0) {
    puVar9 = (ulong *)(lVar3 + 0x80);
    *(undefined8 *)(in_FS_OFFSET + -0x30) = 0;
    do {
      puVar4 = (ulong *)*puVar9;
      while (puVar4 != (ulong *)0x0) {
        if (((ulong)puVar4 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0070bdd0("tcache_thread_shutdown(): unaligned tcache chunk detected");
        }
        puVar1 = puVar4 + -2;
        *puVar9 = (ulong)puVar4 >> 0xc ^ *puVar4;
        uVar7 = puVar4[-1];
        uVar2 = *(undefined4 *)(in_FS_OFFSET + -0x58);
        if ((uVar7 & 2) == 0) {
          if ((*(long *)(in_FS_OFFSET + -0x30) == 0) && (*(char *)(in_FS_OFFSET + -0x28) == '\0')) {
            FUN_0070fa60();
            uVar7 = puVar4[-1];
          }
          puVar8 = &DAT_0093e160;
          if ((uVar7 & 4) != 0) {
            uVar7 = DAT_0093e0f0 * -4;
            if (DAT_0093e0f0 == 0) {
              uVar7 = 0xfffffffffc000000;
            }
            puVar8 = *(undefined4 **)(uVar7 & (ulong)puVar1);
          }
          FUN_0070cb80(puVar8,puVar1,0);
        }
        else {
          if (((DAT_0093e108 == 0) && (DAT_0093e0d0 < uVar7)) && (uVar7 < 0x2000001)) {
            DAT_0093e0d0 = uVar7 & 0xfffffffffffffff8;
            DAT_0093e0c0 = DAT_0093e0d0 * 2;
          }
          FUN_0070c050(puVar1);
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar2;
        puVar4 = (ulong *)*puVar9;
      }
      puVar9 = puVar9 + 1;
    } while ((ulong *)(lVar3 + 0x280) != puVar9);
    FUN_007104f0(lVar3);
  }
  lVar3 = *(long *)(in_FS_OFFSET + -0x20);
  *(undefined8 *)(in_FS_OFFSET + -0x20) = 0;
  if (lVar3 != 0) {
    LOCK();
    bVar10 = DAT_0094a9b8 == 0;
    if (bVar10) {
      DAT_0094a9b8 = 1;
    }
    UNLOCK();
    if (!bVar10) {
      FUN_00709590(&DAT_0094a9b8);
    }
    if (*(long *)(lVar3 + 0x880) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0070bf60("a->attached_threads > 0","arena.c",0x3f5,"__malloc_arena_thread_freeres");
    }
    lVar6 = *(long *)(lVar3 + 0x880) + -1;
    *(long *)(lVar3 + 0x880) = lVar6;
    if (lVar6 == 0) {
      *(long *)(lVar3 + 0x878) = DAT_0094a9b0;
      DAT_0094a9b0 = lVar3;
    }
    iVar5 = DAT_0094a9b8;
    LOCK();
    DAT_0094a9b8 = 0;
    UNLOCK();
    if (1 < iVar5) {
      FUN_00709660(&DAT_0094a9b8);
      return;
    }
  }
  return;
}

