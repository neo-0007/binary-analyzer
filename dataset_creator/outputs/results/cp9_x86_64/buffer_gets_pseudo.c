
int buffer_gets(BIO *param_1,char *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bio_st *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  _func_603 *p_Var8;
  int iVar9;
  
  iVar9 = 0;
  param_3 = param_3 + -1;
  pbVar3 = param_1->prev_bio;
  BIO_clear_flags(param_1,0xf);
  do {
    p_Var8 = pbVar3->callback;
    iVar4 = *(int *)&pbVar3->cb_arg;
    while (0 < iVar4) {
      iVar6 = *(int *)((long)&pbVar3->cb_arg + 4);
      if (0 < param_3) {
        p_Var8 = p_Var8 + iVar6;
        iVar6 = 0;
        pcVar7 = param_2;
        do {
          cVar2 = (char)*p_Var8;
          param_2 = pcVar7 + 1;
          iVar6 = iVar6 + 1;
          *pcVar7 = cVar2;
          if (cVar2 == '\n') {
            *(int *)&pbVar3->cb_arg = *(int *)&pbVar3->cb_arg - iVar6;
            iVar9 = iVar9 + iVar6;
            piVar1 = (int *)((long)&pbVar3->cb_arg + 4);
            *piVar1 = *piVar1 + iVar6;
            goto LAB_0061493b;
          }
          iVar4 = *(int *)&pbVar3->cb_arg;
          p_Var8 = p_Var8 + 1;
          iVar5 = param_3;
          if (iVar4 <= param_3) {
            iVar5 = iVar4;
          }
          pcVar7 = param_2;
        } while (iVar6 < iVar5);
        iVar4 = iVar4 - iVar6;
        iVar9 = iVar9 + iVar6;
        param_3 = param_3 - iVar6;
        iVar6 = *(int *)((long)&pbVar3->cb_arg + 4) + iVar6;
      }
      *(int *)&pbVar3->cb_arg = iVar4;
      *(int *)((long)&pbVar3->cb_arg + 4) = iVar6;
      if (param_3 == 0) {
LAB_0061493b:
        *param_2 = '\0';
        return iVar9;
      }
      p_Var8 = pbVar3->callback;
      iVar4 = *(int *)&pbVar3->cb_arg;
    }
    iVar4 = BIO_read(*(BIO **)&param_1->references,p_Var8,*(int *)&pbVar3->method);
    if (iVar4 < 1) {
      BIO_copy_next_retry(param_1);
      *param_2 = '\0';
      if (iVar4 == 0) {
        return iVar9;
      }
      if (iVar9 == 0) {
        iVar9 = iVar4;
      }
      return iVar9;
    }
    *(int *)&pbVar3->cb_arg = iVar4;
    *(undefined4 *)((long)&pbVar3->cb_arg + 4) = 0;
  } while( true );
}

