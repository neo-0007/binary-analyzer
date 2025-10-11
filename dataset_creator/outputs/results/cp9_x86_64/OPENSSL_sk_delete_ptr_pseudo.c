
long OPENSSL_sk_delete_ptr(int *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *__dest;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    lVar3 = 0;
    __dest = *(long **)(param_1 + 2);
    do {
      lVar2 = *__dest;
      if (lVar2 == param_2) {
        iVar4 = iVar1 + -1;
        if ((int)lVar3 != iVar4) {
          memmove(__dest,*(long **)(param_1 + 2) + lVar3 + 1,(long)((iVar1 - (int)lVar3) + -1) << 3)
          ;
          iVar4 = *param_1 + -1;
        }
        *param_1 = iVar4;
        return lVar2;
      }
      lVar3 = lVar3 + 1;
      __dest = __dest + 1;
    } while (lVar3 != iVar1);
  }
  return 0;
}

