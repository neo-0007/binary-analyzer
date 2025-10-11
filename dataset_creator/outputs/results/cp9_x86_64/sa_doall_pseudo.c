
void sa_doall(int *param_1,code *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_98 [8];
  long local_78 [7];
  long local_40;
  
  uVar5 = 0;
  iVar4 = 0;
  lVar3 = *(long *)(param_1 + 6);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  local_98[0] = 0;
  local_78[0] = lVar3;
  do {
    lVar2 = (long)iVar4;
    if (iVar1 < 0x1000) {
      local_98[lVar2] = iVar1 + 1;
      if (lVar3 != 0) {
        while( true ) {
          lVar3 = *(long *)(lVar3 + (long)iVar1 * 8);
          if (lVar3 == 0) break;
          uVar5 = uVar5 & 0xfffffffffffff000 | (long)iVar1;
          if (*param_1 + -1 <= iVar4) {
            if (param_3 != (code *)0x0) {
              (*param_3)(uVar5,lVar3,param_4);
            }
            break;
          }
          iVar4 = iVar4 + 1;
          iVar1 = 0;
          uVar5 = uVar5 << 0xc;
          lVar2 = (long)iVar4;
          local_98[lVar2] = 0;
          local_78[lVar2] = lVar3;
          local_98[lVar2] = 1;
          if (lVar3 == 0) break;
        }
      }
    }
    else {
      if ((lVar3 != 0) && (param_2 != (code *)0x0)) {
        (*param_2)();
      }
      iVar4 = iVar4 + -1;
      uVar5 = uVar5 >> 0xc;
      if (iVar4 == -1) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail_local();
        }
        return;
      }
      lVar2 = (long)iVar4;
    }
    iVar1 = local_98[lVar2];
    lVar3 = local_78[lVar2];
  } while( true );
}

