
int __nss_readline(FILE *param_1,char *param_2,ulong param_3,long *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  __off64_t _Var4;
  char *pcVar5;
  size_t __n;
  long in_FS_OFFSET;
  
  if (param_3 < 3) {
    *param_4 = -1;
    iVar3 = 0x22;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
  }
  else {
    do {
      _Var4 = ftello(param_1);
      *param_4 = _Var4;
      param_2[param_3 - 1] = -1;
      pcVar5 = fgets_unlocked(param_2,(int)param_3,param_1);
      if (pcVar5 == (char *)0x0) {
        if ((param_1->_flags & 0x10) != 0) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
          return 2;
        }
        if (*(int *)(in_FS_OFFSET + -0x58) != 0x22) {
          return *(int *)(in_FS_OFFSET + -0x58);
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
        return 0x16;
      }
      if (param_2[param_3 - 1] != -1) {
        if ((-1 < *param_4) && (iVar3 = fseeko(param_1,*param_4,0), -1 < iVar3)) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
          return 0x22;
        }
        param_1->_flags = param_1->_flags | 0x20;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1d;
        return 0x1d;
      }
      cVar1 = *param_2;
      bVar2 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar1 * 2);
      pcVar5 = param_2;
      while ((bVar2 & 0x20) != 0) {
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
        bVar2 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar1 * 2);
      }
    } while ((cVar1 == '\0') || (cVar1 == '#'));
    iVar3 = 0;
    if (param_2 != pcVar5) {
      __n = strlen(pcVar5);
      memmove(param_2,pcVar5,__n);
    }
  }
  return iVar3;
}

