
long FUN_006c3fe0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_40;
  
  lVar6 = param_3 + param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_006c3ea0();
  lVar5 = lVar6;
  local_58 = param_4;
  local_50 = param_5;
  do {
    while( true ) {
      local_68 = param_2;
      local_60 = param_3;
      lVar2 = FUN_0076ec40(uVar1,&local_68,2);
      if (lVar2 == -1) break;
      lVar5 = lVar5 - lVar2;
      if (lVar5 == 0) goto LAB_006c4080;
      lVar4 = lVar2 - param_3;
      if (-1 < lVar4) {
        param_5 = param_5 - lVar4;
        param_4 = param_4 + lVar4;
        lVar2 = param_5;
        goto LAB_006c40c8;
      }
      param_2 = param_2 + lVar2;
      param_3 = param_3 - lVar2;
    }
    piVar3 = (int *)FUN_006d2700();
  } while (*piVar3 == 4);
  lVar6 = lVar6 - lVar5;
  goto LAB_006c4080;
  while( true ) {
    piVar3 = (int *)FUN_006d2700();
    if (*piVar3 != 4) break;
LAB_006c40c8:
    lVar4 = FUN_0076da60(uVar1,param_4,lVar2);
    if (lVar4 != -1) {
      lVar2 = lVar2 - lVar4;
      if (lVar2 == 0) goto LAB_006c40e9;
      param_4 = param_4 + lVar4;
      goto LAB_006c40c8;
    }
  }
  param_5 = param_5 - lVar2;
LAB_006c40e9:
  lVar6 = lVar6 - (lVar5 - param_5);
LAB_006c4080:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

