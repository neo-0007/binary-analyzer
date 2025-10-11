
int readbuffer_read(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  int iVar2;
  int iVar3;
  _func_603 *addr;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_3c;
  
  if ((((param_2 == (void *)0x0) || (param_3 == 0)) ||
      (pbVar1 = param_1->prev_bio, pbVar1 == (bio_st *)0x0)) || (*(long *)&param_1->references == 0)
     ) {
LAB_005ac010:
    iVar2 = 0;
  }
  else {
    BIO_clear_flags(param_1,0xf);
    local_3c = 0;
    iVar2 = *(int *)&pbVar1->cb_arg;
    while( true ) {
      addr = pbVar1->callback;
      iVar3 = *(int *)((long)&pbVar1->cb_arg + 4);
      if (iVar2 != 0) {
        iVar4 = iVar2;
        if (param_3 <= iVar2) {
          iVar4 = param_3;
        }
        memcpy(param_2,addr + iVar3,(long)iVar4);
        iVar3 = *(int *)((long)&pbVar1->cb_arg + 4);
        *(int *)&pbVar1->cb_arg = *(int *)&pbVar1->cb_arg - iVar4;
        iVar3 = iVar3 + iVar4;
        local_3c = local_3c + iVar4;
        *(int *)((long)&pbVar1->cb_arg + 4) = iVar3;
        if (param_3 <= iVar2) goto LAB_005ac040;
        addr = pbVar1->callback;
        param_3 = param_3 - iVar4;
        param_2 = (void *)((long)param_2 + (long)iVar4);
      }
      uVar5 = iVar3 + 0xfff + param_3;
      uVar6 = uVar5 + 0xfff;
      if (-1 < (int)uVar5) {
        uVar6 = uVar5;
      }
      uVar6 = uVar6 & 0xfffff000;
      if (*(int *)&pbVar1->method < (int)uVar6) {
        addr = (_func_603 *)CRYPTO_realloc(addr,uVar6,"../crypto/bio/bf_readbuff.c",0x61);
        if (addr == (_func_603 *)0x0) goto LAB_005ac010;
        pbVar1->callback = addr;
        iVar3 = *(int *)((long)&pbVar1->cb_arg + 4);
        *(uint *)&pbVar1->method = uVar6;
      }
      iVar2 = BIO_read(*(BIO **)&param_1->references,addr + iVar3,param_3);
      if (iVar2 < 1) break;
      *(int *)&pbVar1->cb_arg = iVar2;
    }
    BIO_copy_next_retry(param_1);
    if ((iVar2 == 0) || (0 < local_3c)) {
LAB_005ac040:
      iVar2 = local_3c;
    }
  }
  return iVar2;
}

