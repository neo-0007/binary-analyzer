
undefined4 FUN_004d32c0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  int *local_88;
  long local_80;
  int local_78 [2];
  long local_70 [3];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 **local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (int *)0x0;
  local_80 = 0;
  local_90 = 0;
  FUN_00542010(param_1 + 8,local_58,local_50,local_48);
  local_40 = *(undefined8 *)(param_1 + 0x20);
  FUN_005421e0(param_1 + 8,local_70,&local_90,&local_94);
  local_78[0] = (int)local_90;
  if (((local_94 == -1) || (local_70[0] == 0)) || (local_78[0] < 1)) {
    ppiVar3 = (int **)0x0;
LAB_004d335b:
    local_38 = ppiVar3;
    uVar1 = FUN_004d3190(local_58,param_2);
  }
  else {
    local_88 = local_78;
    uVar1 = 0;
    local_70[1] = 8;
    local_80 = FUN_004b7690();
    if (local_80 == 0) goto LAB_004d3378;
    iVar2 = FUN_004b8190(local_80,(long)local_94);
    ppiVar3 = &local_88;
    if (iVar2 != 0) goto LAB_004d335b;
    uVar1 = 0;
  }
  FUN_004b7fa0(local_80);
LAB_004d3378:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

