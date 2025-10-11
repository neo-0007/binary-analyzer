
dirent64 * OPENSSL_DIR_read(long *param_1,char *param_2)

{
  int iVar1;
  long *__ptr;
  int *piVar2;
  dirent64 *pdVar3;
  undefined8 *puVar4;
  DIR *pDVar5;
  
  piVar2 = __errno_location();
  if (param_1 == (long *)0x0 || param_2 == (char *)0x0) {
    *piVar2 = 0x16;
    return (dirent64 *)0x0;
  }
  *piVar2 = 0;
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)calloc(0x1010,1);
    *param_1 = (long)puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      *piVar2 = 0xc;
      return (dirent64 *)0x0;
    }
    pDVar5 = opendir(param_2);
    __ptr = (long *)*param_1;
    *puVar4 = pDVar5;
    pDVar5 = (DIR *)*__ptr;
    if (pDVar5 == (DIR *)0x0) {
      iVar1 = *piVar2;
      free(__ptr);
      *param_1 = 0;
      *piVar2 = iVar1;
      return (dirent64 *)0x0;
    }
  }
  else {
    pDVar5 = *(DIR **)*param_1;
  }
  pdVar3 = readdir64(pDVar5);
  if (pdVar3 != (dirent64 *)0x0) {
    OPENSSL_strlcpy(*param_1 + 8,pdVar3->d_name,0x1001);
    pdVar3 = (dirent64 *)(*param_1 + 8);
  }
  return pdVar3;
}

