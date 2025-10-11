
ulong internal_find(int *param_1,long param_2,uint param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long local_30;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (*(__compar_fn_t *)(param_1 + 6) == (__compar_fn_t)0x0) {
        if (0 < iVar1) {
          uVar2 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + uVar2 * 8) == param_2) {
              if (param_4 == (int *)0x0) {
                return uVar2 & 0xffffffff;
              }
              *param_4 = 1;
              return uVar2 & 0xffffffff;
            }
            uVar2 = uVar2 + 1;
          } while ((long)iVar1 != uVar2);
        }
        if (param_4 != (int *)0x0) {
          *param_4 = 0;
        }
      }
      else {
        local_30 = param_2;
        if (param_1[4] == 0) {
          if (1 < iVar1) {
            qsort(*(void **)(param_1 + 2),(long)iVar1,8,*(__compar_fn_t *)(param_1 + 6));
          }
          param_1[4] = 1;
        }
        if (local_30 != 0) {
          if (param_4 == (int *)0x0) {
            uVar2 = ossl_bsearch(&local_30,*(undefined8 *)(param_1 + 2),*param_1,8,
                                 *(undefined8 *)(param_1 + 6),param_3);
            if (uVar2 != 0) {
LAB_004344f7:
              lVar3 = *(long *)(param_1 + 2);
              goto LAB_004344fb;
            }
          }
          else {
            uVar2 = ossl_bsearch(&local_30,*(undefined8 *)(param_1 + 2),*param_1,8,
                                 *(undefined8 *)(param_1 + 6),param_3 | 2);
            *param_4 = 0;
            if (uVar2 != 0) {
              lVar3 = *(long *)(param_1 + 2);
              uVar4 = uVar2;
              if (uVar2 < (ulong)(lVar3 + (long)*param_1 * 8)) {
                do {
                  iVar1 = (**(code **)(param_1 + 6))(&local_30,uVar4);
                  if (iVar1 != 0) goto LAB_004344f7;
                  *param_4 = *param_4 + 1;
                  lVar3 = *(long *)(param_1 + 2);
                  uVar4 = uVar4 + 8;
                } while (uVar4 < (ulong)(lVar3 + (long)*param_1 * 8));
              }
LAB_004344fb:
              return (long)(uVar2 - lVar3) >> 3;
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}

