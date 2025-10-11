
long * FUN_006771c0(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00625160(auStack_38,(long)param_1 + *(long *)(*param_1 + -0x18) + 0xd0);
                    /* try { // try from 006771fe to 00677202 has its CatchHandler @ 006772c8 */
  plVar4 = (long *)FUN_006a4ba0(auStack_38);
  FUN_00625980(auStack_38);
  plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  piVar5 = (int *)plVar1[2];
  if ((int *)plVar1[3] <= piVar5) goto LAB_0067726d;
  while (*piVar5 != -1) {
    while( true ) {
      cVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x2000);
      if (cVar2 == '\0') goto LAB_00677296;
      piVar5 = (int *)plVar1[2];
      if (piVar5 < (int *)plVar1[3]) {
        iVar3 = *piVar5;
        plVar1[2] = (long)(piVar5 + 1);
      }
      else {
        iVar3 = (**(code **)(*plVar1 + 0x50))(plVar1);
      }
      if (iVar3 == -1) goto LAB_00677280;
      piVar5 = (int *)plVar1[2];
      if (piVar5 < (int *)plVar1[3]) break;
LAB_0067726d:
      iVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
      if (iVar3 == -1) goto LAB_00677280;
    }
  }
LAB_00677280:
  lVar6 = *(long *)(*param_1 + -0x18) + (long)param_1;
  FUN_0066f6e0(lVar6,*(uint *)(lVar6 + 0x20) | 2);
LAB_00677296:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

