
undefined8 FUN_004aa840(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)FUN_004ab640();
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    if ((((char *)*plVar3 == (char *)0x0) || (*(char *)*plVar3 == '\0')) && ((int)plVar3[1] == 0)) {
      if (param_3 != 0) {
        *(uint *)((long)plVar3 + 0xc) = (uint)(*(char *)(param_2 + -1 + param_3) == '\n');
      }
      uVar4 = FUN_004ac470(param_1);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = FUN_004ab830(uVar4,param_2,param_3,param_4);
        return uVar4;
      }
      goto LAB_004aaa33;
    }
    *param_4 = 0;
    while (param_3 != 0) {
      if (*(int *)((long)plVar3 + 0xc) != 0) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          uVar4 = thunk_FUN_007129d0(lVar2);
          uVar5 = FUN_004ac470(param_1);
          uVar4 = FUN_004ab830(uVar5,lVar2,uVar4,&local_48);
          if ((int)uVar4 == 0) goto LAB_004aa9e2;
        }
        lVar2 = plVar3[1];
        uVar4 = FUN_004ac470(param_1);
        FUN_004ae9e0(uVar4,"%*s",(int)lVar2,&DAT_0083e5c2);
        *(undefined4 *)((long)plVar3 + 0xc) = 0;
      }
      uVar6 = 0;
      do {
        cVar1 = *(char *)(param_2 + uVar6);
        uVar6 = uVar6 + 1;
        if (cVar1 == '\n') break;
      } while (uVar6 < param_3);
      do {
        local_48 = 0;
        uVar4 = FUN_004ac470(param_1);
        uVar4 = FUN_004ab830(uVar4,param_2,uVar6,&local_48);
        if ((int)uVar4 == 0) goto LAB_004aa9e2;
        *param_4 = *param_4 + local_48;
        param_2 = param_2 + local_48;
        param_3 = param_3 - local_48;
        uVar6 = uVar6 - local_48;
      } while (uVar6 != 0);
      if (cVar1 == '\n') {
        *(undefined4 *)((long)plVar3 + 0xc) = 1;
      }
    }
    uVar4 = 1;
  }
LAB_004aa9e2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_004aaa33:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

