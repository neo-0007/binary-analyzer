
ulong FUN_0061eb10(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long in_FS_OFFSET;
  char local_42;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  if (param_2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    if (*param_2 == 0) {
      uVar3 = FUN_004ab7e0(param_1,"0",1);
      if ((int)uVar3 == 1) goto LAB_0061ec15;
    }
    else {
      lVar5 = 0;
      uVar4 = 0;
      if (*param_2 < 1) goto LAB_0061ec15;
      while( true ) {
        local_42 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + lVar5) >> 4];
        local_41 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + lVar5) & 0xf];
        iVar1 = FUN_004ab7e0(param_1,&local_42,2);
        if (iVar1 != 2) break;
        uVar2 = uVar4 + 2;
        uVar3 = (ulong)uVar2;
        iVar1 = (int)lVar5 + 1;
        if (*param_2 <= iVar1) goto LAB_0061ec15;
        if ((uint)(iVar1 * -0x75075075) < 0x7507508) {
          iVar1 = FUN_004ab7e0(param_1,&DAT_0080f50b,2);
          if (iVar1 != 2) break;
          uVar2 = uVar4 + 4;
        }
        lVar5 = lVar5 + 1;
        uVar4 = uVar2;
      }
    }
    uVar3 = 0xffffffff;
  }
LAB_0061ec15:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

