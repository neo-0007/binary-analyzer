
/* WARNING: Instruction at (ram,0x007ba544) overlaps instruction at (ram,0x007ba543)
    */

void FUN_007ba340(long param_1,long param_2)

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
  
  lVar5 = DAT_0094b458;
  if (DAT_0094b46c != 0) {
    uVar13 = param_1 - DAT_0094b440;
    if (DAT_0094b438 <= (ulong)(param_1 - DAT_0094b440)) {
      uVar13 = 0;
    }
    uVar11 = param_2 - DAT_0094b440;
    if (uVar11 < DAT_0094b438) {
      puVar14 = (ushort *)(DAT_0094b458 + (uVar11 >> ((byte)DAT_0094b430 & 0x3f)) * 2);
      if ((ulong)*puVar14 == 0) goto LAB_007ba3df;
      puVar10 = (undefined8 *)((ulong)*puVar14 * 0x10 + DAT_0094b450);
      do {
        puVar12 = (ulong *)*puVar10;
        if (*puVar12 == uVar13) {
LAB_007ba538:
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
            puVar10 = (undefined8 *)(DAT_0094b450 + (ulong)uVar3 * 0x10);
            uVar3 = *(ushort *)(puVar10 + 1);
            puVar12 = (ulong *)*puVar10;
            if (uVar3 == 0) break;
          } while (*puVar12 != uVar13);
        }
        if (*puVar12 == uVar13) goto LAB_007ba538;
        puVar14 = (ushort *)(puVar10 + 1);
LAB_007ba3df:
        puVar6 = DAT_0094b460;
        if (*DAT_0094b460 != DAT_0094b468) {
          do {
            if (DAT_0094b44c <= DAT_0094b468) break;
            iVar7 = 1;
            if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
              iVar7 = DAT_0094b448;
              DAT_0094b448 = DAT_0094b448 + 1;
            }
            LOCK();
            UNLOCK();
            puVar1 = (undefined2 *)
                     (lVar5 + (*(ulong *)(DAT_0094b470 + 8 + (ulong)DAT_0094b468 * 0x14) >> 2) * 2);
            uVar8 = DAT_0094b448 + 1;
            plVar9 = (long *)((ulong)uVar8 * 0x10 + DAT_0094b450);
            DAT_0094b448 = DAT_0094b448 + iVar7;
            *plVar9 = DAT_0094b470 + (ulong)DAT_0094b468 * 0x14;
            *(undefined2 *)(plVar9 + 1) = *puVar1;
            *puVar1 = (short)uVar8;
            if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
              DAT_0094b468 = DAT_0094b468 + 1;
            }
            LOCK();
            DAT_0094b468 = DAT_0094b468 + 1;
            UNLOCK();
          } while (*puVar6 != DAT_0094b468);
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
          lVar5 = DAT_0094b470;
          UNLOCK();
          if (DAT_0094b44c <= uVar2) {
            return;
          }
          iVar7 = 1;
          if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
            iVar7 = DAT_0094b448;
            DAT_0094b448 = DAT_0094b448 + 1;
          }
          LOCK();
          UNLOCK();
          sVar4 = (short)DAT_0094b448;
          DAT_0094b448 = DAT_0094b448 + iVar7;
          *puVar14 = sVar4 + 1;
          puVar12 = (ulong *)(lVar5 + (ulong)uVar2 * 0x14);
          plVar9 = (long *)((ulong)*puVar14 * 0x10 + DAT_0094b450);
          *plVar9 = (long)puVar12;
          *(undefined4 *)(puVar12 + 2) = 0;
          *puVar12 = uVar13;
          puVar12[1] = uVar11;
          *(undefined2 *)(plVar9 + 1) = 0;
          if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
            DAT_0094b468 = DAT_0094b468 + 1;
          }
          LOCK();
          DAT_0094b468 = DAT_0094b468 + 1;
          UNLOCK();
          puVar12 = (ulong *)*plVar9;
          goto LAB_007ba538;
        }
        puVar10 = (undefined8 *)((ulong)*puVar14 * 0x10 + DAT_0094b450);
      } while( true );
    }
  }
  return;
}

