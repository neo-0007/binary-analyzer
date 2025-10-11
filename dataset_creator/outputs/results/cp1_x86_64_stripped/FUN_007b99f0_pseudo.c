
undefined2 * FUN_007b99f0(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined2 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  char local_1028 [88];
  char local_fd0 [4016];
  
  lVar1 = DAT_0094b0b0;
  syscall();
  if (local_1028[0] == '[') {
    if (DAT_0094b0b0 != 0) {
      lVar5 = thunk_FUN_007129d0(DAT_0094b0b0,local_1028,0x5b);
      puVar4 = (undefined2 *)FUN_007101b0(lVar5 + 1);
      if (puVar4 != (undefined2 *)0x0) {
        puVar6 = (undefined1 *)thunk_FUN_00713820(puVar4,lVar1,lVar5);
        if ((undefined1 *)((long)puVar4 + 1) < puVar6) {
          do {
            if (puVar6[-1] != '/') break;
            puVar6 = puVar6 + -1;
          } while (puVar6 != (undefined1 *)((long)puVar4 + 1));
        }
        *puVar6 = 0;
        return puVar4;
      }
    }
  }
  else {
    if (local_1028[0] != '/') {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("linkval[0] == \'/\'","../sysdeps/unix/sysv/linux/dl-origin.c",0x2d,
                   "_dl_get_origin");
    }
    pcVar3 = local_fd0 + 1;
    iVar2 = 0x59;
    do {
      iVar7 = iVar2;
      if (iVar7 == 1) {
        puVar4 = (undefined2 *)FUN_007101b0(2);
        if (puVar4 == (undefined2 *)0x0) {
          return (undefined2 *)0xffffffffffffffff;
        }
        *puVar4 = 0x2f;
        return puVar4;
      }
      pcVar3 = pcVar3 + -1;
      iVar2 = iVar7 + -1;
    } while (*pcVar3 != '/');
    puVar4 = (undefined2 *)FUN_007101b0((long)(iVar7 + 1),local_1028,0x2f,iVar7 + 1);
    if (puVar4 != (undefined2 *)0x0) {
      puVar6 = (undefined1 *)thunk_FUN_00713820(puVar4,local_1028,(long)(iVar7 + -1));
      *puVar6 = 0;
      return puVar4;
    }
  }
  return (undefined2 *)0xffffffffffffffff;
}

