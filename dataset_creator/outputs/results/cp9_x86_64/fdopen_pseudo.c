
FILE * fdopen(int __fd,char *__modes)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FILE *pFVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  
  cVar1 = *__modes;
  if (cVar1 == 'r') {
    bVar4 = false;
    bVar2 = true;
    uVar11 = 0;
    uVar10 = 8;
  }
  else if (cVar1 == 'w') {
    bVar4 = true;
    bVar2 = false;
    uVar11 = 0;
    uVar10 = 4;
  }
  else {
    if (cVar1 != 'a') goto LAB_006f399b;
    bVar4 = true;
    bVar2 = false;
    uVar11 = 0x1000;
    uVar10 = 0x1004;
  }
  cVar1 = __modes[1];
  if (cVar1 == '+') {
    bVar3 = false;
LAB_006f3a33:
    bVar4 = false;
    bVar2 = false;
    uVar10 = uVar11;
  }
  else {
    if (cVar1 == 'm') {
      bVar3 = true;
LAB_006f39eb:
      cVar1 = __modes[2];
      if (cVar1 != '+') {
        if (cVar1 == 'm') {
          bVar3 = true;
        }
        else if (cVar1 == '\0') goto LAB_006f3a3b;
        cVar1 = __modes[3];
        if (cVar1 != '+') {
          if (cVar1 == 'm') {
            bVar3 = true;
          }
          else if (cVar1 == '\0') goto LAB_006f3a3b;
          if (__modes[4] != '+') {
            if (__modes[4] == 'm') {
              bVar3 = true;
            }
            goto LAB_006f3a3b;
          }
        }
      }
      goto LAB_006f3a33;
    }
    bVar3 = false;
    if (cVar1 != '\0') goto LAB_006f39eb;
  }
LAB_006f3a3b:
  uVar5 = fcntl(__fd,3);
  if (uVar5 == 0xffffffff) {
    return (FILE *)0x0;
  }
  if ((uVar5 & 3) == 0) {
    if (bVar2) {
LAB_006f3a66:
      bVar4 = false;
      if ((uVar11 != 0) && ((uVar5 & 0x400) == 0)) {
        iVar6 = fcntl(__fd,4,(ulong)(uVar5 | 0x400));
        if (iVar6 == -1) {
          return (FILE *)0x0;
        }
        bVar4 = true;
      }
      pFVar7 = (FILE *)malloc(0x1d8);
      if (pFVar7 == (FILE *)0x0) {
        return (FILE *)0x0;
      }
      pFVar7->_lock = &pFVar7[1]._IO_read_ptr;
      if ((bVar3) && (bVar2)) {
        _IO_no_init(pFVar7,0,0,&pFVar7[1]._IO_read_base,_IO_wfile_jumps_maybe_mmap);
        puVar8 = _IO_file_jumps_maybe_mmap;
      }
      else {
        _IO_no_init(pFVar7,0,0,&pFVar7[1]._IO_read_base,_IO_wfile_jumps);
        puVar8 = _IO_file_jumps;
      }
      *(undefined1 **)(pFVar7 + 1) = puVar8;
      _IO_new_file_init_internal(pFVar7);
      pFVar7->_fileno = __fd;
      pFVar7->_flags = pFVar7->_flags & 0xffffefb3U | uVar10;
      if (!bVar4) {
        return pFVar7;
      }
      if ((uVar10 & 0x1004) != 0x1004) {
        return pFVar7;
      }
      lVar9 = *(long *)(pFVar7 + 1);
      if (0x827 < lVar9 - 0x932180U) {
        _IO_vtable_check();
      }
      lVar9 = (**(code **)(lVar9 + 0x80))(pFVar7,0,2);
      if (lVar9 == -1) {
        if (*(int *)(in_FS_OFFSET + -0x58) != 0x1d) {
          return (FILE *)0x0;
        }
        return pFVar7;
      }
      return pFVar7;
    }
  }
  else if (((uVar5 & 3) != 1) || (bVar4)) goto LAB_006f3a66;
LAB_006f399b:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return (FILE *)0x0;
}

