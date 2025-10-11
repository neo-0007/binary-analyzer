
bool FUN_004f7990(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_d4;
  undefined1 local_c8;
  undefined1 local_c7 [135];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    bVar1 = true;
    goto LAB_004f7af2;
  }
  if (param_5 < 1) {
    local_d4 = 0;
LAB_004f7a15:
    iVar2 = FUN_004ae9e0(param_1,&DAT_007e3d61,param_2);
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        if (lVar5 == param_4) {
          iVar2 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
          bVar1 = 0 < iVar2;
          goto LAB_004f7af2;
        }
        if ((ulong)(lVar5 * -0x1111111111111111) < 0x1111111111111112) {
          local_c8 = 10;
          FUN_00771fd0(local_c7,0x20,(long)(local_d4 + 4),0x84);
          iVar2 = FUN_004ab7e0(param_1,&local_c8,local_d4 + 5);
          if (iVar2 < 1) break;
        }
        lVar5 = lVar5 + 1;
        pcVar4 = "";
        if (lVar5 != param_4) {
          pcVar4 = ":";
        }
        iVar2 = FUN_004ae9e0(param_1,"%02x%s",*(undefined1 *)(param_3 + -1 + lVar5),pcVar4);
      } while (0 < iVar2);
    }
  }
  else {
    local_d4 = 0x80;
    if (param_5 < 0x81) {
      local_d4 = param_5;
    }
    uVar3 = FUN_00771fd0(&local_c8,0x20,(long)local_d4,0x85);
    iVar2 = FUN_004ab7e0(param_1,uVar3,local_d4);
    if (0 < iVar2) goto LAB_004f7a15;
  }
  bVar1 = false;
LAB_004f7af2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

