
/* WARNING: Instruction at (ram,0x007b0c04) overlaps instruction at (ram,0x007b0c03)
    */

void _dl_mcount(long param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ushort *puVar14;
  long in_FS_OFFSET;
  
  lVar5 = tos;
  if (running != 0) {
    uVar13 = param_1 - lowpc;
    if (textsize <= (ulong)(param_1 - lowpc)) {
      uVar13 = 0;
    }
    uVar11 = param_2 - lowpc;
    if (uVar11 < textsize) {
      puVar14 = (ushort *)(tos + (uVar11 >> ((byte)log_hashfraction & 0x3f)) * 2);
      if ((ulong)*puVar14 == 0) goto LAB_007b0a9f;
      puVar10 = (undefined8 *)((ulong)*puVar14 * 0x10 + froms);
      do {
        puVar12 = (ulong *)*puVar10;
        if (*puVar12 == uVar13) {
LAB_007b0bf8:
          if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
            *(int *)(puVar12 + 2) = (int)puVar12[2] + 1;
          }
          else {
            LOCK();
            *(int *)(puVar12 + 2) = (int)puVar12[2] + 1;
            UNLOCK();
          }
          return;
        }
        uVar3 = *(ushort *)(puVar10 + 1);
        if (uVar3 != 0) {
          do {
            puVar10 = (undefined8 *)(froms + (ulong)uVar3 * 0x10);
            uVar3 = *(ushort *)(puVar10 + 1);
            puVar12 = (ulong *)*puVar10;
            if (uVar3 == 0) break;
          } while (*puVar12 != uVar13);
        }
        if (*puVar12 == uVar13) goto LAB_007b0bf8;
        puVar14 = (ushort *)(puVar10 + 1);
LAB_007b0a9f:
        puVar6 = narcsp;
        if (*narcsp != narcs) {
          do {
            if (fromlimit <= narcs) break;
            iVar7 = 1;
            if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
              iVar7 = fromidx;
              fromidx = fromidx + 1;
            }
            LOCK();
            UNLOCK();
            puVar1 = (undefined2 *)(lVar5 + (*(ulong *)(data + 8 + (ulong)narcs * 0x14) >> 2) * 2);
            uVar8 = fromidx + 1;
            plVar9 = (long *)((ulong)uVar8 * 0x10 + froms);
            fromidx = fromidx + iVar7;
            *plVar9 = data + (ulong)narcs * 0x14;
            *(undefined2 *)(plVar9 + 1) = *puVar1;
            *puVar1 = (short)uVar8;
            if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
              narcs = narcs + 1;
            }
            LOCK();
            narcs = narcs + 1;
            UNLOCK();
          } while (*puVar6 != narcs);
        }
        if (*puVar14 == 0) {
          uVar8 = 1;
          if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
            uVar8 = *puVar6;
            *puVar6 = *puVar6 + 1;
          }
          LOCK();
          uVar2 = *puVar6;
          *puVar6 = *puVar6 + uVar8;
          lVar5 = data;
          UNLOCK();
          if (fromlimit <= uVar2) {
            return;
          }
          iVar7 = 1;
          if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
            iVar7 = fromidx;
            fromidx = fromidx + 1;
          }
          LOCK();
          UNLOCK();
          sVar4 = (short)fromidx;
          fromidx = fromidx + iVar7;
          *puVar14 = sVar4 + 1;
          puVar12 = (ulong *)(lVar5 + (ulong)uVar2 * 0x14);
          plVar9 = (long *)((ulong)*puVar14 * 0x10 + froms);
          *plVar9 = (long)puVar12;
          *(undefined4 *)(puVar12 + 2) = 0;
          *puVar12 = uVar13;
          puVar12[1] = uVar11;
          *(undefined2 *)(plVar9 + 1) = 0;
          if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
            narcs = narcs + 1;
          }
          LOCK();
          narcs = narcs + 1;
          UNLOCK();
          puVar12 = (ulong *)*plVar9;
          goto LAB_007b0bf8;
        }
        puVar10 = (undefined8 *)((ulong)*puVar14 * 0x10 + froms);
      } while( true );
    }
  }
  return;
}

