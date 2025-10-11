
uint FUN_005baa80(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  char local_42;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (int *)0x0) {
    uVar3 = 0;
    goto LAB_005bab96;
  }
  uVar2 = param_2[1] & 0x100;
  if ((uVar2 == 0) || (uVar2 = FUN_004ab7e0(param_1,&DAT_0080b56c,1), uVar2 == 1)) {
    if (*param_2 == 0) {
      iVar1 = FUN_004ab7e0(param_1,"00",2);
      if (iVar1 == 2) {
        uVar3 = uVar2 + 2;
        goto LAB_005bab96;
      }
    }
    else {
      lVar4 = 0;
      uVar3 = uVar2;
      if (*param_2 < 1) goto LAB_005bab96;
      while( true ) {
        local_42 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + lVar4) >> 4];
        local_41 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + lVar4) & 0xf];
        iVar1 = FUN_004ab7e0(param_1,&local_42,2);
        if (iVar1 != 2) break;
        iVar1 = (int)lVar4 + 1;
        uVar3 = uVar2 + 2;
        if (*param_2 <= iVar1) goto LAB_005bab96;
        if ((uint)(iVar1 * -0x75075075) < 0x7507508) {
          iVar1 = FUN_004ab7e0(param_1,&DAT_0080f50b,2);
          if (iVar1 != 2) break;
          uVar3 = uVar2 + 4;
        }
        uVar2 = uVar3;
        lVar4 = lVar4 + 1;
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_005bab96:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

