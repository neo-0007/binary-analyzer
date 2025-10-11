
undefined2 * _dl_get_origin(void)

{
  int iVar1;
  char *pcVar2;
  undefined2 *puVar3;
  size_t __n;
  undefined1 *puVar4;
  int iVar5;
  char local_1028 [88];
  char local_fd0 [4016];
  
  pcVar2 = _dl_origin_path;
  syscall();
  if (local_1028[0] == '[') {
    if (_dl_origin_path != (char *)0x0) {
      __n = strlen(_dl_origin_path);
      puVar3 = (undefined2 *)malloc(__n + 1);
      if (puVar3 != (undefined2 *)0x0) {
        puVar4 = (undefined1 *)mempcpy(puVar3,pcVar2,__n);
        if ((undefined1 *)((long)puVar3 + 1) < puVar4) {
          do {
            if (puVar4[-1] != '/') break;
            puVar4 = puVar4 + -1;
          } while (puVar4 != (undefined1 *)((long)puVar3 + 1));
        }
        *puVar4 = 0;
        return puVar3;
      }
    }
  }
  else {
    if (local_1028[0] != '/') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("linkval[0] == \'/\'","../sysdeps/unix/sysv/linux/dl-origin.c",0x2d,
                    "_dl_get_origin");
    }
    pcVar2 = local_fd0 + 1;
    iVar1 = 0x59;
    do {
      iVar5 = iVar1;
      if (iVar5 == 1) {
        puVar3 = (undefined2 *)malloc(2);
        if (puVar3 == (undefined2 *)0x0) {
          return (undefined2 *)0xffffffffffffffff;
        }
        *puVar3 = 0x2f;
        return puVar3;
      }
      pcVar2 = pcVar2 + -1;
      iVar1 = iVar5 + -1;
    } while (*pcVar2 != '/');
    puVar3 = (undefined2 *)malloc((long)(iVar5 + 1));
    if (puVar3 != (undefined2 *)0x0) {
      puVar4 = (undefined1 *)mempcpy(puVar3,local_1028,(long)(iVar5 + -1));
      *puVar4 = 0;
      return puVar3;
    }
  }
  return (undefined2 *)0xffffffffffffffff;
}

