
undefined8
FUN_006d2e40(long *param_1,long *param_2,ulong param_3,long *param_4,long param_5,
            undefined8 *param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  
  if (param_1 == (long *)0xffffffffffffffff) {
    return 8;
  }
  uVar2 = *param_1 - 1;
  if (param_6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("irreversible != NULL","gconv.c",0x2a,"__gconv");
  }
  *param_6 = 0;
  lVar3 = 0;
  if (param_4 != (long *)0x0) {
    lVar3 = *param_4;
  }
  param_1[uVar2 * 6 + 2] = lVar3;
  (param_1 + uVar2 * 6 + 2)[1] = param_5;
  pcVar7 = (code *)((long *)param_1[1])[5];
  if (*(long *)param_1[1] != 0) {
    pcVar7 = (code *)(((ulong)pcVar7 >> 0x11 | (long)pcVar7 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    FUN_0078e430(pcVar7);
    uVar4 = (*pcVar7)(param_1[1],param_1 + 2,0,0,0,param_6,(param_1[uVar2 * 6 + 2] == 0) + '\x01',0)
    ;
    if ((int)uVar4 == 0) {
      puVar5 = (undefined4 *)((long)param_1 + 0x24);
      uVar6 = 0;
      do {
        *puVar5 = 0;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0xc;
      } while (uVar6 <= uVar2);
    }
    if (param_4 == (long *)0x0) {
      return uVar4;
    }
  }
  else {
    if ((param_4 == (long *)0x0) || (*param_4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("outbuf != NULL && *outbuf != NULL","gconv.c",0x48,"__gconv");
    }
    lVar3 = *param_2;
    do {
      FUN_0078e430(pcVar7);
      uVar4 = (*pcVar7)(param_1[1],param_1 + 2,param_2,param_3,0,param_6,0,0);
      if (((int)uVar4 != 4) || (lVar1 = *param_2, lVar1 == lVar3)) break;
      lVar3 = lVar1;
    } while ((ulong)(*(int *)(param_1[1] + 0x48) + lVar1) <= param_3);
  }
  if (*param_4 != 0) {
    *param_4 = param_1[uVar2 * 6 + 2];
  }
  return uVar4;
}

