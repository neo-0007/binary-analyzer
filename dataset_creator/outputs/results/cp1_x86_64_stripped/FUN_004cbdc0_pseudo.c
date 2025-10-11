
char * FUN_004cbdc0(char *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined4 *param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
    *param_2 = -1;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    param_1 = (char *)0x0;
  }
  else {
    lVar4 = thunk_FUN_00712710(param_1,0x3a);
    *param_2 = -1;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + 1;
      lVar5 = thunk_FUN_00712710(lVar1,0x3a);
      iVar2 = FUN_004cbc00(param_1);
      *param_2 = iVar2;
      if ((((lVar5 != 0) && (iVar2 < 0)) &&
          (local_48 = param_1, uVar3 = FUN_006e94d0((char *)(lVar5 + 1U),&local_48,10),
          (char *)(lVar5 + 1U) < local_48)) && (*local_48 == ':')) {
        pcVar7 = local_48 + 1;
        iVar2 = FUN_004cbc00(pcVar7);
        *param_2 = iVar2;
        if (-1 < iVar2) {
          uVar6 = FUN_0041c400(param_1,lVar4 - (long)param_1,"../crypto/cmp/cmp_util.c",100);
          *param_3 = uVar6;
          uVar6 = FUN_0041c400(lVar1,lVar5 - lVar1,"../crypto/cmp/cmp_util.c",0x65);
          *param_4 = uVar6;
          *param_5 = uVar3;
          lVar4 = thunk_FUN_00712710(pcVar7,0x3a);
          param_1 = (char *)(lVar4 + 2);
          if (*(char *)(lVar4 + 1) != ' ') {
            param_1 = (char *)(lVar4 + 1);
          }
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

