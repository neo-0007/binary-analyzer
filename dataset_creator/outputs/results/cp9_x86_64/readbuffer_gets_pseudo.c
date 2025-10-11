
int readbuffer_gets(BIO *param_1,char *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bio_st *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  _func_603 *p_Var7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  if (param_3 == 0) {
LAB_005abd46:
    iVar10 = 0;
  }
  else {
    pbVar3 = param_1->prev_bio;
    iVar11 = param_3 + -1;
    BIO_clear_flags(param_1,0xf);
    iVar4 = *(int *)&pbVar3->cb_arg;
    if (iVar4 < 1) {
      iVar6 = *(int *)((long)&pbVar3->cb_arg + 4);
      iVar10 = 0;
LAB_005abdee:
      uVar5 = iVar6 + 0xfff + param_3;
      p_Var7 = pbVar3->callback;
      uVar9 = uVar5 + 0xfff;
      if (-1 < (int)uVar5) {
        uVar9 = uVar5;
      }
      uVar9 = uVar9 & 0xfffff000;
      if (*(int *)&pbVar3->method < (int)uVar9) {
        p_Var7 = (_func_603 *)CRYPTO_realloc(p_Var7,uVar9,"../crypto/bio/bf_readbuff.c",0x61);
        if (p_Var7 == (_func_603 *)0x0) goto LAB_005abd46;
        pbVar3->callback = p_Var7;
        iVar6 = *(int *)((long)&pbVar3->cb_arg + 4);
        *(uint *)&pbVar3->method = uVar9;
      }
      p_Var7 = p_Var7 + iVar6;
      if (0 < iVar11) {
        iVar11 = iVar11 + iVar10;
        pcVar8 = param_2;
        do {
          iVar4 = BIO_read(*(BIO **)&param_1->references,p_Var7,1);
          if (iVar4 < 1) {
            BIO_copy_next_retry(param_1);
            *pcVar8 = '\0';
            if (iVar10 != 0) {
              return iVar10;
            }
            return iVar4;
          }
          param_2 = pcVar8 + 1;
          iVar10 = iVar10 + 1;
          *pcVar8 = (char)*p_Var7;
          piVar1 = (int *)((long)&pbVar3->cb_arg + 4);
          *piVar1 = *piVar1 + 1;
        } while ((*p_Var7 != (_func_603)0xa) &&
                (p_Var7 = p_Var7 + 1, pcVar8 = param_2, iVar11 != iVar10));
      }
    }
    else {
      iVar6 = *(int *)((long)&pbVar3->cb_arg + 4);
      if (iVar11 < 1) {
        iVar10 = 0;
      }
      else {
        p_Var7 = pbVar3->callback + iVar6;
        iVar10 = 0;
        pcVar8 = param_2;
        do {
          cVar2 = (char)*p_Var7;
          param_2 = pcVar8 + 1;
          iVar10 = iVar10 + 1;
          *pcVar8 = cVar2;
          if (cVar2 == '\n') {
            *(int *)&pbVar3->cb_arg = *(int *)&pbVar3->cb_arg - iVar10;
            piVar1 = (int *)((long)&pbVar3->cb_arg + 4);
            *piVar1 = *piVar1 + iVar10;
            goto LAB_005abe88;
          }
          iVar4 = *(int *)&pbVar3->cb_arg;
          p_Var7 = p_Var7 + 1;
          iVar6 = iVar4;
          if (iVar11 <= iVar4) {
            iVar6 = iVar11;
          }
          pcVar8 = param_2;
        } while (iVar10 < iVar6);
        iVar11 = iVar11 - iVar10;
        iVar4 = iVar4 - iVar10;
        iVar6 = *(int *)((long)&pbVar3->cb_arg + 4) + iVar10;
      }
      *(int *)&pbVar3->cb_arg = iVar4;
      *(int *)((long)&pbVar3->cb_arg + 4) = iVar6;
      if (iVar11 != 0) {
        param_3 = iVar11 + 1;
        goto LAB_005abdee;
      }
    }
LAB_005abe88:
    *param_2 = '\0';
  }
  return iVar10;
}

