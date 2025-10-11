
char FUN_00775790(long param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  char local_59;
  int local_4c;
  undefined8 local_48;
  long local_40;
  
  bVar2 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lVar4 = thunk_FUN_007129d0();
  local_59 = '\0';
  lVar1 = param_1 + 1;
  do {
    lVar5 = FUN_007569f0(&local_4c,param_1,(lVar1 + lVar4) - param_1,&local_48);
    if (lVar5 == 0) {
      cVar3 = local_59 + '\x01';
      if (!bVar2) {
        cVar3 = '\0';
      }
LAB_0077583f:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return cVar3;
    }
    if (lVar5 == -2) {
      cVar3 = '\x03';
      goto LAB_0077583f;
    }
    if (lVar5 == -1) {
      cVar3 = '\x03';
      if (*(int *)(in_FS_OFFSET + -0x58) != 0x54) {
        cVar3 = (*(int *)(in_FS_OFFSET + -0x58) != 0xc) + '\x04';
      }
      goto LAB_0077583f;
    }
    param_1 = param_1 + lVar5;
    if (local_4c == 0x5c) {
      local_59 = '\x01';
    }
    else if (0x7f < local_4c) {
      bVar2 = true;
    }
  } while( true );
}

