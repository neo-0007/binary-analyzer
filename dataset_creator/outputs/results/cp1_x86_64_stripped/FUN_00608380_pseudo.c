
long * FUN_00608380(undefined8 param_1,ushort param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  ushort local_33;
  undefined1 local_31;
  long local_30;
  
  local_33 = param_2 << 8 | param_2 >> 8;
  iVar2 = 2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    iVar2 = 3;
    local_31 = (undefined1)*param_3;
  }
  for (iVar6 = 0; iVar1 = FUN_00436480(param_1), iVar6 < iVar1; iVar6 = iVar6 + 1) {
    plVar3 = (long *)FUN_004364a0(param_1,iVar6);
    if ((*(int *)*plVar3 == iVar2) &&
       (iVar1 = thunk_FUN_00713570(*(undefined8 *)((int *)*plVar3 + 2),&local_33,iVar2), iVar1 == 0)
       ) goto LAB_00608409;
  }
  plVar4 = (long *)FUN_00608360();
  if (plVar4 != (long *)0x0) {
    if (plVar4[1] == 0) {
      lVar5 = FUN_006082c0();
      plVar4[1] = lVar5;
      if (lVar5 == 0) goto LAB_0060846d;
    }
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      lVar5 = FUN_004a7670();
      *plVar4 = lVar5;
      if (lVar5 == 0) goto LAB_0060846d;
    }
    iVar2 = thunk_FUN_004a1fa0(lVar5,&local_33,iVar2);
    if ((iVar2 != 0) && (iVar2 = FUN_00435f80(param_1,plVar4), plVar3 = plVar4, iVar2 != 0))
    goto LAB_00608409;
  }
LAB_0060846d:
  plVar3 = (long *)0x0;
  FUN_00607560(plVar4);
LAB_00608409:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return plVar3;
}

