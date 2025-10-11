
long * ossl_param_dup(long *param_1,long *param_2,long param_3,int *param_4)

{
  long *plVar1;
  undefined8 *__dest;
  int iVar2;
  long lVar3;
  long lVar4;
  size_t __n;
  long *plVar5;
  
  lVar3 = *param_1;
  plVar5 = param_2;
  do {
    if (lVar3 == 0) {
      return plVar5;
    }
    iVar2 = CRYPTO_secure_allocated(param_1[2]);
    if (param_2 == (long *)0x0) {
      if ((int)param_1[1] - 6U < 2) {
        lVar3 = 8;
      }
      else {
        lVar3 = param_1[3];
        if ((int)param_1[1] == 4) {
          lVar3 = lVar3 + 1;
        }
      }
      lVar3 = ossl_param_bytes_to_blocks(lVar3);
      plVar1 = (long *)(param_3 + 0x10 + (long)iVar2 * 0x20);
      *plVar1 = *plVar1 + lVar3;
    }
    else {
      lVar3 = param_1[1];
      lVar4 = (long)iVar2 * 0x20 + param_3;
      *plVar5 = *param_1;
      plVar5[1] = lVar3;
      lVar3 = param_1[3];
      __dest = *(undefined8 **)(lVar4 + 8);
      plVar5[2] = param_1[2];
      plVar5[3] = lVar3;
      lVar3 = param_1[4];
      plVar5[2] = (long)__dest;
      plVar5[4] = lVar3;
      if ((int)param_1[1] - 6U < 2) {
        __n = 8;
        *__dest = *(undefined8 *)param_1[2];
LAB_0041d098:
        lVar3 = ossl_param_bytes_to_blocks(__n);
      }
      else {
        __n = param_1[3];
        memcpy(__dest,(void *)param_1[2],__n);
        if ((int)param_1[1] != 4) goto LAB_0041d098;
        lVar3 = ossl_param_bytes_to_blocks(__n + 1);
      }
      plVar1 = (long *)(lVar4 + 8);
      *plVar1 = *plVar1 + lVar3 * 8;
      plVar5 = plVar5 + 5;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 1;
    }
    param_1 = param_1 + 5;
    lVar3 = *param_1;
  } while( true );
}

