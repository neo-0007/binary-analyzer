
int FUN_00666280(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0x78) & 0x11) == 0) {
LAB_00666470:
    param_2 = -1;
  }
  else {
    if (*(char *)(param_1 + 0xa9) != '\0') {
      if (*(char *)(param_1 + 0xc0) != '\0') {
        *(undefined1 *)(param_1 + 0xc0) = 0;
        lVar3 = (ulong)(*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) +
                *(long *)(param_1 + 0xb0);
        *(long *)(param_1 + 0xb0) = lVar3;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
        *(long *)(param_1 + 0x10) = lVar3;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
      }
      iVar2 = FUN_00665ff0(param_1,param_1 + 0x8c);
      lVar3 = FUN_006661c0(param_1,(long)iVar2,1,*(undefined8 *)(param_1 + 0x8c));
      if (lVar3 == -1) goto LAB_00666470;
    }
    puVar5 = *(undefined1 **)(param_1 + 0x20);
    puVar6 = *(undefined1 **)(param_1 + 0x28);
    uVar7 = (undefined1)param_2;
    if (puVar5 < puVar6) {
      if (param_2 != -1) {
        *puVar6 = uVar7;
        puVar5 = *(undefined1 **)(param_1 + 0x20);
        puVar6 = (undefined1 *)(*(long *)(param_1 + 0x28) + 1);
        *(undefined1 **)(param_1 + 0x28) = puVar6;
      }
      cVar1 = FUN_00665e10(param_1,puVar5,(long)puVar6 - (long)puVar5);
      if (cVar1 == '\0') goto LAB_00666470;
      lVar3 = *(long *)(param_1 + 0x98);
      *(long *)(param_1 + 8) = lVar3;
      *(long *)(param_1 + 0x10) = lVar3;
      *(long *)(param_1 + 0x18) = lVar3;
      if (((*(byte *)(param_1 + 0x78) & 0x11) == 0) || (*(ulong *)(param_1 + 0xa0) < 2)) {
        lVar3 = 0;
        lVar4 = 0;
      }
      else {
        lVar4 = lVar3 + -1 + *(ulong *)(param_1 + 0xa0);
      }
      *(long *)(param_1 + 0x30) = lVar4;
      *(long *)(param_1 + 0x28) = lVar3;
      *(long *)(param_1 + 0x20) = lVar3;
      if (param_2 != -1) goto LAB_006663d7;
    }
    else if (*(ulong *)(param_1 + 0xa0) < 2) {
      local_21 = uVar7;
      if (param_2 != -1) {
        cVar1 = FUN_00665e10(param_1,&local_21,1);
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0xaa) = 1;
          goto LAB_006663d7;
        }
        goto LAB_00666470;
      }
      *(undefined1 *)(param_1 + 0xaa) = 1;
    }
    else {
      puVar5 = *(undefined1 **)(param_1 + 0x98);
      *(undefined1 **)(param_1 + 8) = puVar5;
      puVar6 = puVar5 + (*(ulong *)(param_1 + 0xa0) - 1);
      *(undefined1 **)(param_1 + 0x10) = puVar5;
      *(undefined1 **)(param_1 + 0x18) = puVar5;
      if ((*(byte *)(param_1 + 0x78) & 0x11) == 0) {
        puVar5 = (undefined1 *)0x0;
        puVar6 = (undefined1 *)0x0;
      }
      *(undefined1 **)(param_1 + 0x28) = puVar5;
      *(undefined1 **)(param_1 + 0x20) = puVar5;
      *(undefined1 **)(param_1 + 0x30) = puVar6;
      *(undefined1 *)(param_1 + 0xaa) = 1;
      if (param_2 != -1) {
        *puVar5 = uVar7;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        goto LAB_006663d7;
      }
    }
    param_2 = 0;
  }
LAB_006663d7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

