
int buffer_read(BIO *param_1,void *param_2,int param_3)

{
  int *piVar1;
  bio_st *pbVar2;
  int iVar3;
  int iVar4;
  BIO *b;
  int iVar5;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  pbVar2 = param_1->prev_bio;
  if (pbVar2 == (bio_st *)0x0) {
    return 0;
  }
  if (*(long *)&param_1->references == 0) {
    return 0;
  }
  iVar5 = 0;
  BIO_clear_flags(param_1,0xf);
  iVar3 = *(int *)&pbVar2->cb_arg;
  while( true ) {
    if (iVar3 != 0) {
      iVar4 = iVar3;
      if (param_3 <= iVar3) {
        iVar4 = param_3;
      }
      memcpy(param_2,pbVar2->callback + *(int *)((long)&pbVar2->cb_arg + 4),(long)iVar4);
      piVar1 = (int *)((long)&pbVar2->cb_arg + 4);
      *piVar1 = *piVar1 + iVar4;
      *(int *)&pbVar2->cb_arg = *(int *)&pbVar2->cb_arg - iVar4;
      iVar5 = iVar5 + iVar4;
      if (param_3 <= iVar3) {
        return iVar5;
      }
      param_3 = param_3 - iVar4;
      param_2 = (void *)((long)param_2 + (long)iVar4);
    }
    b = *(BIO **)&param_1->references;
    if (*(int *)&pbVar2->method < param_3) break;
    iVar3 = BIO_read(b,pbVar2->callback,*(int *)&pbVar2->method);
    if (iVar3 < 1) {
      BIO_copy_next_retry(param_1);
      if ((iVar5 < 1) && (iVar3 != 0)) {
        return iVar3;
      }
      return iVar5;
    }
    *(undefined4 *)((long)&pbVar2->cb_arg + 4) = 0;
    *(int *)&pbVar2->cb_arg = iVar3;
  }
  while (iVar3 = BIO_read(b,param_2,param_3), 0 < iVar3) {
    iVar5 = iVar5 + iVar3;
    if (param_3 == iVar3) {
      return iVar5;
    }
    b = *(BIO **)&param_1->references;
    param_3 = param_3 - iVar3;
    param_2 = (void *)((long)param_2 + (long)iVar3);
  }
  BIO_copy_next_retry(param_1);
  if (iVar3 == 0) {
    return iVar5;
  }
  if (0 < iVar5) {
    return iVar5;
  }
  return iVar3;
}

