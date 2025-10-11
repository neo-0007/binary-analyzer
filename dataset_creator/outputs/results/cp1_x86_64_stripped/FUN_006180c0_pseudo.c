
int FUN_006180c0(long param_1,undefined1 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 *local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  ulong local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  long local_30;
  
  iVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((**(int **)(param_1 + 0x40) != 5) && (iVar2 = FUN_00617430(), iVar2 < 1)) ||
     (param_2 == (undefined1 *)0x0)) goto LAB_0061813e;
  puVar4 = (undefined4 *)FUN_006d2700();
  *puVar4 = 0;
  lVar5 = FUN_004abd40(param_1,0x4c,0,0);
  if (lVar5 == 0) {
    iVar2 = FUN_0076d9c0(*(undefined4 *)(param_1 + 0x38),param_2);
LAB_0061812c:
    FUN_004ab6c0(param_1,0xf);
    if (0 < iVar2) goto LAB_0061813e;
    iVar3 = FUN_004b1020(iVar2);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800;
      }
      goto LAB_0061813e;
    }
  }
  else {
    if (0x14 < (ulong)(long)param_3) {
      local_68 = local_48;
      local_90 = (long)param_3 - 0x15;
      local_58 = 0;
      local_98 = param_2 + 5;
      local_60 = 0x18;
      local_70 = 1;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1 *)&local_98;
      iVar3 = FUN_00771040(*(undefined4 *)(param_1 + 0x38),local_88,0);
      iVar2 = iVar3;
      if ((-1 < iVar3) && (local_60 != 0)) {
        if (local_60 < 0x10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (*(int *)(local_68 + 0xc) == 2) {
          iVar2 = iVar3 + 5;
          *param_2 = local_68[0x10];
          *(undefined2 *)(param_2 + 1) = 0x303;
          *(ushort *)(param_2 + 3) = (ushort)iVar3 << 8 | (ushort)iVar3 >> 8;
        }
      }
      goto LAB_0061812c;
    }
    *puVar4 = 0x16;
    iVar2 = -1;
    FUN_004ab6c0(param_1,0xf);
    iVar3 = FUN_004b1020(0xffffffff);
    if (iVar3 == 0) goto LAB_0061813e;
  }
  FUN_004ab6e0(param_1,9);
LAB_0061813e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

