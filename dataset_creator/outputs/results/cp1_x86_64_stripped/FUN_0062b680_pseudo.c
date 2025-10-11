
char FUN_0062b680(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  char local_62;
  char local_61;
  undefined8 local_60;
  undefined8 local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_006e0b30(0xe);
  iVar2 = thunk_FUN_00712780(uVar3,"UTF-8");
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_00712780(param_1,&DAT_0081db12);
    cVar1 = ' ';
    if (iVar2 == 0) goto LAB_0062b799;
    iVar2 = thunk_FUN_00712780(param_1,&DAT_0081db16);
    cVar1 = '\'';
    if ((iVar2 == 0) || (((*param_1 == -0x27 && (param_1[1] == -0x54)) && (param_1[2] == '\0'))))
    goto LAB_0062b799;
  }
  lVar4 = FUN_006d2720("ASCII//TRANSLIT",uVar3);
  cVar1 = '\0';
  if (lVar4 != -1) {
    local_60 = thunk_FUN_007129d0(param_1);
    local_58 = 1;
    local_50 = param_1;
    local_48 = &local_62;
    lVar5 = FUN_006d27d0(lVar4,&local_50,&local_60,&local_48,&local_58);
    FUN_006d29c0(lVar4);
    if ((lVar5 != -1) && (lVar4 = FUN_006d2720(uVar3,"ASCII"), lVar4 != -1)) {
      local_60 = 1;
      local_48 = &local_61;
      local_58 = 1;
      local_50 = &local_62;
      lVar5 = FUN_006d27d0(lVar4,&local_50,&local_60,&local_48,&local_58);
      FUN_006d29c0(lVar4);
      cVar1 = local_61;
      if (lVar5 != -1) goto LAB_0062b799;
    }
    cVar1 = '\0';
  }
LAB_0062b799:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return cVar1;
}

