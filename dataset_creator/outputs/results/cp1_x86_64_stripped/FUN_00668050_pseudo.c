
int FUN_00668050(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0x78) & 0x11) != 0) {
    if (*(char *)(param_1 + 0xa9) != '\0') {
      if (*(char *)(param_1 + 0xc0) != '\0') {
        *(undefined1 *)(param_1 + 0xc0) = 0;
        lVar3 = *(long *)(param_1 + 0xb0) +
                (ulong)(*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) * 4;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
        *(long *)(param_1 + 0xb0) = lVar3;
        *(long *)(param_1 + 0x10) = lVar3;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
      }
      iVar2 = FUN_00667db0(param_1,param_1 + 0x8c);
      lVar3 = FUN_00667f90(param_1,(long)iVar2,1,*(undefined8 *)(param_1 + 0x8c));
      if (lVar3 == -1) goto LAB_00668126;
    }
    piVar4 = *(int **)(param_1 + 0x20);
    piVar6 = *(int **)(param_1 + 0x28);
    if (piVar6 <= piVar4) {
      if (*(ulong *)(param_1 + 0xa0) < 2) {
        local_24 = param_2;
        if (param_2 != -1) {
          cVar1 = FUN_00667bd0(param_1,&local_24,1);
          if (cVar1 != '\0') {
            *(undefined1 *)(param_1 + 0xaa) = 1;
            goto LAB_0066812b;
          }
          goto LAB_00668126;
        }
        *(undefined1 *)(param_1 + 0xaa) = 1;
      }
      else {
        piVar4 = *(int **)(param_1 + 0x98);
        *(int **)(param_1 + 8) = piVar4;
        *(int **)(param_1 + 0x10) = piVar4;
        *(int **)(param_1 + 0x18) = piVar4;
        if ((*(byte *)(param_1 + 0x78) & 0x11) == 0) {
          piVar4 = (int *)0x0;
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = piVar4 + (*(ulong *)(param_1 + 0xa0) - 1);
        }
        *(int **)(param_1 + 0x28) = piVar4;
        *(int **)(param_1 + 0x20) = piVar4;
        *(int **)(param_1 + 0x30) = piVar6;
        *(undefined1 *)(param_1 + 0xaa) = 1;
        if (param_2 != -1) {
          *piVar4 = param_2;
          *(int **)(param_1 + 0x28) = piVar4 + 1;
          goto LAB_0066812b;
        }
      }
      param_2 = 0;
      goto LAB_0066812b;
    }
    if (param_2 != -1) {
      *piVar6 = param_2;
      piVar6 = piVar6 + 1;
      *(int **)(param_1 + 0x28) = piVar6;
    }
    cVar1 = FUN_00667bd0(param_1,piVar4,(long)piVar6 - (long)piVar4 >> 2);
    if (cVar1 != '\0') {
      lVar3 = *(long *)(param_1 + 0x98);
      *(long *)(param_1 + 8) = lVar3;
      *(long *)(param_1 + 0x10) = lVar3;
      *(long *)(param_1 + 0x18) = lVar3;
      if (((*(byte *)(param_1 + 0x78) & 0x11) == 0) || (*(ulong *)(param_1 + 0xa0) < 2)) {
        lVar3 = 0;
        lVar5 = 0;
      }
      else {
        lVar5 = lVar3 + -4 + *(ulong *)(param_1 + 0xa0) * 4;
      }
      *(long *)(param_1 + 0x28) = lVar3;
      *(long *)(param_1 + 0x20) = lVar3;
      *(long *)(param_1 + 0x30) = lVar5;
      if (param_2 == -1) {
        param_2 = 0;
      }
      goto LAB_0066812b;
    }
  }
LAB_00668126:
  param_2 = -1;
LAB_0066812b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

