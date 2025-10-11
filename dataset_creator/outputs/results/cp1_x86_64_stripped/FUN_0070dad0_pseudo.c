
/* WARNING: Instruction at (ram,0x0070df08) overlaps instruction at (ram,0x0070df07)
    */
/* WARNING: Removing unreachable block (ram,0x0070dcab) */
/* WARNING: Removing unreachable block (ram,0x0070dcaa) */
/* WARNING: Removing unreachable block (ram,0x0070dcb8) */

int * FUN_0070dad0(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long extraout_RDX;
  int *piVar9;
  long in_FS_OFFSET;
  bool bVar10;
  
  lVar3 = DAT_0094a990;
  if (DAT_0094a990 == 0) {
    lVar3 = DAT_0093e0e0;
    if (DAT_0093e0e0 == 0) {
      if (DAT_0093e0d8 < DAT_0093e0a8) {
        iVar2 = FUN_00770610();
        if (iVar2 < 1) {
          DAT_0094a990 = 0x10;
          lVar3 = 0x10;
        }
        else {
          lVar3 = (long)(iVar2 << 3);
          DAT_0094a990 = lVar3;
        }
      }
    }
    else {
      DAT_0094a990 = DAT_0093e0e0;
    }
  }
  piVar9 = DAT_0093e0c8;
  if (DAT_0093e0a8 <= lVar3 - 1U) {
    DAT_0093e0a8 = DAT_0093e0a8 + 1;
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      LOCK();
      UNLOCK();
    }
    if ((DAT_0093e0f0 != 0) &&
       (puVar5 = (undefined8 *)FUN_0070d7c0(param_1 + 0x8d8,DAT_0093e0c8,DAT_0093e0f0,DAT_0093e0f8),
       puVar5 != (undefined8 *)0x0)) goto LAB_0070dd69;
    puVar5 = (undefined8 *)FUN_0070d7c0(param_1 + 0x8d8,piVar9,DAT_0093eb18,0x4000);
    if (puVar5 != (undefined8 *)0x0) goto LAB_0070dd69;
    lVar3 = DAT_0093e0f0;
    piVar9 = DAT_0093e0c8;
    if (DAT_0093e0f0 != 0) goto LAB_0070df4a;
    goto LAB_0070ded7;
  }
  piVar9 = DAT_0094a988;
  if (DAT_0094a988 == (int *)0x0) {
    DAT_0094a988 = &DAT_0093e160;
    piVar9 = DAT_0094a988;
  }
  do {
    LOCK();
    iVar2 = *piVar9;
    if (iVar2 == 0) {
      *piVar9 = 1;
    }
    UNLOCK();
    if (iVar2 == 0) goto LAB_0070db3c;
    piVar9 = *(int **)(piVar9 + 0x21c);
  } while (piVar9 != DAT_0094a988);
  if (param_2 == piVar9) {
    piVar9 = *(int **)(param_2 + 0x21c);
  }
  LOCK();
  iVar2 = *piVar9;
  if (iVar2 == 0) {
    *piVar9 = 1;
  }
  UNLOCK();
  if (iVar2 != 0) {
    FUN_00709590(piVar9);
  }
LAB_0070db3c:
  lVar3 = *(long *)(in_FS_OFFSET + -0x20);
  LOCK();
  bVar10 = DAT_0094a9b8 == 0;
  if (bVar10) {
    DAT_0094a9b8 = 1;
  }
  UNLOCK();
  if (!bVar10) {
    FUN_00709590(&DAT_0094a9b8);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x880) == 0) {
      do {
        FUN_0070c150();
        lVar3 = extraout_RDX;
LAB_0070df4a:
        puVar5 = (undefined8 *)FUN_0070d7c0(0x8d8,piVar9,lVar3,DAT_0093e0f8);
        if (puVar5 == (undefined8 *)0x0) {
LAB_0070ded7:
          puVar5 = (undefined8 *)FUN_0070d7c0(0x8d8,piVar9,DAT_0093eb18,0x4000);
          if (puVar5 == (undefined8 *)0x0) {
            if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
              DAT_0093e0a8 = DAT_0093e0a8 - 1;
            }
            LOCK();
            DAT_0093e0a8 = DAT_0093e0a8 - 1;
            UNLOCK();
            return (int *)0x0;
          }
        }
LAB_0070dd69:
        piVar9 = (int *)(puVar5 + 6);
        *puVar5 = piVar9;
        puVar8 = puVar5 + 0x12;
        do {
          puVar4 = puVar8 + 2;
          *puVar4 = puVar8;
          puVar8[3] = puVar8;
          puVar8 = puVar4;
        } while (puVar4 != puVar5 + 0x110);
        if (piVar9 == &DAT_0093e160) {
          DAT_0094a9c0 = 0x80;
        }
        else {
          *(uint *)((long)puVar5 + 0x34) = *(uint *)((long)puVar5 + 0x34) | 2;
        }
        *(undefined4 *)(puVar5 + 7) = 0;
        puVar8 = puVar5 + 0x119;
        puVar5[0x116] = 1;
        lVar3 = puVar5[2];
        puVar5[0x118] = lVar3;
        puVar5[0x117] = lVar3;
        uVar6 = (int)puVar5 + 0x8d8U & 0xf;
        if (uVar6 != 0) {
          puVar8 = (undefined8 *)((long)puVar8 + (0x10 - (ulong)uVar6));
        }
        puVar5[0x12] = puVar8;
        puVar8[1] = (long)puVar5 + (lVar3 - (long)puVar8) | 1;
        lVar3 = *(long *)(in_FS_OFFSET + -0x20);
        *(int **)(in_FS_OFFSET + -0x20) = piVar9;
        *(undefined4 *)(puVar5 + 6) = 0;
        LOCK();
        bVar10 = DAT_0094a9ac == 0;
        if (bVar10) {
          DAT_0094a9ac = 1;
        }
        UNLOCK();
        if (!bVar10) {
          FUN_00709590(&DAT_0094a9ac);
        }
        puVar5[0x114] = PTR_DAT_0093e9d0;
        iVar2 = DAT_0094a9ac;
        LOCK();
        DAT_0094a9ac = 0;
        UNLOCK();
        PTR_DAT_0093e9d0 = (undefined *)piVar9;
        if (1 < iVar2) {
          FUN_00709660(&DAT_0094a9ac);
        }
        LOCK();
        bVar10 = DAT_0094a9b8 == 0;
        if (bVar10) {
          DAT_0094a9b8 = 1;
        }
        UNLOCK();
        if (!bVar10) {
          FUN_00709590(&DAT_0094a9b8);
        }
        if (lVar3 == 0) goto LAB_0070de83;
      } while (*(long *)(lVar3 + 0x880) == 0);
      *(long *)(lVar3 + 0x880) = *(long *)(lVar3 + 0x880) + -1;
LAB_0070de83:
      iVar2 = DAT_0094a9b8;
      LOCK();
      DAT_0094a9b8 = 0;
      UNLOCK();
      if (1 < iVar2) {
        FUN_00709660(&DAT_0094a9b8);
      }
      LOCK();
      iVar2 = *piVar9;
      if (iVar2 == 0) {
        *piVar9 = 1;
      }
      UNLOCK();
      if (iVar2 == 0) {
        return piVar9;
      }
      FUN_00709590(piVar9);
      return piVar9;
    }
    *(long *)(lVar3 + 0x880) = *(long *)(lVar3 + 0x880) + -1;
  }
  piVar7 = (int *)&DAT_0094a9b0;
  piVar1 = DAT_0094a9b0;
  do {
    if (piVar1 == (int *)0x0) {
LAB_0070dbc4:
      *(long *)(piVar9 + 0x220) = *(long *)(piVar9 + 0x220) + 1;
      iVar2 = DAT_0094a9b8;
      LOCK();
      DAT_0094a9b8 = 0;
      UNLOCK();
      if (1 < iVar2) {
        FUN_00709660(&DAT_0094a9b8);
      }
      *(int **)(in_FS_OFFSET + -0x20) = piVar9;
      DAT_0094a988 = (int *)*(undefined8 *)(piVar9 + 0x21c);
      return piVar9;
    }
    if (*(long *)(piVar1 + 0x220) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0070bf60("p->attached_threads == 0","arena.c",0x34f,"remove_from_free_list");
    }
    if (piVar9 == piVar1) {
      *(int **)piVar7 = *(int **)(piVar1 + 0x21e);
      goto LAB_0070dbc4;
    }
    piVar7 = piVar1 + 0x21e;
    piVar1 = *(int **)(piVar1 + 0x21e);
  } while( true );
}

