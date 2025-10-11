
bool FUN_00667e30(long *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_d0;
  undefined1 local_c8 [128];
  undefined1 local_48 [8];
  long local_40;
  
  bVar6 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)param_1[4] < (ulong)param_1[5]) {
    iVar2 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    bVar6 = iVar2 != -1;
  }
  if (*(char *)((long)param_1 + 0xaa) != '\0') {
    if ((long *)param_1[0x19] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403826();
    }
    cVar1 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
    if ((cVar1 == '\0') && (bVar6 != false)) {
      do {
        uVar3 = (**(code **)(*(long *)param_1[0x19] + 0x18))
                          ((long *)param_1[0x19],(long)param_1 + 0x84,local_c8,local_48,&local_d0);
        bVar6 = false;
        if (uVar3 == 2) goto LAB_00667f10;
        if ((1 < uVar3) || (lVar5 = local_d0 - (long)local_c8, lVar5 < 1)) break;
        lVar4 = FUN_006c3f80(param_1 + 0xd,local_c8);
        if (lVar5 != lVar4) goto LAB_00667f10;
      } while (uVar3 != 0);
      iVar2 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
      bVar6 = iVar2 != -1;
    }
  }
LAB_00667f10:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar6;
}

